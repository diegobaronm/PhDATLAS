import os
import sys
import ROOT

mc={'Ztautau_2018':['Ztautau_2018','/media/diegol/Mobile/DATA/v19/mc/user.sdysch.v19.mc.361108.PoPy8_Ztt.M4.e3601_s3126_r10724_p3975.sv1_Le',361108,1902.1,1,1.002]}

## THIS SCRIPT MUST BE LAUNCHED AS

## python lister.py 1.NAME_SAMPLES 2.DIRECTORY_WHERE 3.SAMPLE_DSID 4.CROSS_SECTION 5.K-FACTOR 6.FILTER-EFF

pwd=os.getcwd()

def list(name,directory,home):
    string=''
    os.chdir(directory)
    j=0
    for i in os.listdir():
        if i[-4:]=='root':
            string=string+"'"+name+"_"+str(j)+"'"+":"+"'"+i+"'"+","+'\n'
            j=j+1
    os.chdir(home)
    return string
def data_combo(name,directory,home):
    string=''
    os.chdir(directory)
    j=0
    for i in os.listdir():
        if i[-4:]=='root':
            string=string+"'"+name+"_"+str(j)+"'"+","
            j=j+1
    os.chdir(home)
    return string

def info_file(name,directory,DSID,XSEC,KFAC,FIL_EFF,home):
    os.chdir(directory)
    strin=''
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
            a="'%s_%d': {'DSID'    : %d,'events'  : %f,'red_eff' :1,'sumw'    :%f,'xsec'    :%f,'kfac'    :%f,'fil_eff'    :%f},"%(name,k,int(DSID),sumw,sumw,float(XSEC),float(KFAC),float(FIL_EFF))
            strin=strin+a+'\n'
            k=k+1
    os.chdir(home)
    return strin


files=open('files.txt','a+')
files.write('#%s\n'%(mc['Ztautau_2018'][0]))
files.write(list(mc['Ztautau_2018'][0],mc['Ztautau_2018'][1],pwd))
files.close()

combos=open('combos.txt','a+')
combos.write('#%s\n'%(mc['Ztautau_2018'][0]))
combos.write(data_combo(mc['Ztautau_2018'][0],mc['Ztautau_2018'][1],pwd))
combos.close()

f=open('info.txt','a+')
f.write('#%s\n'%(mc['Ztautau_2018'][0]))
f.write(info_file(sys.argv[1],sys.argv[2],sys.argv[3],sys.argv[4],sys.argv[5],sys.argv[6],pwd))
f.close()
#combos.close()
'''
print(list(sys.argv[1],sys.argv[2]))
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
print(data_combo(sys.argv[1]))
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
print(info_file(sys.argv[1],sys.argv[3],sys.argv[4],sys.argv[5],sys.argv[6]))
'''