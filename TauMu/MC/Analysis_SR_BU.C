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
    //angles
    double angle_l_MET=del_phi(muon_0_p4->Phi(),met_reco_p4->Phi());
    double angle_tau_MET=del_phi(tau_0_p4->Phi(),met_reco_p4->Phi());
    double angle=del_phi(tau_0_p4->Phi(),muon_0_p4->Phi());

    bool inside= angle==(angle_l_MET+angle_tau_MET); //ANGLE BEING USED pi/2 AND 2.0943
    bool outside_lep= angle_l_MET<angle_tau_MET &&  angle!=(angle_l_MET+angle_tau_MET) && cos(angle_l_MET)>0;
    bool outside_tau= angle_l_MET>angle_tau_MET && angle!=(angle_l_MET+angle_tau_MET) && cos(angle_tau_MET)>0;
    
    bool signal_events = inside || outside_lep || outside_tau;
    
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
    vector<double> failed_events={715888938,225667038,502222124,536424561,596790972,728061509,1213009699,1587309123,1648992409,1671963563,1676738974,1702340828,2178118669,2223265953,1982528803,2011473566,2282017251,1149150357,1153502986,1307528130,1994468731,749068361,939909645,1033666998,1114365856,1123693253,1141556643,1541937552,1583390303,490619994,611743991,511515831,543918284,775580802,2700722853,2188035275,2411104609,745919025,881424003,1292650430,1483625746,1523363138,1887881123,2239786663,2306603837,2426652677,2475054872,841395667,1106058595,1535609605,1631942763,571470114,389917323,590626406,910190092,914547032,983490852,2018663089,1341399155,1333529380,1504694896,1971677122,1865786909,2015382793,2161986723,2402637876,2818163973,523149346,701986341,1103329553,1050659063,2199671696,1985586803,223690287,266905528,1210739066,1497183146,1813576586,2077639772,2125336710,2140946412,2176619907,2007074107,3092489284,3566105196,3811466960,3984949815,1968131462,2465874986,1551706669,1652012610,1725437083,1886520848,2021445529,2051078605,2412551383,2543342363,1502648693,1515492454,1386258507,2445776094,2454283757,1900271558,1699880232,1210162750,554508782,1226633439,1710833474,1747116153,1878665239,2043974344,1232408794,3139251553,609809636,617601757,1695868909,316725503,519566139,712707206,1121762389,1205795078,3250268905,1492993413,318640554,424164963,638404669,934141595,1119167733,1122319165,1412270474,1951059207,808388235,825197303,2723042543,3053916128,1266988804,1490798226,582267257,3358058633,2594772057,1578968390,489134807,1038210782,1824945564,1717170078,1822786756,2403156978,1160057508,2560065944,2717738470,2762207173,2793763863,2846670464,2291992951,2302004463,842934848,1333239051,1426664346,1457990427,921977804,2127730208,2279545555,2350752803,1747066523,1754105558,1499573446,897226059,911241029,1665350017,2635869773,1181638478,1303642556,1098809430,446524245,1354828854,3333857042,3357536255,3452893598,1930638480,1956017490,2069601870,1345641143,275619809,369720260,406509436,430893492,682661008,716753907,826856749,927970045,1005888564,1484615758,1558893446,1689629060,2133547858,2356844080,2333528479,2349870612,1104619794,1136673666,1176192506,1560992983,567210955,1348947960,1716493782,1748309810,2380368539,2535133540,378602694,757706762,921403428,926650860,237867787,1226076160,491029616,544449581,615208251,986417045,1066232335,1065161686,1110807428,1193905729,1200612007,1292563081,1357289434,1411696686,2002220022,940665550,1150871044,1529638529,667234830,710424809,845869904,989600383,1260653734,1698672600,475246821,492364885,583021473,781881447,1828756657,2620137597,675772822,687204748,822144544,866853494,974686655,1152685372,1239099378,1372205037,1726674011,2431753151,2463397216,2858841847,3111881885,1522338166,1729943540,1931589384,2025203789,748169050,787945152,798546373,1202449507,1306702157,1446970628,1960617917,2761567860,2571045615,1997182664,2120420918,1072695703,1084477054,1191050981,1277612378,1324655436,1373251890,1509979957,1541254604,1127847534,1212311393,1450412408,1728053553,1829036544,459871106,539095901,830108972,2163478251,2407584354,2546581161,2577280915,2824007770,798895548,1012319981,1034629831,1120781233,1849077673,276549617,382797479,439514422,795734256,925399360,1237482315,1247608843,389273718,742926887,794682335,858964921,1311345552,1321256258,1509364889,1811331145,1928678444,420058353,770751786,803052684,1235849652,592920610,722021278,1237429943,2342626790,2556351094,2619434222,2832874965,1741422338,2048085114,2257363972,2061952453,461554365,1604768958,1722136886,421985934,967811568,1197029044,1831109674,2625327167,435936153,653150728,866339288,924962634,1524891724,1912592988,1938942169,2229264294,2020052647,293217318,675205874,556701744,591931585,1218298878,1359959565,1796520729,898438358,1253906820,1319764927,2319850396,2077457675,2208424818,476531843,512055446,705789969,727519947,830944300,897398856,360204450,935944132,1029888645,1105087510,1187170219,1423316843,1047965910,1380326616,1471127873,612192621,1970551089,2411532866,2503198392,2522321320,2537240360,2535987701,2888477997,2979828637,764163374,1069201431,955842896,1478431479,1778592441,1399615848,2241886230,2814443571,2854014286,3097782824,3530468410,2127968342,2716796277,2775550802,754695451,1750772794,1946415164,2269543670,1964654061,1490998204,1533693896,1547525103,1713983108,872387103,916470471,422727147,816782361,1164948199,3689738214,196309885,419726948,457619123,618755821,780811622,868836941,882679246,1006874606,1062024188,1179692163,1557864199,820202059,1300992512,1493354047,978115392,1019503425,1079348881,1089004486,1366561491,1374314534,539279304,745433163,748116436,1745831635,2861538091,3189451135,3641649282,3890956448,3975699515,3981073260,1954201093,492209431,943071317,1184741729,1258801932,1304373284,1386294509,1429497472,2205761341,2021924122,2109414494,2132070135,2211153733,775686670,825632395,848093239,920143888,1325037448,1732625998,1857625336,2680768640,1277011306,3548487571,2554211509,1002157713,1546648994,1793071291,1878361639,1946352430,2243598344,905797751,1858502758,2387024870,2809793184,2440874830,3492533972,278831000,833536484,968077950,1072792256,1168189623,1583074606,1622452761,2001507687,2129193617,2152772079,1180584501,1254716221,1585042445,1721177408,2374205603,2453607168,2477809515,2525760890,2745588201,3197009642,893925299,1009263674,1131891989,461224375,492557492,696922789,864669789,1030815279,1149307426,2058739655,2094486102,2432768406,2431848372,2459033088,2495219956,1049128648,1147583566,1363271127,1792492824,1829001500,2388313848,2410530446,1482102653,1905706862,2851185823,2895575567,3463462556,3517908374,2328384757,2675802629,1463937424,1924784735,1954176875,1961964426,2010014597,2313829158,2529043155,2590499969,2602369507,550743393,667273693,1889887083,1931554204,2131564786,2683331515,806777275,3426624052,3439999380,2727925212,1619710904,2072976363,2171506211,2380160984,166538341,633940610,755350351,1117949085,267999061,574451020,3564454066,635825545,776362813,785952525,1232967917,2417880816,3093022952,592365406,868229668,1009692995,1519270369,2054864482,2059715429,4923960142,5128992049,4504795731,4511189665,846711354,2277385488,2324065861,1283668327,2693522081,3084162433,3164052988,3239052456,3782107293,3813137506,3921515275,3946959382,3988552744,381097260,767857423,1267382672,1446025888,1902521015,1009785549,1737734743,1420403715,493711605,558054357,621222676,698961807,1035142864,1201403466,1322155339,1824557097,1905243299,1920335948,2207387193,45281900,586149362,837801371,1564110587,510737795,441883785,1655253473,978127516,983477951,1370456256,1644510897,1713888478,556152835,621605958,883005161,1084968684,1528301178,2428229933,2124043730,1577556400,1598000366,2705555655,2826111968,3258096810,3389200070,4341645641,2438530022,1258082105,1400107553,1562306710,1679873315,602733862,408643020,2650103744,1803004885,829747454,795278210,801773778,812419550,1809867456,2378968283,3120731881,3285499693,1222169811,1952650289,1957353060,1344672113,1703907985,2591981266,2644697237,2256785933,429690465,449280471,556677346,927534540,1043462897,1052091972,1495276506,1568265454,2923284548,3068120704,2142071065,2171977411,2498842689,2313281066,1983452387,2504206824,2590775781,988251220,1117570794,1191907681,1219159585,1355502110,1435501049,1838294264,2409773662,2419080620,2680013977,2711378666,2881113587,2986318910,3053866773,992334690,3317153638,3441884143,3500439862,3521858250,3561854284,2220960176,3040605886,3511827420,3809887641,3865584512,140503407,541738529,339215964,723511780,948297466,1015188091,1033628199,1659149165,1318714205,1358515701,2354983620,2388815183,2822790936,2896972149,3228138687,3442252661,3633723161,4212071436,4344675996,767450234,3376626892,3618067725,1587794691,1628901457,2080893673,2863246734,467449858,579784799,657720424,1125425604,1760241392,1766945848,1210972808,1383275111,3479082222,201169014,302593951,1156160596,919870090,998264356,1044307455,661021820,706047522,1234399788,1033687410,1164287220,1583884719,1672397540,3200158732,1583663538,2039130591,2045957153,771351311,816823414,1905837242,2093496748,2199641454,2516459239,812091987,1741831648,1888811789,2199221619,1227952617,566621644,989522079,772968359,157404250,642294974,1457741097,2633969561,501547554,652707769,1022258317,1042608579,1389484972,575784988,713071088,2125954823,30630878,183231385,521153200,714506968,770820970,929369134,781866583,382956370,531889508,532246811,661896541,696554222,768537116,1350129353,1403743284,1094964111,1348791641,256929130,600103816,1166249070,1326703263,1590954517,438679899,1205281335,1466953263,285568085,1874505461,1503746515,797890387,541158624,1372612099,1180508061,592350144,747790573,843663465,889899670,1158324039,446238188,326571114,1376617962,1660624424,326131677,474531024,737116211,755142241,996991449,1045662926,1277770854,1353233742,1475873701,835525645,908380822,1074560204,1709979430,2508604512,3946528141,4038180329,4219179221,3259873360,3767622853,3849497746,1866803450,2054392199,2128657745,2474076214,2504895036,917289810,927290123,952063411,989240828,1105770493,1520814747,587757636,1016033984,1238908654,1105224919,1111483263,686548099,1486427870,1028646058,1268668461,499194444,499733193,636983320,688124509,772301744,790831477,1075714464,1079046661,1146654975,1646405157,2204946911,2406884403,1726665437,919135612,2938786200,3953195203,4269917874,458578398,606629763,761526935,817412136,821454640,1042187905,1086922352,1614329360,1686756979,1126575438,1354455604,728460769,752270697,1030608584,1032275695,1481314804,358965987,638937342,736354216,4592464397,917565730,1057549354,142528819,269896409,277761026,4006722892,770828476,815981555,778808070,904376141,692470425,2171457519,2241149156,3360790666,1039599765,1080554449,1236473852,1245602026,3489690757,2001615390,3078839537,3125329713,1188499022,1227814808,1507617010,1525011648,1597804381,2024174849,2380746453,4766071989,1345696748,271469767,294222503,385807878,458925411,1834501535,1944033773,2213906706,
          1828504923,2977081368,519588036,586391778,585701465,627853411,737540617,1015427818,1040761341,1090929896,1165597345,1457876711,1145611173,1566420092,1700974682,2099328057,401914627,608338017,725699882,792280655,1358262406,2806083475,759723685,529348936,594251439,588579463,742769795,1553441678,1664491614,1224224555,1267236161,1613206089,954914899,2747515948,860626931,1194216655,1354130117,1437781958,1508820326,3551601737,3568938295,900598362,1105649801,1803126459,1930665124,1982236451,2114387336,2165928626,1228083998,1712401157,931104654,1206999538,1305822490,1316347311,1377315930,1885068666,1684498385,672184491,1416132389,1857786719,1931623611,445900458,1345315809,1368164954,1478784310,1635583204,2143343244,1081667329,1830568922,2120463325,2262130780,2275950026,670971184,657616112,1708446855,1739274865,2430905218,1762421011,1837755291,1982686839,3239869663,4059867886,2755345090,2792903305,2960224339,2971083996,2979988669,436535009,676157860,1536118687,1808444482,2308554565,2515245267,1129798930,1618149450,2162899133,2967810754,1850847650,1157906843,1882501401,1894137130,2159125784,2419789113,2500139982,540983270,269076289,363865161,479993287,559128442,642615327,687865520,1207662554,1214307188,1295552833,1610613254,408677933,804213728,277813015,924042866,936688510,995213904,1271553384,1292576805,1217794758,2588079607,1180677266,2344310416,2370340954,2610139591,1219376890,1233830987,1335943682,2023452189,264444042,471786287,803050134,1176377004,1195114057,2978971782,3003128855,2433826471,2467315074,2624780147,2660727232,1528944208,1968691966,2540098849,1051322355,1056495928,1064631590,1098478621,1018201256,291060646,2265270471,2479078624,2622793343,2775918814,1581296402,1694481516,804328634,1370854934,473810279,1565051703,1574773672,1431656221,1465638052,1112371566,1047351890,634175370,744673562,768764522,992337862,1023677902,1336122220,1342954267,1377959857,1973741625,2000920889,2018573823,1298130173,2267048205,508562382,2368671462,3589590028,759837680,914168068,934115435,943362571,1018691153,1731032472,286481324,400961091,630552168,375099498,704042934,702594953,385564926,995671905,1270533283,914020579,1666560995,2060601628,1337656765,2513309511,2341213305,3087527333,192933652,273424426,287480466,444805256,513062426,2906367722,2911355854,2951076944,3392653814,2782936245,2863415672,2344521275,1804805846,2428969534,2908030317,3204254647,3053997039,3262498106,294479382,443357122,467878215,972003615,1671291365,438973711,464108771,2950103722,1811373543,1852101709,2055125455,2420697306,2864510253,2948648060,3020112517,1890120249,2370620100,2560757908,949316393,400128708,1093597630,1202776234,1202288368,2042900498,1075840444,2232834177,2304489515,2541305660,2872996331,452356049,468808811,1906887193,853682617,1318689875,548032909,641886834,879756290,165984063,548011793,640272672,697968997,707192725,943121465,1064192277,1170128369,1314185649,1328018321,1422590836,1553385156,1577680845,2041631024,2184904870,2193586240,848878929,2576146265,2596699885,1578811479,581931164,2129861649,909905487,1407023378,3088430296,2297972173,2475618572,2606455879,2870170952,3261147409,3290684730,2580482298,2861224202,3251664563,3661442127,3570021588,3290475665,1140926938,1403184244,1400753715,1528674847,1775193295,1885777549,1886153365,1911773520,2092152057,2098727844,2196980373,2251278198,2694647835,2718162398,2732872253,930363988,2601077224,2872447402,3242410038,3458636707,3758886039,617289657,631919503,803720829,1215442821,1457325592,1527615436,2405171915,2449674333,2451918827,2762127755,2808020153,564204574,566451130,665272245,1228569754,1302839596,3026225928,608579673,1905364208,2894452162,2950335661,488976323,706912996,740790616,869258775,1033761846,1051671940,1255375623,226208707,776370268,817951685,684663034,686015221,1307268684,352330886,569858145,1368184161,1913002356,1961795100,530116002,817353596,1472788487,3601294428,1771629496,1168025468,1598040657,1879868624,1082164206,1151315738,1162341109,1290573998,1764175329,2246990520,2457458956,1948853394,2002045103,2122014496,2156391950,2218292044,2234573867,2628961570,2891737747,708865918,807302843,810488356,880718899,1550589858,2006393650,1363332954,1805139765,1966849304,2231219017,2592153561,2115210134,2302872099,2407526235,1696033214,2272648883,1434563768,1176631151,1688242796,1759168948,1213196737,1672388705,1714867547,1962066033,2533564719,3873653192,4014583645,3869820586,928663808,1796987516,2011825756,2217708904,2672095063,3292965594,852491101,956978877,1163906790,503851677,603855801,1129313875,580358309,835273974,535166639,683527078,1465906021,2059165481,2765173395,3126139822,1748184606,2202843560,3008645771,518830079,672029827,999195436,1036905292,1048826123,1418493772,1467138204,1545437227,379232856,937812117,983482570,1278633797,3267895084,2899152218,2172217146,1073087694,1098939051,1194654253,1294810479,1493041966,1583787740,970638017};
    ofstream interesting;
    if (std::count(failed_events.begin(),failed_events.end(),event_number)){
      interesting.open("Events_in_v19_failing_v22_before_basic_selection.csv", ios::out | ios::app);
      interesting << to_string(tau_0_p4->Pt())+", "+to_string(tau_0_p4->Eta())+", "+to_string(tau_0_p4->Phi())+", "+to_string(qtau)+", "+to_string(tau_0_jet_rnn_score_trans)+", "+to_string(n_taus)+", ";
      interesting<< to_string(muon_0_p4->Pt())+", "+to_string(muon_0_p4->Eta())+", "+to_string(muon_0_p4->Phi())+", "+to_string(ql)+", "+to_string(muon_0_iso_FCTightTrackOnly_FixedRad)+", "+to_string(n_muons)+", "+to_string(n_electrons)+", ";
      interesting << to_string(met_reco_p4->Pt())+", "+to_string(met_reco_p4->Phi())+", ";
      interesting << to_string(angle)+", "+to_string(angle_tau_MET)+", "+to_string(angle_l_MET)+", "+to_string(n_bjets_MV2c10_FixedCutBEff_85)+", "+to_string(event_number)+", "+to_string(run_number);
      interesting << event_rejected(trigger_decision,trigger_match,lepton_id,ql!=qtau,angle<3*pi/4,signal_events);
    }
      interesting.close();
    if (n_muons==1 && n_taus_rnn_loose==1 && weight > -190){
      
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
      // run_number==351160 | run_number==351832 | run_number==355877
      //2018={625604344,626232310,626008879,626722580,626450893,624588822,624597227,627166550,624576213,625166887,624918813,624905100,623803415,623927490,624037196,624000168,623737423,629931934,629863982,629976159}
      //2017={1375590014,1375814985,1376849034,1374660833,1376638366,1375032749,1375401204,1375525084,1375804607,1375352332,1376210680,1378710426,1379614088,1378129913,1378121206,1377101599,1376953054,1377236717,1378914387,1378114405}
      //2015={1693590404,1693795330,1694075939,1696848811,1705101838,1710092352,1724360628,1732516934,1733848321,1733446518,1732281166,1734444786,1737861557,1737584687,1743667603,1741725300,1743797175,1740899942,1740158364}

      /*cout << event_number << "\n";
      vector<double> eventos={1693590404,1693795330,1694075939,1696848811,1705101838,1710092352,1724360628,1732516934,1733848321,1733446518,1732281166,1734444786,1737861557,1737584687,1743667603,1741725300,1743797175,1740899942,1740158364};
      ofstream outfile;
      if (std::count(eventos.begin(),eventos.end(),event_number)){
        if (!(ql!=qtau && angle<3*pi/4 && trigger_decision && lepton_id && trigger_match && signal_events)){
          //cout << event_rejected(trigger_decision,trigger_match,lepton_id,angle<3*pi/4,ql!=qtau,signal_events);
          outfile.open("Failed_events.csv", ios::out | ios::app);
          outfile << to_string(tau_0_p4->Pt())+", "+to_string(tau_0_p4->Eta())+", "+to_string(tau_0_p4->Phi())+", "+to_string(qtau)+", "+to_string(tau_0_jet_rnn_score_trans)+", "+to_string(n_taus)+", ";
          outfile << to_string(muon_0_p4->Pt())+", "+to_string(muon_0_p4->Eta())+", "+to_string(muon_0_p4->Phi())+", "+to_string(ql)+", "+to_string(muon_0_iso_FCTightTrackOnly_FixedRad)+", ";
          outfile << to_string(met_reco_p4->Pt())+", "+to_string(met_reco_p4->Phi())+", ";
          outfile << to_string(angle)+", "+to_string(angle_tau_MET)+", "+to_string(angle_l_MET)+", "+to_string(n_bjets_MV2c10_FixedCutBEff_85)+", "+to_string(event_number);
          outfile << event_rejected(trigger_decision,trigger_match,lepton_id,ql!=qtau,angle<3*pi/4,signal_events);

        }
      }
      outfile.close();*/
      if (ql!=qtau && angle<3*pi/4 && trigger_decision && lepton_id && trigger_match ) {
 
        h_delta_phi_second_stage->Fill(angle,weight);
        //topology
        

        if ( signal_events){
          // RECO mass
          double cot_lep=1.0/tan(muon_0_p4->Phi());
          double cot_tau=1.0/tan(tau_0_p4->Phi());
          double pt_tau_nu=(met_reco_p4->Pt()*cos(met_reco_p4->Phi())-met_reco_p4->Pt()*sin(met_reco_p4->Phi())*cot_lep)/(cos(tau_0_p4->Phi())-sin(tau_0_p4->Phi())*cot_lep);
          double pt_lep_nu=(met_reco_p4->Pt()*cos(met_reco_p4->Phi())-met_reco_p4->Pt()*sin(met_reco_p4->Phi())*cot_tau)/(cos(muon_0_p4->Phi())-sin(muon_0_p4->Phi())*cot_tau);

          double reco_mass=sqrt(2*muon_0_p4->Pt()*tau_0_p4->Pt()*(cosh(muon_0_p4->Eta()-tau_0_p4->Eta())-cos(muon_0_p4->Phi()-tau_0_p4->Phi()))+2*muon_0_p4->Pt()*pt_tau_nu*(cosh(muon_0_p4->Eta()-tau_0_p4->Eta())-cos(muon_0_p4->Phi()-tau_0_p4->Phi()))+2*tau_0_p4->Pt()*pt_lep_nu*(cosh(tau_0_p4->Eta()-muon_0_p4->Eta())-cos(tau_0_p4->Phi()-muon_0_p4->Phi()))+2*pt_lep_nu*pt_tau_nu*(cosh(muon_0_p4->Eta()-tau_0_p4->Eta())-cos(muon_0_p4->Phi()-tau_0_p4->Phi())));

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
          if (angle==(angle_l_MET+angle_tau_MET) && (angle_l_MET<angle_tau_MET)) {
            omega=1.0-(angle_l_MET)/(angle);
          }
          if (angle==(angle_l_MET+angle_tau_MET) && (angle_l_MET>angle_tau_MET)) {
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
          if (std::count(failed_events.begin(),failed_events.end(),event_number)){
            interesting_events.open("Events_in_v19_failing_v22.csv", ios::out | ios::app);
            interesting_events << print(cuts);
          }
          interesting_events.close();*/
          // Cuts relative to otherwise
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
          }
          if (outside_lep) {
            h_reco_mass_met_outside_topo->Fill(reco_mass_outside,weight);
          }
          if (outside_tau){
            h_reco_mass_met_outside_topo->Fill(reco_mass_outside,weight);
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
            }
            if (outside_lep) {
              h_reco_mass_met_outside_topo_dphi->Fill(reco_mass_outside,weight);
            }
            if (outside_tau){
              h_reco_mass_met_outside_topo_dphi->Fill(reco_mass_outside,weight);
            }
          
            // B TAGGING CUT
            if (cuts[1]==1 || n_jets==0) {
              h_met_topo_dphi_btag->Fill(met_reco_p4->Pt(),weight);
              h_lep_pt0_topo_dphi_btag->Fill(muon_0_p4->Pt(),weight);
              h_lep_pt1_topo_dphi_btag->Fill(tau_0_p4->Pt(),weight);
              h_omega_topo_dphi_btag->Fill(omega,weight);

              if (inside) {
                h_reco_mass_topo_dphi_btag->Fill(reco_mass,weight);
              }
              if (outside_lep) {
                h_reco_mass_met_outside_topo_dphi_btag->Fill(reco_mass_outside,weight);
              }
              if (outside_tau){
                h_reco_mass_met_outside_topo_dphi_btag->Fill(reco_mass_outside,weight);
              }

              // ISOLATION CUT
              if (cuts[2]==1) {
                h_met_topo_dphi_btag_iso->Fill(met_reco_p4->Pt(),weight);
                h_lep_pt0_topo_dphi_btag_iso->Fill(muon_0_p4->Pt(),weight);
                h_lep_pt1_topo_dphi_btag_iso->Fill(tau_0_p4->Pt(),weight);
                h_omega_topo_dphi_btag_iso->Fill(omega,weight);

                if (inside) {
                  h_reco_mass_topo_dphi_btag_iso->Fill(reco_mass,weight);
                }
                if (outside_lep) {
                  h_reco_mass_met_outside_topo_dphi_btag_iso->Fill(reco_mass_outside,weight);
                }
                if (outside_tau){
                  h_reco_mass_met_outside_topo_dphi_btag_iso->Fill(reco_mass_outside,weight);
                }

                // RNN SCORE
                if (cuts[3]==1) {
                  h_met_topo_dphi_btag_iso_rnn->Fill(met_reco_p4->Pt(),weight);
                  h_lep_pt0_topo_dphi_btag_iso_rnn->Fill(muon_0_p4->Pt(),weight);
                  h_lep_pt1_topo_dphi_btag_iso_rnn->Fill(tau_0_p4->Pt(),weight);
                  h_omega_topo_dphi_btag_iso_rnn->Fill(omega,weight);

                  if (inside) {
                    h_reco_mass_topo_dphi_btag_iso_rnn->Fill(reco_mass,weight);
                  }
                  if (outside_lep) {
                    h_reco_mass_met_outside_topo_dphi_btag_iso_rnn->Fill(reco_mass_outside,weight);
                  }
                  if (outside_tau){
                    h_reco_mass_met_outside_topo_dphi_btag_iso_rnn->Fill(reco_mass_outside,weight);
                  }

                  // TRANSVERSE MASS LEPTON CUT
                  if (cuts[4]==1) {
                    h_met_topo_dphi_btag_iso_rnn_ptmu->Fill(met_reco_p4->Pt(),weight);
                    h_lep_pt0_topo_dphi_btag_iso_rnn_ptmu->Fill(muon_0_p4->Pt(),weight);
                    h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu->Fill(tau_0_p4->Pt(),weight);
                    h_omega_topo_dphi_btag_iso_rnn_ptmu->Fill(omega,weight);

                    if (inside) {
                      h_reco_mass_topo_dphi_btag_iso_rnn_ptmu->Fill(reco_mass,weight);
                    }
                    if (outside_lep) {
                      h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu->Fill(reco_mass_outside,weight);
                    }
                    if (outside_tau){
                      h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu->Fill(reco_mass_outside,weight);
                    }


                      // OMEGA CUT
                    if (cuts[5]==1) {
                      h_met_topo_dphi_btag_iso_rnn_ptmu_omega->Fill(met_reco_p4->Pt(),weight);
                      h_lep_pt0_topo_dphi_btag_iso_rnn_ptmu_omega->Fill(muon_0_p4->Pt(),weight);
                      h_omega_topo_dphi_btag_iso_rnn_ptmu_omega->Fill(omega,weight);


                      if (inside) {
                        h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_inside->Fill(tau_0_p4->Pt(),weight);
                        h_reco_mass_topo_dphi_btag_iso_rnn_ptmu_omega->Fill(reco_mass,weight);
                      }
                      if (outside_lep) {
                        h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_outside->Fill(tau_0_p4->Pt(),weight);
                        h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega->Fill(reco_mass_outside,weight);
                      }
                      if (outside_tau){
                        h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_outside->Fill(tau_0_p4->Pt(),weight);
                        h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega->Fill(reco_mass_outside,weight);
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
                          if (weight!=1){
                            h_Z_pt_truth_cuts_inside->Fill(truth_z_pt/1000,weight);
                          }
                        }
                        if (outside_lep) {
                          h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega_mreco->Fill(reco_mass_outside,weight);
                          h_Z_pt_reco_cuts_outside->Fill(Z_pt,weight);
                          if (weight!=1){
                            h_Z_pt_truth_cuts_outside->Fill(truth_z_pt/1000,weight);
                          }  
                        }
                        if (outside_tau){
                          h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega_mreco->Fill(reco_mass_outside,weight);                      
                          h_Z_pt_reco_cuts_outside->Fill(Z_pt,weight);
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

                          /*ofstream outfile;
                          outfile.open("Failed_events_V22.csv", ios::out | ios::app);
                          outfile << to_string(tau_0_p4->Pt())+", "+to_string(tau_0_p4->Eta())+", "+to_string(tau_0_p4->Phi())+", "+to_string(qtau)+", "+to_string(tau_0_jet_rnn_score_trans)+", "+to_string(n_taus)+", ";
                          outfile << to_string(muon_0_p4->Pt())+", "+to_string(muon_0_p4->Eta())+", "+to_string(muon_0_p4->Phi())+", "+to_string(ql)+", "+to_string(muon_0_iso_FCTightTrackOnly_FixedRad)+", "+to_string(n_muons)+", "+to_string(n_electrons)+", ";
                          outfile << to_string(met_reco_p4->Pt())+", "+to_string(met_reco_p4->Phi())+", ";
                          outfile << to_string(angle)+", "+to_string(angle_tau_MET)+", "+to_string(angle_l_MET)+", "+to_string(n_bjets_MV2c10_FixedCutBEff_85)+", "+to_string(event_number)+", "+to_string(run_number);
                          outfile << event_rejected(trigger_decision,trigger_match,lepton_id,ql!=qtau,angle<3*pi/4,signal_events);
                          outfile.close();*/

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
                            if (weight!=1){               
                              h_tau_matched_after_0_to_90->Fill(tau_0_truth_isHadTau,weight);
                              h_Z_pt_truth_cuts_tpt_inside->Fill(truth_z_pt/1000,weight);
                            }
                          }
                          if (outside_lep) {
                            h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(reco_mass_outside,weight);
                            h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt_outside->Fill(tau_0_p4->Pt(),weight);
                            h_Z_pt_reco_cuts_tpt_outside->Fill(Z_pt,weight);
                            if (weight!=1){
                              h_tau_matched_after_outside->Fill(tau_0_truth_isHadTau,weight);           
                              h_Z_pt_truth_cuts_tpt_outside->Fill(truth_z_pt/1000,weight);
                            }
                          }
                          if (outside_tau){
                            h_reco_mass_met_outside_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(reco_mass_outside,weight);
                            h_lep_pt1_topo_dphi_btag_iso_rnn_ptmu_omega_mreco_tpt_outside->Fill(tau_0_p4->Pt(),weight);
                            h_Z_pt_reco_cuts_tpt_outside->Fill(Z_pt,weight);
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