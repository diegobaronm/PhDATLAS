#!/bin/bash
cp ../DATA/out/data_2018.root Data.root
cp ../MC/out/VV.root .
cp ../MC/out/singletop.root .
cp ../MC/out/Wjets.root .
cp ../MC/out/Zjets.root Zjets.root
cp ../MC/out/ttbar_2018.root ttbar.root
cp ../MC/out/Ztautau_2018.root Signal.root
hadd BG.root VV.root singletop.root Wjets.root Zjets.root ttbar.root
hadd MC.root BG.root Signal.root
