import os
import sys

## THIS SCRIPT MUST BE LAUNCHED AS

## python lister.py 1.NAME_SAMPLES 2.DIRECTORY_WHERE 3.SAMPLE_DSID 4.CROSS_SECTION

def list(name,directory,counter):
    auxiliar_counter=0
    os.chdir(directory)
    for i in os.listdir():
            if i[-4:]=='root':
                print("'"+name+"_"+str(counter+auxiliar_counter)+"'"+":"+"'"+i+"'"+",")
                auxiliar_counter+=1
    os.chdir("../")
def data_combo(name):
    j=0
    for i in os.listdir():
        if i[-4:]=='root':
            print("'"+name+"_"+str(j)+"'"+",", end = '')
            j=j+1

os.chdir(sys.argv[2])
a=os.listdir()
counter=0
if sys.argv[1]=="data_2018":
    for dir in a:
        if ("data18" in dir) :#or ("data16" in dir):
            b=os.listdir(dir)
            list(sys.argv[1],dir,counter)
            counter=counter+len(b)
elif sys.argv[1]=="data_2017":
    for dir in a:
        if ("data17" in dir) :#or ("data16" in dir):
            b=os.listdir(dir)
            list(sys.argv[1],dir,counter)
            counter=counter+len(b)
elif sys.argv[1]=="data_2015":
    for dir in a:
        if ("data15" in dir) or ("data16" in dir):
            b=os.listdir(dir)
            list(sys.argv[1],dir,counter)
            counter=counter+len(b)
else :
    print("NO VALID YEAR, TRY AGAIN")

        