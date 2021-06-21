#!/bin/bash
python3 Compiler.py DATA

python3 lister.py DATA

cd DATA

parallel -j 9 --progress -a samples.txt python3 RunAnalysis.py ::: no

cd ..

python3 Compiler.py MC

python3 lister.py MC

cd MC

parallel -j 9 --progress -a samples.txt python3 RunAnalysis.py ::: no

cd ..