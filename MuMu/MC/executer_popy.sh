#!/bin/bash
cat samples.txt | awk '(/Zmumu/) && !(/VBF/ || /sherpa/)' > samples_PoPy.txt

rm out/*

parallel --progress -j $1 -a samples_PoPy.txt python3 RunAnalysis.py :: no

hadd out Signal_PoPy.root out/*.root