#!/bin/bash 

cat > Description.txt

mkdir $1

mv Description.txt $1/.
mv SR_OS $1/.
mv SR_SS $1/.
mv CR_OS $1/.
mv CR_SS $1/.
mv *.pdf $1/.

cp ../MC/Analysis_CR.C $1/.
cp ../MC/Analysis_SR.C $1/.
cp ../MC/backend/CLoop_SR.C $1/.


