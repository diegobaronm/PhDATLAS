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

    //n TRACKS
    h_n_conversion_tracks = new TH1F("n_conversion_tracks","n_conversion_tracks",15,0,15);
    h_n_core_tracks = new TH1F("n_core_tracks","n_core_tracks",30,0,30);
    h_n_isolation_tracks = new TH1F("n_isolation_tracks","n_isolation_tracks",15,0,15);
    h_n_conversion_tracks_cuts = new TH1F("n_conversion_tracks_cuts","n_conversion_tracks_cuts",15,0,15);
    h_n_core_tracks_cuts = new TH1F("n_core_tracks_cuts","n_core_tracks_cuts",30,0,30);
    h_n_isolation_tracks_cuts = new TH1F("n_isolation_tracks_cuts","n_isolation_tracks_cuts",15,0,15);
    h_n_conversion_tracks_cuts_tpt = new TH1F("n_conversion_tracks_cuts_tpt","n_conversion_tracks_cuts_tpt",15,0,15);
    h_n_core_tracks_cuts_tpt = new TH1F("n_core_tracks_cuts_tpt","n_core_tracks_cuts_tpt",30,0,30);
    h_n_isolation_tracks_cuts_tpt = new TH1F("n_isolation_tracks_cuts_tpt","n_isolation_tracks_cuts_tpt",15,0,15);
    h_n_tracks = new TH1F("n_tracks","n_tracks",30,0,30);
    h_n_tracks_cuts = new TH1F("n_tracks_cuts","n_tracks_cuts",30,0,30);
    h_n_tracks_cuts_tpt = new TH1F("n_tracks_cuts_tpt","n_tracks_cuts_tpt",30,0,30);

}

