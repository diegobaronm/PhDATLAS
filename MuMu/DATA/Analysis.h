#ifndef Header
#define Header

// declare histograms here

TH1F * h_lep1_pt_topo;
TH1F * h_lep1_pt_topo_dphi;
TH1F * h_lep1_pt_topo_dphi_btag;
TH1F * h_lep1_pt_topo_dphi_btag_iso;
TH1F * h_lep1_pt_topo_dphi_btag_iso_pt1;
TH1F * h_lep1_pt_topo_dphi_btag_iso_pt1_pt2;
TH1F * h_lep1_pt_topo_dphi_btag_iso_pt1_pt2_mass;
TH1F * h_lep1_pt_topo_dphi_btag_iso_pt2_mass;

//phi
TH1F * h_lep1_phi_topo;
TH1F * h_lep1_phi_cuts;

// Histograms for lepton 2
TH1F * h_lep2_pt_topo;
TH1F * h_lep2_pt_topo_dphi;
TH1F * h_lep2_pt_topo_dphi_btag;
TH1F * h_lep2_pt_topo_dphi_btag_iso;
TH1F * h_lep2_pt_topo_dphi_btag_iso_pt1;
TH1F * h_lep2_pt_topo_dphi_btag_iso_pt1_pt2;
TH1F * h_lep2_pt_topo_dphi_btag_iso_pt1_pt2_mass;
TH1F * h_lep2_pt_topo_dphi_btag_iso_pt1_mass;


TH1F * h_lep2_phi_topo;
TH1F * h_lep2_phi_cuts;

// MET Histograms
TH1F * h_met_topo;
TH1F * h_met_topo_dphi;
TH1F * h_met_topo_dphi_btag;
TH1F * h_met_topo_dphi_btag_iso;
TH1F * h_met_topo_dphi_btag_iso_pt1;
TH1F * h_met_topo_dphi_btag_iso_pt1_pt2;
TH1F * h_met_topo_dphi_btag_iso_pt1_pt2_mass;

// Invariant mass histograms
// Non reco histos
//Transeverse lepton mass
TH1F * h_trans_lepmet_mass_topo;
TH1F * h_trans_lepmet_mass_topo_dphi_btag_iso_pt1_pt2_mass;

// inv histos
TH1F * h_inv_mass_topo;
TH1F * h_inv_mass_topo_dphi;
TH1F * h_inv_mass_topo_dphi_btag;
TH1F * h_inv_mass_topo_dphi_btag_iso;
TH1F * h_inv_mass_topo_dphi_btag_iso_pt1;
TH1F * h_inv_mass_topo_dphi_btag_iso_pt1_pt2;
TH1F * h_inv_mass_topo_dphi_btag_iso_pt1_pt2_mass;

TH1F * h_weight_mc_topo;
TH1F * h_weight_total_cuts;
TH1F * h_weight_total_topo;
TH1F * h_weight_mc_cuts;
TH1F * h_sf_mu_trigger;
TH1F * h_sf_mu_recoid;
TH1F * h_sf_mu_vertex;
TH1F * h_sf_mu_isolation;
TH1F * h_sf_mu_total;
TH1F * h_Z_pt_truth_topo;
TH1F * h_Z_pt_truth_cuts;

// Jet Number Histograms
TH1F * h_jet_n_topo;
TH1F * h_jet_n_topo_dphi_btag_iso_pt1_pt2_mass;


TH1F * h_b_tag_topo;
TH1F * h_b_tag_topo_dphi_iso_pt1_pt2_mass;


// Isolation variables Histograms
TH1F * h_muon_0_isolation_topo;
TH1F * h_muon_0_isolation_topo_dphi_btag_pt1_pt2_mass;

TH1F * h_muon_1_isolation_topo;
TH1F * h_muon_1_isolation_topo_dphi_btag_pt1_pt2_mass;

TH1F * h_Z_pt_reco_topo;
TH1F * h_Z_pt_reco_cuts;

TH1F * h_delta_phi;
TH1F * h_delta_phi_topo;
TH1F * h_delta_phi_cuts;
TH1F * h_delta_phi_cuts_butphi;

//MJ BG DISCRIMINATION VARIABLES
TH1F * h_ratio_ptjet_zpt_topo;
TH1F * h_ratio_lpt_tpt_topo;
TH1F * h_ratio_ptjet_zpt_cuts;
TH1F * h_ratio_lpt_tpt_cuts;

#endif
