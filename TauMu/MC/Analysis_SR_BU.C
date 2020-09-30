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
#include <algorithm>
//#include <bits/stdc++.h>
#include <utility>


double del_phi(double phi_1, double phi_2){
    double pi=TMath::Pi();
    double phi_1_norm, phi_2_norm;
    if (phi_1<0.0){
        phi_1_norm=phi_1+2*pi;
    }else {
        phi_1_norm=phi_1;
    }

    if (phi_2<0.0){
        phi_2_norm=phi_2+2*pi;
    }else {
        phi_2_norm=phi_2;
    }
    double delta=std::abs(phi_1_norm-phi_2_norm);
    if (delta>pi){
        delta=2*pi-delta;
        delta=std::abs(delta);
    }

    return delta;
}

string event_rejected(bool cond1, bool cond2, bool cond3, bool cond4, bool cond5, bool cond6){
  string str1="NOPASS";
  string str2="NOPASS";
  string str3="NOPASS";
  string str4="NOPASS";
  string str5="NOPASS";
  string str6="NOPASS";
  if (cond1){
    str1="Passed";
  }
  if (cond2){
    str2="Passed";
  }
  if (cond3){
    str3="Passed";
  }
  if (cond4){
    str4="Passed";
  }
  if (cond5){
    str5="Passed";
  }
  if (cond6){
    str6="Passed";
  }
  return ", "+str1+", "+str2+", "+str3+", "+str4+", "+str5+", "+str6+"\n";
}

string print(std::vector<int> const &input)
{
  string cuts="";
	for (int i = 0; i < input.size(); i++) {
		cuts=cuts+to_string(input.at(i))+',';
	}
  return cuts+'\n';
}


