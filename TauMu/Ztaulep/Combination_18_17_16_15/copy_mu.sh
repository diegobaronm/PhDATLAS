#!/bin/bash
cp ../DATA/out/data_$1.root Data.root
cp ../MC/out/VV.root .
cp ../MC/out/singletop.root .
cp ../MC/out/Wjets.root .
cp ../MC/out/Zmumu_$1.root Zjet.root
cp ../MC/out/ttbar_$1.root ttbar.root
cp ../MC/out/Ztautau_$1.root Signal.root
hadd BG.root VV.root singletop.root Wjets.root Zjet.root ttbar.root
hadd MC.root BG.root Signal.root
