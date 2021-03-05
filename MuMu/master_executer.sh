#!/bin/bash

# REMOVE WHAT IS IN out_previous AND FILL IT WITH out CONTENTS
rm -r MC/out_previous
rm -r DATA/out_previous
mv MC/out/ MC/out_previous/
mkdir MC/out/
mv DATA/out/ DATA/out_previous/
mkdir DATA/out/
cp MC/Analysis.h DATA/Analysis.h

# COMPILE C++ ANALYSIS SCRIPT
python3 Compiler.py

# DECIDE WHAT TO EXECUTE DEPENDING ON WHAT USER ENTERS AS SCRIPT PARAMETER
year=('2018' '2017' '2015')

if [[ "$1" = "fast" ]]
then
    year=('2015')
fi

# EXECUTE CODE
cd MC

mc_Ztautau_sherpa='Ztautau_sherpa'
samples=('1' '2' '3' '4' '5' '6' '7' '8' '9' '10' '11' '12' '13' '14')

for n in ${samples[@]}
do
    for y in ${year[@]}
    do
        python3 RunAnalysis.py $mc_Ztautau_sherpa$n'_'$y no
    done
done

hadd out/Ztautau_Sherpa.root out/*

cd ..

for i in ${year[@]}
do
    ./executer.sh $i
done

# SAVE FILES DEPENDING ON WHAT USER ENTERED AS SCRIPT PARAMETER
if [[ "$1" = "fast" ]]
then
    hadd MC/out/Ztautau_PoPy.root MC/out/Ztautau_2015.root
    hadd MC/out/Zmumu.root MC/out/Zmumu_2015.root
    hadd MC/out/VV.root MC/out/VV_2015.root
    hadd MC/out/Wjets.root MC/out/Wjets_2015.root
    hadd MC/out/singletop.root MC/out/singletop_2015.root
    hadd MC/out/ttbar.root MC/out/ttbar_2015.root
    hadd DATA/out/data.root DATA/out/data_2015.root
else
    hadd MC/out/Ztautau_PoPy.root MC/out/Ztautau_2018.root MC/out/Ztautau_2017.root MC/out/Ztautau_2015.root
    hadd MC/out/Zmumu.root MC/out/Zmumu_2018.root MC/out/Zmumu_2017.root MC/out/Zmumu_2015.root
    hadd MC/out/VV.root MC/out/VV_2018.root MC/out/VV_2017.root MC/out/VV_2015.root
    hadd MC/out/Wjets.root MC/out/Wjets_2018.root MC/out/Wjets_2017.root MC/out/Wjets_2015.root
    hadd MC/out/singletop.root MC/out/singletop_2018.root MC/out/singletop_2017.root MC/out/singletop_2015.root
    hadd MC/out/ttbar.root MC/out/ttbar_2018.root MC/out/ttbar_2017.root MC/out/ttbar_2015.root
    hadd DATA/out/data.root DATA/out/data_2018.root DATA/out/data_2017.root DATA/out/data_2015.root
fi