void CLoop::Book(double lumFactor) {
    double pi=TMath::Pi();

    // VARIABLES ONLY ONCE

    //VARIABLES FOLLOWED AFTER EACH CUT

    // Histograms for lepton
    h_lep_pt0_topo = new TH1F("lep_pt0_topo","Transverse momentum of lep1",200,0,200);
    h_lep_pt0_topo_dphi = new TH1F("lep_pt0_topo_dphi","Transverse momentum of lep1",200,0,200);
    h_lep_pt0_topo_dphi_btag = new TH1F("lep_pt0_topo_dphi_btag","Transverse momentum of lep1",200,0,200);
    h_lep_pt0_topo_dphi_btag_iso = new TH1F("lep_pt0_topo_dphi_btag_iso","Transverse momentum of lep1",200,0,200);
    h_lep_pt0_topo_dphi_btag_iso_rnn = new TH1F("lep_pt0_topo_dphi_btag_iso_rnn","Transverse momentum of lep1",200,0,200);
    h_lep_pt0_topo_dphi_btag_iso_rnn_ptmu = new TH1F("lep_pt0_topo_dphi_btag_iso_rnn_ptmu","Transverse momentum of lep1",200,0,200);
    h_lep_pt0_topo_dphi_btag_iso_rnn_ptmu_omega = new TH1F("lep_pt0_topo_dphi_btag_iso_rnn_ptmu_omega","Transverse momentum of lep1",200,0,200);
    h_lep_pt0_topo_dphi_btag_iso_rnn_ptmu_omega_mreco = new TH1F("lep_pt0_topo_dphi_btag_iso_rnn_ptmu_omega_mreco","Transverse momentum of lep1",200,0,200);
    h_lep_pt0_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt = new TH1F("lep_pt0_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt","Transverse momentum of lep1",200,0,200);
    h_lep_pt0_topo_dphi_btag_iso_rnn_omega_mreco_tpt = new TH1F("lep_pt0_topo_dphi_btag_iso_rnn_omega_mreco_tpt","Transverse momentum of lep1",200,0,200);

    h_lep_phi_topo= new TH1F("lep_phi_topo","Lepton phi angle",64,-3.2,3.2);
    h_lep_phi_cuts= new TH1F("lep_phi_cuts","Lepton phi angle",64,-3.2,3.2);
    h_lep_phi_cuts_tpt= new TH1F("lep_phi_cuts_tpt","Lepton phi angle",64,-3.2,3.2);
    // Histograms for tau
    h_lep_pt1_topo = new TH1F("tau_pt_topo","Transverse momentum of tau",200,0,200);
    h_lep_pt1_topo_dphi = new TH1F("tau_pt_topo_dphi","Transverse momentum of tau",200,0,200);
    h_lep_pt1_topo_dphi_btag = new TH1F("tau_pt_topo_dphi_btag","Transverse momentum of tau",200,0,200);
    h_lep_pt1_topo_dphi_btag_iso = new TH1F("tau_pt_topo_dphi_btag_iso","Transverse momentum of tau",200,0,200);
    h_lep_pt1_topo_dphi_btag_iso_rnn = new TH1F("tau_pt_topo_dphi_btag_iso_rnn","Transverse momentum of tau",200,0,200);
    h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu = new TH1F("tau_pt_topo_dphi_btag_iso_rnn_ptmu","Transverse momentum of tau",200,0,200);
    h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_inside = new TH1F("tau_pt_topo_dphi_btag_iso_rnn_ptmu_omega_inside","Transverse momentum of tau",200,0,200);
    h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_outside = new TH1F("tau_pt_topo_dphi_btag_iso_rnn_ptmu_omega_outside","Transverse momentum of tau",200,0,200);
    h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_inside = new TH1F("tau_pt_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_inside","Transverse momentum of tau",200,0,200);
    h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_outside = new TH1F("tau_pt_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_outside","Transverse momentum of tau",200,0,200);
    h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt_inside = new TH1F("tau_pt_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt_inside","Transverse momentum of tau",200,0,200);
    h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt_outside = new TH1F("tau_pt_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt_outside","Transverse momentum of tau",200,0,200);

    // Histograms for tau+nu
    h_lep_pt1nu_topo = new TH1F("tau+nu_pt_topo","Transverse momentum of tau+nu",200,0,200);
    h_lep_pt1nu_topo_dphi = new TH1F("tau+nu_pt_topo_dphi","Transverse momentum of tau+nu",200,0,200);
    h_lep_pt1nu_topo_dphi_btag = new TH1F("tau+nu_pt_topo_dphi_btag","Transverse momentum of tau+nu",200,0,200);
    h_lep_pt1nu_topo_dphi_btag_iso = new TH1F("tau+nu_pt_topo_dphi_btag_iso","Transverse momentum of tau+nu",200,0,200);
    h_lep_pt1nu_topo_dphi_btag_iso_rnn = new TH1F("tau+nu_pt_topo_dphi_btag_iso_rnn","Transverse momentum of tau+nu",200,0,200);
    h_lep_pt1nu_topo_dphi_btag_iso_rnn_ptmu = new TH1F("tau+nu_pt_topo_dphi_btag_iso_rnn_ptmu","Transverse momentum of tau+nu",200,0,200);
    h_lep_pt1nu_topo_dphi_btag_iso_rnn_ptmu_omega = new TH1F("tau+nu_pt_topo_dphi_btag_iso_rnn_ptmu_omega","Transverse momentum of tau+nu",200,0,200);
    h_lep_pt1nu_topo_dphi_btag_iso_rnn_ptmu_omega_mreco = new TH1F("tau+nu_pt_topo_dphi_btag_iso_rnn_ptmu_omega_mreco","Transverse momentum of tau+nu",200,0,200);
    h_lep_pt1nu_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt = new TH1F("tau+nu_pt_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt","Transverse momentum of tau+nu",200,0,200);


    h_tau_phi_topo= new TH1F("tau_phi_topo","Tau phi",64,-3.2,3.2);
    h_tau_phi_cuts= new TH1F("tau_phi_cuts","Tau phi",64,-3.2,3.2);
    h_tau_phi_cuts_tpt= new TH1F("tau_phi_cuts_tpt","Tau phi",64,-3.2,3.2);
    h_tau_nprongs_topo=new TH1F("tau_nprongs_topo","Number of charged tracks",4,0,4);
    h_tau_nprongs_cuts=new TH1F("tau_nprongs_cuts","Number of charged tracks",4,0,4);
    h_tau_nprongs_cuts_tpt=new TH1F("tau_nprongs_cuts_tpt","Number of charged tracks",4,0,4);

    // MET Histograms
    h_met_topo = new TH1F("MET_topo","Missing Transverse momentum",300,0,300);
    h_met_topo_dphi = new TH1F("MET_topo_dphi","Missing Transverse momentum",300,0,300);
    h_met_topo_dphi_btag = new TH1F("MET_topo_dphi_btag","Missing Transverse momentum",300,0,300);
    h_met_topo_dphi_btag_iso = new TH1F("MET_topo_dphi_btag_iso","Missing Transverse momentum",300,0,300);
    h_met_topo_dphi_btag_iso_rnn = new TH1F("MET_topo_dphi_btag_iso_rnn","Missing Transverse momentum",300,0,300);
    h_met_topo_dphi_btag_iso_rnn_ptmu = new TH1F("MET_topo_dphi_btag_iso_rnn_ptmu","Missing Transverse momentum",300,0,300);
    h_met_topo_dphi_btag_iso_rnn_ptmu_omega = new TH1F("MET_topo_dphi_btag_iso_rnn_ptmu_omega","Missing Transverse momentum",300,0,300);
    h_met_topo_dphi_btag_iso_rnn_ptmu_omega_mreco = new TH1F("MET_topo_dphi_btag_iso_rnn_ptmu_omega_mreco","Missing Transverse momentum",300,0,300);
    h_met_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt = new TH1F("MET_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt","Missing Transverse momentum",300,0,300);

    // Invariant mass histograms
    // Non reco histos
    //Transeverse lepton mass
    h_trans_lepmet_mass_topo = new TH1F("transverse_lepton_met_mass_topo","transverse mass lepton",300,0,300);
    h_trans_lepmet_mass_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt = new TH1F("transverse_lepton_met_mass_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt","transverse mass lepton",300,0,300);

    // reco histos
    h_reco_mass_topo = new TH1F("reco_mass_topo","reco mass in between",300,0,300);
    h_reco_mass_topo_dphi = new TH1F("reco_mass_topo_dphi","reco mass in between",300,0,300);
    h_reco_mass_topo_dphi_btag = new TH1F("h_reco_mass_topo_dphi_btag","reco mass in between",300,0,300);
    h_reco_mass_topo_dphi_btag_iso = new TH1F("h_reco_mass_topo_dphi_btag_iso","reco mass in between",300,0,300);
    h_reco_mass_topo_dphi_btag_iso_rnn = new TH1F("h_reco_mass_topo_dphi_btag_iso_rnn","reco mass in between",300,0,300);
    h_reco_mass_topo_dphi_btag_iso_rnn_ptmu = new TH1F("h_reco_mass_topo_dphi_btag_iso_rnn_ptmu","reco mass in between",300,0,300);
    h_reco_mass_topo_dphi_btag_iso_rnn_ptmu_omega = new TH1F("h_reco_mass_topo_dphi_btag_iso_rnn_ptmu_omega","reco mass in between",300,0,300);
    h_reco_mass_topo_dphi_btag_iso_rnn_ptmu_omega_mreco = new TH1F("h_reco_mass_topo_dphi_btag_iso_rnn_ptmu_omega_mreco","reco mass in between",300,0,300);
    h_reco_mass_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt = new TH1F("h_reco_mass_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt","reco mass in between",300,0,300);
    h_reco_mass_topo_dphi_btag_iso_rnn_ptmu_omega_tpt = new TH1F("h_reco_mass_topo_dphi_btag_iso_rnn_ptmu_omega_tpt","reco mass in between",300,0,300);

    h_reco_mass_met_outside_topo = new TH1F("reco_mass_met_outside_topo","reco mass outside",300,0,300);
    h_reco_mass_met_outside_topo_dphi = new TH1F("reco_mass_met_outside_topo_dphi","reco mass outside",300,0,300);
    h_reco_mass_met_outside_topo_dphi_btag = new TH1F("reco_mass_met_outside_topo_dphi_btag","reco mass outside",300,0,300);
    h_reco_mass_met_outside_topo_dphi_btag_iso = new TH1F("reco_mass_met_outside_topo_dphi_btag_iso","reco mass outside",300,0,300);
    h_reco_mass_met_outside_topo_dphi_btag_iso_rnn = new TH1F("reco_mass_met_outside_topo_dphi_btag_iso_rnn","reco mass outside",300,0,300);
    h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu = new TH1F("reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu","reco mass outside",300,0,300);
    h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega = new TH1F("reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega","reco mass outside",300,0,300);
    h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega_mreco = new TH1F("reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega_mreco","reco mass outside",300,0,300);
    h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt = new TH1F("reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt","reco mass outside",300,0,300);
    h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega_tpt = new TH1F("reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega_tpt","reco mass outside",300,0,300);
    // rnn Score histograms
    h_rnn_score_1prong_topo = new TH1F("rnn_score_1prong_topo","rnn score 1 track",100,0,1);
    h_rnn_score_1prong_topo_dphi_btag_iso_ptmu_omega_mreco_tpt = new TH1F("rnn_score_1prong_topo_dphi_btag_iso_ptmu_omega_mreco_tpt","rnn score 1 track",100,0,1);
    h_rnn_score_3prong_topo = new TH1F("rnn_score_3prong_topo","rnn score 3 track",100,0,1);
    h_rnn_score_3prong_topo_dphi_btag_iso_ptmu_omega_mreco_tpt = new TH1F("rnn_score_3prong_topo_dphi_btag_iso_ptmu_omega_mreco_tpt","rnn score 3 track",100,0,1);
    /*
    h_rnn_score_1prong_topo_match = new TH1F("rnn_score_1prong_topo_match","rnn score 1 track",100,0,1);
    h_rnn_score_3prong_topo_match = new TH1F("rnn_score_3prong_topo_match","rnn score 3 track",100,0,1);
    */
    if (lumFactor!=1)
    {
      h_tau_matched_topo = new TH1F("tau_matched","Tau truth matched",2,0,2);
      h_tau_matched_after_0_to_90 = new TH1F("tau_matched_after_0_to_90","Tau truth matched after selection 0 to 90",2,0,2);
      h_tau_matched_after_outside = new TH1F("tau_matched_after_outside","Tau truth matched after selection outside",2,0,2);
      h_weight_mc_topo = new TH1F("weight_mc","lepton 1 isolation2",40000,-20000,20000);
      h_weight_total_cuts = new TH1F("weight_total_cuts","weight total",10000,-500,500);
      h_weight_total_topo = new TH1F("weight_total","weight total",10000,-500,500);
      h_weight_mc_cuts = new TH1F("weight_mc_cuts","weight mc",40000,-20000,20000);
      h_sf_mu_trigger = new TH1F("sf_mu_trigger","Muon trigger scale factor",30,0.85,1.15);
      h_sf_mu_recoid = new TH1F("sf_mu_recoid","Muon reco and id scale factor",30,0.85,1.15);
      h_sf_mu_vertex = new TH1F("sf_mu_vertex","Muon vertex matching scale factor",30,0.85,1.15);
      h_sf_mu_isolation = new TH1F("sf_mu_isolation","Muon isolation scale factor",30,0.85,1.15);
      h_sf_mu_total = new TH1F("sf_mu_total","Muon total scale factor",30,0.85,1.15);
      h_Z_pt_truth_inside_topo = new TH1F("Z_pt_truth_inside_topo","Z_truth boson transverse momentum inside",400,0,400);
      h_Z_pt_truth_cuts_inside = new TH1F("Z_pt_truth_cuts_inside","Z_truth boson transverse momentum inside",400,0,400);
      h_Z_pt_truth_cuts_tpt_inside = new TH1F("Z_pt_truth_cuts_tpt_inside","Z_truth boson transverse momentum inside",400,0,400);
      h_Z_pt_truth_outside_topo = new TH1F("Z_pt_truth_outside_topo","Z_truth boson transverse momentum outside",400,0,400);
      h_Z_pt_truth_cuts_outside = new TH1F("Z_pt_truth_cuts_outside","Z_truth boson transverse momentum outside",400,0,400);
      h_Z_pt_truth_cuts_tpt_outside = new TH1F("Z_pt_truth_cuts_tpt_outside","Z_truth boson transverse momentum outside",400,0,400);
    }

    // Jet Number Histograms
    h_jet_n_topo = new TH1F("jet_n_topo","Number of jets",10,-1,9);
    h_jet_n_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt = new TH1F("jet_n_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt","Number of jets",10,-1,9);


    h_b_tag_topo = new TH1F("b_tag_topo","b taging variable",2,0,2);
    h_b_tag_topo_dphi_iso_rnn_ptmu_omega_mreco_tpt = new TH1F("b_tag_topo_dphi_iso_rnn_ptmu_omega_mreco_tpt","b taging variable",2,0,2);


    // Isolation variables Histograms
    h_muon_0_iso_FCTightTrackOnly_FixedRad_topo = new TH1F("muon_0_iso_FCTightTrackOnly_FixedRad_topo","lepton 1 isolation",2,0,2);
    h_muon_0_iso_FCTightTrackOnly_FixedRad_topo_dphi_btag_iso2_rnn_ptmu_omega_mreco_tpt = new TH1F("muon_0_iso_FCTightTrackOnly_FixedRad_topo_dphi_btag_iso2_rnn_ptmu_omega_mreco_tpt","lepton 1 isolation",2,0,2);

    // Angular variable
    h_omega_topo = new TH1F("omega_topo","omega variable",60,-3.0,3.0);
    h_omega_topo_dphi = new TH1F("omega_topo_dphi","omega variable",60,-3.0,3.0);
    h_omega_topo_dphi_btag = new TH1F("omega_topo_dphi_btag","omega variable",60,-3.0,3.0);
    h_omega_topo_dphi_btag_iso = new TH1F("omega_topo_dphi_btag_iso","omega variable",60,-3.0,3.0);
    h_omega_topo_dphi_btag_iso_rnn = new TH1F("omega_topo_dphi_btag_iso_rnn","omega variable",60,-3.0,3.0);
    h_omega_topo_dphi_btag_iso_rnn_ptmu = new TH1F("omega_topo_dphi_btag_iso_rnn_ptmu","omega variable",60,-3.0,3.0);
    h_omega_topo_dphi_btag_iso_rnn_ptmu_omega = new TH1F("omega_topo_dphi_btag_iso_rnn_ptmu_omega","omega variable",60,-3.0,3.0);
    h_omega_topo_dphi_btag_iso_rnn_ptmu_omega_mreco = new TH1F("omega_topo_dphi_btag_iso_rnn_ptmu_omega_mreco","omega variable",60,-3.0,3.0);
    h_omega_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt = new TH1F("omega_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt","omega variable",60,-3.0,3.0);
    h_omega_topo_dphi_btag_iso_rnn_ptmu_mreco_tpt = new TH1F("omega_topo_dphi_btag_iso_rnn_ptmu_mreco_tpt","omega variable",60,-3.0,3.0);

    h_Z_pt_reco_inside_topo = new TH1F("Z_pt_inside_topo","Z boson transverse momentum inside",400,0,400);
    h_Z_pt_reco_cuts_inside = new TH1F("Z_pt_cuts_inside","Z boson transverse momentum inside",400,0,400);
    h_Z_pt_reco_cuts_tpt_inside = new TH1F("Z_pt_cuts_tpt_inside","Z boson transverse momentum inside",400,0,400);
    h_Z_pt_reco_outside_topo = new TH1F("Z_pt_outside_topo","Z boson transverse momentum outside",400,0,400);
    h_Z_pt_reco_cuts_outside = new TH1F("Z_pt_cuts_outside","Z boson transverse momentum outside",400,0,400);
    h_Z_pt_reco_cuts_tpt_outside = new TH1F("Z_pt_cuts_tpt_outside","Z boson transverse momentum outside",400,0,400);

    h_delta_phi= new TH1F("delta_phi","Delta phi lepton-tau",32,0,3.2);
    h_delta_phi_second_stage= new TH1F("delta_phi_second_stage","Delta phi lepton-tau_second_stage",32,0,3.2);
    h_delta_phi_topo= new TH1F("delta_phi_topo","Delta phi lepton-tau",32,0,3.2);
    h_delta_phi_cuts= new TH1F("delta_phi_cuts","Delta phi lepton-tau",32,0,3.2);
    h_delta_phi_cuts_tpt= new TH1F("delta_phi_cuts_tpt","Delta phi lepton-tau",32,0,3.2);
    h_delta_phi_cuts_butphi= new TH1F("delta_phi_cuts_butphi","Delta phi lepton-tau",32,0,3.2);

    //MJ BG DISCRIMINATION VARIABLES
    h_ratio_ptjet_zpt_topo = new TH1F("ratio_ptjet_zpt_topo","ratio_ptjet_zpt",40,0,4);
    h_ratio_lpt_tpt_topo = new TH1F("ratio_lpt_tpt_topo","ratio_lpt_tpt",40,0,4);
    h_ratio_ptjet_zpt_cuts = new TH1F("ratio_ptjet_zpt_cuts","ratio_ptjet_zpt",40,0,4);
    h_ratio_lpt_tpt_cuts = new TH1F("ratio_lpt_tpt_cuts","ratio_lpt_tpt",40,0,4);
    h_ratio_ptjet_zpt_cuts_tpt = new TH1F("ratio_ptjet_zpt_cuts_tpt","ratio_ptjet_zpt",40,0,4);
    h_ratio_lpt_tpt_cuts_tpt = new TH1F("ratio_lpt_tpt_cuts_tpt","ratio_lpt_tpt",40,0,4);


}

