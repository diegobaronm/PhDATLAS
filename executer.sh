#!/bin/bash
rm MC/out/*
rm DATA/out/*
mc_bg='Wplusenu_2018 Wminusenu_2018 Wplusmunu_2018 Wminusmunu_2018 Wplustaunu_2018 Wminustaunu_2018 Zmumu_2018 llll_2018 lllv_2018 llvv_2018 lvvv_2018 ttbar_2018 st_schan_2018 sat_schan_2018 st_tchan_2018 sat_tchan_2018 st_wt_2018 sat_wt_2018'
mc_signal='Ztautau_2018'
data='data_2018'

cd MC

python3.7 RunAnalysis.py $mc_signal no

for file in $mc_bg
do
  python3.7 RunAnalysis.py $file no
done

cd ..
cd DATA

for file in $data
do
  python3.7 RunAnalysis.py $file no
done

cd ..

hadd MC/out/VV.root MC/out/llll_2018.root MC/out/lllv_2018.root MC/out/llvv_2018.root MC/out/lvvv_2018.root
hadd MC/out/Wjets.root MC/out/Wplusenu_2018.root MC/out/Wminusenu_2018.root MC/out/Wplusmunu_2018.root MC/out/Wminusmunu_2018.root MC/out/Wplustaunu_2018.root MC/out/Wminustaunu_2018.root
hadd MC/out/singletop.root MC/out/st_schan_2018.root MC/out/sat_schan_2018.root MC/out/st_tchan_2018.root MC/out/sat_tchan_2018.root MC/out/st_wt_2018.root MC/out/sat_wt_2018.root

hadd DATA/out/data_2018.root DATA/out/data_2018*

#hadd DATA/out/Data.root MC/out/A_1tau1lep.root MC/out/B_1tau1lep.root MC/out/C_1tau1lep.root MC/out/D_1tau1lep.root
