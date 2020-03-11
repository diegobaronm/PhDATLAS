#ifndef Header
#define Header

// declare histograms here
TH1F * h_lep_n;
//TH1F * h_lep_type;
TH1F * h_met_phi;
TH1F * h_lep_eta;
TH1F * h_inva_mass_ltau;
TH1F * h_inva_mass_ltau_bdte_btag_iso_rnn_pte_omega_mreco;
TH1F * h_trans_mass;
//TH1F * h_visible_mass;
//TH1F * h_visible_mass_bdte_btag_iso_rnn_pte_mreco;

TH1F * h_trans_lepmet_mass;
//TH1F * h_trans_lepmet_mass_bdte_btag_iso_rnn;
TH1F * h_trans_lepmet_mass_bdte_btag_iso_rnn_pte_omega_mle_mreco;
/*
TH1F * h_tau_matched;
TH1F * h_tau_matched_after_0_to_90;
TH1F * h_tau_matched_after_90_to_120;
TH1F * h_tau_matched_after_outside;
TH1F * h_tau_matched_after_outside_120;

TH1F * h_sf_e_trigger;
TH1F * h_sf_e_recoid;
TH1F * h_sf_e_vertex;
TH1F * h_sf_e_isolation;
TH1F * h_sf_e_total;
*/
TH1F * h_rnn_score_1prong;
TH1F * h_rnn_score_1prong_bdte_btag_iso_pte_omega_mle_mreco;
TH1F * h_rnn_score_3prong;
TH1F * h_rnn_score_3prong_bdte_btag_iso_pte_omega_mle_mreco;

TH1F * h_bdt_e_score;
TH1F * h_bdt_e_score_btag_iso_rnn_pte_omega_mle_mreco;

TH1F * h_lep_pt0;
TH1F * h_lep_pt0_bdte;
TH1F * h_lep_pt0_bdte_btag;
TH1F * h_lep_pt0_bdte_btag_iso;
TH1F * h_lep_pt0_bdte_btag_iso_rnn;
TH1F * h_lep_pt0_bdte_btag_iso_rnn_pte;
TH1F * h_lep_pt0_bdte_btag_iso_rnn_pte_omega;
TH1F * h_lep_pt0_bdte_btag_iso_rnn_pte_omega_mle;
TH1F * h_lep_pt0_bdte_btag_iso_rnn_pte_omega_mle_mreco;
TH1F * h_lep_pt0_bdte_btag_iso_rnn_omega_mle_mreco;

TH1F * h_lep_pt1;
TH1F * h_lep_pt1_bdte;
TH1F * h_lep_pt1_bdte_btag;
TH1F * h_lep_pt1_bdte_btag_iso;
TH1F * h_lep_pt1_bdte_btag_iso_rnn;
TH1F * h_lep_pt1_bdte_btag_iso_rnn_pte;
TH1F * h_lep_pt1_bdte_btag_iso_rnn_pte_omega_inside;
TH1F * h_lep_pt1_bdte_btag_iso_rnn_pte_omega_mle_inside;
TH1F * h_lep_pt1_bdte_btag_iso_rnn_pte_omega_outside;
TH1F * h_lep_pt1_bdte_btag_iso_rnn_pte_omega_mle_outside;
TH1F * h_lep_pt1_bdte_btag_iso_rnn_pte_omega_mle_mreco_inside;
TH1F * h_lep_pt1_bdte_btag_iso_rnn_pte_omega_mle_mreco_outside;

TH1F * h_met;
TH1F * h_met_bdte;
TH1F * h_met_bdte_btag;
TH1F * h_met_bdte_btag_iso;
TH1F * h_met_bdte_btag_iso_rnn;
TH1F * h_met_bdte_btag_iso_rnn_pte;
TH1F * h_met_bdte_btag_iso_rnn_pte_omega;
TH1F * h_met_bdte_btag_iso_rnn_pte_omega_mle;
TH1F * h_met_bdte_btag_iso_rnn_pte_omega_mle_mreco;


