#!/bin/bash
cd ..

python3 Compiler.py MC

cd MC

python3 lister_sys.py

if [ "$2" = "NOMINAL" ]
then
	parallel -j $1 --progress -a samples_sys.txt python3 RunAnalysis.py ::: no ::: $2
	hadd out/Signal_Sherpa$2.root out/Zmumu_sherpa*_sys*.root
	hadd out/Signal_PoPy$2.root out/Zmumu_201*_sys*.root
	hadd out/VV$2.root out/llll*_sys*.root out/lllv*_sys*.root out/llvv*_sys*.root out/lvvv*_sys*.root out/ZqqZvv*_sys*.root out/ZqqZll*_sys*.root out/WqqZvv*_sys*.root out/WqqZll*_sys*.root out/WlvZqq*_sys*.root
fi

if [ "$2" = "SYS" ]
then
	parallel -j $1 --progress -a samples_sys.txt python3 RunAnalysis.py ::: no :::: sys_trees.txt
	python3 sys_merger.py sys_trees.txt
fi

