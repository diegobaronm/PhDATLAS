import os
import sys

trees=[]
with open(sys.argv[1],"r") as file:
	line=file.readline()
	while line:
		trees.append(line.rstrip('\n'))
		line=file.readline()

for t in trees:
	os.system("hadd out/Signal_Sherpa"+t+".root out/Ztautau_sherpa*_sys_*"+t+".root")
	os.system("hadd out/Signal_PoPy"+t+".root out/Ztautau_201*_sys_*"+t+".root")
	os.system("hadd out/Zmumu"+t+".root out/Zmumu_201*_sys_*"+t+".root")
	os.system("hadd out/VV"+t+".root out/llll*_sys_*"+t+".root out/lllv*_sys_*"+t+".root out/llvv*_sys_*"+t+".root out/lvvv*_sys_*"+t+".root out/ZqqZvv*_sys_*"+t+".root out/ZqqZll*_sys_*"+t+".root out/WqqZvv*_sys_*"+t+".root out/WqqZll*_sys_*"+t+".root out/WlvZqq*_sys_*"+t+".root")