TH1F * h_reco_mass;
TH1F * h_reco_mass_bdte;
TH1F * h_reco_mass_bdte_btag;
TH1F * h_reco_mass_bdte_btag_iso;
TH1F * h_reco_mass_bdte_btag_iso_rnn;
TH1F * h_reco_mass_bdte_btag_iso_rnn_pte;
TH1F * h_reco_mass_bdte_btag_iso_rnn_pte_omega;
TH1F * h_reco_mass_bdte_btag_iso_rnn_pte_omega_mle;
TH1F * h_reco_mass_bdte_btag_iso_rnn_pte_omega_mle_mreco;
/*
TH1F * h_reco_mass_90_to_120;
TH1F * h_reco_mass_90_to_120_bdte;
TH1F * h_reco_mass_90_to_120_bdte_iso;
TH1F * h_reco_mass_90_to_120_bdte_iso_rnn;
TH1F * h_reco_mass_90_to_120_bdte_iso_rnn_pte;
TH1F * h_reco_mass_90_to_120_bdte_iso_rnn_pte_mreco;
*/

TH1F * h_reco_mass_met_outside;
TH1F * h_reco_mass_met_outside_bdte;
TH1F * h_reco_mass_met_outside_bdte_btag;
TH1F * h_reco_mass_met_outside_bdte_btag_iso;
TH1F * h_reco_mass_met_outside_bdte_btag_iso_rnn;
TH1F * h_reco_mass_met_outside_bdte_btag_iso_rnn_pte;
TH1F * h_reco_mass_met_outside_bdte_btag_iso_rnn_pte_omega;
TH1F * h_reco_mass_met_outside_bdte_btag_iso_rnn_pte_omega_mle;
TH1F * h_reco_mass_met_outside_bdte_btag_iso_rnn_pte_omega_mle_mreco;
/*
TH1F * h_reco_mass_met_outside_120;
TH1F * h_reco_mass_met_outside_bdte_120;
TH1F * h_reco_mass_met_outside_bdte_btag_120;
TH1F * h_reco_mass_met_outside_bdte_btag_iso_120;
TH1F * h_reco_mass_met_outside_bdte_btag_iso_rnn_120;
TH1F * h_reco_mass_met_outside_bdte_btag_iso_rnn_pte_120;
TH1F * h_reco_mass_met_outside_bdte_btag_iso_rnn_pte_mreco_120;
*/
TH1F * h_jet_n;
TH1F * h_jet_n_bdte_btag_iso_rnn_pte_omega_mle_mreco;

TH1F * h_b_tag;
TH1F * h_b_tag_bdte_iso_rnn_pte_omega_mle_mreco;

TH1F * h_elec_0_iso_FCTight;
TH1F * h_elec_0_iso_FCTight_bdte_btag_iso_rnn_pte_omega_mle_mreco;
/*
TH1F * h_weight_mc;
TH1F * h_weight_mc_cuts;
TH1F * h_weight_total;
TH1F * h_weight_total_cuts;
*/
TH1F * h_omega;
TH1F * h_omega_bdte_btag_iso_rnn_pte_mle_mreco;

TH1F * h_angle;
TH1F * h_angle_ouside;
TH1F * h_angle_cuts;
TH1F * h_angle_ouside_cuts;

TH1F * h_Z_pt_reco_inside;
TH1F * h_Z_pt_reco_cuts_inside;
TH1F * h_Z_pt_reco_outside;
TH1F * h_Z_pt_reco_cuts_outside;

TH1F * h_lep_phi;
TH1F * h_tau_phi;
TH1F * h_delta_phi;
TH1F * h_tau_nprongs;
TH1F * h_lep_phi_cuts;
TH1F * h_tau_phi_cuts;
TH1F * h_delta_phi_cuts;
TH1F * h_delta_phi_cuts_butphi;
TH1F * h_tau_nprongs_cuts;

#endif
