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


void CLoop::Book(double lumFactor) {
    double pi=TMath::Pi();

    // VARIABLES ONLY ONCE

    h_lep_n = new TH1F("lep_n","Number of leptons",3,0,3);
    h_lep_eta = new TH1F("lep_eta","Eta value for lepton",30,-3,3);
    h_met_phi=new TH1F("MET phi","MET phi angle",40,-4,4);

    //VARIABLES FOLLOWED AFTER EACH CUT

    // Histograms for lepton 
    h_lep_pt0 = new TH1F("lep_pt0","Transverse momentum of lep1",200,0,200);
    h_lep_pt0_btag = new TH1F("lep_pt0_btag","Transverse momentum of lep_btag",200,0,200);
    h_lep_pt0_btag_iso = new TH1F("lep_pt0_btag_iso","Transverse momentum of lep_btag_iso",200,0,200);
    h_lep_pt0_btag_iso_rnn = new TH1F("lep_pt0_btag_iso_rnn","Transverse momentum of lep_btag_iso_rnn",200,0,200);
    h_lep_pt0_btag_iso_rnn_ptmu = new TH1F("lep_pt0_btag_iso_rnn_ptmu","Transverse momentum of lep_btag_iso_rnn_ptmu",200,0,200);
    h_lep_pt0_btag_iso_rnn_ptmu_omega = new TH1F("lep_pt0_btag_iso_rnn_ptmu_omega","Transverse momentum of lep_btag_iso_rnn_ptmu_omega",200,0,200);
    h_lep_pt0_btag_iso_rnn_ptmu_omega_mreco = new TH1F("lep_pt0_btag_iso_rnn_ptmu_omega_mreco","Transverse momentum of lep_btag_iso_rnn_ptmu_omega_mreco",200,0,200);
    h_lep_pt0_btag_iso_rnn_ptmu_omega_mreco_tpt = new TH1F("lep_pt0_btag_iso_rnn_ptmu_omega_mreco_tpt","Transverse momentum of lep_btag_iso_rnn_ptmu_omega_mreco_tpt",200,0,200);
    h_lep_pt0_btag_iso_rnn_omega_mreco_tpt = new TH1F("lep_pt0_btag_iso_rnn_omega_mreco_tpt","Transverse momentum of lep_btag_iso_rnn_ptmu_omega_mreco_tpt",200,0,200);

    h_lep_phi= new TH1F("lep_phi","Lepton phi angle",64,-3.2,3.2);
    h_lep_phi_cuts= new TH1F("lep_phi_cuts","Lepton phi angle after cuts",64,-3.2,3.2);
    h_lep_phi_cuts_tpt= new TH1F("lep_phi_cuts_tpt","Lepton phi angle after cuts_tpt",64,-3.2,3.2);
    // Histograms for tau 
    h_lep_pt1 = new TH1F("tau_pt","Transverse momentum of lep1",200,0,200);
    h_lep_pt1_btag = new TH1F("tau_pt_btag","Transverse momentum of tau_btag",200,0,200);
    h_lep_pt1_btag_iso = new TH1F("tau_pt_btag_iso","Transverse momentum of tau_btag_iso",200,0,200);
    h_lep_pt1_btag_iso_rnn = new TH1F("tau_pt_btag_iso_rnn","Transverse momentum of tau_btag_iso_rnn",200,0,200);
    h_lep_pt1_btag_iso_rnn_ptmu = new TH1F("tau_pt_btag_iso_rnn_ptmu","Transverse momentum of tau_btag_iso_rnn_ptmu",200,0,200);
    h_lep_pt1_btag_iso_rnn_ptmu_omega_inside = new TH1F("tau_pt_btag_iso_rnn_ptmu_omega_inside","Transverse momentum of tau_btag_iso_rnn_ptmu_omega_inside",200,0,200);
    h_lep_pt1_btag_iso_rnn_ptmu_omega_outside = new TH1F("tau_pt_btag_iso_rnn_ptmu_omega_outside","Transverse momentum of tau_btag_iso_rnn_ptmu_omega_outside",200,0,200);
    h_lep_pt1_btag_iso_rnn_ptmu_omega_mreco_inside = new TH1F("tau_pt_btag_iso_rnn_ptmu_omega_mreco_inside","Transverse momentum of tau_btag_iso_rnn_ptmu_omega_mreco_inside",200,0,200);
    h_lep_pt1_btag_iso_rnn_ptmu_omega_mreco_outside = new TH1F("tau_pt_btag_iso_rnn_ptmu_omega_mreco_outside","Transverse momentum of tau_btag_iso_rnn_omega_mreco_outside",200,0,200);
    h_lep_pt1_btag_iso_rnn_ptmu_omega_mreco_tpt_inside = new TH1F("tau_pt_btag_iso_rnn_ptmu_omega_mreco_tpt_inside","Transverse momentum of tau_btag_iso_rnn_ptmu_omega_mreco_tpt_inside",200,0,200);
    h_lep_pt1_btag_iso_rnn_ptmu_omega_mreco_tpt_outside = new TH1F("tau_pt_btag_iso_rnn_ptmu_omega_mreco_tpt_outside","Transverse momentum of tau_btag_iso_rnn_omega_mreco_tpt_outside",200,0,200);

    h_tau_phi= new TH1F("tau_phi","Tau phi angle",64,-3.2,3.2);
    h_tau_phi_cuts= new TH1F("tau_phi_cuts","Tau phi angle after cuts",64,-3.2,3.2);
    h_tau_phi_cuts_tpt= new TH1F("tau_phi_cuts_tpt","Tau phi angle after cuts_tpt",64,-3.2,3.2);
    h_tau_nprongs=new TH1F("tau_nprongs","Number of charged tracks",4,0,4);
    h_tau_nprongs_cuts=new TH1F("tau_nprongs_cuts","Number of charged tracks after cuts",4,0,4);
    h_tau_nprongs_cuts_tpt=new TH1F("tau_nprongs_cuts_tpt","Number of charged tracks after cuts_tpt",4,0,4);

    // MET Histograms
    h_met = new TH1F("MET","Missing Transverse momentum",300,0,300);
    h_met_btag = new TH1F("MET_btag","Missing Transverse momentum_btag",300,0,300);
    h_met_btag_iso = new TH1F("MET_btag_iso","Missing Transverse momentum_btag_iso",300,0,300);
    h_met_btag_iso_rnn = new TH1F("MET_btag_iso_rnn","Missing Transverse momentum_btag_iso_rnn",300,0,300);
    h_met_btag_iso_rnn_ptmu = new TH1F("MET_btag_iso_rnn_ptmu","Missing Transverse momentum_btag_iso_rnn_ptmu",300,0,300);
    h_met_btag_iso_rnn_ptmu_omega = new TH1F("MET_btag_iso_rnn_ptmu_omega","Missing Transverse momentum_btag_iso_rnn_ptmu_mreco",300,0,300);
    h_met_btag_iso_rnn_ptmu_omega_mreco = new TH1F("MET_btag_iso_rnn_ptmu_omega_mreco","Missing Transverse momentum_btag_iso_rnn_ptmu_omega_mreco",300,0,300);
    h_met_btag_iso_rnn_ptmu_omega_mreco_tpt = new TH1F("MET_btag_iso_rnn_ptmu_omega_mreco_tpt","Missing Transverse momentum_btag_iso_rnn_ptmu_omega_mreco_tpt",300,0,300);

    // Invariant mass histograms
    // Non reco histos
    //Transeverse lepton mass
    h_trans_lepmet_mass = new TH1F("transverse_lepton_met_mass","transverse mass lepton MET system",300,0,300);
    h_trans_lepmet_mass_btag_iso_rnn_ptmu_omega_mreco = new TH1F("transverse_lepton_met_mass_btag_iso_rnn_ptmu_omega_mreco","transverse mass lepton MET system _btag_iso_rnn_ptmu_omega_mreco",300,0,300);
    h_trans_lepmet_mass_btag_iso_rnn_ptmu_omega_mreco_tpt = new TH1F("transverse_lepton_met_mass_btag_iso_rnn_ptmu_omega_mreco_tpt","transverse mass lepton MET system _btag_iso_rnn_ptmu_omega_mreco_tpt",300,0,300);

    // reco histos
    h_reco_mass = new TH1F("reco_mass","mass reconstructed with trick",300,0,300);
    h_reco_mass_btag = new TH1F("reco_mass_btag","mass reconstructed with trick_btag",300,0,300);
    h_reco_mass_btag_iso = new TH1F("reco_mass_btag_iso","mass reconstructed with trick_btag_iso",300,0,300);
    h_reco_mass_btag_iso_rnn = new TH1F("reco_mass_btag_iso_rnn","mass reconstructed with trick_btag_iso_rnn",300,0,300);
    h_reco_mass_btag_iso_rnn_ptmu = new TH1F("reco_mass_btag_iso_rnn_ptmu","mass reconstructed with trick_btag_iso_rnn_ptmu",300,0,300);
    h_reco_mass_btag_iso_rnn_ptmu_omega = new TH1F("reco_mass_btag_iso_rnn_ptmu_omega","mass reconstructed with trick_btag_iso_rnn_ptmu_omega",300,0,300);
    h_reco_mass_btag_iso_rnn_ptmu_omega_mreco = new TH1F("reco_mass_btag_iso_rnn_ptmu_omega_mreco","mass reconstructed with trick_btag_iso_rnn_ptmu_omega_mreco",300,0,300);
    h_reco_mass_btag_iso_rnn_ptmu_omega_mreco_tpt = new TH1F("reco_mass_btag_iso_rnn_ptmu_omega_mreco_tpt","mass reconstructed with trick_btag_iso_rnn_ptmu_omega_mreco_tpt",300,0,300);
    h_reco_mass_btag_iso_rnn_ptmu_omega_tpt = new TH1F("reco_mass_btag_iso_rnn_ptmu_omega_tpt","mass reconstructed with trick_btag_iso_rnn_ptmu_omega_tpt",300,0,300);

    h_reco_mass_met_outside = new TH1F("reco_mass_met_outside","mass reconstructed with trick MET outside",300,0,300);
    h_reco_mass_met_outside_btag = new TH1F("reco_mass_met_outside_btag","mass reconstructed with trick MET outside_btag",300,0,300);
    h_reco_mass_met_outside_btag_iso = new TH1F("reco_mass_met_outside_btag_iso","mass reconstructed with trick MET outside_btag_iso",300,0,300);
    h_reco_mass_met_outside_btag_iso_rnn = new TH1F("reco_mass_met_outside_btag_iso_rnn","mass reconstructed with trick MET outside_btag_iso_rnn",300,0,300);
    h_reco_mass_met_outside_btag_iso_rnn_ptmu = new TH1F("reco_mass_met_outside_btag_iso_rnn_ptmu","mass reconstructed with trick MET outside_btag_iso_rnn_ptmu",300,0,300);
    h_reco_mass_met_outside_btag_iso_rnn_ptmu_omega = new TH1F("reco_mass_met_outside_btag_iso_rnn_ptmu_omega","mass reconstructed with trick MET outside_btag_iso_rnn_ptmu_omega",300,0,300);
    h_reco_mass_met_outside_btag_iso_rnn_ptmu_omega_mreco = new TH1F("reco_mass_met_outside_btag_iso_rnn_ptmu_omega_mreco","mass reconstructed with trick MET outside_btag_iso_rnn_ptmu_omega_mreco",300,0,300);
    h_reco_mass_met_outside_btag_iso_rnn_ptmu_omega_mreco_tpt = new TH1F("reco_mass_met_outside_btag_iso_rnn_ptmu_omega_mreco_tpt","mass reconstructed with trick MET outside_btag_iso_rnn_ptmu_omega_mreco_tpt",300,0,300);
    h_reco_mass_met_outside_btag_iso_rnn_ptmu_omega_tpt = new TH1F("reco_mass_met_outside_btag_iso_rnn_ptmu_omega_tpt","mass reconstructed with trick MET outside_btag_iso_rnn_ptmu_omega_tpt",300,0,300);
    // rnn Score histograms
    h_rnn_score_1prong = new TH1F("rnn_score_1prong","rnn score 1 track",100,0,1);
    h_rnn_score_1prong_btag_iso_ptmu_omega_mreco_tpt = new TH1F("rnn_score_1prong_btag_iso_ptmu_omega_mreco_tpt","rnn score_btag_iso_ptmu_omega_mreco_tpt 1 track",100,0,1);
    h_rnn_score_3prong = new TH1F("rnn_score_3prong","rnn score 3 track",100,0,1);
    h_rnn_score_3prong_btag_iso_ptmu_omega_mreco_tpt = new TH1F("rnn_score_3prong_btag_iso_ptmu_omega_mreco_tpt","rnn score_btag_iso_ptmu_omega_mreco_tpt 3 track",100,0,1);
    
    if (lumFactor!=1)
    {
      h_tau_matched = new TH1F("tau_matched","Tau truth matched",2,0,2);
      h_tau_matched_after_0_to_90 = new TH1F("tau_matched_after_0_to_90","Tau truth matched after selection 0 to 90",2,0,2);
      h_tau_matched_after_90_to_120 = new TH1F("tau_matched_after_90_to_120","Tau truth matched after selection 90 to 120",2,0,2);
      h_tau_matched_after_outside = new TH1F("tau_matched_after_outside","Tau truth matched after selection outside",2,0,2);
      h_tau_matched_after_outside_120 = new TH1F("tau_matched_after_outside_120","Tau truth matched after selection outside 120",2,0,2);
      h_weight_mc = new TH1F("weight_mc","lepton 1 isolation2",40000,-20000,20000);
      h_weight_total_cuts = new TH1F("weight_total_cuts","weight total",10000,-500,500);
      h_weight_total = new TH1F("weight_total","weight total",10000,-500,500);
      h_weight_mc_cuts = new TH1F("weight_mc_cuts","weight mc",40000,-20000,20000);
      h_sf_mu_trigger = new TH1F("sf_mu_trigger","Muon trigger scale factor",30,0.85,1.15);
      h_sf_mu_recoid = new TH1F("sf_mu_recoid","Muon reco and id scale factor",30,0.85,1.15);
      h_sf_mu_vertex = new TH1F("sf_mu_vertex","Muon vertex matching scale factor",30,0.85,1.15);
      h_sf_mu_isolation = new TH1F("sf_mu_isolation","Muon isolation scale factor",30,0.85,1.15);
      h_sf_mu_total = new TH1F("sf_mu_total","Muon total scale factor",30,0.85,1.15);
      h_Z_pt_truth_inside = new TH1F("Z_pt_truth_inside","Z_truth boson transverse momentum _inside",400,0,400);
      h_Z_pt_truth_cuts_inside = new TH1F("Z_pt_truth_cuts_inside","Z_truth boson transverse momentum _inside",400,0,400);
      h_Z_pt_truth_cuts_tpt_inside = new TH1F("Z_pt_truth_cuts_tpt_inside","Z_truth boson transverse momentum _inside_tpt",400,0,400);
      h_Z_pt_truth_outside = new TH1F("Z_pt_truth_outside","Z_truth boson transverse momentum _outside",400,0,400);
      h_Z_pt_truth_cuts_outside = new TH1F("Z_pt_truth_cuts_outside","Z_truth boson transverse momentum _outside",400,0,400);
      h_Z_pt_truth_cuts_tpt_outside = new TH1F("Z_pt_truth_cuts_tpt_outside","Z_truth boson transverse momentum _outside_tpt",400,0,400);
    }
    

    

    
    // Jet Number Histograms
    h_jet_n = new TH1F("jet_n","Eta value for lepton",10,-1,9);
    h_jet_n_btag_iso_rnn_ptmu_omega_mreco = new TH1F("jet_n_btag_iso_rnn_ptmu_omega_mreco","Eta value for lepton_btag_iso_rnn_ptmu_omega_mreco",10,-1,9);
    h_jet_n_btag_iso_rnn_ptmu_omega_mreco_tpt = new TH1F("jet_n_btag_iso_rnn_ptmu_omega_mreco_tpt","Eta value for lepton_btag_iso_rnn_ptmu_omega_mreco_tpt",10,-1,9);
    

    h_b_tag = new TH1F("b_tag","b taging variable",2,0,2);
    h_b_tag_iso_rnn_ptmu_omega_mreco_tpt = new TH1F("b_tag_iso_rnn_ptmu_omega_mreco_tpt","b taging variable_iso_rnn_ptmu_omega_mreco_tpt",2,0,2);


    // Isolation variables Histograms
    h_muon_0_iso_FCTightTrackOnly_FixedRad = new TH1F("muon_0_iso_FCTightTrackOnly_FixedRad","lepton 1 isolation",2,0,2);
    h_muon_0_iso_FCTightTrackOnly_FixedRad_btag_iso2_rnn_ptmu_omega_mreco_tpt = new TH1F("muon_0_iso_FCTightTrackOnly_FixedRad_btag_iso2_rnn_ptmu_omega_mreco_tpt","lepton isolation_btag_iso2_rnn_ptmu_omega_mreco_tpt",2,0,2);

    // Angular variable
    h_omega = new TH1F("omega","omega variable",60,-3.0,3.0);
    h_omega_btag = new TH1F("omega_btag","omega variable_btag",60,-3.0,3.0);
    h_omega_btag_iso = new TH1F("omega_btag_iso","omega variable_btag_iso",60,-3.0,3.0);
    h_omega_btag_iso_rnn = new TH1F("omega_btag_iso_rnn","omega variable_btag_iso_rnn",60,-3.0,3.0);
    h_omega_btag_iso_rnn_ptmu = new TH1F("omega_btag_iso_rnn_ptmu","omega variable_btag_iso_rnn_ptmu",60,-3.0,3.0);
    h_omega_btag_iso_rnn_ptmu_omega = new TH1F("omega_btag_iso_rnn_ptmu_omega","omega variable_btag_iso_rnn_ptmu_omega",60,-3.0,3.0);
    h_omega_btag_iso_rnn_ptmu_omega_mreco = new TH1F("omega_btag_iso_rnn_ptmu_omega_mreco","omega variable_btag_iso_rnn_ptmu_omega_mreco",60,-3.0,3.0);
    h_omega_btag_iso_rnn_ptmu_omega_mreco_tpt = new TH1F("omega_btag_iso_rnn_ptmu_omega_mreco_tpt","omega variable_btag_iso_rnn_ptmu_omega_mreco_tpt",60,-3.0,3.0);
    h_omega_btag_iso_rnn_ptmu_mreco_tpt = new TH1F("omega_btag_iso_rnn_ptmu_mreco_tpt","omega variable_btag_iso_rnn_ptmu_mreco_tpt",60,-3.0,3.0);

    h_Z_pt_reco_inside = new TH1F("Z_pt_inside","Z boson transverse momentum _inside",400,0,400);
    h_Z_pt_reco_cuts_inside = new TH1F("Z_pt_cuts_inside","Z boson transverse momentum _inside",400,0,400);
    h_Z_pt_reco_cuts_tpt_inside = new TH1F("Z_pt_cuts_tpt_inside","Z boson transverse momentum _inside_tpt",400,0,400);
    h_Z_pt_reco_outside = new TH1F("Z_pt_outside","Z boson transverse momentum _outside",400,0,400);
    h_Z_pt_reco_cuts_outside = new TH1F("Z_pt_cuts_outside","Z boson transverse momentum _outside",400,0,400);
    h_Z_pt_reco_cuts_tpt_outside = new TH1F("Z_pt_cuts_tpt_outside","Z boson transverse momentum _outside_tpt",400,0,400);

    h_delta_phi= new TH1F("delta_phi","Delta phi lepton-tau",32,0,3.2);
    h_delta_phi_cuts_butphi= new TH1F("delta_phi_cuts_butphi","Delta phi lepton-tau after all cuts but delta phi",32,0,3.2);
    h_delta_phi_cuts= new TH1F("delta_phi_cuts","Delta phi lepton-tau after cuts",32,0,3.2);
    h_delta_phi_cuts_tpt= new TH1F("delta_phi_cuts_tpt","Delta phi lepton-tau after cuts_tpt",32,0,3.2);

    //MJ BG DISCRIMINATION VARIABLES
    h_ratio_ptjet_zpt = new TH1F("ratio_ptjet_zpt","ratio_ptjet_zpt",40,0,4);
    h_ratio_lpt_tpt = new TH1F("ratio_lpt_tpt","ratio_lpt_tpt",40,0,4);
    h_ratio_ptjet_zpt_cuts = new TH1F("ratio_ptjet_zpt_cuts","ratio_ptjet_zpt_cuts",40,0,4);
    h_ratio_lpt_tpt_cuts = new TH1F("ratio_lpt_tpt_cuts","ratio_lpt_tpt_cuts",40,0,4);
    h_ratio_ptjet_zpt_cuts_tpt = new TH1F("ratio_ptjet_zpt_cuts_tpt","ratio_ptjet_zpt_cuts_tpt",40,0,4);
    h_ratio_lpt_tpt_cuts_tpt = new TH1F("ratio_lpt_tpt_cuts_tpt","ratio_lpt_tpt_cuts_tpt",40,0,4);


}

