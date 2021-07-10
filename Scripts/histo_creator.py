import sys

cuts=["basic","btag","iso","ptl","ptt"]
histos_full={"lepiso":["Lep Isolation",2,0,1],
        "pt_lep":["Lep pT",200,0,200],
        "deltaphi":["Delta phi between tau and lep",32,0,3.2],
        "pt_tau":["Tau pT",200,0,200],
}

def book():
    for i in histos_full:
        temp=""
        for j in cuts:
            temp=temp+'_'+j
            print('h_'+i+temp+' = new TH1F("'+i+temp+'","'+histos_full[i][0]+'",'+str(histos_full[i][1])+','+str(histos_full[i][2])+','+str(histos_full[i][3])+');')
        print("\n")
    print("\n")


def write():
    for i in histos_full:
        temp=""
        for j in cuts:
            temp=temp+'_'+j
            print('h_'+i+temp+'->Write();')
    print("\n")

def define():
    for i in histos_full:
        temp=""
        for j in cuts:
            temp=temp+'_'+j
            print('TH1F* '+'h_'+i+temp+';')
    print("\n")

if sys.argv[1]=="book":
	book()
elif sys.argv[1]=="write":
	write()
elif sys.argv[1]=="define":
	define()
else :
	print("Incorrect argument! TRY AGAIN!")