void CLoop::Fill(double weight, int z_sample) {
    double pi=TMath::Pi();
    if (n_muons==2){
      //angles
      double angle_l_MET=del_phi(muon_0_p4->Phi(),met_reco_p4->Phi());
      double angle_tau_MET=del_phi(muon_1_p4->Phi(),met_reco_p4->Phi());
      double angle=del_phi(muon_1_p4->Phi(),muon_0_p4->Phi());

      h_delta_phi->Fill(angle,weight);

      bool trigger_decision= false;
      bool trigger_match= false;
      if (run_number>= 276262 && run_number<=284484) {
        trigger_decision= bool(HLT_mu20_iloose_L1MU15 | HLT_mu50);
        trigger_match=bool(muTrigMatch_0_HLT_mu20_iloose_L1MU15 | muTrigMatch_0_HLT_mu50 | muTrigMatch_1_HLT_mu20_iloose_L1MU15 | muTrigMatch_1_HLT_mu50);
      } else {
        trigger_decision= bool(HLT_mu26_ivarmedium | HLT_mu50);
        trigger_match=bool(muTrigMatch_0_HLT_mu26_ivarmedium | muTrigMatch_0_HLT_mu50 | muTrigMatch_1_HLT_mu26_ivarmedium | muTrigMatch_1_HLT_mu50);
      }
      bool muon_id=muon_0_id_medium && muon_1_id_medium;

      float q_mu0=muon_0_q;
      float q_mu1=muon_1_q;

      if (q_mu0!=q_mu1 && angle<3*pi/4 && trigger_decision && muon_id && trigger_match ) {

        h_delta_phi_second_stage->Fill(angle,weight);
        //topology
        /*bool inside= abs(angle-(angle_l_MET+angle_tau_MET))< 0.00001; //ANGLE BEING USED pi/2 AND 2.0943
        bool outside_lep= angle_l_MET<angle_tau_MET && abs(angle-(angle_l_MET+angle_tau_MET)) > 0.00001 && cos(angle_l_MET)>0;
        bool outside_tau= angle_l_MET>angle_tau_MET && abs(angle-(angle_l_MET+angle_tau_MET)) > 0.00001 && cos(angle_tau_MET)>0;
        bool signal_events = inside || outside_lep || outside_tau;*/

        double inv_mass{};
        inv_mass=sqrt(2*muon_0_p4->Pt()*muon_1_p4->Pt()*(cosh(muon_0_p4->Eta()-muon_1_p4->Eta())-cos(muon_0_p4->Phi()-muon_1_p4->Phi())));

        double Z_pt_x=0;
        double Z_pt_y=0;
        double Z_pt=0;
        double r_jpt_zpt=0;
        double r_lpt_tpt=muon_0_p4->Pt()/muon_1_p4->Pt();
        double truth_z_pt=0.0;
        if (z_sample==1 || z_sample==2)
        {
          truth_z_pt=truth_Z_p4->Pt();
        }


        Z_pt_x=muon_1_p4->Pt()*cos(muon_1_p4->Phi())+muon_0_p4->Pt()*cos(muon_0_p4->Phi());
        Z_pt_y=muon_1_p4->Pt()*sin(muon_1_p4->Phi())+muon_0_p4->Pt()*sin(muon_0_p4->Phi());
        Z_pt=sqrt(Z_pt_x*Z_pt_x+Z_pt_y*Z_pt_y);
        h_Z_pt_reco_inside_topo->Fill(Z_pt,weight);
        if (weight!=1){
          h_Z_pt_truth_inside_topo->Fill(truth_z_pt/1000,weight);
        }
        r_jpt_zpt=ljet_0_p4->Pt()/Z_pt;

        // non RECO mass
        //double lepmet_mass=sqrt(2*muon_0_p4->Pt()*met_reco_p4->Pt()*(1-cos(muon_0_p4->Phi()-met_reco_p4->Phi())));
        //double inv_taulep=sqrt((2*muon_0_p4->Pt()*muon_1_p4->Pt())*(cosh(muon_0_p4->Eta()-muon_1_p4->Eta())-cos(muon_0_p4->Phi()-muon_1_p4->Phi())));
        //double trans_mass=sqrt(2*(muon_0_p4->Pt()*muon_1_p4->Pt()*(1-cos(muon_0_p4->Phi()-muon_1_p4->Phi()))+muon_0_p4->Pt()*met_reco_p4->Pt()*(1-cos(muon_0_p4->Phi()-met_reco_p4->Phi()))+muon_1_p4->Pt()*met_reco_p4->Pt()*(1-cos(muon_1_p4->Phi()-met_reco_p4->Phi()))));
        //double visi_mass=sqrt(2*(muon_0_p4->Pt()*muon_1_p4->Pt()*(cosh(muon_0_p4->Eta()-muon_1_p4->Eta())-cos(muon_0_p4->Phi()-muon_1_p4->Phi()))+muon_0_p4->Pt()*met_reco_p4->Pt()*(cosh(muon_0_p4->Eta())-cos(muon_0_p4->Phi()-met_reco_p4->Phi()))+muon_1_p4->Pt()*met_reco_p4->Pt()*(cosh(muon_1_p4->Eta())-cos(muon_1_p4->Phi()-met_reco_p4->Phi()))));



        // Cuts bits
        vector<int> cuts={0,0,0,0,0,0,0,0};
        if (angle<=2*pi/3){
          cuts[0]=1;
        }
        if (n_bjets_MV2c10_FixedCutBEff_85==0){
          cuts[1]=1;
        }
        if (muon_0_iso_FCTightTrackOnly_FixedRad==1 && muon_1_iso_FCTightTrackOnly_FixedRad==1) {
          cuts[2]=1;
        }
        if (true) {
          cuts[3]=1;
        }
        if (muon_0_p4->Pt()>=27) {
          cuts[4]=1;
        }
        if (muon_1_p4->Pt()>=27) {
          cuts[5]=1;
        }
        if (inv_mass<110 && inv_mass>70) {
          cuts[6]=1;
        }
        if (true){
          cuts[7]=1;
        }

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
        if (cuts==c_ptmu||cuts==c_all) {
          h_lep_pt0_topo_dphi_btag_iso_rnn_omega_mreco_tpt->Fill(muon_0_p4->Pt(),weight);
        }
        if (cuts==c_omega||cuts==c_all) {
          h_omega_topo_dphi_btag_iso_rnn_ptmu_mreco_tpt->Fill(muon_1_p4->Pt(),weight);
        }
        if (cuts==c_mreco||cuts==c_all) {
          h_reco_mass_topo_dphi_btag_iso_rnn_ptmu_omega_tpt->Fill(inv_mass,weight);
        }
        if (cuts==c_tpt||cuts==c_all) {
          h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_inside->Fill(muon_1_p4->Pt(),weight);
        }


        //  Filling histos
        h_jet_n_topo->Fill(n_jets, weight);
        h_muon_0_iso_FCTightTrackOnly_FixedRad_topo->Fill(muon_0_iso_FCTightTrackOnly_FixedRad,weight);
        h_omega_topo->Fill(muon_1_p4->Pt(),weight);
        h_met_topo->Fill(met_reco_p4->Pt(),weight);
        h_lep_pt0_topo->Fill(muon_0_p4->Pt(),weight);
        h_lep_pt1_topo->Fill(muon_1_p4->Pt(),weight);
        h_lep_phi_topo->Fill(muon_0_p4->Phi(),weight);
        h_tau_phi_topo->Fill(muon_1_p4->Phi(),weight);
        h_delta_phi_topo->Fill(angle,weight);

        if (weight!=1){
          h_weight_total_topo->Fill(weight,1);
          h_weight_mc_topo->Fill(weight_total,1);
        }

        h_reco_mass_topo->Fill(inv_mass,weight);
        h_ratio_ptjet_zpt_topo->Fill(r_jpt_zpt,weight);
        h_ratio_lpt_tpt_topo->Fill(r_lpt_tpt,weight);
        // ANGLE CUT
        if (cuts[0]==1){
          h_met_topo_dphi->Fill(met_reco_p4->Pt(),weight);
          h_lep_pt0_topo_dphi->Fill(muon_0_p4->Pt(),weight);
          h_lep_pt1_topo_dphi->Fill(muon_1_p4->Pt(),weight);
          h_omega_topo_dphi->Fill(muon_1_p4->Pt(),weight);


          h_reco_mass_topo_dphi->Fill(inv_mass,weight);

          // B TAGGING CUT
          if (cuts[1]==1 || n_jets==0) {
            h_met_topo_dphi_btag->Fill(met_reco_p4->Pt(),weight);
            h_lep_pt0_topo_dphi_btag->Fill(muon_0_p4->Pt(),weight);
            h_lep_pt1_topo_dphi_btag->Fill(muon_1_p4->Pt(),weight);
            h_omega_topo_dphi_btag->Fill(muon_1_p4->Pt(),weight);


            h_reco_mass_topo_dphi_btag->Fill(inv_mass,weight);



            // ISOLATION CUT
            if (cuts[2]==1) {
              h_met_topo_dphi_btag_iso->Fill(met_reco_p4->Pt(),weight);
              h_lep_pt0_topo_dphi_btag_iso->Fill(muon_0_p4->Pt(),weight);
              h_lep_pt1_topo_dphi_btag_iso->Fill(muon_1_p4->Pt(),weight);
              h_omega_topo_dphi_btag_iso->Fill(muon_1_p4->Pt(),weight);


              h_reco_mass_topo_dphi_btag_iso->Fill(inv_mass,weight);


              // RNN SCORE
              if (cuts[3]==1) {
                h_met_topo_dphi_btag_iso_rnn->Fill(met_reco_p4->Pt(),weight);
                h_lep_pt0_topo_dphi_btag_iso_rnn->Fill(muon_0_p4->Pt(),weight);
                h_lep_pt1_topo_dphi_btag_iso_rnn->Fill(muon_1_p4->Pt(),weight);
                h_omega_topo_dphi_btag_iso_rnn->Fill(muon_1_p4->Pt(),weight);


                h_reco_mass_topo_dphi_btag_iso_rnn->Fill(inv_mass,weight);


                // TRANSVERSE MASS LEPTON CUT
                if (cuts[4]==1) {
                  h_met_topo_dphi_btag_iso_rnn_ptmu->Fill(met_reco_p4->Pt(),weight);
                  h_lep_pt0_topo_dphi_btag_iso_rnn_ptmu->Fill(muon_0_p4->Pt(),weight);
                  h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu->Fill(muon_1_p4->Pt(),weight);
                  h_omega_topo_dphi_btag_iso_rnn_ptmu->Fill(muon_1_p4->Pt(),weight);


                  h_reco_mass_topo_dphi_btag_iso_rnn_ptmu->Fill(inv_mass,weight);



                    // OMEGA CUT
                  if (cuts[5]==1) {
                    h_met_topo_dphi_btag_iso_rnn_ptmu_omega->Fill(met_reco_p4->Pt(),weight);
                    h_lep_pt0_topo_dphi_btag_iso_rnn_ptmu_omega->Fill(muon_0_p4->Pt(),weight);
                    h_omega_topo_dphi_btag_iso_rnn_ptmu_omega->Fill(muon_1_p4->Pt(),weight);


                    h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_inside->Fill(muon_1_p4->Pt(),weight);
                    h_reco_mass_topo_dphi_btag_iso_rnn_ptmu_omega->Fill(inv_mass,weight);

                      // RECO MASS CUT
                    if (cuts[6]==1) {
                      h_met_topo_dphi_btag_iso_rnn_ptmu_omega_mreco->Fill(met_reco_p4->Pt(),weight);
                      h_lep_pt0_topo_dphi_btag_iso_rnn_ptmu_omega_mreco->Fill(muon_0_p4->Pt(),weight);
                      h_omega_topo_dphi_btag_iso_rnn_ptmu_omega_mreco->Fill(muon_1_p4->Pt(),weight);
                      h_lep_phi_cuts->Fill(muon_0_p4->Phi(),weight);
                      h_tau_phi_cuts->Fill(muon_1_p4->Phi(),weight);
                      h_delta_phi_cuts->Fill(angle,weight);
                      h_ratio_ptjet_zpt_cuts->Fill(r_jpt_zpt,weight);
                      h_ratio_lpt_tpt_cuts->Fill(r_lpt_tpt,weight);


                      h_reco_mass_topo_dphi_btag_iso_rnn_ptmu_omega_mreco->Fill(inv_mass,weight);
                      h_Z_pt_reco_cuts_inside->Fill(Z_pt,weight);
                      if (weight!=1){
                        h_Z_pt_truth_cuts_inside->Fill(truth_z_pt/1000,weight);
                      }

                      //TAU PT CUT
                      if (cuts[7]==1){
                        h_met_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(met_reco_p4->Pt(),weight);
                        h_jet_n_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(n_jets, weight);
                        h_lep_pt0_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(muon_0_p4->Pt(),weight);
                        h_omega_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(muon_1_p4->Pt(),weight);
                        h_lep_phi_cuts_tpt->Fill(muon_0_p4->Phi(),weight);
                        h_tau_phi_cuts_tpt->Fill(muon_1_p4->Phi(),weight);
                        h_delta_phi_cuts_tpt->Fill(angle,weight);
                        h_ratio_ptjet_zpt_cuts_tpt->Fill(r_jpt_zpt,weight);
                        h_ratio_lpt_tpt_cuts_tpt->Fill(r_lpt_tpt,weight);


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

                        h_reco_mass_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(inv_mass,weight);
                        h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt_inside->Fill(muon_1_p4->Pt(),weight);
                        h_Z_pt_reco_cuts_tpt_inside->Fill(Z_pt,weight);
                        if (weight!=1){
                          h_Z_pt_truth_cuts_tpt_inside->Fill(truth_z_pt/1000,weight);
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

    h_n_conversion_tracks->Write();
    h_n_core_tracks->Write();
    h_n_isolation_tracks->Write();
    h_n_conversion_tracks_cuts->Write();
    h_n_core_tracks_cuts->Write();
    h_n_isolation_tracks_cuts->Write();
    h_n_conversion_tracks_cuts_tpt->Write();
    h_n_core_tracks_cuts_tpt->Write();
    h_n_isolation_tracks_cuts_tpt->Write();
    h_n_tracks->Write();
    h_n_tracks_cuts->Write();
    h_n_tracks_cuts_tpt->Write();
}

#endif // End header guard