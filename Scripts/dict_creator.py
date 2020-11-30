# DICTIONARY CREATOR FOR NEW SAMPLES

# THIS SCRIPT MUST BE USED IN THE FOLLOWING WAY

# python3 dict_creator.py <Path to folder containing samples> <string to identify sample, for instance: Zmumu_PoPy each word separated by "_" will be used to identify dataset>


# IMPORTANT LIBRARIES
import os
import sys
import csv

# ARGUMENTS GIVEN TO THE SCRIPT
sample_string=sys.argv[2] # NAME TO BE ASSIGNED TO SAMPLES
folders=os.listdir(sys.argv[1]) # PATH TO LOOK FOR THE SAMPLES

# KEYWORDS TO LOOK FOR THE SAMPLES
keywords=sample_string.split("_")

#FILL A LIST WITH ALL THE DIRECTORIES THAT CONTAIN THE KEYWORDS
matching_folders=[]
for sample in folders:
    match=False
    for keyword in keywords:
        if keyword in sample:
            match=True
        else :
            match=False
            break
    if match:
        matching_folders.append(sample)

# FILLS A LIST WITH ALL THE MC IDs
MC_Ids_no_unique=[i.split(".")[4] for i in matching_folders] # NON-UNIQUE LIST
MC_Ids=[]
for ids in MC_Ids_no_unique:
    if ids not in MC_Ids:
        MC_Ids.append(ids)

# CREATE A DICTIONARY WITH THE NAME OF THE DIRECTORIES CONTAINING THE SAMPLES AND PROPERTIES OF THE SAMPLE
dict={}

id_counter=1 # EACH DIFFERENT ID HAS A DIFFERENT VALUE
for IDs in MC_Ids:
    xsec=0
    kfactor=0
    filteref=0
    # LOOK FOR THE PROPERTIES OF SAMPLE BASED ON THE ID
    with open("LepUniv_xsec.csv","r") as csv_file:
        csv_reader=csv.reader(csv_file,delimiter=',')
        for row in csv_reader:
            if IDs in row:
                xsec=float(row[2])
                kfactor=float(row[3])
                filteref=float(row[4])
                break

    # CREATE THE DICTIONARY DIVIDING EACH SAMPLE PER DATA TAKING PERIOD
    for sample in matching_folders:
        if IDs in sample:
            if "r9364" in sample:
                dict[sample_string+str(id_counter)+"_2015"]=[sample,IDs,xsec,kfactor,filteref]
            elif "r10201" in sample:
                dict[sample_string+str(id_counter)+"_2017"]=[sample,IDs,xsec,kfactor,filteref]
            elif "r10724" in sample:
                dict[sample_string+str(id_counter)+"_2018"]=[sample,IDs,xsec,kfactor,filteref]
    id_counter+=1

# PRINT THE DICTIONARY IN THE CORRECT FORMAT TO PUT IT ON THE lister_mc.py SCRIPT
for key, value in dict.items():
    print("'"+key+"'", ' : ', value,",")