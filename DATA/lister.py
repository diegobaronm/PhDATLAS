import os
import sys

## THIS SCRIPT MUST BE LAUNCHED AS

## python lister.py 1.NAME_SAMPLES 2.DIRECTORY_WHERE 3.SAMPLE_DSID 4.CROSS_SECTION

def list(name,directory,counter):
    os.chdir(directory)
    for i in os.listdir():
        if i[-4:]=='root':
            print("'"+name+"_"+str(counter)+"'"+":"+"'"+i+"'"+",")
    os.chdir("../")
def data_combo(name):
    j=0
    for i in os.listdir():
        if i[-4:]=='root':
            print("'"+name+"_"+str(j)+"'"+",", end = '')
            j=j+1

a=os.listdir()
counter=0
for dir in a:
    if "data18" in dir:
        list(sys.argv[1],dir,counter)
        counter=counter+1
