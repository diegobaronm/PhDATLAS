#!/bin/bash
mc_bg='llvv WlvWqq WlvZll WlvZqq WlvZvv WqqWlv WqqZll ZllZll ZqqZll Wplusmunu_1lep1tau Wplustaunu_1lep1tau Wminusmunu_1lep1tau Wminustaunu_1lep1tau Zmumu_1lep1tau ttbar_lep_1lep1tau single_top_tchan_1lep1tau single_antitop_tchan_1lep1tau single_top_wtchan_1lep1tau single_antitop_wtchan_1lep1tau single_top_schan_1lep1tau single_antitop_schan_1lep1tau'
mc_signal='Ztautau_1lep1tau'
data='A_1tau1lep B_1tau1lep C_1tau1lep D_1tau1lep'

python3.7 RunAnalysis.py $mc_signal no

for file in $mc_bg
do
  python3.7 RunAnalysis.py $file no
done
cp Analysis.C Analysis.C.old
rm Analysis.C
cp Analysis_data.C Analysis.C

for file in $data
do
  python3.7 RunAnalysis.py $file no
done

cp Analysis.C.old Analysis.C

hadd out/VV.root out/llvv.root out/WlvWqq.root out/WlvZll.root out/WlvZqq.root out/WlvZvv.root out/WqqWlv.root out/WqqZll.root out/ZllZll.root out/ZqqZll.root
hadd out/Wjets.root out/Wplusmunu_1lep1tau.root out/Wplustaunu_1lep1tau.root out/Wminusmunu_1lep1tau.root out/Wminustaunu_1lep1tau.root
hadd out/singletop.root out/single_top_tchan_1lep1tau.root out/single_antitop_tchan_1lep1tau.root out/single_top_wtchan_1lep1tau.root out/single_antitop_wtchan_1lep1tau.root out/single_top_schan_1lep1tau.root out/single_antitop_schan_1lep1tau.root
hadd out/Data.root out/A_1tau1lep.root out/B_1tau1lep.root out/C_1tau1lep.root out/D_1tau1lep.root
