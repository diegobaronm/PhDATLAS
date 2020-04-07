!#/bin/bash/
mc_signal_sherpa='Ztautau_sherpa'
samples=('1' '2' '3' '4' '5' '6' '7' '8' '9' '10' '11' '12' '13' '14')
year=('2015' '2017' '2018')
for n in ${samples[@]}
do
    for y in ${year[@]}
    do
        python3.7 RunAnalysis.py $mc_signal_sherpa$n'_'$y no
    done
done