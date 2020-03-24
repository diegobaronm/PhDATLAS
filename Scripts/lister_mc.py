import os
import sys
import ROOT

base_path='/media/diegol/Mobile/DATA/v19/mc/'

mc={'Ztautau_2018':[base_path+'user.sdysch.v19.mc.361108.PoPy8_Ztt.M4.e3601_s3126_r10724_p3975.sv1_Le',361108,1901.2,1.026,1],
'Ztautau_2017':[base_path+'user.sdysch.v19.mc.361108.PoPy8_Ztt.M4.e3601_s3126_r10201_p3975.sv1_Le',361108,1901.2,1.026,1],
'Ztautau_2015':[base_path+'user.sdysch.v19.mc.361108.PoPy8_Ztt.M4.e3601_s3126_r9364_p3975.sv1_Le',361108,1901.2,1.026,1],
'Zmumu_2018':[base_path+'user.sdysch.v19.mc.361107.PoPy8_Zmumu.M4.e3601_s3126_r10724_p3975.sv1_Le',361107,1901.2,1.026,1],
'Zmumu_2017':[base_path+'user.sdysch.v19.mc.361107.PoPy8_Zmumu.M4.e3601_s3126_r10201_p3975.sv1_Le',361107,1901.2,1.026,1],
'Zmumu_2015':[base_path+'user.sdysch.v19.mc.361107.PoPy8_Zmumu.M4.e3601_s3126_r9364_p3975.sv1_Le',361107,1901.2,1.026,1],
'Zee_2018':[base_path+'user.sdysch.v19.mc.361106.PoPy8_Zee.M4.e3601_s3126_r10724_p3975.sv1_Le',361106,1901.2,1.026,1],
'Zee_2017':[base_path+'user.sdysch.v19.mc.361106.PoPy8_Zee.M4.e3601_s3126_r10201_p3975.sv1_Le',361106,1901.2,1.026,1],
'Zee_2015':[base_path+'user.sdysch.v19.mc.361106.PoPy8_Zee.M4.e3601_s3126_r9364_p3975.sv1_Le',361106,1901.2,1.026,1],
'Wplustaunu_2018':[base_path+'user.sdysch.v19.mc.361102.PoPy8_Wplustaunu.M4.e3601_s3126_r10724_p3975.sv1_Le',361102,11306,1.0172,1],
'Wplustaunu_2017':[base_path+'user.sdysch.v19.mc.361102.PoPy8_Wplustaunu.M4.e3601_s3126_r10201_p3975.sv1_Le',361102,11306,1.0172,1],
'Wplustaunu_2015':[base_path+'user.sdysch.v19.mc.361102.PoPy8_Wplustaunu.M4.e3601_s3126_r9364_p3975.sv1_Le',361102,11306,1.0172,1],
'Wplusmunu_2018':[base_path+'user.sdysch.v19.mc.361101.PoPy8_Wplusmunu.M4.e3601_s3126_r10724_p3972.sv1_Le',361101,11306,1.0172,1],
'Wplusmunu_2017':[base_path+'user.sdysch.v19.mc.361101.PoPy8_Wplusmunu.M4.e3601_s3126_r10201_p3972.sv1_Le',361101,11306,1.0172,1],
'Wplusmunu_2015':[base_path+'user.sdysch.v19.mc.361101.PoPy8_Wplusmunu.M4.e3601_s3126_r9364_p3972.sv1_Le',361101,11306,1.0172,1],
'Wplusenu_2018':[base_path+'user.sdysch.v19.mc.361100.PoPy8_Wplusenu.M4.e3601_s3126_r10724_p3972.sv1_Le',361100,11306,1.0172,1],
'Wplusenu_2017':[base_path+'user.sdysch.v19.mc.361100.PoPy8_Wplusenu.M4.e3601_s3126_r10201_p3975.sv1_Le',361100,11306,1.0172,1],
'Wplusenu_2015':[base_path+'user.sdysch.v19.mc.361100.PoPy8_Wplusenu.M4.e3601_s3126_r9364_p3972.sv1_Le',361100,11306,1.0172,1],
'Wminustaunu_2018':[base_path+'user.sdysch.v19.mc.361105.PoPy8_Wminustaunu.M4.e3601_s3126_r10724_p3975.sv1_Le',361105,8282.6,1.0358,1],
'Wminustaunu_2017':[base_path+'user.sdysch.v19.mc.361105.PoPy8_Wminustaunu.M4.e3601_s3126_r10201_p3975.sv1_Le',361105,8282.6,1.0358,1],
'Wminustaunu_2015':[base_path+'user.sdysch.v19.mc.361105.PoPy8_Wminustaunu.M4.e3601_s3126_r9364_p3975.sv1_Le',361105,8282.6,1.0358,1],
'Wminusmunu_2018':[base_path+'user.sdysch.v19.mc.361104.PoPy8_Wminusmunu.M4.e3601_s3126_r10724_p3975.sv1_Le',361104,8282.6,1.0358,1],
'Wminusmunu_2017':[base_path+'user.sdysch.v19.mc.361104.PoPy8_Wminusmunu.M4.e3601_s3126_r10201_p3972.sv1_Le',361104,8282.6,1.0358,1],
'Wminusmunu_2015':[base_path+'user.sdysch.v19.mc.361104.PoPy8_Wminusmunu.M4.e3601_s3126_r9364_p3972.sv1_Le',361104,8282.6,1.0358,1],
'Wminusenu_2018':[base_path+'user.sdysch.v19.mc.361103.PoPy8_Wminusenu.M4.e3601_s3126_r10724_p3972.sv1_Le',361103,8282.6,1.0358,1],
'Wminusenu_2017':[base_path+'user.sdysch.v19.mc.361103.PoPy8_Wminusenu.M4.e3601_s3126_r10201_p3972.sv1_Le',361103,8282.6,1.0358,1],
'Wminusenu_2015':[base_path+'user.sdysch.v19.mc.361103.PoPy8_Wminusenu.M4.e3601_s3126_r9364_p3972.sv1_Le',361103,8282.6,1.0358,1],
'ttbar_2018':[base_path+'user.sdysch.v19.1.mc.410470.PhPy8_A14_ttb_nonallh.M4.e6337_s3126_r10724_p3972.sv1_Le',410470,729.77,1.13975636159,0.54383],
'ttbar_2017':[base_path+'user.sdysch.v19.1.mc.410470.PhPy8_A14_ttb_nonallh.M4.e6337_s3126_r10201_p3972.sv1_Le',410470,729.77,1.13975636159,0.54383],
'ttbar_2015':[base_path+'user.sdysch.v19.1.mc.410470.PhPy8_A14_ttb_nonallh.M4.e6337_s3126_r9364_p3972.sv1_Le',410470,729.77,1.13975636159,0.54383],


}

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
    return '"'+name+'"'+':'+'['+string+'],\n'

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

for sample in mc:
    
    files=open('files.txt','a+')
    files.write('#%s\n'%(sample))
    files.write(list(sample,mc[sample][0],pwd))
    files.close()

    combos=open('combos.txt','a+')
    combos.write('#%s\n'%(sample))
    combos.write(data_combo(sample,mc[sample][0],pwd))
    combos.close()

    f=open('info.txt','a+')
    f.write('#%s\n'%(sample))
    f.write(info_file(sample,mc[sample][0],mc[sample][1],mc[sample][2],mc[sample][3],mc[sample][4],pwd))
    f.close()
