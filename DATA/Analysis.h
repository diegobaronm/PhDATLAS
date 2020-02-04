#ifndef Header
#define Header

// declare histograms here
TH1F * h_lep_n;
//TH1F * h_lep_type;
TH1F * h_met_phi;
TH1F * h_lep_eta;
TH1F * h_inva_mass_ltau;
TH1F * h_inva_mass_ltau_jetn_btag_iso_rnn_ptmu_omega_mreco;
TH1F * h_trans_mass;
//TH1F * h_visible_mass;
//TH1F * h_visible_mass_jetn_btag_iso_rnn_ptmu_mreco;

TH1F * h_trans_lepmet_mass;
//TH1F * h_trans_lepmet_mass_jetn_btag_iso_rnn;
TH1F * h_trans_lepmet_mass_jetn_btag_iso_rnn_ptmu_omega_mreco;
/*
TH1F * h_tau_matched;
TH1F * h_tau_matched_after_0_to_90;
TH1F * h_tau_matched_after_90_to_120;
TH1F * h_tau_matched_after_outside;
TH1F * h_tau_matched_after_outside_120;
*/
TH1F * h_rnn_score;
TH1F * h_rnn_score_jetn_btag_iso;
TH1F * h_rnn_score_jetn_btag_iso_ptmu_omega_mreco;

TH1F * h_lep_pt0;
TH1F * h_lep_pt0_jetn;
TH1F * h_lep_pt0_jetn_btag;
TH1F * h_lep_pt0_jetn_btag_iso;
TH1F * h_lep_pt0_jetn_btag_iso_rnn;
TH1F * h_lep_pt0_jetn_btag_iso_rnn_ptmu;
TH1F * h_lep_pt0_jetn_btag_iso_rnn_ptmu_omega;
TH1F * h_lep_pt0_jetn_btag_iso_rnn_ptmu_omega_mreco;
TH1F * h_lep_pt0_jetn_btag_iso_rnn_omega_mreco;

TH1F * h_lep_pt1;
TH1F * h_lep_pt1_jetn;
TH1F * h_lep_pt1_jetn_btag;
TH1F * h_lep_pt1_jetn_btag_iso;
TH1F * h_lep_pt1_jetn_btag_iso_rnn;
TH1F * h_lep_pt1_jetn_btag_iso_rnn_ptmu;
TH1F * h_lep_pt1_jetn_btag_iso_rnn_ptmu_omega_inside;
TH1F * h_lep_pt1_jetn_btag_iso_rnn_ptmu_omega_outside;
TH1F * h_lep_pt1_jetn_btag_iso_rnn_ptmu_omega_mreco_inside;
TH1F * h_lep_pt1_jetn_btag_iso_rnn_ptmu_omega_mreco_outside;

TH1F * h_met;
TH1F * h_met_jetn;
TH1F * h_met_jetn_btag;
TH1F * h_met_jetn_btag_iso;
TH1F * h_met_jetn_btag_iso_rnn;
TH1F * h_met_jetn_btag_iso_rnn_ptmu;
TH1F * h_met_jetn_btag_iso_rnn_ptmu_omega;
TH1F * h_met_jetn_btag_iso_rnn_ptmu_omega_mreco;


TH1F * h_reco_mass;
TH1F * h_reco_mass_jetn;
TH1F * h_reco_mass_jetn_btag;
TH1F * h_reco_mass_jetn_btag_iso;
TH1F * h_reco_mass_jetn_btag_iso_rnn;
TH1F * h_reco_mass_jetn_btag_iso_rnn_ptmu;
TH1F * h_reco_mass_jetn_btag_iso_rnn_ptmu_omega;
TH1F * h_reco_mass_jetn_btag_iso_rnn_ptmu_omega_mreco;

TH1F * h_reco_mass_90_to_120;
TH1F * h_reco_mass_90_to_120_jetn;
TH1F * h_reco_mass_90_to_120_jetn_iso;
TH1F * h_reco_mass_90_to_120_jetn_iso_rnn;
TH1F * h_reco_mass_90_to_120_jetn_iso_rnn_ptmu;
TH1F * h_reco_mass_90_to_120_jetn_iso_rnn_ptmu_mreco;


TH1F * h_reco_mass_met_outside;
TH1F * h_reco_mass_met_outside_jetn;
TH1F * h_reco_mass_met_outside_jetn_btag;
TH1F * h_reco_mass_met_outside_jetn_btag_iso;
TH1F * h_reco_mass_met_outside_jetn_btag_iso_rnn;
TH1F * h_reco_mass_met_outside_jetn_btag_iso_rnn_ptmu;
TH1F * h_reco_mass_met_outside_jetn_btag_iso_rnn_ptmu_omega;
TH1F * h_reco_mass_met_outside_jetn_btag_iso_rnn_ptmu_omega_mreco;

TH1F * h_reco_mass_met_outside_120;
TH1F * h_reco_mass_met_outside_jetn_120;
TH1F * h_reco_mass_met_outside_jetn_btag_120;
TH1F * h_reco_mass_met_outside_jetn_btag_iso_120;
TH1F * h_reco_mass_met_outside_jetn_btag_iso_rnn_120;
TH1F * h_reco_mass_met_outside_jetn_btag_iso_rnn_ptmu_120;
TH1F * h_reco_mass_met_outside_jetn_btag_iso_rnn_ptmu_mreco_120;

TH1F * h_jet_n;
TH1F * h_jet_n_btag_iso_rnn_ptmu_omega_mreco;

TH1F * h_b_tag;
TH1F * h_b_tag_jetn;
TH1F * h_b_tag_jetn_iso_rnn_ptmu_omega_mreco;

TH1F * h_muon_0_iso_FCTightTrackOnly_FixedRad;
TH1F * h_muon_0_iso_FCTightTrackOnly_FixedRad_jetn_btag;
TH1F * h_muon_0_iso_FCTightTrackOnly_FixedRad_jetn_btag_iso2_rnn_ptmu_omega_mreco;

TH1F * h_et0cone20;
TH1F * h_et0cone20_jetn_btag_iso;
TH1F * h_et0cone20_jetn_btag_iso_rnn_ptmu_omega_mreco;

TH1F * h_omega;
TH1F * h_omega_jetn_btag_iso_rnn_ptmu_mreco;

TH1F * h_angle;
TH1F * h_angle_ouside;
TH1F * h_angle_cuts;
TH1F * h_angle_ouside_cuts;

TH1F * h_Z_pt_reco_inside;
TH1F * h_Z_pt_reco_cuts_inside;
TH1F * h_Z_pt_reco_outside;
TH1F * h_Z_pt_reco_cuts_outside;

#endif
