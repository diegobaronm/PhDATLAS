#!/bin/bash
cp MC/Analysis_SR.C MC/Analysis_SR_BU.C
cp MC/Analysis_CR.C MC/Analysis_CR_BU.C
cp MC/Analysis.C MC/Analysis_SR.C
cp MC/Analysis_CR.C MC/Analysis.C 
cp DATA/Analysis.C Analysis_SR.C
cp MC/Analysis.C DATA/Analysis.C