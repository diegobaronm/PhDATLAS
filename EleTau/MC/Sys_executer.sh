#!/bin/bash
cd ..

python3 Compiler.py MC

cd MC

python3 lister_sys.py

if [ "$2" = "NOMINAL" ]
then
	parallel -j $1 --progress -a samples_sys.txt python3 RunAnalysis.py ::: no ::: $2
	hadd out/Signal_Sherpa$2.root out/Ztautau_sherpa*_sys_*[0-9].root
	hadd out/Signal_PoPy$2.root out/Ztautau_201_sys_*[0-9].root
	hadd out/Zjets$2.root out/Zmumu_*_sys_*[0-9].root out/Zee_*_sys_*[0-9].root
	hadd out/VV$2.root out/llll*_sys_*[0-9].root out/lllv*_sys_*[0-9].root out/llvv*_sys_*[0-9].root out/lvvv*_sys_*[0-9].root out/ZqqZvv*_sys_*[0-9].root out/ZqqZll*_sys_*[0-9].root out/WqqZvv*_sys_*[0-9].root out/WqqZll*_sys_*[0-9].root out/WlvZqq*_sys_*[0-9].root
fi

if [ "$2" = "SYS" ]
then
	parallel -j $1 --progress -a samples_sys.txt python3 RunAnalysis.py ::: no :::: sys_trees.txt
	python3 sys_merger.py sys_trees.txt
fi

