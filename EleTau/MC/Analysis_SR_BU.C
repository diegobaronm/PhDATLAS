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

    // VARIABLES ONLY ONCE

    h_lep_n = new TH1F("lep_n","Number of leptons",50,0,200);
    //h_lep_type = new TH1F("lep_type","Type of leptons",10,10.5,20.5);
    h_lep_eta = new TH1F("lep_eta","Eta value for lepton",30,-3,3);
    h_inva_mass_ltau = new TH1F("inva_mass_ltau","Invariant mass lepton-tau system",300,0,300);
    h_inva_mass_ltau_bdte_btag_iso_rnn_pte_omega_mreco = new TH1F("inva_mass_ltau_bdte_btag_iso_rnn_pte_omega_mreco","Invariant mass lepton-tau system _bdte_btag_iso_rnn_pte_omega_mreco",300,0,300);
    h_trans_mass = new TH1F("trans_mass","Transverse mass lepton-tau system",300,0,300);
    //h_visible_mass = new TH1F("visible_mass","visible mass lepton-tau system",280,20,300);
    //h_visible_mass_bdte_btag_iso_rnn_pte_mreco = new TH1F("visible_mass_bdte_btag_iso_rnn_pte_mreco","visible mass lepton-tau system_bdte_btag_iso_rnn_pte_mreco",280,20,300);
    h_met_phi=new TH1F("MET phi","MET phi angle",40,-4,4);

    //VARIABLES FOLLOWED AFTER EACH CUT

    // Histograms for lepton pT
    h_lep_pt0 = new TH1F("lep_pt0","Transverse momentum of lep1",200,0,200);
    h_lep_pt0_bdte = new TH1F("lep_pt0_bdte","Transverse momentum of lep_bdte",200,0,200);
    h_lep_pt0_bdte_btag = new TH1F("lep_pt0_bdte_btag","Transverse momentum of lep_bdte_btag",200,0,200);
    h_lep_pt0_bdte_btag_iso = new TH1F("lep_pt0_bdte_btag_iso","Transverse momentum of lep_bdte_btag_iso",200,0,200);
    h_lep_pt0_bdte_btag_iso_rnn = new TH1F("lep_pt0_bdte_btag_iso_rnn","Transverse momentum of lep_bdte_btag_iso_rnn",200,0,200);
    h_lep_pt0_bdte_btag_iso_rnn_pte = new TH1F("lep_pt0_bdte_btag_iso_rnn_pte","Transverse momentum of lep_bdte_btag_iso_rnn_pte",200,0,200);
    h_lep_pt0_bdte_btag_iso_rnn_pte_omega = new TH1F("lep_pt0_bdte_btag_iso_rnn_pte_omega","Transverse momentum of lep_bdte_btag_iso_rnn_pte_omega",200,0,200);
    h_lep_pt0_bdte_btag_iso_rnn_pte_omega_mreco = new TH1F("lep_pt0_bdte_btag_iso_rnn_pte_omega_mreco","Transverse momentum of lep_bdte_btag_iso_rnn_pte_omega_mreco",200,0,200);
    h_lep_pt0_bdte_btag_iso_rnn_omega_mreco = new TH1F("lep_pt0_bdte_btag_iso_rnn_omega_mreco","Transverse momentum of lep_bdte_btag_iso_rnn_pte_omega_mreco",200,0,200);


    // Histograms for tau pT
    h_lep_pt1 = new TH1F("tau_pt","Transverse momentum of lep1",200,0,200);
    h_lep_pt1_bdte = new TH1F("tau_pt_bdte","Transverse momentum of tau_bdte",200,0,200);
    h_lep_pt1_bdte_btag = new TH1F("tau_pt_bdte_btag","Transverse momentum of tau_bdte_btag",200,0,200);
    h_lep_pt1_bdte_btag_iso = new TH1F("tau_pt_bdte_btag_iso","Transverse momentum of tau_bdte_btag_iso",200,0,200);
    h_lep_pt1_bdte_btag_iso_rnn = new TH1F("tau_pt_bdte_btag_iso_rnn","Transverse momentum of tau_bdte_btag_iso_rnn",200,0,200);
    h_lep_pt1_bdte_btag_iso_rnn_pte = new TH1F("tau_pt_bdte_btag_iso_rnn_pte","Transverse momentum of tau_bdte_btag_iso_rnn_pte",200,0,200);
    h_lep_pt1_bdte_btag_iso_rnn_pte_omega_inside = new TH1F("tau_pt_bdte_btag_iso_rnn_pte_omega_inside","Transverse momentum of tau_bdte_btag_iso_rnn_pte_omega_inside",200,0,200);
    h_lep_pt1_bdte_btag_iso_rnn_pte_omega_outside = new TH1F("tau_pt_bdte_btag_iso_rnn_pte_omega_outside","Transverse momentum of tau_bdte_btag_iso_rnn_pte_omega_outside",200,0,200);
    h_lep_pt1_bdte_btag_iso_rnn_pte_omega_mreco_inside = new TH1F("tau_pt_bdte_btag_iso_rnn_pte_omega_mreco_inside","Transverse momentum of tau_bdte_btag_iso_rnn_pte_omega_mreco_inside",200,0,200);
    h_lep_pt1_bdte_btag_iso_rnn_pte_omega_mreco_outside = new TH1F("tau_pt_bdte_btag_iso_rnn_pte_omega_mreco_outside","Transverse momentum of tau_bdte_btag_iso_rnn_omega_mreco_outside",200,0,200);

    // MET Histograms
    h_met = new TH1F("MET","Missing Transverse momentum",300,0,300);
    h_met_bdte = new TH1F("MET_bdte","Missing Transverse momentum_bdte",300,0,300);
    h_met_bdte_btag = new TH1F("MET_bdte_btag","Missing Transverse momentum_bdte_btag",300,0,300);
    h_met_bdte_btag_iso = new TH1F("MET_bdte_btag_iso","Missing Transverse momentum_bdte_btag_iso",300,0,300);
    h_met_bdte_btag_iso_rnn = new TH1F("MET_bdte_btag_iso_rnn","Missing Transverse momentum_bdte_btag_iso_rnn",300,0,300);
    h_met_bdte_btag_iso_rnn_pte = new TH1F("MET_bdte_btag_iso_rnn_pte","Missing Transverse momentum_bdte_btag_iso_rnn_pte",300,0,300);
    h_met_bdte_btag_iso_rnn_pte_omega = new TH1F("MET_bdte_btag_iso_rnn_pte_mreco","Missing Transverse momentum_bdte_btag_iso_rnn_pte_mreco",300,0,300);
    h_met_bdte_btag_iso_rnn_pte_omega_mreco = new TH1F("MET_bdte_btag_iso_rnn_pte_omega_mreco","Missing Transverse momentum_bdte_btag_iso_rnn_pte_omega_mreco",300,0,300);

    // Invariant mass histograms
    // Non reco histos
    //Transeverse lepton mass
    h_trans_lepmet_mass = new TH1F("transverse_lepton_met_mass","transverse mass lepton MET system",300,0,300);
    //h_trans_lepmet_mass_bdte_btag_iso_rnn = new TH1F("transverse_lepton_met_mass_bdte_btag_iso_rnn","transverse mass lepton MET system _bdte_btag_iso_rnn",300,0,300);
    h_trans_lepmet_mass_bdte_btag_iso_rnn_pte_omega_mreco = new TH1F("transverse_lepton_met_mass_bdte_btag_iso_rnn_pte_omega_mreco","transverse mass lepton MET system _bdte_btag_iso_rnn_pte_omega_mreco",300,0,300);



    // reco histos
    h_reco_mass = new TH1F("reco_mass","mass reconstructed with trick",300,0,300);
    h_reco_mass_bdte = new TH1F("reco_mass_bdte","mass reconstructed with trick_bdte",300,0,300);
    h_reco_mass_bdte_btag = new TH1F("reco_mass_bdte_btag","mass reconstructed with trick_bdte_btag",300,0,300);
    h_reco_mass_bdte_btag_iso = new TH1F("reco_mass_bdte_btag_iso","mass reconstructed with trick_bdte_btag_iso",300,0,300);
    h_reco_mass_bdte_btag_iso_rnn = new TH1F("reco_mass_bdte_btag_iso_rnn","mass reconstructed with trick_bdte_btag_iso_rnn",300,0,300);
    h_reco_mass_bdte_btag_iso_rnn_pte = new TH1F("reco_mass_bdte_btag_iso_rnn_pte","mass reconstructed with trick_bdte_btag_iso_rnn_pte",300,0,300);
    h_reco_mass_bdte_btag_iso_rnn_pte_omega = new TH1F("reco_mass_bdte_btag_iso_rnn_pte_omega","mass reconstructed with trick_bdte_btag_iso_rnn_pte_omega",300,0,300);
    h_reco_mass_bdte_btag_iso_rnn_pte_omega_mreco = new TH1F("reco_mass_bdte_btag_iso_rnn_pte_omega_mreco","mass reconstructed with trick_bdte_btag_iso_rnn_pte_omega_mreco",300,0,300);

    h_reco_mass_90_to_120 = new TH1F("reco_mass_90_to_120","mass reconstructed with trick from 90 to 120",300,0,300);
    h_reco_mass_90_to_120_bdte = new TH1F("reco_mass_90_to_120+bdte","mass reconstructed with trick from 90 to 120 + bdte",300,0,300);
    h_reco_mass_90_to_120_bdte_iso = new TH1F("reco_mass_90_to_120+bdte+iso","mass reconstructed with trick from 90 to 120 + bdte + iso",300,0,300);
    h_reco_mass_90_to_120_bdte_iso_rnn = new TH1F("reco_mass_90_to_120+bdte+iso+rnn","mass reconstructed with trick from 90 to 120 + bdte + iso +rnn",300,0,300);
    h_reco_mass_90_to_120_bdte_iso_rnn_pte = new TH1F("reco_mass_90_to_120_bdte_iso_rnn_pte","mass reconstructed with trick from 90 to 120_bdte_iso_rnn_pte",300,0,300);
    h_reco_mass_90_to_120_bdte_iso_rnn_pte_mreco = new TH1F("reco_mass_90_to_120_bdte_iso_rnn_pte_mreco","mass reconstructed with trick from 90 to 120_bdte_iso_rnn_pte_mreco",300,0,300);

    h_reco_mass_met_outside = new TH1F("reco_mass_met_outside","mass reconstructed with trick MET outside",300,0,300);
    h_reco_mass_met_outside_bdte = new TH1F("reco_mass_met_outside_bdte","mass reconstructed with trick MET outside_bdte",300,0,300);
    h_reco_mass_met_outside_bdte_btag = new TH1F("reco_mass_met_outside_bdte_btag","mass reconstructed with trick MET outside_bdte_btag",300,0,300);
    h_reco_mass_met_outside_bdte_btag_iso = new TH1F("reco_mass_met_outside_bdte_btag_iso","mass reconstructed with trick MET outside_bdte_btag_iso",300,0,300);
    h_reco_mass_met_outside_bdte_btag_iso_rnn = new TH1F("reco_mass_met_outside_bdte_btag_iso_rnn","mass reconstructed with trick MET outside_bdte_btag_iso_rnn",300,0,300);
    h_reco_mass_met_outside_bdte_btag_iso_rnn_pte = new TH1F("reco_mass_met_outside_bdte_btag_iso_rnn_pte","mass reconstructed with trick MET outside_bdte_btag_iso_rnn_pte",300,0,300);
    h_reco_mass_met_outside_bdte_btag_iso_rnn_pte_omega = new TH1F("reco_mass_met_outside_bdte_btag_iso_rnn_pte_omega","mass reconstructed with trick MET outside_bdte_btag_iso_rnn_pte_omega",300,0,300);
    h_reco_mass_met_outside_bdte_btag_iso_rnn_pte_omega_mreco = new TH1F("reco_mass_met_outside_bdte_btag_iso_rnn_pte_omega_mreco","mass reconstructed with trick MET outside_bdte_btag_iso_rnn_pte_omega_mreco",300,0,300);

    h_reco_mass_met_outside_120 = new TH1F("reco_mass_met_outside_120","mass reconstructed with trick MET outside_120",300,0,300);
    h_reco_mass_met_outside_bdte_120 = new TH1F("reco_mass_met_outside_bdte_120","mass reconstructed with trick MET outside_bdte_120",300,0,300);
    h_reco_mass_met_outside_bdte_btag_120 = new TH1F("reco_mass_met_outside_bdte_btag_120","mass reconstructed with trick MET outside_bdte_btag_120",300,0,300);
    h_reco_mass_met_outside_bdte_btag_iso_120 = new TH1F("reco_mass_met_outside_bdte_btag_iso_120","mass reconstructed with trick MET outside_bdte_btag_iso_120",300,0,300);
    h_reco_mass_met_outside_bdte_btag_iso_rnn_120 = new TH1F("reco_mass_met_outside_bdte_btag_iso_rnn_120","mass reconstructed with trick MET outside_bdte_btag_iso_rnn_120",300,0,300);
    h_reco_mass_met_outside_bdte_btag_iso_rnn_pte_120 = new TH1F("reco_mass_met_outside_bdte_btag_iso_rnn_pte_120","mass reconstructed with trick MET outside_bdte_btag_iso_rnn_pte_120",300,0,300);
    h_reco_mass_met_outside_bdte_btag_iso_rnn_pte_mreco_120 = new TH1F("reco_mass_met_outside_bdte_btag_iso_rnn_pte_mreco_120","mass reconstructed with trick MET outside_bdte_btag_iso_rnn_pte_mreco_120",300,0,300);

    // rnn Score histograms
    h_rnn_score = new TH1F("rnn_score","rnn score",60,0.4,1);
    h_rnn_score_bdte_btag_iso = new TH1F("rnn_score_bdte_btag_iso","rnn score_bdte_btag_iso",60,0.4,1);
    h_rnn_score_bdte_btag_iso_pte_omega_mreco = new TH1F("rnn_score_bdte_btag_iso_pte_omega_mreco","rnn score_bdte_btag_iso_pte_omega_mreco",60,0.4,1);

    h_bdt_e_score = new TH1F("bdt_e_score","BDT score electron",100,0,1);
    h_bdt_e_score_btag_iso_rnn_pte_omega_mreco = new TH1F("bdt_e_score_btag_iso_rnn_pte_omega_mreco","BDT score electron_btag_iso_rnn_pte_omega_mreco",100,0,1);


    h_tau_matched = new TH1F("tau_matched","Tau truth matched",2,0,2);
    h_tau_matched_after_0_to_90 = new TH1F("tau_matched_after_0_to_90","Tau truth matched after selection 0 to 90",2,0,2);
    h_tau_matched_after_90_to_120 = new TH1F("tau_matched_after_90_to_120","Tau truth matched after selection 90 to 120",2,0,2);
    h_tau_matched_after_outside = new TH1F("tau_matched_after_outside","Tau truth matched after selection outside",2,0,2);
    h_tau_matched_after_outside_120 = new TH1F("tau_matched_after_outside_120","Tau truth matched after selection outside 120",2,0,2);
    h_weight_mc = new TH1F("weight_mc","lepton 1 isolation2",40000,-20000,20000);
    h_weight_total_cuts = new TH1F("weight_total_cuts","weight total",40000,-1,20);
    h_weight_total = new TH1F("weight_total","weight total",40000,-1,20);
    h_weight_mc_cuts = new TH1F("weight_mc_cuts","weight mc",40000,-20000,20000);
    h_sf_e_trigger = new TH1F("sf_e_trigger","elec trigger scale factor",30,0.85,1.15);
    h_sf_e_recoid = new TH1F("sf_e_recoid","elec reco and id scale factor",30,0.85,1.15);
    h_sf_e_vertex = new TH1F("sf_e_vertex","elec vertex matching scale factor",30,0.85,1.15);
    h_sf_e_isolation = new TH1F("sf_e_isolation","elec isolation scale factor",30,0.85,1.15);
    h_sf_e_total = new TH1F("sf_e_total","elec total scale factor",30,0.85,1.15);
    
    // Jet Number Histograms
    h_jet_n = new TH1F("jet_n","Eta value for lepton",10,-1,9);
    h_jet_n_btag_iso_rnn_pte_omega_mreco = new TH1F("jet_n_btag_iso_rnn_pte_omega_mreco","Eta value for lepton_btag_iso_rnn_pte_omega_mreco",10,-1,9);

    h_b_tag = new TH1F("b_tag","b taging variable",100,-1,1);
    h_b_tag_bdte = new TH1F("b_tag_bdte","b taging variable_bdte",100,-1,1);
    h_b_tag_bdte_iso_rnn_pte_omega_mreco = new TH1F("b_tag_bdte_iso_rnn_pte_omega_mreco","b taging variable_bdte_iso_rnn_pte_omega_mreco",100,-1,1);


    // Isolation variables Histograms
    h_elec_0_iso_FCTight = new TH1F("elec_0_iso_FCTight","lepton 1 isolation",20,0,10);
    h_elec_0_iso_FCTight_bdte_btag = new TH1F("elec_0_iso_FCTight_bdte_btag","lepton 1 isolation_bdte_btag",20,0,10);
    h_elec_0_iso_FCTight_bdte_btag_iso2_rnn_pte_omega_mreco = new TH1F("elec_0_iso_FCTight_bdte_btag_iso2_rnn_pte_omega_mreco","lepton isolation_bdte_btag_iso2_rnn_pte_omega_mreco",20,0,10);

    

    // Angular variable
    h_omega = new TH1F("omega","omega variable",30,-1.0,2.0);
    h_omega_bdte_btag_iso_rnn_pte_mreco = new TH1F("omega_bdte_btag_iso_rnn_pte_mreco","omega variable_bdte_btag_iso_rnn_pte_mreco",30,-1.0,2.0);

    h_angle = new TH1F("angle","opening angle MET in between",30,0,3.141596);
    h_angle_ouside = new TH1F("angle_outside","opening angle MET outside",30,0,3.141596);
    h_angle_cuts = new TH1F("angle_cuts","opening angle MET in between after cuts",30,0,3.141596);
    h_angle_ouside_cuts = new TH1F("angle_outside_cuts","opening angle MET outside after cuts",30,0,3.141596);

    h_Z_pt_reco_inside = new TH1F("Z_pt_inside","Z boson transverse momentum _inside",300,0,300);
    h_Z_pt_reco_cuts_inside = new TH1F("Z_pt_cuts_inside","Z boson transverse momentum _inside",300,0,300);
    h_Z_pt_reco_outside = new TH1F("Z_pt_outside","Z boson transverse momentum _outside",300,0,300);
    h_Z_pt_reco_cuts_outside = new TH1F("Z_pt_cuts_outside","Z boson transverse momentum _outside",300,0,300);

}

