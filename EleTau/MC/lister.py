import os
import sys
import ROOT

## THIS SCRIPT MUST BE LAUNCHED AS

## python lister.py 1.NAME_SAMPLES 2.DIRECTORY_WHERE 3.SAMPLE_DSID 4.CROSS_SECTION

def list(name,directory):
    os.chdir(directory)
    j=0
    for i in os.listdir():
        if i[-4:]=='root':
            print("'"+name+"_"+str(j)+"'"+":"+"'"+i+"'"+",")
            j=j+1

def data_combo(name):
    j=0
    for i in os.listdir():
        if i[-4:]=='root':
            print("'"+name+"_"+str(j)+"'"+",", end = '')
            j=j+1

def info_file(name,DSID,XSEC):
    sumw=0
    for file in os.listdir():
        if file[-4:]=='root':
            f = ROOT.TFile.Open(file, 'read')
            hist = f.Get('h_metadata')
            sumw+=hist.GetBinContent(8)        
    k=0
    for file in os.listdir():
        if file[-4:]=='root':
            f = ROOT.TFile.Open(file, 'read')
            a="'%s_%d': {'DSID'    : %d,'events'  : %f,'red_eff' :1,'sumw'    :%f,'xsec'    :%f},"%(name,k,int(DSID),sumw,sumw,float(XSEC))
            print(a)
            k=k+1

list(sys.argv[1],sys.argv[2])
print("\n")
print("\n")
print("IF YOU HAVE COPIED THE DATASET, TYPE ANY CHARACTER TO CONTINUE...")
print("\n")
print("\n")
answer=False
while(not answer):
    a=input()
    if a!="":
        answer=True
print("\n")
print("\n")
data_combo(sys.argv[1])
print("\n")
print("\n")
print("IF YOU HAVE COPIED THE DATASET, TYPE ANY CHARACTER TO CONTINUE...")
print("\n")
print("\n")
answer=False
while(not answer):
    a=input()
    if a!="":
        answer=True
print("\n")
print("\n")
info_file(sys.argv[1],sys.argv[3],sys.argv[4])
