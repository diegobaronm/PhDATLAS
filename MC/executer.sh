#!/bin/bash
mc_bg='Wplusenu_2018 Wminusenu_2018 Wplusmunu_2018 Wminusmunu_2018 Wplustaunu_2018 Wminustaunu_2018 Zmumu_2018 llll_2018 lllv_2018 llvv_2018 lvvv_2018 ttbar_2018 st_schan_2018 sat_schan_2018 st_tchan_2018 sat_tchan_2018 st_wt_2018 sat_wt_2018'
mc_signal='Ztautau_2018'
# data='A_1tau1lep B_1tau1lep C_1tau1lep D_1tau1lep'

python3.7 RunAnalysis.py $mc_signal no

for file in $mc_bg
do
  python3.7 RunAnalysis.py $file no
done

cp Analysis.C Analysis.C.old
rm Analysis.C
cp Analysis_data.C Analysis.C

#for file in $data
#do
  #python3.7 RunAnalysis.py $file no
#done

cp Analysis.C.old Analysis.C

hadd out/VV.root out/llll_2018.root out/lllv_2018.root out/llvv_2018.root out/lvvv_2018.root
hadd out/Wjets.root out/Wplusenu_2018.root out/Wminusenu_2018.root out/Wplusmunu_2018.root out/Wminusmunu_2018.root out/Wplustaunu_2018.root out/Wminustaunu_2018.root
hadd out/singletop.root out/st_schan_2018.root out/sat_schan_2018.root out/st_tchan_2018.root out/sat_tchan_2018.root out/st_wt_2018.root out/sat_wt_2018.root

# hadd out/Data.root out/A_1tau1lep.root out/B_1tau1lep.root out/C_1tau1lep.root out/D_1tau1lep.root
