// Analysis.py
// Skeleton code in python provided for you
// In place of this comment you should write [your name] -- [the date] and update it as you go!
// Make sure to make backups and comment as you go along :)

// Header guard to ensure file is imported properly
#ifndef Analysis
#define Analysis

// Include the file that lets the program know about the data
#include "backend/CLoop.h"
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <utility>





void CLoop::Book() {
    // This function is where you "book" your histograms
    // It is called once per data set
    // You will need to do this for each histogram you want to plot
    // The syntax is: histogram = new TH1F("histogram_name", "Title", number_of_bins, x_min, x_max);

    // For example, booking a histogram to plot number of leptons per event:
    h_lep_n = new TH1F("lep_n","Number of leptons",10,-0.5,9.5);

    // A couple of other basic histograms
    // Histograms for lepton pT
    h_lep_type = new TH1F("lep_type","Type of leptons",10,10.5,20.5);
    h_lep_pt0 = new TH1F("lep_pt0","Transverse momentum of lep1",200,0,14e4);
    h_lep_pt1 = new TH1F("lep_pt1","Transverse momentum of lep2",200,0,14e4);
    h_lep_pt2 = new TH1F("lep_pt2","Transverse momentum of lep3",200,0,14e4);
    h_lep_pt3 = new TH1F("lep_pt3","Transverse momentum of lep4",200,0,14e4);
    // PLAYING WITH THE CODE
    // Invariant mass histograms
    h_jet_n = new TH1F("jet_n","Eta value for lepton",10,-1,9);
    h_lep_eta = new TH1F("lep_eta","Eta value for lepton",30,-3,3);
    h_inva_mass = new TH1F("inva_mass","Invariant mass lepton system",230,70e3,300e3);
    //h_invaee_mass = new TH1F("invaee_mass","Invariant mass ee system",200,0,200e3);
    //h_invamumu_mass = new TH1F("invamumu_mass","Invariant mass mumu system",200,0,200e3);
    //h_invamumu_eerealZ__mass = new TH1F("invamumu_eerealZ_mass","Invariant mass mumu system with ee from on shell Z",200,0,200e3);

    // Isolation variables Histograms
    h_pt0cone30 = new TH1F("pt0cone30","lepton 1 isolation",12,0,12e3);
    h_pt1cone30 = new TH1F("pt1cone30","lepton 2 isolation",12,0,12e3);
    h_pt2cone30 = new TH1F("pt2cone30","lepton 3 isolation",12,0,12e3);
    h_pt3cone30 = new TH1F("pt3cone30","lepton 4 isolation",12,0,12e3);

    // Final cut Histograms
    //h_final_cut = new TH1F("final_cut","Final cut",200,0,200e3);
}

