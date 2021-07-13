import os
import sys

trees=[]
with open(sys.argv[1],"r") as file:
	line=file.readline()
	while line:
		trees.append(line.rstrip('\n'))
		line=file.readline()

for t in trees:
	if "1" in sys.argv[1]:
		os.system("hadd out/Signal_Sherpa"+t+".root out/Ztautau_sherpa*_sys1_[0-9]"+t+".root")
		os.system("hadd out/Signal_PoPy"+t+".root out/Ztautau_201*_sys1_[0-9]"+t+".root")
		os.system("hadd out/Zmumu"+t+".root out/Zmumu_201*_sys1_[0-9]"+t+".root")
		os.system("hadd out/VV"+t+".root out/llll*_sys1_[0-9]"+t+".root out/lllv*_sys1_[0-9]"+t+".root out/llvv*_sys1_[0-9]"+t+".root out/lvvv*_sys1_[0-9]"+t+".root out/ZqqZvv*_sys1_[0-9]"+t+".root out/ZqqZll*_sys1_[0-9]"+t+".root out/WqqZvv*_sys1_[0-9]"+t+".root out/WqqZll*_sys1_[0-9]"+t+".root out/WlvZqq*_sys1_[0-9]"+t+".root")
	if "2" in sys.argv[1]:
		os.system("hadd out/Signal_Sherpa"+t+".root out/Ztautau_sherpa*_sys2_[0-9]"+t+".root")
		os.system("hadd out/Signal_PoPy"+t+".root out/Ztautau_201*_sys2_[0-9]"+t+".root")
		os.system("hadd out/Zmumu"+t+".root out/Zmumu_201*_sys2_[0-9]"+t+".root")
		os.system("hadd out/VV"+t+".root out/llll*_sys2_[0-9]"+t+".root out/lllv*_sys2_[0-9]"+t+".root out/llvv*_sys2_[0-9]"+t+".root out/lvvv*_sys2_[0-9]"+t+".root out/ZqqZvv*_sys2_[0-9]"+t+".root out/ZqqZll*_sys2_[0-9]"+t+".root out/WqqZvv*_sys2_[0-9]"+t+".root out/WqqZll*_sys2_[0-9]"+t+".root out/WlvZqq*_sys2_[0-9]"+t+".root")