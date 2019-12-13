#!/bin/bash
cp ../out/Data.root .
cp ../out/VV.root .
cp ../out/singletop.root .
cp ../out/Wjets.root .
cp ../out/Zmumu_1lep1tau.root Zjet.root
cp ../out/ttbar_lep_1lep1tau.root ttbar.root
cp ../out/Ztautau_1lep1tau.root Signal.root
hadd BG.root VV.root singletop.root Wjets.root Zjet.root ttbar.root
hadd MC.root BG.root Signal.root