void CLoop::Fill(double weight, int z_sample) {
    double pi=TMath::Pi();
    if (n_muons==1 && n_taus_rnn_loose>=1 && weight > -190){
      //angles
      double angle_l_MET=del_phi(muon_0_p4->Phi(),met_reco_p4->Phi());
      double angle_tau_MET=del_phi(tau_0_p4->Phi(),met_reco_p4->Phi());
      double angle=del_phi(tau_0_p4->Phi(),muon_0_p4->Phi());

      h_delta_phi->Fill(angle,weight);

      bool trigger_decision= false;
      bool trigger_match= false;
      if (run_number>= 276262 && run_number<=284484) {
        trigger_decision= bool(HLT_mu20_iloose_L1MU15 | HLT_mu50);
        trigger_match=bool(muTrigMatch_0_HLT_mu20_iloose_L1MU15 | muTrigMatch_0_HLT_mu50);
      } else {
        trigger_decision= bool(HLT_mu26_ivarmedium | HLT_mu50);
        trigger_match=bool(muTrigMatch_0_HLT_mu26_ivarmedium | muTrigMatch_0_HLT_mu50);
      }
      bool lepton_id=muon_0_id_medium;

      float ql=muon_0_q;
      float qtau=tau_0_q;
      /*
      if (tau_0_truth_isHadTau==1){
        if (tau_0_n_charged_tracks==1){
            h_rnn_score_1prong_topo_match->Fill(tau_0_jet_rnn_score_trans,weight);
        }
        if (tau_0_n_charged_tracks==3){
            h_rnn_score_3prong_topo_match->Fill(tau_0_jet_rnn_score_trans,weight);
        }
      }
      */
      if (ql==qtau && angle<3*pi/4 && trigger_decision && lepton_id && trigger_match ) {

        h_delta_phi_second_stage->Fill(angle,weight);
        //topology
        bool inside= abs(angle-(angle_l_MET+angle_tau_MET))< 0.00001; //ANGLE BEING USED pi/2 AND 2.0943
        bool outside_lep= angle_l_MET<angle_tau_MET && abs(angle-(angle_l_MET+angle_tau_MET)) > 0.00001 && cos(angle_l_MET)>0;
        bool outside_tau= angle_l_MET>angle_tau_MET && abs(angle-(angle_l_MET+angle_tau_MET)) > 0.00001 && cos(angle_tau_MET)>0;
        bool signal_events = inside || outside_lep || outside_tau;
        /*bool in_events_to_dump{false};
          vector<double> events_to_dump={349014, 1351890823, 349033, 1207687305, 349111, 761564885, 349111, 1144315397, 349335, 709312505, 349268, 1352857893, 349451, 2564225716, 349451, 3052625574, 349451, 3176439167, 349498, 488783413, 349498, 706106743, 349498, 1013335642, 349498, 1101555322, 349498, 1141738039, 349498, 1610013461, 349498, 1694708219, 349498, 1924167873, 349114, 1621754589, 349014, 537117396, 349451, 928588316, 349451, 1101567139, 349451, 1270262507, 349011, 992046715, 349309, 1489857259, 349309, 642203001, 349309, 1123308600, 349309, 1141438345, 349169, 1653746376, 349526, 1008311049, 349526, 1302375832, 349693, 2658710325, 349637, 2816559200, 349944, 1144325261, 349944, 2030283244, 349944, 2133701999, 350013, 1861171360, 350013, 2042320079, 350013, 2220870814, 350013, 3177854072, 350013, 804797982, 349637, 2374352031, 350121, 873533221, 350121, 1130471457, 349637, 631959485, 350067, 698401176, 350067, 849583944, 350067, 366976052, 349842, 974050625, 350144, 1229013248, 350160, 1733218891, 350160, 3296619440, 349693, 2137826479, 349693, 2486358769, 350184, 1438384603, 350184, 2615154500, 350184, 3391258158, 350121, 2489534904, 350144, 1950732516, 350144, 2466322441, 350144, 2958713288, 349646, 1244064400, 349944, 2759395259, 349944, 3384068956, 351223, 2754112519, 351223, 2795409325, 350803, 769283292, 350803, 2485369638, 350803, 1124105143, 350803, 2152125262, 351160, 711376836, 351296, 497485388, 350749, 361869947, 350749, 708410739, 352056, 2143865629, 350682, 2608921896, 350880, 1271328446, 350880, 1750926114, 351628, 423115170, 351550, 1447831695, 351550, 1592656709, 350751, 1846073968, 350751, 1922024394, 351325, 1128757863, 351671, 1488741815, 352107, 580915294, 350479, 1954694832, 352056, 558038935, 352056, 604938622, 352056, 1699916218, 352056, 1738237231, 351698, 993141410, 350361, 514627474, 350361, 737788559, 350361, 1525243404, 351062, 1395998147, 351062, 2298470478, 350682, 692654811, 350682, 1056675187, 351969, 1409489006, 351969, 1414933313, 351969, 1966017353, 351671, 2562536829, 351671, 2622032654, 350848, 2127544063, 350848, 2289054617, 350848, 2555376157, 350923, 483621450, 350848, 2607710776, 350848, 3650625858, 350923, 706815161, 350923, 2971103841, 351455, 1049071620, 351223, 3011546764, 351223, 3489242348, 351223, 1903328285, 350479, 412585906, 350479, 563175051, 350479, 879050600, 350880, 1299445454, 351894, 1971247313, 351894, 2111106607, 351364, 749759967, 351364, 1257302149, 351636, 1670393701, 351636, 1791724146, 351636, 2025849020, 350842, 677709398, 350842, 1608389613, 350842, 2064390276, 350531, 1254555143, 350749, 1033678504, 350880, 2102297396, 352494, 1004358687, 352394, 931809658, 352394, 431812175, 352394, 2598594902, 352394, 1290511462, 352394, 1598212798, 352340, 1684531992, 352514, 637344726, 352514, 782027752, 352436, 2654344719, 352394, 1260863379, 352394, 3005095950, 352448, 488411776, 352436, 289758797, 355261, 1235606345, 355261, 298962553, 355877, 254409785, 355877, 306270181, 356095, 996268260, 355563, 671822823, 355563, 776346818, 355563, 797427764, 355563, 1093236838, 355563, 1561732808, 355861, 216840160, 356177, 1595652813, 356177, 2201556386, 356177, 2207927474, 356177, 2290841847, 356205, 1303760247, 355995, 3248135788, 356124, 2245985093, 356124, 3336732273, 355995, 2751877747, 355995, 4590030039, 355995, 4923111122, 355995, 5016895230, 356259, 2174031436, 355754, 2148840450, 355754, 2634358827, 356124, 1040550441, 356124, 1661278164, 356124, 2206550384, 355544, 1494165033, 355544, 808828068, 355544, 869939240, 355544, 1695357047, 355544, 902591572, 355544, 1920645793, 356205, 1048914672, 356250, 1590715734, 356250, 1621991704, 355754, 2859139331, 355754, 3362546506, 356259, 626418204, 356259, 787323825, 357500, 1847093683, 358577, 603072156, 359171, 3677393328, 357679, 1604386576, 357962, 553178287, 359171, 840284700, 359171, 1112740840, 357962, 998732035, 357962, 1582841400, 357962, 1770636834, 357962, 1867443825, 358615, 1975630570, 358615, 2975311069, 357679, 3570007557, 358096, 1949321739, 357409, 4492934592, 358333, 378710338, 358333, 2252262487, 358233, 1804673219, 358233, 1966076600, 358115, 580600604, 358115, 2608667221, 357887, 954973256, 357887, 1211062693, 357283, 329211087, 357283, 470994159, 357620, 853889586, 358656, 2811243667, 358656, 3537634006, 357539, 3282554309, 358395, 502645046, 358395, 1101771128, 358395, 1365869462, 358395, 1388547688, 358395, 1421069097, 358577, 2052579996, 359010, 1412422039, 359010, 2167408131, 357821, 1130604903, 358516, 1325769307, 358516, 1628924907, 358516, 2123949554, 358516, 2310636900, 358175, 499412525, 358175, 627259396, 358175, 660352731, 358115, 735692905, 358215, 500557148, 357713, 389387484, 357713, 1330808942, 357451, 1129447199, 358577, 256463133, 358516, 2598208654, 358516, 3470346656, 359124, 1412009589, 359124, 2303164310, 359124, 2312850158, 359124, 2593133870, 358300, 1338944593, 358300, 1507492773, 359171, 2141443574, 359171, 2170301258, 359171, 2367327314, 359010, 4202091171, 359010, 4393465033, 359058, 2196012812, 357821, 1723162340, 357821, 1745612497, 357821, 2644139322, 358395, 2740904147, 358395, 2819945297, 358395, 3291668706, 358395, 3648884484, 358985, 934341933, 358985, 939125012, 359058, 1319570123, 359058, 1992111500, 358031, 2104103028, 358031, 2144378970, 358031, 2565524363, 358031, 2757159174, 358031, 2986774246, 358031, 708179573, 358031, 1291284214, 358031, 1842416102, 357409, 2656902399, 357409, 3707231702, 357409, 4126104804, 357409, 4557262364, 359472, 1388096479, 359472, 1419117347, 359472, 2562678087, 359593, 538740810, 359472, 3736225981, 359918, 1257705522, 359918, 1343110432, 359918, 1365431682, 360293, 2200288181, 360293, 2697537658, 359310, 3322906499, 359310, 2726929883, 360309, 603127536, 360309, 777297449, 360309, 1378094168, 360309, 1635512958, 359735, 732649819, 359355, 315699040, 359355, 1341267690, 360063, 637891627, 360063, 990163101, 360063, 1305312479, 360161, 455777511, 360161, 958685448, 360161, 1485262813, 360161, 1612069205, 359541, 2956321902, 359286, 1677577307, 360026, 713878126, 360026, 1174957066, 360402, 440759303, 360402, 990593589, 360402, 1359890711, 360402, 1806534583, 360402, 1467263995, 359191, 686048198, 359191, 1443708050, 359191, 3133966114, 359823, 665110309, 359823, 1779225337, 359823, 1858610652, 359823, 2006270438, 359823, 2892370252, 359823, 2708888905, 360373, 1262376102, 359823, 1592998778, 360373, 2941599080, 360026, 2191306473, 360026, 2699000059, 359717, 1083978977, 359872, 1539185796, 359872, 2689592238, 359872, 2764657879, 359872, 2878137531, 359766, 432921122, 359310, 1615671321, 359310, 1862314666, 359310, 2291728412, 359310, 2659074515, 362297, 1643101602, 362345, 1953033941, 362345, 2133593420, 361738, 1959763636, 361738, 2429746596, 363129, 1787258642, 363129, 2389868236, 362345, 1074555601, 362345, 1839655569, 361738, 2660024016, 362445, 1975719436, 363198, 2517443122, 362552, 1413410164, 362552, 1486682113, 362552, 1727694376, 362388, 1447461891, 363400, 658192452, 363400, 716710672, 363400, 896305410, 363400, 1741953018, 362619, 1418001439, 361862, 832675252, 361862, 915195970, 363096, 422099104, 362445, 832448459, 363262, 571535371, 362661, 848942993, 362661, 1061658243, 362661, 1061092625, 362204, 514785325, 362204, 891058330, 362204, 1684108724, 362661, 2430584257, 362661, 2512459141, 362661, 2593346850, 362661, 1256450814, 363033, 1687540810, 363033, 1764007422, 363033, 3130722837, 361862, 875107545, 361862, 2481167924, 363198, 2180902919, 363198, 1968687634, 363198, 3610215899, 363198, 3750956645, 363198, 3932221589, 362354, 1124977932, 362297, 1411747006, 364098, 885496554, 364098, 1188856483, 364076, 2677364042, 364292, 3583273958, 364160, 1036871099, 363710, 272831464, 363710, 854483127, 364076, 2474020544, 364030, 799710167, 364030, 883597848, 363830, 1056404649, 363830, 2001542581, 363830, 2016053313, 363979, 3802869656, 363738, 780775200, 363738, 973345990, 363738, 1714854749, 363738, 2639154554, 363979, 1037238315, 363979, 1915117298, 363979, 3192924036, 363738, 788340071, 363738, 2860202424, 364292, 1850257892, 364292, 2552939714, 363830, 3281335496, 363830, 894795577, 364030, 2034757457, 364030, 2097377108, 364030, 2652262190, 364030, 2715288646, 364030, 2721830136, 364214, 1522778449, 363910, 2863260974, 364214, 259162245, 364214, 804238980, 363910, 1646199968, 363910, 1994489743, 363910, 2029259880};
          for (size_t i{0}; i < events_to_dump.size(); i+=2){
            if(run_number==events_to_dump[i]){
              if (event_number==events_to_dump[i+1]){
                in_events_to_dump=true;
                break;
              }
            }
          }*/

        if (signal_events /*&& in_events_to_dump*/){
          // RECO mass
          double cot_lep=1.0/tan(muon_0_p4->Phi());
          double cot_tau=1.0/tan(tau_0_p4->Phi());
          double pt_tau_nu=(met_reco_p4->Pt()*cos(met_reco_p4->Phi())-met_reco_p4->Pt()*sin(met_reco_p4->Phi())*cot_lep)/(cos(tau_0_p4->Phi())-sin(tau_0_p4->Phi())*cot_lep);
          double pt_lep_nu=(met_reco_p4->Pt()*cos(met_reco_p4->Phi())-met_reco_p4->Pt()*sin(met_reco_p4->Phi())*cot_tau)/(cos(muon_0_p4->Phi())-sin(muon_0_p4->Phi())*cot_tau);

          double reco_mass{};
          if(inside){
             reco_mass=sqrt(2*muon_0_p4->Pt()*tau_0_p4->Pt()*(cosh(muon_0_p4->Eta()-tau_0_p4->Eta())-cos(muon_0_p4->Phi()-tau_0_p4->Phi()))+2*muon_0_p4->Pt()*pt_tau_nu*(cosh(muon_0_p4->Eta()-tau_0_p4->Eta())-cos(muon_0_p4->Phi()-tau_0_p4->Phi()))+2*tau_0_p4->Pt()*pt_lep_nu*(cosh(tau_0_p4->Eta()-muon_0_p4->Eta())-cos(tau_0_p4->Phi()-muon_0_p4->Phi()))+2*pt_lep_nu*pt_tau_nu*(cosh(muon_0_p4->Eta()-tau_0_p4->Eta())-cos(muon_0_p4->Phi()-tau_0_p4->Phi())));
          }

          double neutrino_pt=0;
          double reco_mass_outside=0;
          if (outside_lep) {
            neutrino_pt=met_reco_p4->Pt()*cos(angle_l_MET);
            reco_mass_outside=5+sqrt(2*(muon_0_p4->Pt()*tau_0_p4->Pt()*(cosh(muon_0_p4->Eta()-tau_0_p4->Eta())-cos(muon_0_p4->Phi()-tau_0_p4->Phi()))+tau_0_p4->Pt()*neutrino_pt*(cosh(muon_0_p4->Eta()-tau_0_p4->Eta())-cos(muon_0_p4->Phi()-tau_0_p4->Phi()))));
          }
          if (outside_tau) {
            neutrino_pt=met_reco_p4->Pt()*cos(angle_tau_MET);
            reco_mass_outside=5+sqrt(2*(muon_0_p4->Pt()*tau_0_p4->Pt()*(cosh(muon_0_p4->Eta()-tau_0_p4->Eta())-cos(muon_0_p4->Phi()-tau_0_p4->Phi()))+muon_0_p4->Pt()*neutrino_pt*(cosh(muon_0_p4->Eta()-tau_0_p4->Eta())-cos(muon_0_p4->Phi()-tau_0_p4->Phi()))));
          }

          double Z_pt_x=0;
          double Z_pt_y=0;
          double Z_pt=0;
          double r_jpt_zpt=0;
          double r_lpt_tpt=muon_0_p4->Pt()/tau_0_p4->Pt();
          double truth_z_pt=0.0;
          if (z_sample==1 || z_sample==2)
          {
            truth_z_pt=truth_Z_p4->Pt();
          }

          if (inside) {
            Z_pt_x=tau_0_p4->Pt()*cos(tau_0_p4->Phi())+muon_0_p4->Pt()*cos(muon_0_p4->Phi())+pt_tau_nu*cos(tau_0_p4->Phi())+pt_lep_nu*cos(muon_0_p4->Phi());
            Z_pt_y=tau_0_p4->Pt()*sin(tau_0_p4->Phi())+muon_0_p4->Pt()*sin(muon_0_p4->Phi())+pt_tau_nu*sin(tau_0_p4->Phi())+pt_lep_nu*sin(muon_0_p4->Phi());
            Z_pt=sqrt(Z_pt_x*Z_pt_x+Z_pt_y*Z_pt_y);
            h_Z_pt_reco_inside_topo->Fill(Z_pt,weight);
            if (weight!=1){
              h_Z_pt_truth_inside_topo->Fill(truth_z_pt/1000,weight);
            }
            r_jpt_zpt=ljet_0_p4->Pt()/Z_pt;
          }
          if (outside_tau) {
            Z_pt_x=tau_0_p4->Pt()*cos(tau_0_p4->Phi())+muon_0_p4->Pt()*cos(muon_0_p4->Phi())+neutrino_pt*cos(tau_0_p4->Phi());
            Z_pt_y=tau_0_p4->Pt()*sin(tau_0_p4->Phi())+muon_0_p4->Pt()*sin(muon_0_p4->Phi())+neutrino_pt*sin(tau_0_p4->Phi());
            Z_pt=sqrt(Z_pt_x*Z_pt_x+Z_pt_y*Z_pt_y);
            h_Z_pt_reco_outside_topo->Fill(Z_pt,weight);
            if (weight!=1){
              h_Z_pt_truth_outside_topo->Fill(truth_z_pt/1000,weight);
            }
            r_jpt_zpt=ljet_0_p4->Pt()/Z_pt;
          }
          if (outside_lep) {
            Z_pt_x=tau_0_p4->Pt()*cos(tau_0_p4->Phi())+muon_0_p4->Pt()*cos(muon_0_p4->Phi())+neutrino_pt*cos(muon_0_p4->Phi());
            Z_pt_y=tau_0_p4->Pt()*sin(tau_0_p4->Phi())+muon_0_p4->Pt()*sin(muon_0_p4->Phi())+neutrino_pt*sin(muon_0_p4->Phi());
            Z_pt=sqrt(Z_pt_x*Z_pt_x+Z_pt_y*Z_pt_y);
            h_Z_pt_reco_outside_topo->Fill(Z_pt,weight);
            if (weight!=1){
              h_Z_pt_truth_outside_topo->Fill(truth_z_pt/1000,weight);
            }
            r_jpt_zpt=ljet_0_p4->Pt()/Z_pt;
          }

          // non RECO mass
          double lepmet_mass=sqrt(2*muon_0_p4->Pt()*met_reco_p4->Pt()*(1-cos(muon_0_p4->Phi()-met_reco_p4->Phi())));
          double inv_taulep=sqrt((2*muon_0_p4->Pt()*tau_0_p4->Pt())*(cosh(muon_0_p4->Eta()-tau_0_p4->Eta())-cos(muon_0_p4->Phi()-tau_0_p4->Phi())));
          //double trans_mass=sqrt(2*(muon_0_p4->Pt()*tau_0_p4->Pt()*(1-cos(muon_0_p4->Phi()-tau_0_p4->Phi()))+muon_0_p4->Pt()*met_reco_p4->Pt()*(1-cos(muon_0_p4->Phi()-met_reco_p4->Phi()))+tau_0_p4->Pt()*met_reco_p4->Pt()*(1-cos(tau_0_p4->Phi()-met_reco_p4->Phi()))));
          //double visi_mass=sqrt(2*(muon_0_p4->Pt()*tau_0_p4->Pt()*(cosh(muon_0_p4->Eta()-tau_0_p4->Eta())-cos(muon_0_p4->Phi()-tau_0_p4->Phi()))+muon_0_p4->Pt()*met_reco_p4->Pt()*(cosh(muon_0_p4->Eta())-cos(muon_0_p4->Phi()-met_reco_p4->Phi()))+tau_0_p4->Pt()*met_reco_p4->Pt()*(cosh(tau_0_p4->Eta())-cos(tau_0_p4->Phi()-met_reco_p4->Phi()))));

          // ANGULAR VARIABLE DEFINITION
          double omega=0.0;
          if (inside && (angle_l_MET<angle_tau_MET)) {
            omega=1.0-(angle_l_MET)/(angle);
          }
          if (inside && (angle_l_MET>angle_tau_MET)) {
            omega=(angle_tau_MET)/(angle);
          }
          if (outside_lep) {
            omega=1.0+(angle_l_MET)/(angle);
          }
          if (outside_tau) {
            omega=-1.0*(angle_tau_MET)/(angle);
          }

          // Cuts bits
          vector<int> cuts={0,0,0,0,0,0,0,0};
          if (angle<=2*pi/3){
            cuts[0]=1;
          }
          if (n_bjets_MV2c10_FixedCutBEff_85==0){
            cuts[1]=1;
          }
          if (muon_0_iso_FCTightTrackOnly_FixedRad==1) {
            cuts[2]=1;
          }
          if (tau_0_n_charged_tracks==1 && tau_0_jet_rnn_score_trans>0.4) {
            cuts[3]=1;
          }
          if (tau_0_n_charged_tracks==3 && tau_0_jet_rnn_score_trans>0.55) {
            cuts[3]=1;
          }
          if (muon_0_p4->Pt()>=27) {
            cuts[4]=1;
          }
          if (omega>0 && omega <1.4) {
            cuts[5]=1;
          }
          if (inside) {
            if (reco_mass<110 && reco_mass>70) {
              cuts[6]=1;
            }
          }
          if (outside_lep) {
            if (reco_mass_outside<110 && reco_mass_outside>70) {
              cuts[6]=1;
            }
          }
          if (outside_tau) {
            if (reco_mass_outside<110 && reco_mass_outside>70) {
              cuts[6]=1;
          }
          }
          if (tau_0_p4->Pt()>=45){
            cuts[7]=1;
          }

          /*ofstream interesting_events;
          if (in_events_to_dump){
            interesting_events.open("Events_in_v24_omega_recomass.csv", ios::out | ios::app);
            interesting_events << to_string(event_number)+", "+to_string(run_number)+", "+to_string(omega)+", "+to_string(reco_mass)+", "+to_string(reco_mass_outside)+", "<<to_string(inside)+", "<< print(cuts);
          }
          interesting_events.close();*/

          vector<int> c_phi={0,1,1,1,1,1,1,1};
          vector<int> c_btag={1,0,1,1,1,1,1,1};
          vector<int> c_iso={1,1,0,1,1,1,1,1};
          vector<int> c_rnn={1,1,1,0,1,1,1,1};
          vector<int> c_ptmu={1,1,1,1,0,1,1,1};
          vector<int> c_omega={1,1,1,1,1,0,1,1};
          vector<int> c_mreco={1,1,1,1,1,1,0,1};
          vector<int> c_tpt={1,1,1,1,1,1,1,0};
          vector<int> c_all={1,1,1,1,1,1,1,1};

          if (cuts==c_phi||cuts==c_all) {
            h_delta_phi_cuts_butphi->Fill(angle,weight);
          }
          if ((cuts==c_btag||cuts==c_all) && n_jets!=0) {
            h_b_tag_topo_dphi_iso_rnn_ptmu_omega_mreco_tpt->Fill(n_bjets_MV2c10_FixedCutBEff_85,weight);
          }
          if (cuts==c_iso||cuts==c_all) {
            h_muon_0_iso_FCTightTrackOnly_FixedRad_topo_dphi_btag_iso2_rnn_ptmu_omega_mreco_tpt->Fill(muon_0_iso_FCTightTrackOnly_FixedRad,weight);
          }
          if (cuts==c_rnn||cuts==c_all) {
            if (tau_0_n_charged_tracks==1){
              h_rnn_score_1prong_topo_dphi_btag_iso_ptmu_omega_mreco_tpt->Fill(tau_0_jet_rnn_score_trans,weight);
            }
            if (tau_0_n_charged_tracks==3){
              h_rnn_score_3prong_topo_dphi_btag_iso_ptmu_omega_mreco_tpt->Fill(tau_0_jet_rnn_score_trans,weight);
            }
          }
          if (cuts==c_ptmu||cuts==c_all) {
            h_lep_pt0_topo_dphi_btag_iso_rnn_omega_mreco_tpt->Fill(muon_0_p4->Pt(),weight);
          }
          if (cuts==c_omega||cuts==c_all) {
            h_omega_topo_dphi_btag_iso_rnn_ptmu_mreco_tpt->Fill(omega,weight);
          }
          if (inside) {
            if (cuts==c_mreco||cuts==c_all) {
              h_reco_mass_topo_dphi_btag_iso_rnn_ptmu_omega_tpt->Fill(reco_mass,weight);
            }
            if (cuts==c_tpt||cuts==c_all) {
              h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_inside->Fill(tau_0_p4->Pt(),weight);
            }
          }
          if (outside_lep) {
            if (cuts==c_mreco||cuts==c_all) {
              h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega_tpt->Fill(reco_mass_outside,weight);
            }
            if (cuts==c_tpt||cuts==c_all) {
              h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_outside->Fill(tau_0_p4->Pt(),weight);
            }
          }
          if (outside_tau) {
            if (cuts==c_mreco||cuts==c_all) {
              h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega_tpt->Fill(reco_mass_outside,weight);
            }
            if (cuts==c_tpt||cuts==c_all) {
              h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_outside->Fill(tau_0_p4->Pt(),weight);
            }
          }
          //  Filling histos

          h_trans_lepmet_mass_topo->Fill(lepmet_mass,weight);
          if (tau_0_n_charged_tracks==1){
            h_rnn_score_1prong_topo->Fill(tau_0_jet_rnn_score_trans,weight);
          }
          if (tau_0_n_charged_tracks==3){
            h_rnn_score_3prong_topo->Fill(tau_0_jet_rnn_score_trans,weight);
          }
          h_jet_n_topo->Fill(n_jets, weight);
          h_muon_0_iso_FCTightTrackOnly_FixedRad_topo->Fill(muon_0_iso_FCTightTrackOnly_FixedRad,weight);
          h_omega_topo->Fill(omega,weight);
          h_met_topo->Fill(met_reco_p4->Pt(),weight);
          h_lep_pt0_topo->Fill(muon_0_p4->Pt(),weight);
          h_lep_pt1_topo->Fill(tau_0_p4->Pt(),weight);
          h_lep_phi_topo->Fill(muon_0_p4->Phi(),weight);
          h_tau_phi_topo->Fill(tau_0_p4->Phi(),weight);
          h_delta_phi_topo->Fill(angle,weight);
          h_tau_nprongs_topo->Fill(tau_0_n_charged_tracks,weight);
          if (weight!=1){
            h_weight_total_topo->Fill(weight,1);
            h_weight_mc_topo->Fill(weight_total,1);
            h_tau_matched_topo->Fill(tau_0_truth_isHadTau,weight);
          }

          if (inside) {
            h_reco_mass_topo->Fill(reco_mass,weight);
            h_lep_pt1nu_topo->Fill(tau_0_p4->Pt()+pt_tau_nu,weight);
          }
          if (outside_lep) {
            h_reco_mass_met_outside_topo->Fill(reco_mass_outside,weight);
            h_lep_pt1nu_topo->Fill(tau_0_p4->Pt(),weight);
          }
          if (outside_tau){
            h_reco_mass_met_outside_topo->Fill(reco_mass_outside,weight);
            h_lep_pt1nu_topo->Fill(tau_0_p4->Pt()+neutrino_pt,weight);
          }

          h_ratio_ptjet_zpt_topo->Fill(r_jpt_zpt,weight);
          h_ratio_lpt_tpt_topo->Fill(r_lpt_tpt,weight);
          // ANGLE CUT
          if (cuts[0]==1){
            h_met_topo_dphi->Fill(met_reco_p4->Pt(),weight);
            h_lep_pt0_topo_dphi->Fill(muon_0_p4->Pt(),weight);
            h_lep_pt1_topo_dphi->Fill(tau_0_p4->Pt(),weight);
            h_omega_topo_dphi->Fill(omega,weight);

            if (inside) {
              h_reco_mass_topo_dphi->Fill(reco_mass,weight);
              h_lep_pt1nu_topo_dphi->Fill(tau_0_p4->Pt()+pt_tau_nu,weight);
            }
            if (outside_lep) {
              h_reco_mass_met_outside_topo_dphi->Fill(reco_mass_outside,weight);
              h_lep_pt1nu_topo_dphi->Fill(tau_0_p4->Pt(),weight);
            }
            if (outside_tau){
              h_reco_mass_met_outside_topo_dphi->Fill(reco_mass_outside,weight);
              h_lep_pt1nu_topo_dphi->Fill(tau_0_p4->Pt()+neutrino_pt,weight);
            }

            // B TAGGING CUT
            if (cuts[1]==1 || n_jets==0) {
              h_met_topo_dphi_btag->Fill(met_reco_p4->Pt(),weight);
              h_lep_pt0_topo_dphi_btag->Fill(muon_0_p4->Pt(),weight);
              h_lep_pt1_topo_dphi_btag->Fill(tau_0_p4->Pt(),weight);
              h_omega_topo_dphi_btag->Fill(omega,weight);

              if (inside) {
                h_reco_mass_topo_dphi_btag->Fill(reco_mass,weight);
                h_lep_pt1nu_topo_dphi_btag->Fill(tau_0_p4->Pt()+pt_tau_nu,weight);
              }
              if (outside_lep) {
                h_reco_mass_met_outside_topo_dphi_btag->Fill(reco_mass_outside,weight);
                h_lep_pt1nu_topo_dphi_btag->Fill(tau_0_p4->Pt(),weight);
              }
              if (outside_tau){
                h_reco_mass_met_outside_topo_dphi_btag->Fill(reco_mass_outside,weight);
                h_lep_pt1nu_topo_dphi_btag->Fill(tau_0_p4->Pt()+neutrino_pt,weight);
              }

              // ISOLATION CUT
              if (cuts[2]==1) {
                h_met_topo_dphi_btag_iso->Fill(met_reco_p4->Pt(),weight);
                h_lep_pt0_topo_dphi_btag_iso->Fill(muon_0_p4->Pt(),weight);
                h_lep_pt1_topo_dphi_btag_iso->Fill(tau_0_p4->Pt(),weight);
                h_omega_topo_dphi_btag_iso->Fill(omega,weight);

                if (inside) {
                  h_reco_mass_topo_dphi_btag_iso->Fill(reco_mass,weight);
                  h_lep_pt1nu_topo_dphi_btag_iso->Fill(tau_0_p4->Pt()+pt_tau_nu,weight);
                }
                if (outside_lep) {
                  h_reco_mass_met_outside_topo_dphi_btag_iso->Fill(reco_mass_outside,weight);
                  h_lep_pt1nu_topo_dphi_btag_iso->Fill(tau_0_p4->Pt(),weight);
                }
                if (outside_tau){
                  h_reco_mass_met_outside_topo_dphi_btag_iso->Fill(reco_mass_outside,weight);
                  h_lep_pt1nu_topo_dphi_btag_iso->Fill(tau_0_p4->Pt()+neutrino_pt,weight);
                }

                // RNN SCORE
                if (cuts[3]==1) {
                  h_met_topo_dphi_btag_iso_rnn->Fill(met_reco_p4->Pt(),weight);
                  h_lep_pt0_topo_dphi_btag_iso_rnn->Fill(muon_0_p4->Pt(),weight);
                  h_lep_pt1_topo_dphi_btag_iso_rnn->Fill(tau_0_p4->Pt(),weight);
                  h_omega_topo_dphi_btag_iso_rnn->Fill(omega,weight);

                  if (inside) {
                    h_reco_mass_topo_dphi_btag_iso_rnn->Fill(reco_mass,weight);
                    h_lep_pt1nu_topo_dphi_btag_iso_rnn->Fill(tau_0_p4->Pt()+pt_tau_nu,weight);
                  }
                  if (outside_lep) {
                    h_reco_mass_met_outside_topo_dphi_btag_iso_rnn->Fill(reco_mass_outside,weight);
                    h_lep_pt1nu_topo_dphi_btag_iso_rnn->Fill(tau_0_p4->Pt(),weight);
                  }
                  if (outside_tau){
                    h_reco_mass_met_outside_topo_dphi_btag_iso_rnn->Fill(reco_mass_outside,weight);
                    h_lep_pt1nu_topo_dphi_btag_iso_rnn->Fill(tau_0_p4->Pt()+neutrino_pt,weight);
                  }

                  // TRANSVERSE MASS LEPTON CUT
                  if (cuts[4]==1) {
                    h_met_topo_dphi_btag_iso_rnn_ptmu->Fill(met_reco_p4->Pt(),weight);
                    h_lep_pt0_topo_dphi_btag_iso_rnn_ptmu->Fill(muon_0_p4->Pt(),weight);
                    h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu->Fill(tau_0_p4->Pt(),weight);
                    h_omega_topo_dphi_btag_iso_rnn_ptmu->Fill(omega,weight);

                    if (inside) {
                      h_reco_mass_topo_dphi_btag_iso_rnn_ptmu->Fill(reco_mass,weight);
                      h_lep_pt1nu_topo_dphi_btag_iso_rnn_ptmu->Fill(tau_0_p4->Pt()+pt_tau_nu,weight);
                    }
                    if (outside_lep) {
                      h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu->Fill(reco_mass_outside,weight);
                      h_lep_pt1nu_topo_dphi_btag_iso_rnn_ptmu->Fill(tau_0_p4->Pt(),weight);
                    }
                    if (outside_tau){
                      h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu->Fill(reco_mass_outside,weight);
                      h_lep_pt1nu_topo_dphi_btag_iso_rnn_ptmu->Fill(tau_0_p4->Pt()+neutrino_pt,weight);
                    }


                      // OMEGA CUT
                    if (cuts[5]==1) {
                      h_met_topo_dphi_btag_iso_rnn_ptmu_omega->Fill(met_reco_p4->Pt(),weight);
                      h_lep_pt0_topo_dphi_btag_iso_rnn_ptmu_omega->Fill(muon_0_p4->Pt(),weight);
                      h_omega_topo_dphi_btag_iso_rnn_ptmu_omega->Fill(omega,weight);

                      if (inside) {
                        h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_inside->Fill(tau_0_p4->Pt(),weight);
                        h_reco_mass_topo_dphi_btag_iso_rnn_ptmu_omega->Fill(reco_mass,weight);
                        h_lep_pt1nu_topo_dphi_btag_iso_rnn_ptmu_omega->Fill(tau_0_p4->Pt()+pt_tau_nu,weight);
                      }
                      if (outside_lep) {
                        h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_outside->Fill(tau_0_p4->Pt(),weight);
                        h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega->Fill(reco_mass_outside,weight);
                        h_lep_pt1nu_topo_dphi_btag_iso_rnn_ptmu_omega->Fill(tau_0_p4->Pt(),weight);
                      }
                      if (outside_tau){
                        h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_outside->Fill(tau_0_p4->Pt(),weight);
                        h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega->Fill(reco_mass_outside,weight);
                        h_lep_pt1nu_topo_dphi_btag_iso_rnn_ptmu_omega->Fill(tau_0_p4->Pt()+neutrino_pt,weight);
                      }

                        // RECO MASS CUT
                      if (cuts[6]==1) {
                        h_met_topo_dphi_btag_iso_rnn_ptmu_omega_mreco->Fill(met_reco_p4->Pt(),weight);
                        h_lep_pt0_topo_dphi_btag_iso_rnn_ptmu_omega_mreco->Fill(muon_0_p4->Pt(),weight);
                        h_omega_topo_dphi_btag_iso_rnn_ptmu_omega_mreco->Fill(omega,weight);
                        h_lep_phi_cuts->Fill(muon_0_p4->Phi(),weight);
                        h_tau_phi_cuts->Fill(tau_0_p4->Phi(),weight);
                        h_delta_phi_cuts->Fill(angle,weight);
                        h_tau_nprongs_cuts->Fill(tau_0_n_charged_tracks,weight);

                        h_ratio_ptjet_zpt_cuts->Fill(r_jpt_zpt,weight);
                        h_ratio_lpt_tpt_cuts->Fill(r_lpt_tpt,weight);

                        if (inside) {
                          h_reco_mass_topo_dphi_btag_iso_rnn_ptmu_omega_mreco->Fill(reco_mass,weight);
                          h_Z_pt_reco_cuts_inside->Fill(Z_pt,weight);
                          h_lep_pt1nu_topo_dphi_btag_iso_rnn_ptmu_omega_mreco->Fill(tau_0_p4->Pt()+pt_tau_nu,weight);
                          if (weight!=1){
                            h_Z_pt_truth_cuts_inside->Fill(truth_z_pt/1000,weight);
                          }
                        }
                        if (outside_lep) {
                          h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega_mreco->Fill(reco_mass_outside,weight);
                          h_Z_pt_reco_cuts_outside->Fill(Z_pt,weight);
                          h_lep_pt1nu_topo_dphi_btag_iso_rnn_ptmu_omega_mreco->Fill(tau_0_p4->Pt(),weight);
                          if (weight!=1){
                            h_Z_pt_truth_cuts_outside->Fill(truth_z_pt/1000,weight);
                          }
                        }
                        if (outside_tau){
                          h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega_mreco->Fill(reco_mass_outside,weight);
                          h_Z_pt_reco_cuts_outside->Fill(Z_pt,weight);
                          h_lep_pt1nu_topo_dphi_btag_iso_rnn_ptmu_omega_mreco->Fill(tau_0_p4->Pt()+neutrino_pt,weight);
                          if (weight!=1){
                            h_Z_pt_truth_cuts_outside->Fill(truth_z_pt/1000,weight);
                          }
                        }
                        //TAU PT CUT
                        if (cuts[7]==1){
                          h_met_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(met_reco_p4->Pt(),weight);
                          h_jet_n_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(n_jets, weight);
                          h_trans_lepmet_mass_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(lepmet_mass,weight);
                          h_lep_pt0_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(muon_0_p4->Pt(),weight);
                          h_omega_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(omega,weight);
                          h_lep_phi_cuts_tpt->Fill(muon_0_p4->Phi(),weight);
                          h_tau_phi_cuts_tpt->Fill(tau_0_p4->Phi(),weight);
                          h_delta_phi_cuts_tpt->Fill(angle,weight);
                          h_tau_nprongs_cuts_tpt->Fill(tau_0_n_charged_tracks,weight);

                          h_ratio_ptjet_zpt_cuts_tpt->Fill(r_jpt_zpt,weight);
                          h_ratio_lpt_tpt_cuts_tpt->Fill(r_lpt_tpt,weight);

                          /*ofstream interesting;
                          interesting.open("Events_v24.csv", ios::out | ios::app);
                          interesting << to_string(tau_0_p4->Pt())+", "+to_string(tau_0_p4->Eta())+", "+to_string(tau_0_p4->Phi())+", "+to_string(qtau)+", "+to_string(tau_0_jet_rnn_score_trans)+", "+to_string(n_taus)+", ";
                          interesting<< to_string(muon_0_p4->Pt())+", "+to_string(muon_0_p4->Eta())+", "+to_string(muon_0_p4->Phi())+", "+to_string(ql)+", "+to_string(muon_0_iso_FCTightTrackOnly_FixedRad)+", "+to_string(n_muons)+", "+to_string(n_electrons)+", ";
                          interesting << to_string(met_reco_p4->Pt())+", "+to_string(met_reco_p4->Phi())+", ";
                          interesting << to_string(angle)+", "+to_string(angle_tau_MET)+", "+to_string(angle_l_MET)+", "+to_string(n_bjets_MV2c10_FixedCutBEff_85)+", "+to_string(event_number)+", "+to_string(run_number)+", ";
                          interesting << to_string(elec_0_p4->Pt())+", "+to_string(elec_0_p4->Eta())+", "+to_string(elec_0_p4->Phi())+", "+to_string(elec_0_q);
                          interesting << event_rejected(trigger_decision,trigger_match,lepton_id,ql!=qtau,angle<3*pi/4,signal_events);
                          interesting.close();*/

                          if (weight!=1){
                            h_weight_mc_cuts->Fill(weight_total,1);
                            h_weight_total_cuts->Fill(weight,1);
                            h_sf_mu_isolation->Fill(muon_0_NOMINAL_MuEffSF_IsoFCTightTrackOnly_FixedRad,1);
                            h_sf_mu_recoid->Fill(muon_0_NOMINAL_MuEffSF_Reco_QualMedium,1);
                            h_sf_mu_vertex->Fill(muon_0_NOMINAL_MuEffSF_TTVA,1);
                            h_sf_mu_trigger->Fill(muon_0_NOMINAL_MuEffSF_HLT_mu26_ivarmedium_OR_HLT_mu50_QualMedium,1);
                            h_sf_mu_total->Fill(muon_0_NOMINAL_MuEffSF_HLT_mu26_ivarmedium_OR_HLT_mu50_QualMedium*muon_0_NOMINAL_MuEffSF_IsoFCTightTrackOnly_FixedRad*muon_0_NOMINAL_MuEffSF_Reco_QualMedium
                                                *muon_0_NOMINAL_MuEffSF_TTVA,1);
                          }
                          if (inside) {
                            h_reco_mass_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(reco_mass,weight);
                            h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt_inside->Fill(tau_0_p4->Pt(),weight);
                            h_Z_pt_reco_cuts_tpt_inside->Fill(Z_pt,weight);
                            h_lep_pt1nu_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(tau_0_p4->Pt()+pt_tau_nu,weight);
                            if (weight!=1){
                              h_tau_matched_after_0_to_90->Fill(tau_0_truth_isHadTau,weight);
                              h_Z_pt_truth_cuts_tpt_inside->Fill(truth_z_pt/1000,weight);
                            }
                          }
                          if (outside_lep) {
                            h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(reco_mass_outside,weight);
                            h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt_outside->Fill(tau_0_p4->Pt(),weight);
                            h_Z_pt_reco_cuts_tpt_outside->Fill(Z_pt,weight);
                            h_lep_pt1nu_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(tau_0_p4->Pt(),weight);
                            if (weight!=1){
                              h_tau_matched_after_outside->Fill(tau_0_truth_isHadTau,weight);
                              h_Z_pt_truth_cuts_tpt_outside->Fill(truth_z_pt/1000,weight);
                            }
                          }
                          if (outside_tau){
                            h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(reco_mass_outside,weight);
                            h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt_outside->Fill(tau_0_p4->Pt(),weight);
                            h_Z_pt_reco_cuts_tpt_outside->Fill(Z_pt,weight);
                            h_lep_pt1nu_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(tau_0_p4->Pt()+neutrino_pt,weight);
                            if (weight!=1){
                              h_tau_matched_after_outside->Fill(tau_0_truth_isHadTau,weight);
                              h_Z_pt_truth_cuts_tpt_outside->Fill(truth_z_pt/1000,weight);
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
      }
    }
  }

void CLoop::Style(double lumFactor) {
    // This function is where you can control the style elements of your histograms and write them to a file
    // It is called once per data set

    // For example, set some properties of the lep_n histogram
    /*h_lep_n->GetXaxis()->SetTitle("Number of leptons per event"); // label x axis
    h_lep_n->GetYaxis()->SetTitle("Number of entries/bin"); // label y axis
    h_lep_n->SetTitle("Number of leptons  per event");
    h_lep_n->SetLineColor(kRed);*/ // set the line colour to red
    // For more information see https://root.cern.ch/root/htmldoc/guides/users-guide/Histograms.html

    // Write histograms to a file
    // This needs to be done for each histogram

    h_trans_lepmet_mass_topo->Write();
    h_trans_lepmet_mass_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Write();

    if (lumFactor!=1){
      h_tau_matched_topo->Write();
      h_tau_matched_after_0_to_90->Write();
      h_tau_matched_after_outside->Write();
      h_sf_mu_recoid->Write();
      h_sf_mu_vertex->Write();
      h_sf_mu_trigger->Write();
      h_sf_mu_isolation->Write();
      h_sf_mu_total->Write();
      h_weight_mc_topo->Write();
      h_weight_mc_cuts->Write();
      h_weight_total_topo->Write();
      h_weight_total_cuts->Write();
      h_Z_pt_truth_inside_topo->Write();
      h_Z_pt_truth_cuts_inside->Write();
      h_Z_pt_truth_cuts_tpt_inside->Write();
      h_Z_pt_truth_outside_topo->Write();
      h_Z_pt_truth_cuts_outside->Write();
      h_Z_pt_truth_cuts_tpt_outside->Write();
    }
    h_rnn_score_1prong_topo->Write();
    h_rnn_score_1prong_topo_dphi_btag_iso_ptmu_omega_mreco_tpt->Write();
    h_rnn_score_3prong_topo->Write();
    h_rnn_score_3prong_topo_dphi_btag_iso_ptmu_omega_mreco_tpt->Write();
    /*
    h_rnn_score_1prong_topo_match->Write();
    h_rnn_score_3prong_topo_match->Write();
    */
    //Writing lep pT
    h_lep_pt0_topo->Write();
    h_lep_pt0_topo_dphi->Write();
    h_lep_pt0_topo_dphi_btag->Write();
    h_lep_pt0_topo_dphi_btag_iso->Write();
    h_lep_pt0_topo_dphi_btag_iso_rnn->Write();
    h_lep_pt0_topo_dphi_btag_iso_rnn_ptmu->Write();
    h_lep_pt0_topo_dphi_btag_iso_rnn_ptmu_omega->Write();
    h_lep_pt0_topo_dphi_btag_iso_rnn_ptmu_omega_mreco->Write();
    h_lep_pt0_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Write();
    h_lep_pt0_topo_dphi_btag_iso_rnn_omega_mreco_tpt->Write();

    //Writing tau pT
    h_lep_pt1_topo->Write();
    h_lep_pt1_topo_dphi->Write();
    h_lep_pt1_topo_dphi_btag->Write();
    h_lep_pt1_topo_dphi_btag_iso->Write();
    h_lep_pt1_topo_dphi_btag_iso_rnn->Write();
    h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu->Write();
    h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_inside->Write();
    h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt_inside->Write();
    h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_inside->Write();
    h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_outside->Write();
    h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt_outside->Write();
    h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_outside->Write();

    //Writing tau pT+nu
    h_lep_pt1nu_topo->Write();
    h_lep_pt1nu_topo_dphi->Write();
    h_lep_pt1nu_topo_dphi_btag->Write();
    h_lep_pt1nu_topo_dphi_btag_iso->Write();
    h_lep_pt1nu_topo_dphi_btag_iso_rnn->Write();
    h_lep_pt1nu_topo_dphi_btag_iso_rnn_ptmu->Write();
    h_lep_pt1nu_topo_dphi_btag_iso_rnn_ptmu_omega->Write();
    h_lep_pt1nu_topo_dphi_btag_iso_rnn_ptmu_omega_mreco->Write();
    h_lep_pt1nu_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Write();

    //Writing MET
    h_met_topo->Write();
    h_met_topo_dphi->Write();
    h_met_topo_dphi_btag->Write();
    h_met_topo_dphi_btag_iso->Write();
    h_met_topo_dphi_btag_iso_rnn->Write();
    h_met_topo_dphi_btag_iso_rnn_ptmu->Write();
    h_met_topo_dphi_btag_iso_rnn_ptmu_omega->Write();
    h_met_topo_dphi_btag_iso_rnn_ptmu_omega_mreco->Write();
    h_met_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Write();

    //Writing reco
    h_reco_mass_topo->Write();
    h_reco_mass_topo_dphi->Write();
    h_reco_mass_topo_dphi_btag->Write();
    h_reco_mass_topo_dphi_btag_iso->Write();
    h_reco_mass_topo_dphi_btag_iso_rnn->Write();
    h_reco_mass_topo_dphi_btag_iso_rnn_ptmu->Write();
    h_reco_mass_topo_dphi_btag_iso_rnn_ptmu_omega->Write();
    h_reco_mass_topo_dphi_btag_iso_rnn_ptmu_omega_mreco->Write();
    h_reco_mass_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Write();
    h_reco_mass_topo_dphi_btag_iso_rnn_ptmu_omega_tpt->Write();

    h_reco_mass_met_outside_topo->Write();
    h_reco_mass_met_outside_topo_dphi->Write();
    h_reco_mass_met_outside_topo_dphi_btag->Write();
    h_reco_mass_met_outside_topo_dphi_btag_iso->Write();
    h_reco_mass_met_outside_topo_dphi_btag_iso_rnn->Write();
    h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu->Write();
    h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega->Write();
    h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega_mreco->Write();
    h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Write();
    h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega_tpt->Write();

    //Writing jet number
    h_jet_n_topo->Write();
    h_jet_n_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Write();
    //Writing b-tag
    h_b_tag_topo->Write();
    h_b_tag_topo_dphi_iso_rnn_ptmu_omega_mreco_tpt->Write();

    //Writing isolation variables
    h_muon_0_iso_FCTightTrackOnly_FixedRad_topo->Write();
    h_muon_0_iso_FCTightTrackOnly_FixedRad_topo_dphi_btag_iso2_rnn_ptmu_omega_mreco_tpt->Write();

    h_omega_topo->Write();
    h_omega_topo_dphi->Write();
    h_omega_topo_dphi_btag->Write();
    h_omega_topo_dphi_btag_iso->Write();
    h_omega_topo_dphi_btag_iso_rnn->Write();
    h_omega_topo_dphi_btag_iso_rnn_ptmu->Write();
    h_omega_topo_dphi_btag_iso_rnn_ptmu_omega->Write();
    h_omega_topo_dphi_btag_iso_rnn_ptmu_omega_mreco->Write();
    h_omega_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Write();
    h_omega_topo_dphi_btag_iso_rnn_ptmu_mreco_tpt->Write();

    h_Z_pt_reco_inside_topo->Write();
    h_Z_pt_reco_cuts_inside->Write();
    h_Z_pt_reco_cuts_tpt_inside->Write();
    h_Z_pt_reco_outside_topo->Write();
    h_Z_pt_reco_cuts_outside->Write();
    h_Z_pt_reco_cuts_tpt_outside->Write();

    h_lep_phi_topo->Write();
    h_tau_phi_topo->Write();
    h_delta_phi->Write();
    h_delta_phi_second_stage->Write();
    h_delta_phi_topo->Write();
    h_tau_nprongs_topo->Write();
    h_lep_phi_cuts->Write();
    h_lep_phi_cuts_tpt->Write();
    h_tau_phi_cuts->Write();
    h_tau_phi_cuts_tpt->Write();
    h_delta_phi_cuts->Write();
    h_delta_phi_cuts_tpt->Write();
    h_delta_phi_cuts_butphi->Write();
    h_tau_nprongs_cuts->Write();
    h_tau_nprongs_cuts_tpt->Write();

    h_ratio_ptjet_zpt_topo->Write();
    h_ratio_lpt_tpt_topo->Write();
    h_ratio_ptjet_zpt_cuts->Write();
    h_ratio_lpt_tpt_cuts->Write();
    h_ratio_ptjet_zpt_cuts_tpt->Write();
    h_ratio_lpt_tpt_cuts_tpt->Write();
}


#endif // End header guard