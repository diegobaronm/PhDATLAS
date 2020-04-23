#ifndef Header
#define Header

// declare histograms here
TH1F * h_lep_n;

TH1F * h_met_phi;
TH1F * h_lep_eta;

TH1F * h_trans_lepmet_mass;
TH1F * h_trans_lepmet_mass_btag_iso_rnn_ptmu_omega_mreco;
TH1F * h_trans_lepmet_mass_btag_iso_rnn_ptmu_omega_mreco_tpt;

TH1F * h_rnn_score_1prong;
TH1F * h_rnn_score_1prong_btag_iso_ptmu_omega_mreco_tpt;
TH1F * h_rnn_score_3prong;
TH1F * h_rnn_score_3prong_btag_iso_ptmu_omega_mreco_tpt;

//Writing lep pT
TH1F * h_lep_pt0;
TH1F * h_lep_pt0_btag;
TH1F * h_lep_pt0_btag_iso;
TH1F * h_lep_pt0_btag_iso_rnn;
TH1F * h_lep_pt0_btag_iso_rnn_ptmu;
TH1F * h_lep_pt0_btag_iso_rnn_ptmu_omega;
TH1F * h_lep_pt0_btag_iso_rnn_ptmu_omega_mreco;
TH1F * h_lep_pt0_btag_iso_rnn_ptmu_omega_mreco_tpt;
TH1F * h_lep_pt0_btag_iso_rnn_omega_mreco_tpt;

//Writing tau pT
TH1F * h_lep_pt1;
TH1F * h_lep_pt1_btag;
TH1F * h_lep_pt1_btag_iso;
TH1F * h_lep_pt1_btag_iso_rnn;
TH1F * h_lep_pt1_btag_iso_rnn_ptmu;
TH1F * h_lep_pt1_btag_iso_rnn_ptmu_omega_inside;
TH1F * h_lep_pt1_btag_iso_rnn_ptmu_omega_mreco_tpt_inside;
TH1F * h_lep_pt1_btag_iso_rnn_ptmu_omega_mreco_inside;
TH1F * h_lep_pt1_btag_iso_rnn_ptmu_omega_outside;
TH1F * h_lep_pt1_btag_iso_rnn_ptmu_omega_mreco_tpt_outside;
TH1F * h_lep_pt1_btag_iso_rnn_ptmu_omega_mreco_outside;

//Writing MET
TH1F * h_met;
TH1F * h_met_btag;
TH1F * h_met_btag_iso;
TH1F * h_met_btag_iso_rnn;
TH1F * h_met_btag_iso_rnn_ptmu;
TH1F * h_met_btag_iso_rnn_ptmu_omega;
TH1F * h_met_btag_iso_rnn_ptmu_omega_mreco;
TH1F * h_met_btag_iso_rnn_ptmu_omega_mreco_tpt;

//Writing reco
TH1F * h_reco_mass;
TH1F * h_reco_mass_btag;
TH1F * h_reco_mass_btag_iso;
TH1F * h_reco_mass_btag_iso_rnn;
TH1F * h_reco_mass_btag_iso_rnn_ptmu;
TH1F * h_reco_mass_btag_iso_rnn_ptmu_omega;
TH1F * h_reco_mass_btag_iso_rnn_ptmu_omega_mreco;
TH1F * h_reco_mass_btag_iso_rnn_ptmu_omega_mreco_tpt;
TH1F * h_reco_mass_btag_iso_rnn_ptmu_omega_tpt;

TH1F * h_reco_mass_met_outside;
TH1F * h_reco_mass_met_outside_btag;
TH1F * h_reco_mass_met_outside_btag_iso;
TH1F * h_reco_mass_met_outside_btag_iso_rnn;
TH1F * h_reco_mass_met_outside_btag_iso_rnn_ptmu;
TH1F * h_reco_mass_met_outside_btag_iso_rnn_ptmu_omega;
TH1F * h_reco_mass_met_outside_btag_iso_rnn_ptmu_omega_mreco;
TH1F * h_reco_mass_met_outside_btag_iso_rnn_ptmu_omega_mreco_tpt;
TH1F * h_reco_mass_met_outside_btag_iso_rnn_ptmu_omega_tpt;

//Writing jet number
TH1F * h_jet_n;
TH1F * h_jet_n_btag_iso_rnn_ptmu_omega_mreco;
TH1F * h_jet_n_btag_iso_rnn_ptmu_omega_mreco_tpt;
//Writing b-tag
TH1F * h_b_tag;
TH1F * h_b_tag_iso_rnn_ptmu_omega_mreco_tpt;

//Writing isolation variables
TH1F * h_muon_0_iso_FCTightTrackOnly_FixedRad;
TH1F * h_muon_0_iso_FCTightTrackOnly_FixedRad_btag_iso2_rnn_ptmu_omega_mreco_tpt;

TH1F * h_omega;
TH1F * h_omega_btag_iso_rnn_ptmu_mreco_tpt;

TH1F * h_Z_pt_reco_inside;
TH1F * h_Z_pt_reco_cuts_inside;
TH1F * h_Z_pt_reco_cuts_tpt_inside;
TH1F * h_Z_pt_reco_outside;
TH1F * h_Z_pt_reco_cuts_outside;
TH1F * h_Z_pt_reco_cuts_tpt_outside;

TH1F * h_lep_phi;
TH1F * h_tau_phi;
TH1F * h_delta_phi;
TH1F * h_tau_nprongs;
TH1F * h_lep_phi_cuts;
TH1F * h_lep_phi_cuts_tpt;
TH1F * h_tau_phi_cuts;
TH1F * h_tau_phi_cuts_tpt;
TH1F * h_delta_phi_cuts;
TH1F * h_delta_phi_cuts_tpt;
TH1F * h_delta_phi_cuts_butphi;
TH1F * h_tau_nprongs_cuts;
TH1F * h_tau_nprongs_cuts_tpt;

TH1F * h_ratio_ptjet_zpt;
TH1F * h_ratio_lpt_tpt;
TH1F * h_ratio_ptjet_zpt_cuts;
TH1F * h_ratio_lpt_tpt_cuts;
TH1F * h_ratio_ptjet_zpt_cuts_tpt;
TH1F * h_ratio_lpt_tpt_cuts_tpt;


#endif