void CLoop::Fill(double weight) {
    // This function is where you select events and fill your histograms
    // It is called once PER EVENT.

    // For example, filling a histogram with the number of leptons in each event
    h_lep_n -> Fill(n_electrons, weight);

    //vector <pair <double,int> > vect_pt;
    //vector <pair <int,int> > lep_flavour;
    // loop over leptons in the event
    /*for (int ilep=0; ilep<lep_n; ilep++) {
        // This is where you will want to fill histograms with properties of individual leptons
        // You will need to use quantity->at(ilep) to refer to properties of the lepton

        // For example, filling a histogram with the type of each lepton
        // elecs have type = 11, electrons have type = 13
        h_lep_type -> Fill(lep_type->at(ilep),weight);
        h_lep_eta ->Fill(lep_eta->at(ilep),weight);
    }*/
    bool trigger_decision= bool(HLT_e120_lhloose | HLT_e140_lhloose_nod0 | HLT_e24_lhmedium_L1EM20VH | HLT_e26_lhtight_nod0_ivarloose | HLT_e60_lhmedium | HLT_e60_lhmedium_nod0);
    bool lepton_id=elec_0_id_tight;
    if (n_electrons==1 && n_taus==1 && trigger_decision && lepton_id) {

      float ql=elec_0_q;
      float qtau=tau_0_q;
      float pair_charge=ql*qtau;

      //angles
      double angle_l_MET=abs(elec_0_p4->Phi()-met_reco_p4->Phi());
      double angle_tau_MET=abs(tau_0_p4->Phi()-met_reco_p4->Phi());
      double angle=abs(tau_0_p4->Phi()-elec_0_p4->Phi());

      //topology
      bool inside90= angle<1.5707 && angle==(angle_l_MET+angle_tau_MET); //ANGLE BEING USED 1.5707 AND 2.0943
      bool inside120=  angle>1.5707 && angle<2.0943 && angle==(angle_l_MET+angle_tau_MET);
      bool outside90_lep= angle<1.5707 && angle_l_MET<angle_tau_MET && cos(angle_l_MET)>0 && angle!=(angle_l_MET+angle_tau_MET);
      bool outside90_tau= angle<1.5707 && angle_l_MET>angle_tau_MET && cos(angle_tau_MET)>0 && angle!=(angle_l_MET+angle_tau_MET);
      bool outside120_lep= angle>1.5707 && angle<2.0943 && angle_l_MET<angle_tau_MET && cos(angle_l_MET)>0 && angle!=(angle_l_MET+angle_tau_MET);
      bool outside120_tau= angle>1.5707 && angle<2.0943 && angle_l_MET>angle_tau_MET && cos(angle_tau_MET)>0 && angle!=(angle_l_MET+angle_tau_MET);



      if (ql!=qtau && (inside90 || outside90_lep || outside90_tau)){
        // RECO mass
        double cot_lep=1.0/tan(elec_0_p4->Phi());
        double cot_tau=1.0/tan(tau_0_p4->Phi());
        double pt_tau_nu=(met_reco_p4->Pt()*cos(met_reco_p4->Phi())-met_reco_p4->Pt()*sin(met_reco_p4->Phi())*cot_lep)/(cos(tau_0_p4->Phi())-sin(tau_0_p4->Phi())*cot_lep);
        double pt_lep_nu=(met_reco_p4->Pt()*cos(met_reco_p4->Phi())-met_reco_p4->Pt()*sin(met_reco_p4->Phi())*cot_tau)/(cos(elec_0_p4->Phi())-sin(elec_0_p4->Phi())*cot_tau);

        double reco_mass=sqrt(2*elec_0_p4->Pt()*tau_0_p4->Pt()*(cosh(elec_0_p4->Eta()-tau_0_p4->Eta())-cos(elec_0_p4->Phi()-tau_0_p4->Phi()))+2*elec_0_p4->Pt()*pt_tau_nu*(cosh(elec_0_p4->Eta()-tau_0_p4->Eta())-cos(elec_0_p4->Phi()-tau_0_p4->Phi()))+2*tau_0_p4->Pt()*pt_lep_nu*(cosh(tau_0_p4->Eta()-elec_0_p4->Eta())-cos(tau_0_p4->Phi()-elec_0_p4->Phi()))+2*pt_lep_nu*pt_tau_nu*(cosh(elec_0_p4->Eta()-tau_0_p4->Eta())-cos(elec_0_p4->Phi()-tau_0_p4->Phi())));

        double neutrino_pt=0;
        double reco_mass_outside=0;
        if (outside90_lep || outside120_lep) {
          neutrino_pt=met_reco_p4->Pt()*cos(angle_l_MET);
          reco_mass_outside=sqrt(2*(elec_0_p4->Pt()*tau_0_p4->Pt()*(cosh(elec_0_p4->Eta()-tau_0_p4->Eta())-cos(elec_0_p4->Phi()-tau_0_p4->Phi()))+tau_0_p4->Pt()*neutrino_pt*(cosh(elec_0_p4->Eta()-tau_0_p4->Eta())-cos(elec_0_p4->Phi()-tau_0_p4->Phi()))));
        }
        if (outside90_tau || outside120_tau) {
          neutrino_pt=met_reco_p4->Pt()*cos(angle_tau_MET);
          reco_mass_outside=sqrt(2*(elec_0_p4->Pt()*tau_0_p4->Pt()*(cosh(elec_0_p4->Eta()-tau_0_p4->Eta())-cos(elec_0_p4->Phi()-tau_0_p4->Phi()))+elec_0_p4->Pt()*neutrino_pt*(cosh(elec_0_p4->Eta()-tau_0_p4->Eta())-cos(elec_0_p4->Phi()-tau_0_p4->Phi()))));
        }


        double Z_pt_x=0;
        double Z_pt_y=0;
        double Z_pt=0;
        if (inside90) {
          Z_pt_x=tau_0_p4->Pt()*cos(tau_0_p4->Phi())+elec_0_p4->Pt()*cos(elec_0_p4->Phi())+pt_tau_nu*cos(tau_0_p4->Phi())+pt_lep_nu*cos(elec_0_p4->Phi());
          Z_pt_y=tau_0_p4->Pt()*sin(tau_0_p4->Phi())+elec_0_p4->Pt()*sin(elec_0_p4->Phi())+pt_tau_nu*sin(tau_0_p4->Phi())+pt_lep_nu*sin(elec_0_p4->Phi());
          Z_pt=sqrt(Z_pt_x*Z_pt_x+Z_pt_y*Z_pt_y);
          h_Z_pt_reco_inside->Fill(Z_pt,weight);
        }
        if (outside90_tau) {
          Z_pt_x=tau_0_p4->Pt()*cos(tau_0_p4->Phi())+elec_0_p4->Pt()*cos(elec_0_p4->Phi())+neutrino_pt*cos(tau_0_p4->Phi());
          Z_pt_y=tau_0_p4->Pt()*sin(tau_0_p4->Phi())+elec_0_p4->Pt()*sin(elec_0_p4->Phi())+neutrino_pt*sin(tau_0_p4->Phi());
          Z_pt=sqrt(Z_pt_x*Z_pt_x+Z_pt_y*Z_pt_y);
          h_Z_pt_reco_outside->Fill(Z_pt,weight);
        }
        if (outside90_lep) {
          Z_pt_x=tau_0_p4->Pt()*cos(tau_0_p4->Phi())+elec_0_p4->Pt()*cos(elec_0_p4->Phi())+neutrino_pt*cos(elec_0_p4->Phi());
          Z_pt_y=tau_0_p4->Pt()*sin(tau_0_p4->Phi())+elec_0_p4->Pt()*sin(elec_0_p4->Phi())+neutrino_pt*sin(elec_0_p4->Phi());
          Z_pt=sqrt(Z_pt_x*Z_pt_x+Z_pt_y*Z_pt_y);
          h_Z_pt_reco_outside->Fill(Z_pt,weight);
        }

        // non RECO mass
        double lepmet_mass=sqrt(2*elec_0_p4->Pt()*met_reco_p4->Pt()*(1-cos(elec_0_p4->Phi()-met_reco_p4->Phi())));
        double inv_taulep=sqrt((2*elec_0_p4->Pt()*tau_0_p4->Pt())*(cosh(elec_0_p4->Eta()-tau_0_p4->Eta())-cos(elec_0_p4->Phi()-tau_0_p4->Phi())));
        double trans_mass=sqrt(2*(elec_0_p4->Pt()*tau_0_p4->Pt()*(1-cos(elec_0_p4->Phi()-tau_0_p4->Phi()))+elec_0_p4->Pt()*met_reco_p4->Pt()*(1-cos(elec_0_p4->Phi()-met_reco_p4->Phi()))+tau_0_p4->Pt()*met_reco_p4->Pt()*(1-cos(tau_0_p4->Phi()-met_reco_p4->Phi()))));
        //double visi_mass=sqrt(2*(elec_0_p4->Pt()*tau_0_p4->Pt()*(cosh(elec_0_p4->Eta()-tau_0_p4->Eta())-cos(elec_0_p4->Phi()-tau_0_p4->Phi()))+elec_0_p4->Pt()*met_reco_p4->Pt()*(cosh(elec_0_p4->Eta())-cos(elec_0_p4->Phi()-met_reco_p4->Phi()))+tau_0_p4->Pt()*met_reco_p4->Pt()*(cosh(tau_0_p4->Eta())-cos(tau_0_p4->Phi()-met_reco_p4->Phi()))));


        // ANGULAR VARIABLE DEFINITION
        double omega=0.0;
        if (inside90 && (angle_l_MET<angle_tau_MET)) {
          omega=1.0-(angle_l_MET)/(angle);
        }
        if (inside90 && (angle_l_MET>angle_tau_MET)) {
          omega=(angle_tau_MET)/(angle);
        }
        if (outside90_lep) {
          omega=1.0+(angle_l_MET)/(angle);
        }
        if (outside90_tau) {
          omega=-1.0*(angle_tau_MET)/(angle);
        }

        // Cuts bits
        vector<int> cuts={0,0,0,0,0,0,0};
        if (tau_0_ele_bdt_score_trans>=0.4) {
          cuts[0]=1;
        }
        if (n_bjets==0){
           cuts[1]=1;
        }
        if (elec_0_iso_FCTight==1) {
          cuts[2]=1;
        }
        if (tau_0_jet_rnn_score_trans>=0.41) {
          cuts[3]=1;
        }
        if (elec_0_p4->Pt()>=27) {
          cuts[4]=1;
        }
        if (omega>0 && omega <1.4) {
          cuts[5]=1;
        }
        if (inside90) {
          if (reco_mass<110 && reco_mass>70) {
            cuts[6]=1;
          }
        }
        if (inside120) {
          if (reco_mass<110 && reco_mass>70) {
            cuts[6]=1;
          }
        }
        if (outside90_lep || outside120_lep) {
          if (reco_mass_outside<110 && reco_mass_outside>70) {
            cuts[6]=1;
          }
        }
        if (outside90_tau || outside120_tau) {
          if (reco_mass_outside<110 && reco_mass_outside>70) {
            cuts[6]=1;
        }
      }

        // Cuts relative to otherwise
        vector<int> c_bdte={0,1,1,1,1,1,1};
        vector<int> c_btag={1,0,1,1,1,1,1};
        vector<int> c_iso={1,1,0,1,1,1,1};
        vector<int> c_rnn={1,1,1,0,1,1,1};
        vector<int> c_pte={1,1,1,1,0,1,1};
        vector<int> c_omega={1,1,1,1,1,0,1};
        vector<int> c_mreco={1,1,1,1,1,1,0};
        vector<int> c_all={1,1,1,1,1,1,1};


        if (cuts==c_bdte||cuts==c_all) {
          h_jet_n_btag_iso_rnn_pte_omega_mreco->Fill(n_jets,weight);
        }
        if ((cuts==c_btag||cuts==c_all) && n_jets!=0) {
          h_b_tag_bdte_iso_rnn_pte_omega_mreco->Fill(n_bjets,weight);
        }
        if (cuts==c_iso||cuts==c_all) {
          h_elec_0_iso_FCTight_bdte_btag_iso2_rnn_pte_omega_mreco->Fill(elec_0_iso_FCTight,weight);
        }
        if (cuts==c_rnn||cuts==c_all) {
          h_rnn_score_bdte_btag_iso_pte_omega_mreco->Fill(tau_0_jet_rnn_score_trans,weight);
        }
        if (cuts==c_pte||cuts==c_all) {
          h_lep_pt0_bdte_btag_iso_rnn_omega_mreco->Fill(elec_0_p4->Pt(),weight);
        }
        if (cuts==c_omega||cuts==c_all) {
          h_omega_bdte_btag_iso_rnn_pte_mreco->Fill(omega,weight);
        }
        if (inside90) {
          if (cuts==c_mreco||cuts==c_all) {
            h_reco_mass_bdte_btag_iso_rnn_pte_omega->Fill(reco_mass,weight);
          }
        }
        if (inside120) {
          if (cuts==c_mreco||cuts==c_all) {
            h_reco_mass_90_to_120_bdte_iso_rnn_pte->Fill(reco_mass,weight);
          }
        }
        if (outside90_lep) {
          if (cuts==c_mreco||cuts==c_all) {
            h_reco_mass_met_outside_bdte_btag_iso_rnn_pte_omega->Fill(reco_mass_outside,weight);
          }
        }
        if (outside90_tau) {
          if (cuts==c_mreco||cuts==c_all) {
            h_reco_mass_met_outside_bdte_btag_iso_rnn_pte_omega->Fill(reco_mass_outside,weight);
          }
        }
        if (outside120_lep) {
          if (cuts==c_mreco||cuts==c_all) {
            h_reco_mass_met_outside_bdte_btag_iso_rnn_pte_120->Fill(reco_mass_outside,weight);
          }
        }
        if (outside120_tau) {
          if (cuts==c_mreco||cuts==c_all) {
            h_reco_mass_met_outside_bdte_btag_iso_rnn_pte_120->Fill(reco_mass_outside,weight);
          }
        }
        //  Filling histos

        h_met_phi->Fill(met_reco_p4->Phi(),weight);
        h_tau_matched->Fill(tau_0_truth_isHadTau,weight);
        h_inva_mass_ltau->Fill(inv_taulep,weight);
        h_trans_mass->Fill(trans_mass,weight);
        //h_visible_mass->Fill(visi_mass,weight);

        h_trans_lepmet_mass->Fill(lepmet_mass,weight);
        h_rnn_score->Fill(tau_0_jet_rnn_score_trans,weight);
        h_jet_n->Fill(n_jets, weight);
        h_elec_0_iso_FCTight->Fill(elec_0_iso_FCTight,weight);
        /*if (n_jets!=0) {
          h_b_tag->Fill(jet_MV2c10->at(0),weight);
        }*/
        h_omega->Fill(omega,weight);
        h_weight_total->Fill(weight,1);
        h_weight_mc->Fill(weight_total,1);


        h_met->Fill(met_reco_p4->Pt(),weight);
        h_lep_pt0->Fill(elec_0_p4->Pt(),weight);
        h_lep_pt1->Fill(tau_0_p4->Pt(),weight);
        if (inside90) {
          h_reco_mass->Fill(reco_mass,weight);
          h_angle->Fill(angle,weight);
        }
        if (inside120) {
          h_reco_mass_90_to_120->Fill(reco_mass,weight);
        }
        if (outside90_lep) {
          h_reco_mass_met_outside->Fill(reco_mass_outside,weight);
          h_angle_ouside->Fill(angle,weight);
        }
        if (outside90_tau){
          h_reco_mass_met_outside->Fill(reco_mass_outside,weight);
          h_angle_ouside->Fill(angle,weight);
        }
        if (outside120_lep) {
          h_reco_mass_met_outside_120->Fill(reco_mass_outside,weight);
          h_angle_ouside->Fill(angle,weight);
        }
        if (outside120_tau){
          h_reco_mass_met_outside_120->Fill(reco_mass_outside,weight);
          h_angle_ouside->Fill(angle,weight);
        }


        // TAU ELECTRON BDT SCORE
        if (cuts[0]==1) {
          h_met_bdte->Fill(met_reco_p4->Pt(),weight);
          h_lep_pt0_bdte->Fill(elec_0_p4->Pt(),weight);
          h_lep_pt1_bdte->Fill(tau_0_p4->Pt(),weight);
          if (inside90) {
            h_reco_mass_bdte->Fill(reco_mass,weight);
          }
          if (outside90_lep) {
            h_reco_mass_met_outside_bdte->Fill(reco_mass_outside,weight);
          }
          if (outside90_tau){
            h_reco_mass_met_outside_bdte->Fill(reco_mass_outside,weight);
          }


          // B TAGGING CUT
          if (cuts[1]==1 || n_jets==0) {
            h_met_bdte_btag->Fill(met_reco_p4->Pt(),weight);
            h_lep_pt0_bdte_btag->Fill(elec_0_p4->Pt(),weight);
            h_lep_pt1_bdte_btag->Fill(tau_0_p4->Pt(),weight);

            if (inside90) {
              h_reco_mass_bdte_btag->Fill(reco_mass,weight);
            }
            if (outside90_lep) {
              h_reco_mass_met_outside_bdte_btag->Fill(reco_mass_outside,weight);
            }
            if (outside90_tau){
              h_reco_mass_met_outside_bdte_btag->Fill(reco_mass_outside,weight);
            }

            // ISOLATION CUT
            if (cuts[2]==1) {
              h_met_bdte_btag_iso->Fill(met_reco_p4->Pt(),weight);
              h_lep_pt0_bdte_btag_iso->Fill(elec_0_p4->Pt(),weight);
              h_lep_pt1_bdte_btag_iso->Fill(tau_0_p4->Pt(),weight);

              if (inside90) {
                h_reco_mass_bdte_btag_iso->Fill(reco_mass,weight);
              }
              if (outside90_lep) {
                h_reco_mass_met_outside_bdte_btag_iso->Fill(reco_mass_outside,weight);
              }
              if (outside90_tau){
                h_reco_mass_met_outside_bdte_btag_iso->Fill(reco_mass_outside,weight);
              }

              // RNN SCORE
              if (cuts[3]==1) {
                h_met_bdte_btag_iso_rnn->Fill(met_reco_p4->Pt(),weight);
                h_lep_pt0_bdte_btag_iso_rnn->Fill(elec_0_p4->Pt(),weight);
                h_lep_pt1_bdte_btag_iso_rnn->Fill(tau_0_p4->Pt(),weight);

                if (inside90) {
                  h_reco_mass_bdte_btag_iso_rnn->Fill(reco_mass,weight);
                }
                if (outside90_lep) {
                  h_reco_mass_met_outside_bdte_btag_iso_rnn->Fill(reco_mass_outside,weight);
                }
                if (outside90_tau){
                  h_reco_mass_met_outside_bdte_btag_iso_rnn->Fill(reco_mass_outside,weight);
                }

                // TRANSVERSE MASS LEPTON CUT
                if (cuts[4]==1) {
                  h_met_bdte_btag_iso_rnn_pte->Fill(met_reco_p4->Pt(),weight);
                  h_lep_pt0_bdte_btag_iso_rnn_pte->Fill(elec_0_p4->Pt(),weight);
                  h_lep_pt1_bdte_btag_iso_rnn_pte->Fill(tau_0_p4->Pt(),weight);

                  if (inside90) {
                    h_reco_mass_bdte_btag_iso_rnn_pte->Fill(reco_mass,weight);
                  }
                  if (outside90_lep) {
                    h_reco_mass_met_outside_bdte_btag_iso_rnn_pte->Fill(reco_mass_outside,weight);
                  }
                  if (outside90_tau){
                    h_reco_mass_met_outside_bdte_btag_iso_rnn_pte->Fill(reco_mass_outside,weight);
                  }


                    // OMEGA CUT
                  if (cuts[5]==1) {
                    h_met_bdte_btag_iso_rnn_pte_omega->Fill(met_reco_p4->Pt(),weight);
                    h_lep_pt0_bdte_btag_iso_rnn_pte_omega->Fill(elec_0_p4->Pt(),weight);


                    if (inside90) {
                      h_lep_pt1_bdte_btag_iso_rnn_pte_omega_inside->Fill(tau_0_p4->Pt(),weight);
                    }
                    if (outside90_lep) {
                      h_lep_pt1_bdte_btag_iso_rnn_pte_omega_outside->Fill(tau_0_p4->Pt(),weight);
                    }
                    if (outside90_tau){
                      h_lep_pt1_bdte_btag_iso_rnn_pte_omega_outside->Fill(tau_0_p4->Pt(),weight);
                    }

                    
                      // RECO MASS CUT
                    if (cuts[6]==1) {
                      h_met_bdte_btag_iso_rnn_pte_omega_mreco->Fill(met_reco_p4->Pt(),weight);
                      h_trans_lepmet_mass_bdte_btag_iso_rnn_pte_omega_mreco->Fill(lepmet_mass,weight);
                      h_inva_mass_ltau_bdte_btag_iso_rnn_pte_omega_mreco->Fill(inv_taulep,weight);
                      h_lep_pt0_bdte_btag_iso_rnn_pte_omega_mreco->Fill(elec_0_p4->Pt(),weight);
                      
                      h_weight_total_cuts->Fill(weight,1);
                      h_weight_mc_cuts->Fill(weight_total,1);
                      h_sf_e_isolation->Fill(elec_0_NOMINAL_EleEffSF_Isolation_TightLLH_d0z0_v13_FCTight,1);
                      h_sf_e_recoid->Fill(elec_0_NOMINAL_EleEffSF_offline_TightLLH_d0z0_v13,1);
                      h_sf_e_vertex->Fill(elec_0_NOMINAL_EleEffSF_offline_RecoTrk,1);
                      h_sf_e_trigger->Fill(elec_0_NOMINAL_EleEffSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_2018_e26_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v13_isolFCTight,1);
                      h_sf_e_total->Fill(elec_0_NOMINAL_EleEffSF_Isolation_TightLLH_d0z0_v13_FCTight*elec_0_NOMINAL_EleEffSF_offline_TightLLH_d0z0_v13*elec_0_NOMINAL_EleEffSF_offline_RecoTrk
                                          *elec_0_NOMINAL_EleEffSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_2018_e26_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v13_isolFCTight,1);

                      if (inside90) {
                        h_reco_mass_bdte_btag_iso_rnn_pte_omega_mreco->Fill(reco_mass,weight);
                        h_angle_cuts->Fill(angle,weight);
                        h_lep_pt1_bdte_btag_iso_rnn_pte_omega_mreco_inside->Fill(tau_0_p4->Pt(),weight);
                        h_tau_matched_after_0_to_90->Fill(tau_0_truth_isHadTau,weight);
                        h_Z_pt_reco_cuts_inside->Fill(Z_pt,weight);
                      }
                      if (outside90_lep) {
                        h_reco_mass_met_outside_bdte_btag_iso_rnn_pte_omega_mreco->Fill(reco_mass_outside,weight);
                        h_angle_ouside_cuts->Fill(angle,weight);
                        h_lep_pt1_bdte_btag_iso_rnn_pte_omega_mreco_outside->Fill(tau_0_p4->Pt(),weight);
                        h_tau_matched_after_outside->Fill(tau_0_truth_isHadTau,weight);
                        h_Z_pt_reco_cuts_outside->Fill(Z_pt,weight);
                      }
                      if (outside90_tau){
                        h_reco_mass_met_outside_bdte_btag_iso_rnn_pte_omega_mreco->Fill(reco_mass_outside,weight);
                        h_angle_ouside_cuts->Fill(angle,weight);
                        h_lep_pt1_bdte_btag_iso_rnn_pte_omega_mreco_outside->Fill(tau_0_p4->Pt(),weight);
                        h_tau_matched_after_outside->Fill(tau_0_truth_isHadTau,weight);
                        h_Z_pt_reco_cuts_outside->Fill(Z_pt,weight);
                      }
                }
              }
            }
          }
        }
      }
    }
  }
}
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
    //h_lep_type->Write();
    h_met_phi->Write();
    h_lep_eta->Write();
    h_inva_mass_ltau->Write();
    h_inva_mass_ltau_bdte_btag_iso_rnn_pte_omega_mreco->Write();
    h_trans_mass->Write();
    //h_visible_mass->Write();
    //h_visible_mass_bdte_btag_iso_rnn_pte_mreco->Write();

    h_trans_lepmet_mass->Write();
    //h_trans_lepmet_mass_bdte_btag_iso_rnn->Write();
    h_trans_lepmet_mass_bdte_btag_iso_rnn_pte_omega_mreco->Write();

    h_tau_matched->Write();
    h_tau_matched_after_0_to_90->Write();
    h_tau_matched_after_90_to_120->Write();
    h_tau_matched_after_outside->Write();
    h_tau_matched_after_outside_120->Write();
    h_sf_e_recoid->Write();
    h_sf_e_vertex->Write();
    h_sf_e_trigger->Write();
    h_sf_e_isolation->Write();
    h_sf_e_total->Write();
    h_weight_mc->Write();
    h_weight_mc_cuts->Write();
    h_weight_total->Write();
    h_weight_total_cuts->Write();

    h_rnn_score->Write();
    h_rnn_score_bdte_btag_iso->Write();
    h_rnn_score_bdte_btag_iso_pte_omega_mreco->Write();


    //Writing lep pT
    h_lep_pt0->Write();
    h_lep_pt0_bdte->Write();
    h_lep_pt0_bdte_btag->Write();
    h_lep_pt0_bdte_btag_iso->Write();
    h_lep_pt0_bdte_btag_iso_rnn->Write();
    h_lep_pt0_bdte_btag_iso_rnn_pte->Write();
    h_lep_pt0_bdte_btag_iso_rnn_pte_omega->Write();
    h_lep_pt0_bdte_btag_iso_rnn_pte_omega_mreco->Write();
    h_lep_pt0_bdte_btag_iso_rnn_omega_mreco->Write();

    //Writing tau pT
    h_lep_pt1->Write();
    h_lep_pt1_bdte->Write();
    h_lep_pt1_bdte_btag->Write();
    h_lep_pt1_bdte_btag_iso->Write();
    h_lep_pt1_bdte_btag_iso_rnn->Write();
    h_lep_pt1_bdte_btag_iso_rnn_pte->Write();
    h_lep_pt1_bdte_btag_iso_rnn_pte_omega_inside->Write();
    h_lep_pt1_bdte_btag_iso_rnn_pte_omega_mreco_inside->Write();
    h_lep_pt1_bdte_btag_iso_rnn_pte_omega_outside->Write();
    h_lep_pt1_bdte_btag_iso_rnn_pte_omega_mreco_outside->Write();


    //Writing MET
    h_met->Write();
    h_met_bdte->Write();
    h_met_bdte_btag->Write();
    h_met_bdte_btag_iso->Write();
    h_met_bdte_btag_iso_rnn->Write();
    h_met_bdte_btag_iso_rnn_pte->Write();
    h_met_bdte_btag_iso_rnn_pte_omega->Write();
    h_met_bdte_btag_iso_rnn_pte_omega_mreco->Write();

    //Writing reco
    h_reco_mass->Write();
    h_reco_mass_bdte->Write();
    h_reco_mass_bdte_btag->Write();
    h_reco_mass_bdte_btag_iso->Write();
    h_reco_mass_bdte_btag_iso_rnn->Write();
    h_reco_mass_bdte_btag_iso_rnn_pte->Write();
    h_reco_mass_bdte_btag_iso_rnn_pte_omega->Write();
    h_reco_mass_bdte_btag_iso_rnn_pte_omega_mreco->Write();

    h_reco_mass_90_to_120->Write();
    h_reco_mass_90_to_120_bdte->Write();
    h_reco_mass_90_to_120_bdte_iso->Write();
    h_reco_mass_90_to_120_bdte_iso_rnn->Write();
    h_reco_mass_90_to_120_bdte_iso_rnn_pte->Write();
    h_reco_mass_90_to_120_bdte_iso_rnn_pte_mreco->Write();

    h_reco_mass_met_outside->Write();
    h_reco_mass_met_outside_bdte->Write();
    h_reco_mass_met_outside_bdte_btag->Write();
    h_reco_mass_met_outside_bdte_btag_iso->Write();
    h_reco_mass_met_outside_bdte_btag_iso_rnn->Write();
    h_reco_mass_met_outside_bdte_btag_iso_rnn_pte->Write();
    h_reco_mass_met_outside_bdte_btag_iso_rnn_pte_omega->Write();
    h_reco_mass_met_outside_bdte_btag_iso_rnn_pte_omega_mreco->Write();

    h_reco_mass_met_outside_120->Write();
    h_reco_mass_met_outside_bdte_120->Write();
    h_reco_mass_met_outside_bdte_btag_120->Write();
    h_reco_mass_met_outside_bdte_btag_iso_120->Write();
    h_reco_mass_met_outside_bdte_btag_iso_rnn_120->Write();
    h_reco_mass_met_outside_bdte_btag_iso_rnn_pte_120->Write();
    h_reco_mass_met_outside_bdte_btag_iso_rnn_pte_mreco_120->Write();
    //Writing jet number
    h_jet_n->Write();
    h_jet_n_btag_iso_rnn_pte_omega_mreco->Write();
    //Writing b-tag
    h_b_tag->Write();
    h_b_tag_bdte->Write();
    h_b_tag_bdte_iso_rnn_pte_omega_mreco->Write();


    //Writing isolation variables
    h_elec_0_iso_FCTight->Write();
    h_elec_0_iso_FCTight_bdte_btag->Write();
    h_elec_0_iso_FCTight_bdte_btag_iso2_rnn_pte_omega_mreco->Write();

    


    h_omega->Write();
    h_omega_bdte_btag_iso_rnn_pte_mreco->Write();

    h_angle->Write();
    h_angle_ouside->Write();
    h_angle_cuts->Write();
    h_angle_ouside_cuts->Write();

    h_Z_pt_reco_inside->Write();
    h_Z_pt_reco_cuts_inside->Write();
    h_Z_pt_reco_outside->Write();
    h_Z_pt_reco_cuts_outside->Write();

}


#endif // End header guard
