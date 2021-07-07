#!/bin/bash
rm -r out_previous
mv out/ out_previous/
mkdir out/

cd ..

python3 Compiler.py MC

cd MC

python3 lister_sys.py

parallel -j $1 --progress -a samples_sys.txt python3 RunAnalysis.py ::: no ::: $2

cd ..

hadd MC/out/Signal_Sherpa.root MC/out/Ztautau_sherpa*.root
hadd MC/out/Signal_PoPy.root MC/out/Ztautau_201*.root
hadd MC/out/Zmumu.root MC/out/Zmumu_201*.root
hadd MC/out/VV.root MC/out/llll*.root MC/out/lllv*.root MC/out/llvv*.root MC/out/lvvv*.root MC/out/ZqqZvv*.root MC/out/ZqqZll*.root MC/out/WqqZvv*.root MC/out/WqqZll*.root MC/out/WlvZqq*.root