void CLoop::Fill(double weight, int z_sample) {
    double pi=TMath::Pi();
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
    if (n_muons==1 && n_taus_rnn_tight<2 && trigger_decision && lepton_id && trigger_match && weight > -190) {

      float ql=muon_0_q;
      float qtau=tau_0_q;
      float pair_charge=ql*qtau;

      //angles
      double angle_l_MET=del_phi(muon_0_p4->Phi(),met_reco_p4->Phi());
      double angle_tau_MET=del_phi(tau_0_p4->Phi(),met_reco_p4->Phi());
      double angle=del_phi(tau_0_p4->Phi(),muon_0_p4->Phi());

      //topology
      bool inside= angle==(angle_l_MET+angle_tau_MET); //ANGLE BEING USED pi/2 AND 2.0943
      bool outside_lep= angle_l_MET<angle_tau_MET &&  angle!=(angle_l_MET+angle_tau_MET) && cos(angle_l_MET)>0;
      bool outside_tau= angle_l_MET>angle_tau_MET && angle!=(angle_l_MET+angle_tau_MET) && cos(angle_tau_MET)>0;
      bool inside90= angle<pi/2 && angle==(angle_l_MET+angle_tau_MET); //ANGLE BEING USED pi/2 AND 2.0943
      bool outside90_lep= angle<pi/2 && angle_l_MET<angle_tau_MET && cos(angle_l_MET)>0 && angle!=(angle_l_MET+angle_tau_MET);
      bool outside90_tau= angle<pi/2 && angle_l_MET>angle_tau_MET && cos(angle_tau_MET)>0 && angle!=(angle_l_MET+angle_tau_MET);
      
      if (ql!=qtau && angle<3*pi/4){
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
          h_Z_pt_reco_inside->Fill(Z_pt,weight);
          if (weight!=1){
            h_Z_pt_truth_inside->Fill(truth_z_pt/1000,weight);
          }
          r_jpt_zpt=ljet_0_p4->Pt()/Z_pt;
        }
        if (outside_tau) {
          Z_pt_x=tau_0_p4->Pt()*cos(tau_0_p4->Phi())+muon_0_p4->Pt()*cos(muon_0_p4->Phi())+neutrino_pt*cos(tau_0_p4->Phi());
          Z_pt_y=tau_0_p4->Pt()*sin(tau_0_p4->Phi())+muon_0_p4->Pt()*sin(muon_0_p4->Phi())+neutrino_pt*sin(tau_0_p4->Phi());
          Z_pt=sqrt(Z_pt_x*Z_pt_x+Z_pt_y*Z_pt_y);
          h_Z_pt_reco_outside->Fill(Z_pt,weight);
          if (weight!=1){
            h_Z_pt_truth_outside->Fill(truth_z_pt/1000,weight);
          }
          r_jpt_zpt=ljet_0_p4->Pt()/Z_pt;
        }
        if (outside_lep) {
          Z_pt_x=tau_0_p4->Pt()*cos(tau_0_p4->Phi())+muon_0_p4->Pt()*cos(muon_0_p4->Phi())+neutrino_pt*cos(muon_0_p4->Phi());
          Z_pt_y=tau_0_p4->Pt()*sin(tau_0_p4->Phi())+muon_0_p4->Pt()*sin(muon_0_p4->Phi())+neutrino_pt*sin(muon_0_p4->Phi());
          Z_pt=sqrt(Z_pt_x*Z_pt_x+Z_pt_y*Z_pt_y);
          h_Z_pt_reco_outside->Fill(Z_pt,weight);
          if (weight!=1){
            h_Z_pt_truth_outside->Fill(truth_z_pt/1000,weight);
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
          h_b_tag_iso_rnn_ptmu_omega_mreco_tpt->Fill(n_bjets_MV2c10_FixedCutBEff_85,weight);
        }
        if (cuts==c_iso||cuts==c_all) {
          h_muon_0_iso_FCTightTrackOnly_FixedRad_btag_iso2_rnn_ptmu_omega_mreco_tpt->Fill(muon_0_iso_FCTightTrackOnly_FixedRad,weight);
        }
        if (cuts==c_rnn||cuts==c_all) {
          if (tau_0_n_charged_tracks==1){
             h_rnn_score_1prong_btag_iso_ptmu_omega_mreco_tpt->Fill(tau_0_jet_rnn_score_trans,weight); 
          }
          if (tau_0_n_charged_tracks==3){
             h_rnn_score_3prong_btag_iso_ptmu_omega_mreco_tpt->Fill(tau_0_jet_rnn_score_trans,weight); 
          }
        }
        if (cuts==c_ptmu||cuts==c_all) {
          h_lep_pt0_btag_iso_rnn_omega_mreco_tpt->Fill(muon_0_p4->Pt(),weight);
        }
        if (cuts==c_omega||cuts==c_all) {
          h_omega_btag_iso_rnn_ptmu_mreco_tpt->Fill(omega,weight);
        }
        if (inside) {
          if (cuts==c_mreco||cuts==c_all) {
            h_reco_mass_btag_iso_rnn_ptmu_omega_tpt->Fill(reco_mass,weight);
          }
          if (cuts==c_tpt||cuts==c_all) {
            h_lep_pt1_btag_iso_rnn_ptmu_omega_mreco_inside->Fill(tau_0_p4->Pt(),weight);
          }
        }
        if (outside_lep) {
          if (cuts==c_mreco||cuts==c_all) {
            h_reco_mass_met_outside_btag_iso_rnn_ptmu_omega_tpt->Fill(reco_mass_outside,weight);
          }
          if (cuts==c_tpt||cuts==c_all) {
            h_lep_pt1_btag_iso_rnn_ptmu_omega_mreco_outside->Fill(tau_0_p4->Pt(),weight);
          }
        }  
        if (outside_tau) {
          if (cuts==c_mreco||cuts==c_all) {
            h_reco_mass_met_outside_btag_iso_rnn_ptmu_omega_tpt->Fill(reco_mass_outside,weight);
          }
          if (cuts==c_tpt||cuts==c_all) {
            h_lep_pt1_btag_iso_rnn_ptmu_omega_mreco_outside->Fill(tau_0_p4->Pt(),weight);
          }
        }
        
        //  Filling histos

        h_met_phi->Fill(met_reco_p4->Phi(),weight);
        h_trans_lepmet_mass->Fill(lepmet_mass,weight);
        if (tau_0_n_charged_tracks==1){
          h_rnn_score_1prong->Fill(tau_0_jet_rnn_score_trans,weight);
        }
        if (tau_0_n_charged_tracks==3){
          h_rnn_score_3prong->Fill(tau_0_jet_rnn_score_trans,weight);
        }
        h_jet_n->Fill(n_jets, weight);
        h_muon_0_iso_FCTightTrackOnly_FixedRad->Fill(muon_0_iso_FCTightTrackOnly_FixedRad,weight);
        h_omega->Fill(omega,weight);
        h_met->Fill(met_reco_p4->Pt(),weight);
        h_lep_pt0->Fill(muon_0_p4->Pt(),weight);
        h_lep_pt1->Fill(tau_0_p4->Pt(),weight);
        h_lep_phi->Fill(muon_0_p4->Phi(),weight);
        h_tau_phi->Fill(tau_0_p4->Phi(),weight);
        h_delta_phi->Fill(angle,weight);
        h_tau_nprongs->Fill(tau_0_n_charged_tracks,weight);
        if (weight!=1){
          h_weight_total->Fill(weight,1);
          h_weight_mc->Fill(weight_total,1);
          h_tau_matched->Fill(tau_0_truth_isHadTau,weight);
        }
        
        if (inside) {
          h_reco_mass->Fill(reco_mass,weight);
        }
        if (outside_lep) {
          h_reco_mass_met_outside->Fill(reco_mass_outside,weight);
        }
        if (outside_tau){
          h_reco_mass_met_outside->Fill(reco_mass_outside,weight);
        }

        h_ratio_ptjet_zpt->Fill(r_jpt_zpt,weight);
        h_ratio_lpt_tpt->Fill(r_lpt_tpt,weight);
        // ANGLE CUT
        if (cuts[0]==1){

        
          // B TAGGING CUT
          if (cuts[1]==1 || n_jets==0) {
            h_met_btag->Fill(met_reco_p4->Pt(),weight);
            h_lep_pt0_btag->Fill(muon_0_p4->Pt(),weight);
            h_lep_pt1_btag->Fill(tau_0_p4->Pt(),weight);
            h_omega_btag->Fill(omega,weight);

            if (inside) {
              h_reco_mass_btag->Fill(reco_mass,weight);
            }
            if (outside_lep) {
              h_reco_mass_met_outside_btag->Fill(reco_mass_outside,weight);
            }
            if (outside_tau){
              h_reco_mass_met_outside_btag->Fill(reco_mass_outside,weight);
            }

            // ISOLATION CUT
            if (cuts[2]==1) {
              h_met_btag_iso->Fill(met_reco_p4->Pt(),weight);
              h_lep_pt0_btag_iso->Fill(muon_0_p4->Pt(),weight);
              h_lep_pt1_btag_iso->Fill(tau_0_p4->Pt(),weight);
              h_omega_btag_iso->Fill(omega,weight);

              if (inside) {
                h_reco_mass_btag_iso->Fill(reco_mass,weight);
              }
              if (outside_lep) {
                h_reco_mass_met_outside_btag_iso->Fill(reco_mass_outside,weight);
              }
              if (outside_tau){
                h_reco_mass_met_outside_btag_iso->Fill(reco_mass_outside,weight);
              }

              // RNN SCORE
              if (cuts[3]==1) {
                h_met_btag_iso_rnn->Fill(met_reco_p4->Pt(),weight);
                h_lep_pt0_btag_iso_rnn->Fill(muon_0_p4->Pt(),weight);
                h_lep_pt1_btag_iso_rnn->Fill(tau_0_p4->Pt(),weight);
                h_omega_btag_iso_rnn->Fill(omega,weight);

                if (inside) {
                  h_reco_mass_btag_iso_rnn->Fill(reco_mass,weight);
                }
                if (outside_lep) {
                  h_reco_mass_met_outside_btag_iso_rnn->Fill(reco_mass_outside,weight);
                }
                if (outside_tau){
                  h_reco_mass_met_outside_btag_iso_rnn->Fill(reco_mass_outside,weight);
                }

                // TRANSVERSE MASS LEPTON CUT
                if (cuts[4]==1) {
                  h_met_btag_iso_rnn_ptmu->Fill(met_reco_p4->Pt(),weight);
                  h_lep_pt0_btag_iso_rnn_ptmu->Fill(muon_0_p4->Pt(),weight);
                  h_lep_pt1_btag_iso_rnn_ptmu->Fill(tau_0_p4->Pt(),weight);
                  h_omega_btag_iso_rnn_ptmu->Fill(omega,weight);

                  if (inside) {
                    h_reco_mass_btag_iso_rnn_ptmu->Fill(reco_mass,weight);
                  }
                  if (outside_lep) {
                    h_reco_mass_met_outside_btag_iso_rnn_ptmu->Fill(reco_mass_outside,weight);
                  }
                  if (outside_tau){
                    h_reco_mass_met_outside_btag_iso_rnn_ptmu->Fill(reco_mass_outside,weight);
                  }


                    // OMEGA CUT
                  if (cuts[5]==1) {
                    h_met_btag_iso_rnn_ptmu_omega->Fill(met_reco_p4->Pt(),weight);
                    h_lep_pt0_btag_iso_rnn_ptmu_omega->Fill(muon_0_p4->Pt(),weight);
                    h_omega_btag_iso_rnn_ptmu_omega->Fill(omega,weight);


                    if (inside) {
                      h_lep_pt1_btag_iso_rnn_ptmu_omega_inside->Fill(tau_0_p4->Pt(),weight);
                      h_reco_mass_btag_iso_rnn_ptmu_omega->Fill(reco_mass,weight);
                    }
                    if (outside_lep) {
                      h_lep_pt1_btag_iso_rnn_ptmu_omega_outside->Fill(tau_0_p4->Pt(),weight);
                      h_reco_mass_met_outside_btag_iso_rnn_ptmu_omega->Fill(reco_mass_outside,weight);
                    }
                    if (outside_tau){
                      h_lep_pt1_btag_iso_rnn_ptmu_omega_outside->Fill(tau_0_p4->Pt(),weight);
                      h_reco_mass_met_outside_btag_iso_rnn_ptmu_omega->Fill(reco_mass_outside,weight);
                    }

                    
                      // RECO MASS CUT
                    if (cuts[6]==1) {
                      h_met_btag_iso_rnn_ptmu_omega_mreco->Fill(met_reco_p4->Pt(),weight);
                      h_jet_n_btag_iso_rnn_ptmu_omega_mreco->Fill(n_jets, weight);
                      h_trans_lepmet_mass_btag_iso_rnn_ptmu_omega_mreco->Fill(lepmet_mass,weight);
                      h_lep_pt0_btag_iso_rnn_ptmu_omega_mreco->Fill(muon_0_p4->Pt(),weight);
                      h_omega_btag_iso_rnn_ptmu_omega_mreco->Fill(omega,weight);
                      h_lep_phi_cuts->Fill(muon_0_p4->Phi(),weight);
                      h_tau_phi_cuts->Fill(tau_0_p4->Phi(),weight);
                      h_delta_phi_cuts->Fill(angle,weight);
                      h_tau_nprongs_cuts->Fill(tau_0_n_charged_tracks,weight);

                      h_ratio_ptjet_zpt_cuts->Fill(r_jpt_zpt,weight);
                      h_ratio_lpt_tpt_cuts->Fill(r_lpt_tpt,weight);

                      if (inside) {
                        h_reco_mass_btag_iso_rnn_ptmu_omega_mreco->Fill(reco_mass,weight);                 
                        h_Z_pt_reco_cuts_inside->Fill(Z_pt,weight);
                        if (weight!=1){
                          h_Z_pt_truth_cuts_inside->Fill(truth_z_pt/1000,weight);
                        }
                      }
                      if (outside_lep) {
                        h_reco_mass_met_outside_btag_iso_rnn_ptmu_omega_mreco->Fill(reco_mass_outside,weight);
                        h_Z_pt_reco_cuts_outside->Fill(Z_pt,weight);
                        if (weight!=1){
                          h_Z_pt_truth_cuts_outside->Fill(truth_z_pt/1000,weight);
                        }  
                      }
                      if (outside_tau){
                        h_reco_mass_met_outside_btag_iso_rnn_ptmu_omega_mreco->Fill(reco_mass_outside,weight);                      
                        h_Z_pt_reco_cuts_outside->Fill(Z_pt,weight);
                        if (weight!=1){
                          h_Z_pt_truth_cuts_outside->Fill(truth_z_pt/1000,weight);
                        }
                      }
                      //TAU PT CUT
                      if (cuts[7]==1){
                        h_met_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(met_reco_p4->Pt(),weight);
                        h_jet_n_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(n_jets, weight);
                        h_trans_lepmet_mass_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(lepmet_mass,weight);
                        h_lep_pt0_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(muon_0_p4->Pt(),weight);
                        h_omega_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(omega,weight);
                        h_lep_phi_cuts_tpt->Fill(muon_0_p4->Phi(),weight);
                        h_tau_phi_cuts_tpt->Fill(tau_0_p4->Phi(),weight);
                        h_delta_phi_cuts_tpt->Fill(angle,weight);
                        h_tau_nprongs_cuts_tpt->Fill(tau_0_n_charged_tracks,weight);

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
                        if (inside) {
                          h_reco_mass_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(reco_mass,weight);
                          h_lep_pt1_btag_iso_rnn_ptmu_omega_mreco_tpt_inside->Fill(tau_0_p4->Pt(),weight);
                          h_Z_pt_reco_cuts_tpt_inside->Fill(Z_pt,weight);
                          if (weight!=1){               
                            h_tau_matched_after_0_to_90->Fill(tau_0_truth_isHadTau,weight);
                            h_Z_pt_truth_cuts_tpt_inside->Fill(truth_z_pt/1000,weight);
                          }
                        }
                        if (outside_lep) {
                          h_reco_mass_met_outside_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(reco_mass_outside,weight);
                          h_lep_pt1_btag_iso_rnn_ptmu_omega_mreco_tpt_outside->Fill(tau_0_p4->Pt(),weight);
                          h_Z_pt_reco_cuts_tpt_outside->Fill(Z_pt,weight);
                          if (weight!=1){
                            h_tau_matched_after_outside->Fill(tau_0_truth_isHadTau,weight);           
                            h_Z_pt_truth_cuts_tpt_outside->Fill(truth_z_pt/1000,weight);
                          }
                        }
                        if (outside_tau){
                          h_reco_mass_met_outside_btag_iso_rnn_ptmu_omega_mreco_tpt->Fill(reco_mass_outside,weight);
                          h_lep_pt1_btag_iso_rnn_ptmu_omega_mreco_tpt_outside->Fill(tau_0_p4->Pt(),weight);
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
    h_lep_n->Write();

    h_met_phi->Write();
    h_lep_eta->Write();

    h_trans_lepmet_mass->Write();
    h_trans_lepmet_mass_btag_iso_rnn_ptmu_omega_mreco->Write();
    h_trans_lepmet_mass_btag_iso_rnn_ptmu_omega_mreco_tpt->Write();
    if (lumFactor!=1){
      h_tau_matched->Write();
      h_tau_matched_after_0_to_90->Write();
      h_tau_matched_after_90_to_120->Write();
      h_tau_matched_after_outside->Write();
      h_tau_matched_after_outside_120->Write();
      h_sf_mu_recoid->Write();
      h_sf_mu_vertex->Write();
      h_sf_mu_trigger->Write();
      h_sf_mu_isolation->Write();
      h_sf_mu_total->Write();
      h_weight_mc->Write();
      h_weight_mc_cuts->Write();
      h_weight_total->Write();
      h_weight_total_cuts->Write();
      h_Z_pt_truth_inside->Write();
      h_Z_pt_truth_cuts_inside->Write();
      h_Z_pt_truth_cuts_tpt_inside->Write();
      h_Z_pt_truth_outside->Write();
      h_Z_pt_truth_cuts_outside->Write();
      h_Z_pt_truth_cuts_tpt_outside->Write();
    }
    h_rnn_score_1prong->Write();
    h_rnn_score_1prong_btag_iso_ptmu_omega_mreco_tpt->Write();
    h_rnn_score_3prong->Write();
    h_rnn_score_3prong_btag_iso_ptmu_omega_mreco_tpt->Write();

    //Writing lep pT
    h_lep_pt0->Write();
    h_lep_pt0_btag->Write();
    h_lep_pt0_btag_iso->Write();
    h_lep_pt0_btag_iso_rnn->Write();
    h_lep_pt0_btag_iso_rnn_ptmu->Write();
    h_lep_pt0_btag_iso_rnn_ptmu_omega->Write();
    h_lep_pt0_btag_iso_rnn_ptmu_omega_mreco->Write();
    h_lep_pt0_btag_iso_rnn_ptmu_omega_mreco_tpt->Write();
    h_lep_pt0_btag_iso_rnn_omega_mreco_tpt->Write();

    //Writing tau pT
    h_lep_pt1->Write();
    h_lep_pt1_btag->Write();
    h_lep_pt1_btag_iso->Write();
    h_lep_pt1_btag_iso_rnn->Write();
    h_lep_pt1_btag_iso_rnn_ptmu->Write();
    h_lep_pt1_btag_iso_rnn_ptmu_omega_inside->Write();
    h_lep_pt1_btag_iso_rnn_ptmu_omega_mreco_tpt_inside->Write();
    h_lep_pt1_btag_iso_rnn_ptmu_omega_mreco_inside->Write();
    h_lep_pt1_btag_iso_rnn_ptmu_omega_outside->Write();
    h_lep_pt1_btag_iso_rnn_ptmu_omega_mreco_tpt_outside->Write();
    h_lep_pt1_btag_iso_rnn_ptmu_omega_mreco_outside->Write();

    //Writing MET
    h_met->Write();
    h_met_btag->Write();
    h_met_btag_iso->Write();
    h_met_btag_iso_rnn->Write();
    h_met_btag_iso_rnn_ptmu->Write();
    h_met_btag_iso_rnn_ptmu_omega->Write();
    h_met_btag_iso_rnn_ptmu_omega_mreco->Write();
    h_met_btag_iso_rnn_ptmu_omega_mreco_tpt->Write();

    //Writing reco
    h_reco_mass->Write();
    h_reco_mass_btag->Write();
    h_reco_mass_btag_iso->Write();
    h_reco_mass_btag_iso_rnn->Write();
    h_reco_mass_btag_iso_rnn_ptmu->Write();
    h_reco_mass_btag_iso_rnn_ptmu_omega->Write();
    h_reco_mass_btag_iso_rnn_ptmu_omega_mreco->Write();
    h_reco_mass_btag_iso_rnn_ptmu_omega_mreco_tpt->Write();
    h_reco_mass_btag_iso_rnn_ptmu_omega_tpt->Write();

    h_reco_mass_met_outside->Write();
    h_reco_mass_met_outside_btag->Write();
    h_reco_mass_met_outside_btag_iso->Write();
    h_reco_mass_met_outside_btag_iso_rnn->Write();
    h_reco_mass_met_outside_btag_iso_rnn_ptmu->Write();
    h_reco_mass_met_outside_btag_iso_rnn_ptmu_omega->Write();
    h_reco_mass_met_outside_btag_iso_rnn_ptmu_omega_mreco->Write();
    h_reco_mass_met_outside_btag_iso_rnn_ptmu_omega_mreco_tpt->Write();
    h_reco_mass_met_outside_btag_iso_rnn_ptmu_omega_tpt->Write();

    //Writing jet number
    h_jet_n->Write();
    h_jet_n_btag_iso_rnn_ptmu_omega_mreco->Write();
    h_jet_n_btag_iso_rnn_ptmu_omega_mreco_tpt->Write();
    //Writing b-tag
    h_b_tag->Write();
    h_b_tag_iso_rnn_ptmu_omega_mreco_tpt->Write();

    //Writing isolation variables
    h_muon_0_iso_FCTightTrackOnly_FixedRad->Write();
    h_muon_0_iso_FCTightTrackOnly_FixedRad_btag_iso2_rnn_ptmu_omega_mreco_tpt->Write();

    h_omega->Write();
    h_omega_btag->Write();
    h_omega_btag_iso->Write();
    h_omega_btag_iso_rnn->Write();
    h_omega_btag_iso_rnn_ptmu->Write();
    h_omega_btag_iso_rnn_ptmu_omega->Write();
    h_omega_btag_iso_rnn_ptmu_omega_mreco->Write();
    h_omega_btag_iso_rnn_ptmu_omega_mreco_tpt->Write();
    h_omega_btag_iso_rnn_ptmu_mreco_tpt->Write();

    h_Z_pt_reco_inside->Write();
    h_Z_pt_reco_cuts_inside->Write();
    h_Z_pt_reco_cuts_tpt_inside->Write();
    h_Z_pt_reco_outside->Write();
    h_Z_pt_reco_cuts_outside->Write();
    h_Z_pt_reco_cuts_tpt_outside->Write();

    

    h_lep_phi->Write();
    h_tau_phi->Write();
    h_delta_phi->Write();
    h_tau_nprongs->Write();
    h_lep_phi_cuts->Write();
    h_lep_phi_cuts_tpt->Write();
    h_tau_phi_cuts->Write();
    h_tau_phi_cuts_tpt->Write();
    h_delta_phi_cuts->Write();
    h_delta_phi_cuts_tpt->Write();
    h_delta_phi_cuts_butphi->Write();
    h_tau_nprongs_cuts->Write();
    h_tau_nprongs_cuts_tpt->Write();

    h_ratio_ptjet_zpt->Write();
    h_ratio_lpt_tpt->Write();
    h_ratio_ptjet_zpt_cuts->Write();
    h_ratio_lpt_tpt_cuts->Write();
    h_ratio_ptjet_zpt_cuts_tpt->Write();
    h_ratio_lpt_tpt_cuts_tpt->Write();
}


#endif // End header guard