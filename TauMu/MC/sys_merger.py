import os
import sys

samples_dir=sys.argv[1]

os.chdir(samples_dir)

for d in os.lisdir():
	os.system("hadd out/Signal_Sherpa"+t+".root "+d+"/Ztautau_sherpa*_sys_*"+t+".root")
	os.system("hadd out/Signal_PoPy"+t+".root "+d+"/Ztautau_201*_sys_*"+t+".root")
	os.system("hadd out/Zmumu"+t+".root "+d+"/Zmumu_201*_sys_*"+t+".root")
	os.system("hadd out/VV"+t+".root "+d+"/llll*_sys_*"+t+".root "+d+"/lllv*_sys_*"+t+".root "+d+"/llvv*_sys_*"+t+".root "+d+"/lvvv*_sys_*"+t+".root "+d+"/ZqqZvv*_sys_*"+t+".root "+d+"/ZqqZll*_sys_*"+t+".root "+d+"/WqqZvv*_sys_*"+t+".root "+d+"/WqqZll*_sys_*"+t+".root "+d+"/WlvZqq*_sys_*"+t+".root")
