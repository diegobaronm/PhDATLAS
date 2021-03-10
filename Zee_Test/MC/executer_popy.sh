#!/bin/bash
rm out/*
mc_signal_popy='Zee'
year=('2015' '2017' '2018')
for y in ${year[@]}
do
	python3 RunAnalysis.py $mc_signal_popy'_'$y no
done
hadd out/Zee.root out/Zee_2018.root out/Zee_2017.root out/Zee_2015.root
