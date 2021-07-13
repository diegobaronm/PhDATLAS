#!/bin/bash
cd ..

python3 Compiler.py MC

cd MC

python3 lister_sys.py $3

if [ "$2" = "NOMINAL" ]
then
	parallel -j $1 --progress -a samples_sys.txt python3 RunAnalysis.py ::: no ::: $2
	hadd out/Signal_Sherpa$2$3.root out/Ztautau_sherpa*_sys$3*[0-9].root
	hadd out/Signal_PoPy$2$3.root out/Ztautau_201*_sys$3*[0-9].root
	hadd out/Zmumu$2$3.root out/Zmumu_201*_sys$3*[0-9].root
	hadd out/VV$2$3.root out/llll*_sys$3*[0-9].root out/lllv*_sys$3*[0-9].root out/llvv*_sys$3*[0-9].root out/lvvv*_sys$3*[0-9].root out/ZqqZvv*_sys$3*[0-9].root out/ZqqZll*_sys$3*[0-9].root out/WqqZvv*_sys$3*[0-9].root out/WqqZll*_sys$3*[0-9].root out/WlvZqq*_sys$3*[0-9].root
fi

if [ "$2" = "SYS1" ]
then
        parallel -j $1 --progress -a samples_sys.txt python3 RunAnalysis.py ::: no :::: sys_trees1.txt
		python3 sys_merger.py sys_trees1.txt
fi

if [ "$2" = "SYS2" ]
then
        parallel -j $1 --progress -a samples_sys.txt python3 RunAnalysis.py ::: no :::: sys_trees2.txt
		python3 sys_merger.py sys_trees2.txt
fi
