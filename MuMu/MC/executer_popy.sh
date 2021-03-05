#!/bin/bash
rm out/*
mc_signal_popy='Zmumu'
year=('2015' '2017' '2018')
for y in ${year[@]}
do
	python3 RunAnalysis.py $mc_signal_popy'_'$y no
done
hadd out/Zmumu.root out/Zmumu_2018.root out/Zmumu_2017.root out/Zmumu_2015.root