void CLoop::Fill(double weight) {
    // This function is where you select events and fill your histograms
    // It is called once PER EVENT.

    // To fill a histogram you should write:
    // histogram->Fill(quantity,weight)
    vector<int> vect;


    // For example, filling a histogram with the number of leptons in each event
    h_lep_n -> Fill(lep_n, weight);
    h_jet_n->Fill(jet_n, weight);
    vector <pair <double,int> > vect_pt;
    vector <pair <int,int> > lep_flavour;
    // loop over leptons in the event
    for (int ilep=0; ilep<lep_n; ilep++) {
        // This is where you will want to fill histograms with properties of individual leptons
        // You will need to use quantity->at(ilep) to refer to properties of the lepton

        // For example, filling a histogram with the type of each lepton
        // muons have type = 11, electrons have type = 13
        h_lep_type -> Fill(lep_type->at(ilep),weight);
        h_lep_eta ->Fill(lep_eta->at(ilep),weight);
        // Filling the transverse momentum of each lepton, but only if it is an electron
        if (lep_n==4) {
          vect.push_back(ilep);
          vect_pt.push_back(make_pair(lep_pt->at(ilep),ilep));
          lep_flavour.push_back(make_pair(lep_type->at(ilep),ilep));
        }


    } // End of loop over leptons
    //for (size_t j = 0; j < 4; j++) {
      //cout << vect_pt[j].first << vect_pt[j].second;
    //}



    if (lep_n==4) {
      sort(lep_flavour.begin(), lep_flavour.end());
      int l1=(lep_type->at(lep_flavour[0].second));
      int l2=(lep_type->at(lep_flavour[1].second));
      int l3=(lep_type->at(lep_flavour[2].second));
      int l4=(lep_type->at(lep_flavour[3].second));
      int l=l1+l2+l3+l4;

      float pair1_charge=(lep_charge->at(lep_flavour[0].second))*(lep_charge->at(lep_flavour[1].second));
      float pair2_charge=(lep_charge->at(lep_flavour[2].second))*(lep_charge->at(lep_flavour[3].second));

      sort(vect_pt.begin(), vect_pt.end());
      h_lep_pt0->Fill(lep_pt->at(vect_pt[3].second),weight);
      h_lep_pt1->Fill(lep_pt->at(vect_pt[2].second),weight);
      h_lep_pt2->Fill(lep_pt->at(vect_pt[1].second),weight);
      h_lep_pt3->Fill(lep_pt->at(vect_pt[0].second),weight);
      if (l%24==0 && pair1_charge<0 && pair2_charge<0 ){//&& lep_pt->at(vect_pt[3].second)>25e3 && lep_pt->at(vect_pt[2].second)>20e3) {
        // Filling isolation variables Histograms

        double inv_4m;
        inv_4m=sqrt(2*lep_pt->at(0)*lep_pt->at(1)*(cosh(lep_eta->at(0)-lep_eta->at(1))-cos(lep_phi->at(0)-lep_phi->at(1)))+2*lep_pt->at(0)*lep_pt->at(2)*(cosh(lep_eta->at(0)-lep_eta->at(2))-cos(lep_phi->at(0)-lep_phi->at(2)))+2*lep_pt->at(0)*lep_pt->at(3)*(cosh(lep_eta->at(0)-lep_eta->at(3))-cos(lep_phi->at(0)-lep_phi->at(3)))+2*lep_pt->at(1)*lep_pt->at(2)*(cosh(lep_eta->at(1)-lep_eta->at(2))-cos(lep_phi->at(1)-lep_phi->at(2)))+2*lep_pt->at(1)*lep_pt->at(3)*(cosh(lep_eta->at(1)-lep_eta->at(3))-cos(lep_phi->at(1)-lep_phi->at(3)))+2*lep_pt->at(2)*lep_pt->at(3)*(cosh(lep_eta->at(2)-lep_eta->at(3))-cos(lep_phi->at(2)-lep_phi->at(3))));
        double inv_2em=sqrt(2*lep_pt->at(lep_flavour[0].second)*lep_pt->at(lep_flavour[1].second)*(cosh(lep_eta->at(lep_flavour[0].second)-lep_eta->at(lep_flavour[1].second))-cos(lep_phi->at(lep_flavour[0].second)-lep_phi->at(lep_flavour[1].second))));
        double inv_2mum=sqrt(2*lep_pt->at(lep_flavour[2].second)*lep_pt->at(lep_flavour[3].second)*(cosh(lep_eta->at(lep_flavour[2].second)-lep_eta->at(lep_flavour[3].second))-cos(lep_phi->at(lep_flavour[2].second)-lep_phi->at(lep_flavour[3].second))));

        if (inv_2em>inv_2mum) {
          h_pt0cone30->Fill(lep_ptcone30->at(lep_flavour[0].second),weight);
          h_pt1cone30->Fill(lep_ptcone30->at(lep_flavour[1].second),weight);
          h_pt2cone30->Fill(lep_ptcone30->at(lep_flavour[2].second),weight);
          h_pt3cone30->Fill(lep_ptcone30->at(lep_flavour[3].second),weight);
          if (lep_ptcone30->at(lep_flavour[2].second)<4e3 && lep_ptcone30->at(lep_flavour[3].second)<4e3) {
            h_inva_mass->Fill(inv_4m,weight);
          }

        }
        if (inv_2em<inv_2mum) {
          h_pt0cone30->Fill(lep_ptcone30->at(lep_flavour[3].second),weight);
          h_pt1cone30->Fill(lep_ptcone30->at(lep_flavour[2].second),weight);
          h_pt2cone30->Fill(lep_ptcone30->at(lep_flavour[1].second),weight);
          h_pt3cone30->Fill(lep_ptcone30->at(lep_flavour[0].second),weight);
          if (lep_ptcone30->at(lep_flavour[1].second)<4e3 && lep_ptcone30->at(lep_flavour[0].second)<4e3) {
            h_inva_mass->Fill(inv_4m,weight);
          }

        }

        /*if ((((inv_2em > 82e3) && (inv_2em < 99e3) )^((inv_2mum > 82e3) && (inv_2mum < 99e3))) && lep_ptcone30->at(vect_pt[3].second)<3e3 && lep_ptcone30->at(vect_pt[2].second)<3e3 && lep_ptcone30->at(vect_pt[1].second)<3e3 && lep_ptcone30->at(vect_pt[0].second)<3e3) {
          if (inv_4m<130e3 && inv_4m>117e3) {
            h_final_cut->Fill(inv_4m,weight);
          }
        }*/
        /*h_invaee_mass->Fill(inv_2em,weight);
        h_invamumu_mass->Fill(inv_2mum,weight);
        if (inv_2em<99e3 && inv_2em>82e3) {
          h_invamumu_eerealZ__mass->Fill(inv_2mum,weight);
        }*/

      }

    }
    //for(int k=0;k<vect.size();k++)
      //cout << vect.at(k);
    //vect_pt.clear();
}

void CLoop::Style() {
    // This function is where you can control the style elements of your histograms and write them to a file
    // It is called once per data set

    // For example, set some properties of the lep_n histogram
    h_lep_n->GetXaxis()->SetTitle("Number of leptons per event"); // label x axis
    h_lep_n->GetYaxis()->SetTitle("Number of entries/bin"); // label y axis
    h_lep_n->SetTitle("Number of leptons  per event");
    h_lep_n->SetLineColor(kRed); // set the line colour to red
    // For more information see https://root.cern.ch/root/htmldoc/guides/users-guide/Histograms.html

    // Write histograms to a file
    // This needs to be done for each histogram
    h_lep_n->Write();
    h_lep_type->Write();
    h_lep_pt0->Write();
    h_lep_pt1->Write();
    h_lep_pt2->Write();
    h_lep_pt3->Write();
    h_jet_n->Write();
    h_lep_eta->Write();
    h_inva_mass->Write();
    /*h_invaee_mass->Write();
    h_invamumu_mass->Write();
    h_invamumu_eerealZ__mass->Write();*/
    h_pt0cone30->Write();
    h_pt1cone30->Write();
    h_pt2cone30->Write();
    h_pt3cone30->Write();
    //h_final_cut->Write();
}


#endif // End header guard
