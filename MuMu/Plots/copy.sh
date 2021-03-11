#!/bin/bash
cp ../DATA/out/data.root Data.root
cp ../MC/out/VV.root .
cp ../MC/out/singletop.root .
cp ../MC/out/Wjets.root .
cp ../MC/out/Zmumu.root .
cp ../MC/out/Zmumu_Sherpa.root .
cp ../MC/out/ttbar.root ttbar.root
cp ../MC/out/Ztautau_Sherpa.root .
cp ../MC/out/Ztautau_PoPy.root .
hadd BG.root VV.root singletop.root Wjets.root Ztautau_Sherpa.root ttbar.root
hadd MC.root BG.root Zmumu.root
