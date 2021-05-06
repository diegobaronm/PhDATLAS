//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Dec 10 15:57:16 2019 by ROOT version 6.18/04
// from TTree NOMINAL/NOMINAL
// found on file: user.sdysch.19616269._000010.LepUniv_ttbar.root
//////////////////////////////////////////////////////////

#ifndef CLoop_h
#define CLoop_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TH1.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <vector>
#include <time.h>
#include <math.h>


// Header file for the classes stored in the TTree if any.
#include "TLorentzVector.h"

class CLoop {
  void Style(double lumFactor);
  void Book(double lumFactor);
  void Fill(double weight, int z_sample);

  #include "../Analysis.h"

public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          HLT_e120_lhloose;
   UInt_t          HLT_e140_lhloose_nod0;
   UInt_t          HLT_e24_lhmedium_L1EM20VH;
   UInt_t          HLT_e26_lhtight_nod0_ivarloose;
   UInt_t          HLT_e60_lhmedium;
   UInt_t          HLT_e60_lhmedium_nod0;
   UInt_t          HLT_mu20_iloose_L1MU15;
   UInt_t          HLT_mu26_ivarmedium;
   UInt_t          HLT_mu50;
   Float_t         NOMINAL_pileup_combined_weight;
   UInt_t          NOMINAL_pileup_random_run_number;
   UInt_t          bjet_0;
   Float_t         bjet_0_Bottom_DL1_score;
   Float_t         bjet_0_Charm_DL1_score;
   Float_t         bjet_0_Light_DL1_score;
   Float_t         bjet_0_MV2c10_FixedCutBEff_85_weight;
   Int_t           bjet_0_b_tagged_MV2c10_FixedCutBEff_85;
   UInt_t          bjet_0_matched;
   Int_t           bjet_0_matched_classifierParticleOrigin;
   Int_t           bjet_0_matched_classifierParticleType;
   Int_t           bjet_0_matched_origin;
   TLorentzVector  *bjet_0_matched_p4;
   Int_t           bjet_0_matched_pdgId;
   Float_t         bjet_0_matched_pz;
   Float_t         bjet_0_matched_q;
   Int_t           bjet_0_matched_status;
   Int_t           bjet_0_matched_type;
   Int_t           bjet_0_origin;
   TLorentzVector  *bjet_0_p4;
   Int_t           bjet_0_type;
   UInt_t          bjet_1;
   Float_t         bjet_1_Bottom_DL1_score;
   Float_t         bjet_1_Charm_DL1_score;
   Float_t         bjet_1_Light_DL1_score;
   Float_t         bjet_1_MV2c10_FixedCutBEff_85_weight;
   Int_t           bjet_1_b_tagged_MV2c10_FixedCutBEff_85;
   UInt_t          bjet_1_matched;
   Int_t           bjet_1_matched_classifierParticleOrigin;
   Int_t           bjet_1_matched_classifierParticleType;
   Int_t           bjet_1_matched_origin;
   TLorentzVector  *bjet_1_matched_p4;
   Int_t           bjet_1_matched_pdgId;
   Float_t         bjet_1_matched_pz;
   Float_t         bjet_1_matched_q;
   Int_t           bjet_1_matched_status;
   Int_t           bjet_1_matched_type;
   Int_t           bjet_1_origin;
   TLorentzVector  *bjet_1_p4;
   Int_t           bjet_1_type;
   UInt_t          eleTrigMatch_0_HLT_e120_lhloose;
   UInt_t          eleTrigMatch_0_HLT_e140_lhloose_nod0;
   UInt_t          eleTrigMatch_0_HLT_e24_lhmedium_L1EM20VH;
   UInt_t          eleTrigMatch_0_HLT_e26_lhtight_nod0_ivarloose;
   UInt_t          eleTrigMatch_0_HLT_e60_lhmedium;
   UInt_t          eleTrigMatch_0_HLT_e60_lhmedium_nod0;
   UInt_t          eleTrigMatch_0_trigger_matched;
   UInt_t          elec_0;
   Float_t         elec_0_NOMINAL_EleEffSF_Isolation_TightLLH_d0z0_v13_FCLoose;
   Float_t         elec_0_NOMINAL_EleEffSF_Isolation_TightLLH_d0z0_v13_FCTight;
   Float_t         elec_0_NOMINAL_EleEffSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_2018_e26_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v13_isolFCTight;
   Float_t         elec_0_NOMINAL_EleEffSF_offline_RecoTrk;
   Float_t         elec_0_NOMINAL_EleEffSF_offline_TightLLH_d0z0_v13;
   Float_t         elec_0_NOMINAL_efficiency_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_2018_e26_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v13_isolFCTight;
   Float_t         elec_0_cluster_eta;
   Float_t         elec_0_cluster_eta_be2;
   Int_t           elec_0_id_medium;
   Int_t           elec_0_id_tight;
   UInt_t          elec_0_iso_FCLoose;
   UInt_t          elec_0_iso_FCTight;
   UInt_t          elec_0_iso_FixedCutLoose;
   UInt_t          elec_0_iso_FixedCutTight;
   UInt_t          elec_0_iso_FixedCutTightCaloOnly;
   UInt_t          elec_0_iso_Loose_FixedRad;
   UInt_t          elec_0_iso_TightTrackOnly_FixedRad;
   Int_t           elec_0_matched_classifierParticleOrigin;
   Int_t           elec_0_matched_classifierParticleType;
   Int_t           elec_0_matched_origin;
   TLorentzVector  *elec_0_matched_p4;
   Int_t           elec_0_matched_pdgId;
   Float_t         elec_0_matched_pz;
   Float_t         elec_0_matched_q;
   Int_t           elec_0_matched_type;
   TLorentzVector  *elec_0_p4;
   Float_t         elec_0_q;
   Float_t         elec_0_trk_d0_sig;
   TLorentzVector  *elec_0_trk_p4;
   Float_t         elec_0_trk_pvx_z0_sintheta;
   Float_t         elec_0_trk_z0_sintheta;
   Int_t           event_is_bad_batman;
   ULong64_t       event_number;
   Float_t         jet_NOMINAL_central_jets_global_effSF_JVT;
   Float_t         jet_NOMINAL_central_jets_global_ineffSF_JVT;
   Float_t         jet_NOMINAL_forward_jets_global_effSF_JVT;
   Float_t         jet_NOMINAL_forward_jets_global_ineffSF_JVT;
   Float_t         jet_NOMINAL_global_effSF_MV2c10_FixedCutBEff_85;
   Float_t         jet_NOMINAL_global_ineffSF_MV2c10_FixedCutBEff_85;
   UInt_t          ljet_0;
   Float_t         ljet_0_Bottom_DL1_score;
   Float_t         ljet_0_Charm_DL1_score;
   Float_t         ljet_0_Light_DL1_score;
   Float_t         ljet_0_MV2c10_FixedCutBEff_85_weight;
   Int_t           ljet_0_b_tagged_MV2c10_FixedCutBEff_85;
   Int_t           ljet_0_flavorlabel;
   Int_t           ljet_0_flavorlabel_cone;
   Int_t           ljet_0_flavorlabel_part;
   UInt_t          ljet_0_matched;
   Int_t           ljet_0_matched_classifierParticleOrigin;
   Int_t           ljet_0_matched_classifierParticleType;
   Int_t           ljet_0_matched_origin;
   TLorentzVector  *ljet_0_matched_p4;
   Int_t           ljet_0_matched_pdgId;
   Float_t         ljet_0_matched_pz;
   Float_t         ljet_0_matched_q;
   Int_t           ljet_0_matched_status;
   Int_t           ljet_0_matched_type;
   Int_t           ljet_0_origin;
   TLorentzVector  *ljet_0_p4;
   Int_t           ljet_0_type;
   UInt_t          ljet_1;
   Float_t         ljet_1_Bottom_DL1_score;
   Float_t         ljet_1_Charm_DL1_score;
   Float_t         ljet_1_Light_DL1_score;
   Float_t         ljet_1_MV2c10_FixedCutBEff_85_weight;
   Int_t           ljet_1_b_tagged_MV2c10_FixedCutBEff_85;
   Int_t           ljet_1_flavorlabel;
   Int_t           ljet_1_flavorlabel_cone;
   Int_t           ljet_1_flavorlabel_part;
   UInt_t          ljet_1_matched;
   Int_t           ljet_1_matched_classifierParticleOrigin;
   Int_t           ljet_1_matched_classifierParticleType;
   Int_t           ljet_1_matched_origin;
   TLorentzVector  *ljet_1_matched_p4;
   Int_t           ljet_1_matched_pdgId;
   Float_t         ljet_1_matched_pz;
   Float_t         ljet_1_matched_q;
   Int_t           ljet_1_matched_status;
   Int_t           ljet_1_matched_type;
   Int_t           ljet_1_origin;
   TLorentzVector  *ljet_1_p4;
   Int_t           ljet_1_type;
   UInt_t          ljet_2;
   Float_t         ljet_2_Bottom_DL1_score;
   Float_t         ljet_2_Charm_DL1_score;
   Float_t         ljet_2_Light_DL1_score;
   Float_t         ljet_2_MV2c10_FixedCutBEff_85_weight;
   Int_t           ljet_2_b_tag_quantile;
   Float_t         ljet_2_b_tag_score;
   Int_t           ljet_2_b_tagged_MV2c10_FixedCutBEff_85;
   UInt_t          ljet_2_cleanJet_EC_LooseBad;
   Float_t         ljet_2_fjvt;
   Int_t           ljet_2_flavorlabel;
   Int_t           ljet_2_flavorlabel_cone;
   Int_t           ljet_2_flavorlabel_part;
   Int_t           ljet_2_is_Jvt_HS;
   Float_t         ljet_2_jvt;
   UInt_t          ljet_2_matched;
   Int_t           ljet_2_matched_classifierParticleOrigin;
   Int_t           ljet_2_matched_classifierParticleType;
   Int_t           ljet_2_matched_mother_pdgId;
   Int_t           ljet_2_matched_mother_status;
   Int_t           ljet_2_matched_origin;
   TLorentzVector  *ljet_2_matched_p4;
   Int_t           ljet_2_matched_pdgId;
   Float_t         ljet_2_matched_pz;
   Float_t         ljet_2_matched_q;
   Int_t           ljet_2_matched_status;
   Int_t           ljet_2_matched_type;
   Int_t           ljet_2_origin;
   TLorentzVector  *ljet_2_p4;
   Float_t         ljet_2_q;
   Int_t           ljet_2_type;
   Float_t         ljet_2_width;
   UInt_t          ljet_3;
   Float_t         ljet_3_Bottom_DL1_score;
   Float_t         ljet_3_Charm_DL1_score;
   Float_t         ljet_3_Light_DL1_score;
   Float_t         ljet_3_MV2c10_FixedCutBEff_85_weight;
   Int_t           ljet_3_b_tag_quantile;
   Float_t         ljet_3_b_tag_score;
   Int_t           ljet_3_b_tagged_MV2c10_FixedCutBEff_85;
   UInt_t          ljet_3_cleanJet_EC_LooseBad;
   Float_t         ljet_3_fjvt;
   Int_t           ljet_3_flavorlabel;
   Int_t           ljet_3_flavorlabel_cone;
   Int_t           ljet_3_flavorlabel_part;
   Int_t           ljet_3_is_Jvt_HS;
   Float_t         ljet_3_jvt;
   UInt_t          ljet_3_matched;
   Int_t           ljet_3_matched_classifierParticleOrigin;
   Int_t           ljet_3_matched_classifierParticleType;
   Int_t           ljet_3_matched_mother_pdgId;
   Int_t           ljet_3_matched_mother_status;
   Int_t           ljet_3_matched_origin;
   TLorentzVector  *ljet_3_matched_p4;
   Int_t           ljet_3_matched_pdgId;
   Float_t         ljet_3_matched_pz;
   Float_t         ljet_3_matched_q;
   Int_t           ljet_3_matched_status;
   Int_t           ljet_3_matched_type;
   Int_t           ljet_3_origin;
   TLorentzVector  *ljet_3_p4;
   Float_t         ljet_3_q;
   Int_t           ljet_3_type;
   Float_t         ljet_3_width;
   TLorentzVector  *met_reco_p4;
   UInt_t          muTrigMatch_0_HLT_mu20_iloose_L1MU15;
   UInt_t          muTrigMatch_0_HLT_mu26_ivarmedium;
   UInt_t          muTrigMatch_0_HLT_mu50;
   UInt_t          muTrigMatch_0_trigger_matched;
   UInt_t          muon_0;
   Float_t         muon_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium;
   Float_t         muon_0_NOMINAL_MuEffSF_HLT_mu26_ivarmedium_OR_HLT_mu50_QualMedium;
   Float_t         muon_0_NOMINAL_MuEffSF_IsoLoose_FixedRad;
   Float_t         muon_0_NOMINAL_MuEffSF_IsoTightTrackOnly_FixedRad;
   Float_t         muon_0_NOMINAL_MuEffSF_Reco_QualMedium;
   Float_t         muon_0_NOMINAL_MuEffSF_TTVA;
   Int_t           muon_0_id_medium;
   Int_t           muon_0_id_tight;
   UInt_t          muon_0_iso_FCLoose;
   UInt_t          muon_0_iso_FCTight;
   UInt_t          muon_0_iso_FixedCutLoose;
   UInt_t          muon_0_iso_FixedCutTight;
   UInt_t          muon_0_iso_FixedCutTightCaloOnly;
   UInt_t          muon_0_iso_Loose_FixedRad;
   UInt_t          muon_0_iso_TightTrackOnly_FixedRad;
   Int_t           muon_0_matched_classifierParticleOrigin;
   Int_t           muon_0_matched_classifierParticleType;
   TLorentzVector  *muon_0_matched_p4;
   Int_t           muon_0_matched_pdgId;
   Float_t         muon_0_matched_pz;
   Float_t         muon_0_matched_q;
   Int_t           muon_0_matched_type;
   TLorentzVector  *muon_0_p4;
   Float_t         muon_0_q;
   Float_t         muon_0_trk_d0_sig;
   TLorentzVector  *muon_0_trk_p4;
   Float_t         muon_0_trk_pvx_z0_sig;
   Float_t         muon_0_trk_pvx_z0_sintheta;
   Float_t         muon_0_trk_z0_sintheta;
   Float_t         n_actual_int;
   Float_t         n_actual_int_cor;
   Float_t         n_avg_int;
   Float_t         n_avg_int_cor;
   Int_t           n_bjets_MV2c10_FixedCutBEff_85;
   Int_t           n_electrons;
   Int_t           n_electrons_olr;
   Int_t           n_jets;
   Int_t           n_muons;
   Int_t           n_pvx;
   Int_t           n_taus;
   Int_t           n_taus_met;
   Int_t           n_taus_olr;
   Int_t           n_taus_rnn_loose;
   Int_t           n_taus_rnn_medium;
   Int_t           n_taus_rnn_tight;
   Int_t           n_taus_rnn_veryloose;
   Int_t           n_vx;
   UInt_t          run_number;
   UInt_t          tau_0;
   Float_t         tau_0_NOMINAL_TauEffSF_JetRNNloose;
   Float_t         tau_0_NOMINAL_TauEffSF_JetRNNmedium;
   Float_t         tau_0_NOMINAL_TauEffSF_JetRNNtight;
   Float_t         tau_0_NOMINAL_TauEffSF_LooseEleBDT_electron;
   Float_t         tau_0_NOMINAL_TauEffSF_MediumEleBDT_electron;
   Float_t         tau_0_NOMINAL_TauEffSF_reco;
   vector<float>   *tau_0_charged_tracks_d0;
   vector<float>   *tau_0_charged_tracks_d0_sig;
   vector<float>   *tau_0_charged_tracks_eProbabilityHT;
   vector<int>     *tau_0_charged_tracks_nInnermostPixelHits;
   vector<int>     *tau_0_charged_tracks_nPixelHits;
   vector<int>     *tau_0_charged_tracks_nSCTHits;
   vector<TLorentzVector> *tau_0_charged_tracks_p4;
   vector<float>   *tau_0_charged_tracks_pt_err;
   vector<float>   *tau_0_charged_tracks_z0;
   vector<float>   *tau_0_charged_tracks_z0_sig;
   vector<float>   *tau_0_charged_tracks_z0_sintheta;
   vector<float>   *tau_0_charged_tracks_z0_sintheta_tjva;
   UInt_t          tau_0_decay_mode;
   Int_t           tau_0_ele_bdt_loose_retuned;
   Int_t           tau_0_ele_bdt_medium_retuned;
   Float_t         tau_0_ele_bdt_score_retuned;
   Float_t         tau_0_ele_bdt_score_trans_retuned;
   Int_t           tau_0_ele_bdt_tight_retuned;
   Float_t         tau_0_ele_match_lhscore;
   UInt_t          tau_0_ele_olr_pass;
   Int_t           tau_0_jetFakeFakeFlavour;
   Float_t         tau_0_jet_bdt_score;
   Float_t         tau_0_jet_bdt_score_trans;
   UInt_t          tau_0_jet_rnn_loose;
   UInt_t          tau_0_jet_rnn_medium;
   Float_t         tau_0_jet_rnn_score;
   Float_t         tau_0_jet_rnn_score_trans;
   UInt_t          tau_0_jet_rnn_tight;
   Float_t         tau_0_jet_seed_TrackWidthPt1000_wrt_PV;
   Float_t         tau_0_jet_seed_TrackWidthPt1000_wrt_TV;
   UInt_t          tau_0_n_charged_tracks;
   UInt_t          tau_0_n_conversion_tracks;
   UInt_t          tau_0_n_isolation_tracks;
   TLorentzVector  *tau_0_p4;
   Float_t         tau_0_q;
   UInt_t          tau_0_truth;
   Int_t           tau_0_truth_classifierParticleOrigin;
   Int_t           tau_0_truth_classifierParticleType;
   Int_t           tau_0_truth_decayVertex;
   TVector3        *tau_0_truth_decayVertex_v;
   UInt_t          tau_0_truth_isEle;
   UInt_t          tau_0_truth_isHadTau;
   UInt_t          tau_0_truth_isJet;
   UInt_t          tau_0_truth_isMuon;
   UInt_t          tau_0_truth_isTau;
   UInt_t          tau_0_truth_isTruthMatch;
   TLorentzVector  *tau_0_truth_p4;
   Int_t           tau_0_truth_pdgId;
   Int_t           tau_0_truth_productionVertex;
   TVector3        *tau_0_truth_productionVertex_v;
   Float_t         tau_0_truth_pz;
   TLorentzVector  *tau_0_truth_vis_charged_p4;
   TLorentzVector  *tau_0_truth_vis_neutral_others_p4;
   TLorentzVector  *tau_0_truth_vis_neutral_p4;
   TLorentzVector  *tau_0_truth_vis_neutral_pions_p4;
   Float_t         triggerSF_em_NOMINAL;
   Double_t        weight_mc;
   vector<float>   *weight_mc_v;

   // List of branches
   TBranch        *b_HLT_e120_lhloose;   //!
   TBranch        *b_HLT_e140_lhloose_nod0;   //!
   TBranch        *b_HLT_e24_lhmedium_L1EM20VH;   //!
   TBranch        *b_HLT_e26_lhtight_nod0_ivarloose;   //!
   TBranch        *b_HLT_e60_lhmedium;   //!
   TBranch        *b_HLT_e60_lhmedium_nod0;   //!
   TBranch        *b_HLT_mu20_iloose_L1MU15;   //!
   TBranch        *b_HLT_mu26_ivarmedium;   //!
   TBranch        *b_HLT_mu50;   //!
   TBranch        *b_NOMINAL_pileup_combined_weight;   //!
   TBranch        *b_NOMINAL_pileup_random_run_number;   //!
   TBranch        *b_bjet_0;   //!
   TBranch        *b_bjet_0_Bottom_DL1_score;   //!
   TBranch        *b_bjet_0_Charm_DL1_score;   //!
   TBranch        *b_bjet_0_Light_DL1_score;   //!
   TBranch        *b_bjet_0_MV2c10_FixedCutBEff_85_weight;   //!
   TBranch        *b_bjet_0_b_tagged_MV2c10_FixedCutBEff_85;   //!
   TBranch        *b_bjet_0_matched;   //!
   TBranch        *b_bjet_0_matched_classifierParticleOrigin;   //!
   TBranch        *b_bjet_0_matched_classifierParticleType;   //!
   TBranch        *b_bjet_0_matched_origin;   //!
   TBranch        *b_bjet_0_matched_p4;   //!
   TBranch        *b_bjet_0_matched_pdgId;   //!
   TBranch        *b_bjet_0_matched_pz;   //!
   TBranch        *b_bjet_0_matched_q;   //!
   TBranch        *b_bjet_0_matched_status;   //!
   TBranch        *b_bjet_0_matched_type;   //!
   TBranch        *b_bjet_0_origin;   //!
   TBranch        *b_bjet_0_p4;   //!
   TBranch        *b_bjet_0_type;   //!
   TBranch        *b_bjet_1;   //!
   TBranch        *b_bjet_1_Bottom_DL1_score;   //!
   TBranch        *b_bjet_1_Charm_DL1_score;   //!
   TBranch        *b_bjet_1_Light_DL1_score;   //!
   TBranch        *b_bjet_1_MV2c10_FixedCutBEff_85_weight;   //!
   TBranch        *b_bjet_1_b_tagged_MV2c10_FixedCutBEff_85;   //!
   TBranch        *b_bjet_1_matched;   //!
   TBranch        *b_bjet_1_matched_classifierParticleOrigin;   //!
   TBranch        *b_bjet_1_matched_classifierParticleType;   //!
   TBranch        *b_bjet_1_matched_origin;   //!
   TBranch        *b_bjet_1_matched_p4;   //!
   TBranch        *b_bjet_1_matched_pdgId;   //!
   TBranch        *b_bjet_1_matched_pz;   //!
   TBranch        *b_bjet_1_matched_q;   //!
   TBranch        *b_bjet_1_matched_status;   //!
   TBranch        *b_bjet_1_matched_type;   //!
   TBranch        *b_bjet_1_origin;   //!
   TBranch        *b_bjet_1_p4;   //!
   TBranch        *b_bjet_1_type;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e120_lhloose;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e140_lhloose_nod0;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e24_lhmedium_L1EM20VH;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e26_lhtight_nod0_ivarloose;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e60_lhmedium;   //!
   TBranch        *b_eleTrigMatch_0_HLT_e60_lhmedium_nod0;   //!
   TBranch        *b_eleTrigMatch_0_trigger_matched;   //!
   TBranch        *b_elec_0;   //!
   TBranch        *b_elec_0_NOMINAL_EleEffSF_Isolation_TightLLH_d0z0_v13_FCLoose;   //!
   TBranch        *b_elec_0_NOMINAL_EleEffSF_Isolation_TightLLH_d0z0_v13_FCTight;   //!
   TBranch        *b_elec_0_NOMINAL_EleEffSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_2018_e26_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v13_isolFCTight;   //!
   TBranch        *b_elec_0_NOMINAL_EleEffSF_offline_RecoTrk;   //!
   TBranch        *b_elec_0_NOMINAL_EleEffSF_offline_TightLLH_d0z0_v13;   //!
   TBranch        *b_elec_0_NOMINAL_efficiency_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_2018_e26_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v13_isolFCTight;   //!
   TBranch        *b_elec_0_cluster_eta;   //!
   TBranch        *b_elec_0_cluster_eta_be2;   //!
   TBranch        *b_elec_0_id_medium;   //!
   TBranch        *b_elec_0_id_tight;   //!
   TBranch        *b_elec_0_iso_FCLoose;   //!
   TBranch        *b_elec_0_iso_FCTight;   //!
   TBranch        *b_elec_0_iso_FixedCutLoose;   //!
   TBranch        *b_elec_0_iso_FixedCutTight;   //!
   TBranch        *b_elec_0_iso_FixedCutTightCaloOnly;   //!
   TBranch        *b_elec_0_iso_Loose_FixedRad;   //!
   TBranch        *b_elec_0_iso_TightTrackOnly_FixedRad;   //!
   TBranch        *b_elec_0_matched_classifierParticleOrigin;   //!
   TBranch        *b_elec_0_matched_classifierParticleType;   //!
   TBranch        *b_elec_0_matched_origin;   //!
   TBranch        *b_elec_0_matched_p4;   //!
   TBranch        *b_elec_0_matched_pdgId;   //!
   TBranch        *b_elec_0_matched_pz;   //!
   TBranch        *b_elec_0_matched_q;   //!
   TBranch        *b_elec_0_matched_type;   //!
   TBranch        *b_elec_0_p4;   //!
   TBranch        *b_elec_0_q;   //!
   TBranch        *b_elec_0_trk_d0_sig;   //!
   TBranch        *b_elec_0_trk_p4;   //!
   TBranch        *b_elec_0_trk_pvx_z0_sintheta;   //!
   TBranch        *b_elec_0_trk_z0_sintheta;   //!
   TBranch        *b_event_is_bad_batman;   //!
   TBranch        *b_event_number;   //!
   TBranch        *b_jet_NOMINAL_central_jets_global_effSF_JVT;   //!
   TBranch        *b_jet_NOMINAL_central_jets_global_ineffSF_JVT;   //!
   TBranch        *b_jet_NOMINAL_forward_jets_global_effSF_JVT;   //!
   TBranch        *b_jet_NOMINAL_forward_jets_global_ineffSF_JVT;   //!
   TBranch        *b_jet_NOMINAL_global_effSF_MV2c10_FixedCutBEff_85;   //!
   TBranch        *b_jet_NOMINAL_global_ineffSF_MV2c10_FixedCutBEff_85;   //!
   TBranch        *b_ljet_0;   //!
   TBranch        *b_ljet_0_Bottom_DL1_score;   //!
   TBranch        *b_ljet_0_Charm_DL1_score;   //!
   TBranch        *b_ljet_0_Light_DL1_score;   //!
   TBranch        *b_ljet_0_MV2c10_FixedCutBEff_85_weight;   //!
   TBranch        *b_ljet_0_b_tagged_MV2c10_FixedCutBEff_85;   //!
   TBranch        *b_ljet_0_flavorlabel;   //!
   TBranch        *b_ljet_0_flavorlabel_cone;   //!
   TBranch        *b_ljet_0_flavorlabel_part;   //!
   TBranch        *b_ljet_0_matched;   //!
   TBranch        *b_ljet_0_matched_classifierParticleOrigin;   //!
   TBranch        *b_ljet_0_matched_classifierParticleType;   //!
   TBranch        *b_ljet_0_matched_origin;   //!
   TBranch        *b_ljet_0_matched_p4;   //!
   TBranch        *b_ljet_0_matched_pdgId;   //!
   TBranch        *b_ljet_0_matched_pz;   //!
   TBranch        *b_ljet_0_matched_q;   //!
   TBranch        *b_ljet_0_matched_status;   //!
   TBranch        *b_ljet_0_matched_type;   //!
   TBranch        *b_ljet_0_origin;   //!
   TBranch        *b_ljet_0_p4;   //!
   TBranch        *b_ljet_0_type;   //!
   TBranch        *b_ljet_1;   //!
   TBranch        *b_ljet_1_Bottom_DL1_score;   //!
   TBranch        *b_ljet_1_Charm_DL1_score;   //!
   TBranch        *b_ljet_1_Light_DL1_score;   //!
   TBranch        *b_ljet_1_MV2c10_FixedCutBEff_85_weight;   //!
   TBranch        *b_ljet_1_b_tagged_MV2c10_FixedCutBEff_85;   //!
   TBranch        *b_ljet_1_flavorlabel;   //!
   TBranch        *b_ljet_1_flavorlabel_cone;   //!
   TBranch        *b_ljet_1_flavorlabel_part;   //!
   TBranch        *b_ljet_1_matched;   //!
   TBranch        *b_ljet_1_matched_classifierParticleOrigin;   //!
   TBranch        *b_ljet_1_matched_classifierParticleType;   //!
   TBranch        *b_ljet_1_matched_origin;   //!
   TBranch        *b_ljet_1_matched_p4;   //!
   TBranch        *b_ljet_1_matched_pdgId;   //!
   TBranch        *b_ljet_1_matched_pz;   //!
   TBranch        *b_ljet_1_matched_q;   //!
   TBranch        *b_ljet_1_matched_status;   //!
   TBranch        *b_ljet_1_matched_type;   //!
   TBranch        *b_ljet_1_origin;   //!
   TBranch        *b_ljet_1_p4;   //!
   TBranch        *b_ljet_1_type;   //!
   TBranch        *b_ljet_2;   //!
   TBranch        *b_ljet_2_Bottom_DL1_score;   //!
   TBranch        *b_ljet_2_Charm_DL1_score;   //!
   TBranch        *b_ljet_2_Light_DL1_score;   //!
   TBranch        *b_ljet_2_MV2c10_FixedCutBEff_85_weight;   //!
   TBranch        *b_ljet_2_b_tag_quantile;   //!
   TBranch        *b_ljet_2_b_tag_score;   //!
   TBranch        *b_ljet_2_b_tagged_MV2c10_FixedCutBEff_85;   //!
   TBranch        *b_ljet_2_cleanJet_EC_LooseBad;   //!
   TBranch        *b_ljet_2_fjvt;   //!
   TBranch        *b_ljet_2_flavorlabel;   //!
   TBranch        *b_ljet_2_flavorlabel_cone;   //!
   TBranch        *b_ljet_2_flavorlabel_part;   //!
   TBranch        *b_ljet_2_is_Jvt_HS;   //!
   TBranch        *b_ljet_2_jvt;   //!
   TBranch        *b_ljet_2_matched;   //!
   TBranch        *b_ljet_2_matched_classifierParticleOrigin;   //!
   TBranch        *b_ljet_2_matched_classifierParticleType;   //!
   TBranch        *b_ljet_2_matched_mother_pdgId;   //!
   TBranch        *b_ljet_2_matched_mother_status;   //!
   TBranch        *b_ljet_2_matched_origin;   //!
   TBranch        *b_ljet_2_matched_p4;   //!
   TBranch        *b_ljet_2_matched_pdgId;   //!
   TBranch        *b_ljet_2_matched_pz;   //!
   TBranch        *b_ljet_2_matched_q;   //!
   TBranch        *b_ljet_2_matched_status;   //!
   TBranch        *b_ljet_2_matched_type;   //!
   TBranch        *b_ljet_2_origin;   //!
   TBranch        *b_ljet_2_p4;   //!
   TBranch        *b_ljet_2_q;   //!
   TBranch        *b_ljet_2_type;   //!
   TBranch        *b_ljet_2_width;   //!
   TBranch        *b_ljet_3;   //!
   TBranch        *b_ljet_3_Bottom_DL1_score;   //!
   TBranch        *b_ljet_3_Charm_DL1_score;   //!
   TBranch        *b_ljet_3_Light_DL1_score;   //!
   TBranch        *b_ljet_3_MV2c10_FixedCutBEff_85_weight;   //!
   TBranch        *b_ljet_3_b_tag_quantile;   //!
   TBranch        *b_ljet_3_b_tag_score;   //!
   TBranch        *b_ljet_3_b_tagged_MV2c10_FixedCutBEff_85;   //!
   TBranch        *b_ljet_3_cleanJet_EC_LooseBad;   //!
   TBranch        *b_ljet_3_fjvt;   //!
   TBranch        *b_ljet_3_flavorlabel;   //!
   TBranch        *b_ljet_3_flavorlabel_cone;   //!
   TBranch        *b_ljet_3_flavorlabel_part;   //!
   TBranch        *b_ljet_3_is_Jvt_HS;   //!
   TBranch        *b_ljet_3_jvt;   //!
   TBranch        *b_ljet_3_matched;   //!
   TBranch        *b_ljet_3_matched_classifierParticleOrigin;   //!
   TBranch        *b_ljet_3_matched_classifierParticleType;   //!
   TBranch        *b_ljet_3_matched_mother_pdgId;   //!
   TBranch        *b_ljet_3_matched_mother_status;   //!
   TBranch        *b_ljet_3_matched_origin;   //!
   TBranch        *b_ljet_3_matched_p4;   //!
   TBranch        *b_ljet_3_matched_pdgId;   //!
   TBranch        *b_ljet_3_matched_pz;   //!
   TBranch        *b_ljet_3_matched_q;   //!
   TBranch        *b_ljet_3_matched_status;   //!
   TBranch        *b_ljet_3_matched_type;   //!
   TBranch        *b_ljet_3_origin;   //!
   TBranch        *b_ljet_3_p4;   //!
   TBranch        *b_ljet_3_q;   //!
   TBranch        *b_ljet_3_type;   //!
   TBranch        *b_ljet_3_width;   //!
   TBranch        *b_met_reco_p4;   //!
   TBranch        *b_muTrigMatch_0_HLT_mu20_iloose_L1MU15;   //!
   TBranch        *b_muTrigMatch_0_HLT_mu26_ivarmedium;   //!
   TBranch        *b_muTrigMatch_0_HLT_mu50;   //!
   TBranch        *b_muTrigMatch_0_trigger_matched;   //!
   TBranch        *b_muon_0;   //!
   TBranch        *b_muon_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium;   //!
   TBranch        *b_muon_0_NOMINAL_MuEffSF_HLT_mu26_ivarmedium_OR_HLT_mu50_QualMedium;   //!
   TBranch        *b_muon_0_NOMINAL_MuEffSF_IsoLoose_FixedRad;   //!
   TBranch        *b_muon_0_NOMINAL_MuEffSF_IsoTightTrackOnly_FixedRad;   //!
   TBranch        *b_muon_0_NOMINAL_MuEffSF_Reco_QualMedium;   //!
   TBranch        *b_muon_0_NOMINAL_MuEffSF_TTVA;   //!
   TBranch        *b_muon_0_id_medium;   //!
   TBranch        *b_muon_0_id_tight;   //!
   TBranch        *b_muon_0_iso_FCLoose;   //!
   TBranch        *b_muon_0_iso_FCTight;   //!
   TBranch        *b_muon_0_iso_FixedCutLoose;   //!
   TBranch        *b_muon_0_iso_FixedCutTight;   //!
   TBranch        *b_muon_0_iso_FixedCutTightCaloOnly;   //!
   TBranch        *b_muon_0_iso_Loose_FixedRad;   //!
   TBranch        *b_muon_0_iso_TightTrackOnly_FixedRad;   //!
   TBranch        *b_muon_0_matched_classifierParticleOrigin;   //!
   TBranch        *b_muon_0_matched_classifierParticleType;   //!
   TBranch        *b_muon_0_matched_p4;   //!
   TBranch        *b_muon_0_matched_pdgId;   //!
   TBranch        *b_muon_0_matched_pz;   //!
   TBranch        *b_muon_0_matched_q;   //!
   TBranch        *b_muon_0_matched_type;   //!
   TBranch        *b_muon_0_p4;   //!
   TBranch        *b_muon_0_q;   //!
   TBranch        *b_muon_0_trk_d0_sig;   //!
   TBranch        *b_muon_0_trk_p4;   //!
   TBranch        *b_muon_0_trk_pvx_z0_sig;   //!
   TBranch        *b_muon_0_trk_pvx_z0_sintheta;   //!
   TBranch        *b_muon_0_trk_z0_sintheta;   //!
   TBranch        *b_n_actual_int;   //!
   TBranch        *b_n_actual_int_cor;   //!
   TBranch        *b_n_avg_int;   //!
   TBranch        *b_n_avg_int_cor;   //!
   TBranch        *b_n_bjets_MV2c10_FixedCutBEff_85;   //!
   TBranch        *b_n_electrons;   //!
   TBranch        *b_n_electrons_olr;   //!
   TBranch        *b_n_jets;   //!
   TBranch        *b_n_muons;   //!
   TBranch        *b_n_pvx;   //!
   TBranch        *b_n_taus;   //!
   TBranch        *b_n_taus_met;   //!
   TBranch        *b_n_taus_olr;   //!
   TBranch        *b_n_taus_rnn_loose;   //!
   TBranch        *b_n_taus_rnn_medium;   //!
   TBranch        *b_n_taus_rnn_tight;   //!
   TBranch        *b_n_taus_rnn_veryloose;   //!
   TBranch        *b_n_vx;   //!
   TBranch        *b_run_number;   //!
   TBranch        *b_tau_0;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_JetRNNloose;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_JetRNNmedium;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_JetRNNtight;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_LooseEleBDT_electron;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_MediumEleBDT_electron;   //!
   TBranch        *b_tau_0_NOMINAL_TauEffSF_reco;   //!
   TBranch        *b_tau_0_charged_tracks_d0;   //!
   TBranch        *b_tau_0_charged_tracks_d0_sig;   //!
   TBranch        *b_tau_0_charged_tracks_eProbabilityHT;   //!
   TBranch        *b_tau_0_charged_tracks_nInnermostPixelHits;   //!
   TBranch        *b_tau_0_charged_tracks_nPixelHits;   //!
   TBranch        *b_tau_0_charged_tracks_nSCTHits;   //!
   TBranch        *b_tau_0_charged_tracks_p4;   //!
   TBranch        *b_tau_0_charged_tracks_pt_err;   //!
   TBranch        *b_tau_0_charged_tracks_z0;   //!
   TBranch        *b_tau_0_charged_tracks_z0_sig;   //!
   TBranch        *b_tau_0_charged_tracks_z0_sintheta;   //!
   TBranch        *b_tau_0_charged_tracks_z0_sintheta_tjva;   //!
   TBranch        *b_tau_0_decay_mode;   //!
   TBranch        *b_tau_0_ele_bdt_loose_retuned;   //!
   TBranch        *b_tau_0_ele_bdt_medium_retuned;   //!
   TBranch        *b_tau_0_ele_bdt_score_retuned;   //!
   TBranch        *b_tau_0_ele_bdt_score_trans_retuned;   //!
   TBranch        *b_tau_0_ele_bdt_tight_retuned;   //!
   TBranch        *b_tau_0_ele_match_lhscore;   //!
   TBranch        *b_tau_0_ele_olr_pass;   //!
   TBranch        *b_tau_0_jetFakeFakeFlavour;   //!
   TBranch        *b_tau_0_jet_bdt_score;   //!
   TBranch        *b_tau_0_jet_bdt_score_trans;   //!
   TBranch        *b_tau_0_jet_rnn_loose;   //!
   TBranch        *b_tau_0_jet_rnn_medium;   //!
   TBranch        *b_tau_0_jet_rnn_score;   //!
   TBranch        *b_tau_0_jet_rnn_score_trans;   //!
   TBranch        *b_tau_0_jet_rnn_tight;   //!
   TBranch        *b_tau_0_jet_seed_TrackWidthPt1000_wrt_PV;   //!
   TBranch        *b_tau_0_jet_seed_TrackWidthPt1000_wrt_TV;   //!
   TBranch        *b_tau_0_n_charged_tracks;   //!
   TBranch        *b_tau_0_n_conversion_tracks;   //!
   TBranch        *b_tau_0_n_isolation_tracks;   //!
   TBranch        *b_tau_0_p4;   //!
   TBranch        *b_tau_0_q;   //!
   TBranch        *b_tau_0_truth;   //!
   TBranch        *b_tau_0_truth_classifierParticleOrigin;   //!
   TBranch        *b_tau_0_truth_classifierParticleType;   //!
   TBranch        *b_tau_0_truth_decayVertex;   //!
   TBranch        *b_tau_0_truth_decayVertex_v;   //!
   TBranch        *b_tau_0_truth_isEle;   //!
   TBranch        *b_tau_0_truth_isHadTau;   //!
   TBranch        *b_tau_0_truth_isJet;   //!
   TBranch        *b_tau_0_truth_isMuon;   //!
   TBranch        *b_tau_0_truth_isTau;   //!
   TBranch        *b_tau_0_truth_isTruthMatch;   //!
   TBranch        *b_tau_0_truth_p4;   //!
   TBranch        *b_tau_0_truth_pdgId;   //!
   TBranch        *b_tau_0_truth_productionVertex;   //!
   TBranch        *b_tau_0_truth_productionVertex_v;   //!
   TBranch        *b_tau_0_truth_pz;   //!
   TBranch        *b_tau_0_truth_vis_charged_p4;   //!
   TBranch        *b_tau_0_truth_vis_neutral_others_p4;   //!
   TBranch        *b_tau_0_truth_vis_neutral_p4;   //!
   TBranch        *b_tau_0_truth_vis_neutral_pions_p4;   //!
   TBranch        *b_triggerSF_em_NOMINAL;   //!
   TBranch        *b_weight_mc;   //!
   TBranch        *b_weight_mc_v;   //!

   CLoop(TTree *tree=0);
   virtual ~CLoop();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(double lumFactor, bool fastMode, int z_sample);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef CLoop_cxx
CLoop::CLoop(TTree *tree) : fChain(0)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/media/diego/27AB07EC0C8BE0A7/DATA/v25/user.dbaronmo.v25.mc.361108.PoPy8_Ztt.M4.e3601_s3126_r10724_p3975.sv2_Le/user.dbaronmo.22673042._000001.LepUniv_ttbar.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/media/diego/27AB07EC0C8BE0A7/DATA/v25/user.dbaronmo.v25.mc.361108.PoPy8_Ztt.M4.e3601_s3126_r10724_p3975.sv2_Le/user.dbaronmo.22673042._000001.LepUniv_ttbar.root");
      }
      f->GetObject("NOMINAL",tree);

   }
   Init(tree);
}

CLoop::~CLoop()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t CLoop::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t CLoop::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void CLoop::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   bjet_0_matched_p4 = 0;
   bjet_0_p4 = 0;
   bjet_1_matched_p4 = 0;
   bjet_1_p4 = 0;
   elec_0_matched_p4 = 0;
   elec_0_p4 = 0;
   elec_0_trk_p4 = 0;
   ljet_0_matched_p4 = 0;
   ljet_0_p4 = 0;
   ljet_1_matched_p4 = 0;
   ljet_1_p4 = 0;
   ljet_2_matched_p4 = 0;
   ljet_2_p4 = 0;
   ljet_3_matched_p4 = 0;
   ljet_3_p4 = 0;
   met_reco_p4 = 0;
   muon_0_matched_p4 = 0;
   muon_0_p4 = 0;
   muon_0_trk_p4 = 0;
   tau_0_charged_tracks_d0 = 0;
   tau_0_charged_tracks_d0_sig = 0;
   tau_0_charged_tracks_eProbabilityHT = 0;
   tau_0_charged_tracks_nInnermostPixelHits = 0;
   tau_0_charged_tracks_nPixelHits = 0;
   tau_0_charged_tracks_nSCTHits = 0;
   tau_0_charged_tracks_p4 = 0;
   tau_0_charged_tracks_pt_err = 0;
   tau_0_charged_tracks_z0 = 0;
   tau_0_charged_tracks_z0_sig = 0;
   tau_0_charged_tracks_z0_sintheta = 0;
   tau_0_charged_tracks_z0_sintheta_tjva = 0;
   tau_0_p4 = 0;
   tau_0_truth_decayVertex_v = 0;
   tau_0_truth_p4 = 0;
   tau_0_truth_productionVertex_v = 0;
   tau_0_truth_vis_charged_p4 = 0;
   tau_0_truth_vis_neutral_others_p4 = 0;
   tau_0_truth_vis_neutral_p4 = 0;
   tau_0_truth_vis_neutral_pions_p4 = 0;
   weight_mc_v = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("HLT_e120_lhloose", &HLT_e120_lhloose, &b_HLT_e120_lhloose);
   fChain->SetBranchAddress("HLT_e140_lhloose_nod0", &HLT_e140_lhloose_nod0, &b_HLT_e140_lhloose_nod0);
   fChain->SetBranchAddress("HLT_e24_lhmedium_L1EM20VH", &HLT_e24_lhmedium_L1EM20VH, &b_HLT_e24_lhmedium_L1EM20VH);
   fChain->SetBranchAddress("HLT_e26_lhtight_nod0_ivarloose", &HLT_e26_lhtight_nod0_ivarloose, &b_HLT_e26_lhtight_nod0_ivarloose);
   fChain->SetBranchAddress("HLT_e60_lhmedium", &HLT_e60_lhmedium, &b_HLT_e60_lhmedium);
   fChain->SetBranchAddress("HLT_e60_lhmedium_nod0", &HLT_e60_lhmedium_nod0, &b_HLT_e60_lhmedium_nod0);
   fChain->SetBranchAddress("HLT_mu20_iloose_L1MU15", &HLT_mu20_iloose_L1MU15, &b_HLT_mu20_iloose_L1MU15);
   fChain->SetBranchAddress("HLT_mu26_ivarmedium", &HLT_mu26_ivarmedium, &b_HLT_mu26_ivarmedium);
   fChain->SetBranchAddress("HLT_mu50", &HLT_mu50, &b_HLT_mu50);
   fChain->SetBranchAddress("NOMINAL_pileup_combined_weight", &NOMINAL_pileup_combined_weight, &b_NOMINAL_pileup_combined_weight);
   fChain->SetBranchAddress("NOMINAL_pileup_random_run_number", &NOMINAL_pileup_random_run_number, &b_NOMINAL_pileup_random_run_number);
   fChain->SetBranchAddress("bjet_0", &bjet_0, &b_bjet_0);
   fChain->SetBranchAddress("bjet_0_Bottom_DL1_score", &bjet_0_Bottom_DL1_score, &b_bjet_0_Bottom_DL1_score);
   fChain->SetBranchAddress("bjet_0_Charm_DL1_score", &bjet_0_Charm_DL1_score, &b_bjet_0_Charm_DL1_score);
   fChain->SetBranchAddress("bjet_0_Light_DL1_score", &bjet_0_Light_DL1_score, &b_bjet_0_Light_DL1_score);
   fChain->SetBranchAddress("bjet_0_MV2c10_FixedCutBEff_85_weight", &bjet_0_MV2c10_FixedCutBEff_85_weight, &b_bjet_0_MV2c10_FixedCutBEff_85_weight);
   fChain->SetBranchAddress("bjet_0_b_tagged_MV2c10_FixedCutBEff_85", &bjet_0_b_tagged_MV2c10_FixedCutBEff_85, &b_bjet_0_b_tagged_MV2c10_FixedCutBEff_85);
   fChain->SetBranchAddress("bjet_0_matched", &bjet_0_matched, &b_bjet_0_matched);
   fChain->SetBranchAddress("bjet_0_matched_classifierParticleOrigin", &bjet_0_matched_classifierParticleOrigin, &b_bjet_0_matched_classifierParticleOrigin);
   fChain->SetBranchAddress("bjet_0_matched_classifierParticleType", &bjet_0_matched_classifierParticleType, &b_bjet_0_matched_classifierParticleType);
   fChain->SetBranchAddress("bjet_0_matched_origin", &bjet_0_matched_origin, &b_bjet_0_matched_origin);
   fChain->SetBranchAddress("bjet_0_matched_p4", &bjet_0_matched_p4, &b_bjet_0_matched_p4);
   fChain->SetBranchAddress("bjet_0_matched_pdgId", &bjet_0_matched_pdgId, &b_bjet_0_matched_pdgId);
   fChain->SetBranchAddress("bjet_0_matched_pz", &bjet_0_matched_pz, &b_bjet_0_matched_pz);
   fChain->SetBranchAddress("bjet_0_matched_q", &bjet_0_matched_q, &b_bjet_0_matched_q);
   fChain->SetBranchAddress("bjet_0_matched_status", &bjet_0_matched_status, &b_bjet_0_matched_status);
   fChain->SetBranchAddress("bjet_0_matched_type", &bjet_0_matched_type, &b_bjet_0_matched_type);
   fChain->SetBranchAddress("bjet_0_origin", &bjet_0_origin, &b_bjet_0_origin);
   fChain->SetBranchAddress("bjet_0_p4", &bjet_0_p4, &b_bjet_0_p4);
   fChain->SetBranchAddress("bjet_0_type", &bjet_0_type, &b_bjet_0_type);
   fChain->SetBranchAddress("bjet_1", &bjet_1, &b_bjet_1);
   fChain->SetBranchAddress("bjet_1_Bottom_DL1_score", &bjet_1_Bottom_DL1_score, &b_bjet_1_Bottom_DL1_score);
   fChain->SetBranchAddress("bjet_1_Charm_DL1_score", &bjet_1_Charm_DL1_score, &b_bjet_1_Charm_DL1_score);
   fChain->SetBranchAddress("bjet_1_Light_DL1_score", &bjet_1_Light_DL1_score, &b_bjet_1_Light_DL1_score);
   fChain->SetBranchAddress("bjet_1_MV2c10_FixedCutBEff_85_weight", &bjet_1_MV2c10_FixedCutBEff_85_weight, &b_bjet_1_MV2c10_FixedCutBEff_85_weight);
   fChain->SetBranchAddress("bjet_1_b_tagged_MV2c10_FixedCutBEff_85", &bjet_1_b_tagged_MV2c10_FixedCutBEff_85, &b_bjet_1_b_tagged_MV2c10_FixedCutBEff_85);
   fChain->SetBranchAddress("bjet_1_matched", &bjet_1_matched, &b_bjet_1_matched);
   fChain->SetBranchAddress("bjet_1_matched_classifierParticleOrigin", &bjet_1_matched_classifierParticleOrigin, &b_bjet_1_matched_classifierParticleOrigin);
   fChain->SetBranchAddress("bjet_1_matched_classifierParticleType", &bjet_1_matched_classifierParticleType, &b_bjet_1_matched_classifierParticleType);
   fChain->SetBranchAddress("bjet_1_matched_origin", &bjet_1_matched_origin, &b_bjet_1_matched_origin);
   fChain->SetBranchAddress("bjet_1_matched_p4", &bjet_1_matched_p4, &b_bjet_1_matched_p4);
   fChain->SetBranchAddress("bjet_1_matched_pdgId", &bjet_1_matched_pdgId, &b_bjet_1_matched_pdgId);
   fChain->SetBranchAddress("bjet_1_matched_pz", &bjet_1_matched_pz, &b_bjet_1_matched_pz);
   fChain->SetBranchAddress("bjet_1_matched_q", &bjet_1_matched_q, &b_bjet_1_matched_q);
   fChain->SetBranchAddress("bjet_1_matched_status", &bjet_1_matched_status, &b_bjet_1_matched_status);
   fChain->SetBranchAddress("bjet_1_matched_type", &bjet_1_matched_type, &b_bjet_1_matched_type);
   fChain->SetBranchAddress("bjet_1_origin", &bjet_1_origin, &b_bjet_1_origin);
   fChain->SetBranchAddress("bjet_1_p4", &bjet_1_p4, &b_bjet_1_p4);
   fChain->SetBranchAddress("bjet_1_type", &bjet_1_type, &b_bjet_1_type);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e120_lhloose", &eleTrigMatch_0_HLT_e120_lhloose, &b_eleTrigMatch_0_HLT_e120_lhloose);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e140_lhloose_nod0", &eleTrigMatch_0_HLT_e140_lhloose_nod0, &b_eleTrigMatch_0_HLT_e140_lhloose_nod0);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e24_lhmedium_L1EM20VH", &eleTrigMatch_0_HLT_e24_lhmedium_L1EM20VH, &b_eleTrigMatch_0_HLT_e24_lhmedium_L1EM20VH);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e26_lhtight_nod0_ivarloose", &eleTrigMatch_0_HLT_e26_lhtight_nod0_ivarloose, &b_eleTrigMatch_0_HLT_e26_lhtight_nod0_ivarloose);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e60_lhmedium", &eleTrigMatch_0_HLT_e60_lhmedium, &b_eleTrigMatch_0_HLT_e60_lhmedium);
   fChain->SetBranchAddress("eleTrigMatch_0_HLT_e60_lhmedium_nod0", &eleTrigMatch_0_HLT_e60_lhmedium_nod0, &b_eleTrigMatch_0_HLT_e60_lhmedium_nod0);
   fChain->SetBranchAddress("eleTrigMatch_0_trigger_matched", &eleTrigMatch_0_trigger_matched, &b_eleTrigMatch_0_trigger_matched);
   fChain->SetBranchAddress("elec_0", &elec_0, &b_elec_0);
   fChain->SetBranchAddress("elec_0_NOMINAL_EleEffSF_Isolation_TightLLH_d0z0_v13_FCLoose", &elec_0_NOMINAL_EleEffSF_Isolation_TightLLH_d0z0_v13_FCLoose, &b_elec_0_NOMINAL_EleEffSF_Isolation_TightLLH_d0z0_v13_FCLoose);
   fChain->SetBranchAddress("elec_0_NOMINAL_EleEffSF_Isolation_TightLLH_d0z0_v13_FCTight", &elec_0_NOMINAL_EleEffSF_Isolation_TightLLH_d0z0_v13_FCTight, &b_elec_0_NOMINAL_EleEffSF_Isolation_TightLLH_d0z0_v13_FCTight);
   fChain->SetBranchAddress("elec_0_NOMINAL_EleEffSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_2018_e26_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v13_isolFCTight", &elec_0_NOMINAL_EleEffSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_2018_e26_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v13_isolFCTight, &b_elec_0_NOMINAL_EleEffSF_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_2018_e26_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v13_isolFCTight);
   fChain->SetBranchAddress("elec_0_NOMINAL_EleEffSF_offline_RecoTrk", &elec_0_NOMINAL_EleEffSF_offline_RecoTrk, &b_elec_0_NOMINAL_EleEffSF_offline_RecoTrk);
   fChain->SetBranchAddress("elec_0_NOMINAL_EleEffSF_offline_TightLLH_d0z0_v13", &elec_0_NOMINAL_EleEffSF_offline_TightLLH_d0z0_v13, &b_elec_0_NOMINAL_EleEffSF_offline_TightLLH_d0z0_v13);
   fChain->SetBranchAddress("elec_0_NOMINAL_efficiency_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_2018_e26_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v13_isolFCTight", &elec_0_NOMINAL_efficiency_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_2018_e26_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v13_isolFCTight, &b_elec_0_NOMINAL_efficiency_SINGLE_E_2015_e24_lhmedium_L1EM20VH_OR_e60_lhmedium_OR_e120_lhloose_2016_2018_e26_lhtight_nod0_ivarloose_OR_e60_lhmedium_nod0_OR_e140_lhloose_nod0_TightLLH_d0z0_v13_isolFCTight);
   fChain->SetBranchAddress("elec_0_cluster_eta", &elec_0_cluster_eta, &b_elec_0_cluster_eta);
   fChain->SetBranchAddress("elec_0_cluster_eta_be2", &elec_0_cluster_eta_be2, &b_elec_0_cluster_eta_be2);
   fChain->SetBranchAddress("elec_0_id_medium", &elec_0_id_medium, &b_elec_0_id_medium);
   fChain->SetBranchAddress("elec_0_id_tight", &elec_0_id_tight, &b_elec_0_id_tight);
   fChain->SetBranchAddress("elec_0_iso_FCLoose", &elec_0_iso_FCLoose, &b_elec_0_iso_FCLoose);
   fChain->SetBranchAddress("elec_0_iso_FCTight", &elec_0_iso_FCTight, &b_elec_0_iso_FCTight);
   fChain->SetBranchAddress("elec_0_iso_FixedCutLoose", &elec_0_iso_FixedCutLoose, &b_elec_0_iso_FixedCutLoose);
   fChain->SetBranchAddress("elec_0_iso_FixedCutTight", &elec_0_iso_FixedCutTight, &b_elec_0_iso_FixedCutTight);
   fChain->SetBranchAddress("elec_0_iso_FixedCutTightCaloOnly", &elec_0_iso_FixedCutTightCaloOnly, &b_elec_0_iso_FixedCutTightCaloOnly);
   fChain->SetBranchAddress("elec_0_iso_Loose_FixedRad", &elec_0_iso_Loose_FixedRad, &b_elec_0_iso_Loose_FixedRad);
   fChain->SetBranchAddress("elec_0_iso_TightTrackOnly_FixedRad", &elec_0_iso_TightTrackOnly_FixedRad, &b_elec_0_iso_TightTrackOnly_FixedRad);
   fChain->SetBranchAddress("elec_0_matched_classifierParticleOrigin", &elec_0_matched_classifierParticleOrigin, &b_elec_0_matched_classifierParticleOrigin);
   fChain->SetBranchAddress("elec_0_matched_classifierParticleType", &elec_0_matched_classifierParticleType, &b_elec_0_matched_classifierParticleType);
   fChain->SetBranchAddress("elec_0_matched_origin", &elec_0_matched_origin, &b_elec_0_matched_origin);
   fChain->SetBranchAddress("elec_0_matched_p4", &elec_0_matched_p4, &b_elec_0_matched_p4);
   fChain->SetBranchAddress("elec_0_matched_pdgId", &elec_0_matched_pdgId, &b_elec_0_matched_pdgId);
   fChain->SetBranchAddress("elec_0_matched_pz", &elec_0_matched_pz, &b_elec_0_matched_pz);
   fChain->SetBranchAddress("elec_0_matched_q", &elec_0_matched_q, &b_elec_0_matched_q);
   fChain->SetBranchAddress("elec_0_matched_type", &elec_0_matched_type, &b_elec_0_matched_type);
   fChain->SetBranchAddress("elec_0_p4", &elec_0_p4, &b_elec_0_p4);
   fChain->SetBranchAddress("elec_0_q", &elec_0_q, &b_elec_0_q);
   fChain->SetBranchAddress("elec_0_trk_d0_sig", &elec_0_trk_d0_sig, &b_elec_0_trk_d0_sig);
   fChain->SetBranchAddress("elec_0_trk_p4", &elec_0_trk_p4, &b_elec_0_trk_p4);
   fChain->SetBranchAddress("elec_0_trk_pvx_z0_sintheta", &elec_0_trk_pvx_z0_sintheta, &b_elec_0_trk_pvx_z0_sintheta);
   fChain->SetBranchAddress("elec_0_trk_z0_sintheta", &elec_0_trk_z0_sintheta, &b_elec_0_trk_z0_sintheta);
   fChain->SetBranchAddress("event_is_bad_batman", &event_is_bad_batman, &b_event_is_bad_batman);
   fChain->SetBranchAddress("event_number", &event_number, &b_event_number);
   fChain->SetBranchAddress("jet_NOMINAL_central_jets_global_effSF_JVT", &jet_NOMINAL_central_jets_global_effSF_JVT, &b_jet_NOMINAL_central_jets_global_effSF_JVT);
   fChain->SetBranchAddress("jet_NOMINAL_central_jets_global_ineffSF_JVT", &jet_NOMINAL_central_jets_global_ineffSF_JVT, &b_jet_NOMINAL_central_jets_global_ineffSF_JVT);
   fChain->SetBranchAddress("jet_NOMINAL_forward_jets_global_effSF_JVT", &jet_NOMINAL_forward_jets_global_effSF_JVT, &b_jet_NOMINAL_forward_jets_global_effSF_JVT);
   fChain->SetBranchAddress("jet_NOMINAL_forward_jets_global_ineffSF_JVT", &jet_NOMINAL_forward_jets_global_ineffSF_JVT, &b_jet_NOMINAL_forward_jets_global_ineffSF_JVT);
   fChain->SetBranchAddress("jet_NOMINAL_global_effSF_MV2c10_FixedCutBEff_85", &jet_NOMINAL_global_effSF_MV2c10_FixedCutBEff_85, &b_jet_NOMINAL_global_effSF_MV2c10_FixedCutBEff_85);
   fChain->SetBranchAddress("jet_NOMINAL_global_ineffSF_MV2c10_FixedCutBEff_85", &jet_NOMINAL_global_ineffSF_MV2c10_FixedCutBEff_85, &b_jet_NOMINAL_global_ineffSF_MV2c10_FixedCutBEff_85);
   fChain->SetBranchAddress("ljet_0", &ljet_0, &b_ljet_0);
   fChain->SetBranchAddress("ljet_0_Bottom_DL1_score", &ljet_0_Bottom_DL1_score, &b_ljet_0_Bottom_DL1_score);
   fChain->SetBranchAddress("ljet_0_Charm_DL1_score", &ljet_0_Charm_DL1_score, &b_ljet_0_Charm_DL1_score);
   fChain->SetBranchAddress("ljet_0_Light_DL1_score", &ljet_0_Light_DL1_score, &b_ljet_0_Light_DL1_score);
   fChain->SetBranchAddress("ljet_0_MV2c10_FixedCutBEff_85_weight", &ljet_0_MV2c10_FixedCutBEff_85_weight, &b_ljet_0_MV2c10_FixedCutBEff_85_weight);
   fChain->SetBranchAddress("ljet_0_b_tagged_MV2c10_FixedCutBEff_85", &ljet_0_b_tagged_MV2c10_FixedCutBEff_85, &b_ljet_0_b_tagged_MV2c10_FixedCutBEff_85);
   fChain->SetBranchAddress("ljet_0_flavorlabel", &ljet_0_flavorlabel, &b_ljet_0_flavorlabel);
   fChain->SetBranchAddress("ljet_0_flavorlabel_cone", &ljet_0_flavorlabel_cone, &b_ljet_0_flavorlabel_cone);
   fChain->SetBranchAddress("ljet_0_flavorlabel_part", &ljet_0_flavorlabel_part, &b_ljet_0_flavorlabel_part);
   fChain->SetBranchAddress("ljet_0_matched", &ljet_0_matched, &b_ljet_0_matched);
   fChain->SetBranchAddress("ljet_0_matched_classifierParticleOrigin", &ljet_0_matched_classifierParticleOrigin, &b_ljet_0_matched_classifierParticleOrigin);
   fChain->SetBranchAddress("ljet_0_matched_classifierParticleType", &ljet_0_matched_classifierParticleType, &b_ljet_0_matched_classifierParticleType);
   fChain->SetBranchAddress("ljet_0_matched_origin", &ljet_0_matched_origin, &b_ljet_0_matched_origin);
   fChain->SetBranchAddress("ljet_0_matched_p4", &ljet_0_matched_p4, &b_ljet_0_matched_p4);
   fChain->SetBranchAddress("ljet_0_matched_pdgId", &ljet_0_matched_pdgId, &b_ljet_0_matched_pdgId);
   fChain->SetBranchAddress("ljet_0_matched_pz", &ljet_0_matched_pz, &b_ljet_0_matched_pz);
   fChain->SetBranchAddress("ljet_0_matched_q", &ljet_0_matched_q, &b_ljet_0_matched_q);
   fChain->SetBranchAddress("ljet_0_matched_status", &ljet_0_matched_status, &b_ljet_0_matched_status);
   fChain->SetBranchAddress("ljet_0_matched_type", &ljet_0_matched_type, &b_ljet_0_matched_type);
   fChain->SetBranchAddress("ljet_0_origin", &ljet_0_origin, &b_ljet_0_origin);
   fChain->SetBranchAddress("ljet_0_p4", &ljet_0_p4, &b_ljet_0_p4);
   fChain->SetBranchAddress("ljet_0_type", &ljet_0_type, &b_ljet_0_type);
   fChain->SetBranchAddress("ljet_1", &ljet_1, &b_ljet_1);
   fChain->SetBranchAddress("ljet_1_Bottom_DL1_score", &ljet_1_Bottom_DL1_score, &b_ljet_1_Bottom_DL1_score);
   fChain->SetBranchAddress("ljet_1_Charm_DL1_score", &ljet_1_Charm_DL1_score, &b_ljet_1_Charm_DL1_score);
   fChain->SetBranchAddress("ljet_1_Light_DL1_score", &ljet_1_Light_DL1_score, &b_ljet_1_Light_DL1_score);
   fChain->SetBranchAddress("ljet_1_MV2c10_FixedCutBEff_85_weight", &ljet_1_MV2c10_FixedCutBEff_85_weight, &b_ljet_1_MV2c10_FixedCutBEff_85_weight);
   fChain->SetBranchAddress("ljet_1_b_tagged_MV2c10_FixedCutBEff_85", &ljet_1_b_tagged_MV2c10_FixedCutBEff_85, &b_ljet_1_b_tagged_MV2c10_FixedCutBEff_85);
   fChain->SetBranchAddress("ljet_1_flavorlabel", &ljet_1_flavorlabel, &b_ljet_1_flavorlabel);
   fChain->SetBranchAddress("ljet_1_flavorlabel_cone", &ljet_1_flavorlabel_cone, &b_ljet_1_flavorlabel_cone);
   fChain->SetBranchAddress("ljet_1_flavorlabel_part", &ljet_1_flavorlabel_part, &b_ljet_1_flavorlabel_part);
   fChain->SetBranchAddress("ljet_1_matched", &ljet_1_matched, &b_ljet_1_matched);
   fChain->SetBranchAddress("ljet_1_matched_classifierParticleOrigin", &ljet_1_matched_classifierParticleOrigin, &b_ljet_1_matched_classifierParticleOrigin);
   fChain->SetBranchAddress("ljet_1_matched_classifierParticleType", &ljet_1_matched_classifierParticleType, &b_ljet_1_matched_classifierParticleType);
   fChain->SetBranchAddress("ljet_1_matched_origin", &ljet_1_matched_origin, &b_ljet_1_matched_origin);
   fChain->SetBranchAddress("ljet_1_matched_p4", &ljet_1_matched_p4, &b_ljet_1_matched_p4);
   fChain->SetBranchAddress("ljet_1_matched_pdgId", &ljet_1_matched_pdgId, &b_ljet_1_matched_pdgId);
   fChain->SetBranchAddress("ljet_1_matched_pz", &ljet_1_matched_pz, &b_ljet_1_matched_pz);
   fChain->SetBranchAddress("ljet_1_matched_q", &ljet_1_matched_q, &b_ljet_1_matched_q);
   fChain->SetBranchAddress("ljet_1_matched_status", &ljet_1_matched_status, &b_ljet_1_matched_status);
   fChain->SetBranchAddress("ljet_1_matched_type", &ljet_1_matched_type, &b_ljet_1_matched_type);
   fChain->SetBranchAddress("ljet_1_origin", &ljet_1_origin, &b_ljet_1_origin);
   fChain->SetBranchAddress("ljet_1_p4", &ljet_1_p4, &b_ljet_1_p4);
   fChain->SetBranchAddress("ljet_1_type", &ljet_1_type, &b_ljet_1_type);
   fChain->SetBranchAddress("ljet_2", &ljet_2, &b_ljet_2);
   fChain->SetBranchAddress("ljet_2_Bottom_DL1_score", &ljet_2_Bottom_DL1_score, &b_ljet_2_Bottom_DL1_score);
   fChain->SetBranchAddress("ljet_2_Charm_DL1_score", &ljet_2_Charm_DL1_score, &b_ljet_2_Charm_DL1_score);
   fChain->SetBranchAddress("ljet_2_Light_DL1_score", &ljet_2_Light_DL1_score, &b_ljet_2_Light_DL1_score);
   fChain->SetBranchAddress("ljet_2_MV2c10_FixedCutBEff_85_weight", &ljet_2_MV2c10_FixedCutBEff_85_weight, &b_ljet_2_MV2c10_FixedCutBEff_85_weight);
   fChain->SetBranchAddress("ljet_2_b_tag_quantile", &ljet_2_b_tag_quantile, &b_ljet_2_b_tag_quantile);
   fChain->SetBranchAddress("ljet_2_b_tag_score", &ljet_2_b_tag_score, &b_ljet_2_b_tag_score);
   fChain->SetBranchAddress("ljet_2_b_tagged_MV2c10_FixedCutBEff_85", &ljet_2_b_tagged_MV2c10_FixedCutBEff_85, &b_ljet_2_b_tagged_MV2c10_FixedCutBEff_85);
   fChain->SetBranchAddress("ljet_2_cleanJet_EC_LooseBad", &ljet_2_cleanJet_EC_LooseBad, &b_ljet_2_cleanJet_EC_LooseBad);
   fChain->SetBranchAddress("ljet_2_fjvt", &ljet_2_fjvt, &b_ljet_2_fjvt);
   fChain->SetBranchAddress("ljet_2_flavorlabel", &ljet_2_flavorlabel, &b_ljet_2_flavorlabel);
   fChain->SetBranchAddress("ljet_2_flavorlabel_cone", &ljet_2_flavorlabel_cone, &b_ljet_2_flavorlabel_cone);
   fChain->SetBranchAddress("ljet_2_flavorlabel_part", &ljet_2_flavorlabel_part, &b_ljet_2_flavorlabel_part);
   fChain->SetBranchAddress("ljet_2_is_Jvt_HS", &ljet_2_is_Jvt_HS, &b_ljet_2_is_Jvt_HS);
   fChain->SetBranchAddress("ljet_2_jvt", &ljet_2_jvt, &b_ljet_2_jvt);
   fChain->SetBranchAddress("ljet_2_matched", &ljet_2_matched, &b_ljet_2_matched);
   fChain->SetBranchAddress("ljet_2_matched_classifierParticleOrigin", &ljet_2_matched_classifierParticleOrigin, &b_ljet_2_matched_classifierParticleOrigin);
   fChain->SetBranchAddress("ljet_2_matched_classifierParticleType", &ljet_2_matched_classifierParticleType, &b_ljet_2_matched_classifierParticleType);
   fChain->SetBranchAddress("ljet_2_matched_mother_pdgId", &ljet_2_matched_mother_pdgId, &b_ljet_2_matched_mother_pdgId);
   fChain->SetBranchAddress("ljet_2_matched_mother_status", &ljet_2_matched_mother_status, &b_ljet_2_matched_mother_status);
   fChain->SetBranchAddress("ljet_2_matched_origin", &ljet_2_matched_origin, &b_ljet_2_matched_origin);
   fChain->SetBranchAddress("ljet_2_matched_p4", &ljet_2_matched_p4, &b_ljet_2_matched_p4);
   fChain->SetBranchAddress("ljet_2_matched_pdgId", &ljet_2_matched_pdgId, &b_ljet_2_matched_pdgId);
   fChain->SetBranchAddress("ljet_2_matched_pz", &ljet_2_matched_pz, &b_ljet_2_matched_pz);
   fChain->SetBranchAddress("ljet_2_matched_q", &ljet_2_matched_q, &b_ljet_2_matched_q);
   fChain->SetBranchAddress("ljet_2_matched_status", &ljet_2_matched_status, &b_ljet_2_matched_status);
   fChain->SetBranchAddress("ljet_2_matched_type", &ljet_2_matched_type, &b_ljet_2_matched_type);
   fChain->SetBranchAddress("ljet_2_origin", &ljet_2_origin, &b_ljet_2_origin);
   fChain->SetBranchAddress("ljet_2_p4", &ljet_2_p4, &b_ljet_2_p4);
   fChain->SetBranchAddress("ljet_2_q", &ljet_2_q, &b_ljet_2_q);
   fChain->SetBranchAddress("ljet_2_type", &ljet_2_type, &b_ljet_2_type);
   fChain->SetBranchAddress("ljet_2_width", &ljet_2_width, &b_ljet_2_width);
   fChain->SetBranchAddress("ljet_3", &ljet_3, &b_ljet_3);
   fChain->SetBranchAddress("ljet_3_Bottom_DL1_score", &ljet_3_Bottom_DL1_score, &b_ljet_3_Bottom_DL1_score);
   fChain->SetBranchAddress("ljet_3_Charm_DL1_score", &ljet_3_Charm_DL1_score, &b_ljet_3_Charm_DL1_score);
   fChain->SetBranchAddress("ljet_3_Light_DL1_score", &ljet_3_Light_DL1_score, &b_ljet_3_Light_DL1_score);
   fChain->SetBranchAddress("ljet_3_MV2c10_FixedCutBEff_85_weight", &ljet_3_MV2c10_FixedCutBEff_85_weight, &b_ljet_3_MV2c10_FixedCutBEff_85_weight);
   fChain->SetBranchAddress("ljet_3_b_tag_quantile", &ljet_3_b_tag_quantile, &b_ljet_3_b_tag_quantile);
   fChain->SetBranchAddress("ljet_3_b_tag_score", &ljet_3_b_tag_score, &b_ljet_3_b_tag_score);
   fChain->SetBranchAddress("ljet_3_b_tagged_MV2c10_FixedCutBEff_85", &ljet_3_b_tagged_MV2c10_FixedCutBEff_85, &b_ljet_3_b_tagged_MV2c10_FixedCutBEff_85);
   fChain->SetBranchAddress("ljet_3_cleanJet_EC_LooseBad", &ljet_3_cleanJet_EC_LooseBad, &b_ljet_3_cleanJet_EC_LooseBad);
   fChain->SetBranchAddress("ljet_3_fjvt", &ljet_3_fjvt, &b_ljet_3_fjvt);
   fChain->SetBranchAddress("ljet_3_flavorlabel", &ljet_3_flavorlabel, &b_ljet_3_flavorlabel);
   fChain->SetBranchAddress("ljet_3_flavorlabel_cone", &ljet_3_flavorlabel_cone, &b_ljet_3_flavorlabel_cone);
   fChain->SetBranchAddress("ljet_3_flavorlabel_part", &ljet_3_flavorlabel_part, &b_ljet_3_flavorlabel_part);
   fChain->SetBranchAddress("ljet_3_is_Jvt_HS", &ljet_3_is_Jvt_HS, &b_ljet_3_is_Jvt_HS);
   fChain->SetBranchAddress("ljet_3_jvt", &ljet_3_jvt, &b_ljet_3_jvt);
   fChain->SetBranchAddress("ljet_3_matched", &ljet_3_matched, &b_ljet_3_matched);
   fChain->SetBranchAddress("ljet_3_matched_classifierParticleOrigin", &ljet_3_matched_classifierParticleOrigin, &b_ljet_3_matched_classifierParticleOrigin);
   fChain->SetBranchAddress("ljet_3_matched_classifierParticleType", &ljet_3_matched_classifierParticleType, &b_ljet_3_matched_classifierParticleType);
   fChain->SetBranchAddress("ljet_3_matched_mother_pdgId", &ljet_3_matched_mother_pdgId, &b_ljet_3_matched_mother_pdgId);
   fChain->SetBranchAddress("ljet_3_matched_mother_status", &ljet_3_matched_mother_status, &b_ljet_3_matched_mother_status);
   fChain->SetBranchAddress("ljet_3_matched_origin", &ljet_3_matched_origin, &b_ljet_3_matched_origin);
   fChain->SetBranchAddress("ljet_3_matched_p4", &ljet_3_matched_p4, &b_ljet_3_matched_p4);
   fChain->SetBranchAddress("ljet_3_matched_pdgId", &ljet_3_matched_pdgId, &b_ljet_3_matched_pdgId);
   fChain->SetBranchAddress("ljet_3_matched_pz", &ljet_3_matched_pz, &b_ljet_3_matched_pz);
   fChain->SetBranchAddress("ljet_3_matched_q", &ljet_3_matched_q, &b_ljet_3_matched_q);
   fChain->SetBranchAddress("ljet_3_matched_status", &ljet_3_matched_status, &b_ljet_3_matched_status);
   fChain->SetBranchAddress("ljet_3_matched_type", &ljet_3_matched_type, &b_ljet_3_matched_type);
   fChain->SetBranchAddress("ljet_3_origin", &ljet_3_origin, &b_ljet_3_origin);
   fChain->SetBranchAddress("ljet_3_p4", &ljet_3_p4, &b_ljet_3_p4);
   fChain->SetBranchAddress("ljet_3_q", &ljet_3_q, &b_ljet_3_q);
   fChain->SetBranchAddress("ljet_3_type", &ljet_3_type, &b_ljet_3_type);
   fChain->SetBranchAddress("ljet_3_width", &ljet_3_width, &b_ljet_3_width);
   fChain->SetBranchAddress("met_reco_p4", &met_reco_p4, &b_met_reco_p4);
   fChain->SetBranchAddress("muTrigMatch_0_HLT_mu20_iloose_L1MU15", &muTrigMatch_0_HLT_mu20_iloose_L1MU15, &b_muTrigMatch_0_HLT_mu20_iloose_L1MU15);
   fChain->SetBranchAddress("muTrigMatch_0_HLT_mu26_ivarmedium", &muTrigMatch_0_HLT_mu26_ivarmedium, &b_muTrigMatch_0_HLT_mu26_ivarmedium);
   fChain->SetBranchAddress("muTrigMatch_0_HLT_mu50", &muTrigMatch_0_HLT_mu50, &b_muTrigMatch_0_HLT_mu50);
   fChain->SetBranchAddress("muTrigMatch_0_trigger_matched", &muTrigMatch_0_trigger_matched, &b_muTrigMatch_0_trigger_matched);
   fChain->SetBranchAddress("muon_0", &muon_0, &b_muon_0);
   fChain->SetBranchAddress("muon_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium", &muon_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium, &b_muon_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium);
   fChain->SetBranchAddress("muon_0_NOMINAL_MuEffSF_HLT_mu26_ivarmedium_OR_HLT_mu50_QualMedium", &muon_0_NOMINAL_MuEffSF_HLT_mu26_ivarmedium_OR_HLT_mu50_QualMedium, &b_muon_0_NOMINAL_MuEffSF_HLT_mu26_ivarmedium_OR_HLT_mu50_QualMedium);
   fChain->SetBranchAddress("muon_0_NOMINAL_MuEffSF_IsoLoose_FixedRad", &muon_0_NOMINAL_MuEffSF_IsoLoose_FixedRad, &b_muon_0_NOMINAL_MuEffSF_IsoLoose_FixedRad);
   fChain->SetBranchAddress("muon_0_NOMINAL_MuEffSF_IsoTightTrackOnly_FixedRad", &muon_0_NOMINAL_MuEffSF_IsoTightTrackOnly_FixedRad, &b_muon_0_NOMINAL_MuEffSF_IsoTightTrackOnly_FixedRad);
   fChain->SetBranchAddress("muon_0_NOMINAL_MuEffSF_Reco_QualMedium", &muon_0_NOMINAL_MuEffSF_Reco_QualMedium, &b_muon_0_NOMINAL_MuEffSF_Reco_QualMedium);
   fChain->SetBranchAddress("muon_0_NOMINAL_MuEffSF_TTVA", &muon_0_NOMINAL_MuEffSF_TTVA, &b_muon_0_NOMINAL_MuEffSF_TTVA);
   fChain->SetBranchAddress("muon_0_id_medium", &muon_0_id_medium, &b_muon_0_id_medium);
   fChain->SetBranchAddress("muon_0_id_tight", &muon_0_id_tight, &b_muon_0_id_tight);
   fChain->SetBranchAddress("muon_0_iso_FCLoose", &muon_0_iso_FCLoose, &b_muon_0_iso_FCLoose);
   fChain->SetBranchAddress("muon_0_iso_FCTight", &muon_0_iso_FCTight, &b_muon_0_iso_FCTight);
   fChain->SetBranchAddress("muon_0_iso_FixedCutLoose", &muon_0_iso_FixedCutLoose, &b_muon_0_iso_FixedCutLoose);
   fChain->SetBranchAddress("muon_0_iso_FixedCutTight", &muon_0_iso_FixedCutTight, &b_muon_0_iso_FixedCutTight);
   fChain->SetBranchAddress("muon_0_iso_FixedCutTightCaloOnly", &muon_0_iso_FixedCutTightCaloOnly, &b_muon_0_iso_FixedCutTightCaloOnly);
   fChain->SetBranchAddress("muon_0_iso_Loose_FixedRad", &muon_0_iso_Loose_FixedRad, &b_muon_0_iso_Loose_FixedRad);
   fChain->SetBranchAddress("muon_0_iso_TightTrackOnly_FixedRad", &muon_0_iso_TightTrackOnly_FixedRad, &b_muon_0_iso_TightTrackOnly_FixedRad);
   fChain->SetBranchAddress("muon_0_matched_classifierParticleOrigin", &muon_0_matched_classifierParticleOrigin, &b_muon_0_matched_classifierParticleOrigin);
   fChain->SetBranchAddress("muon_0_matched_classifierParticleType", &muon_0_matched_classifierParticleType, &b_muon_0_matched_classifierParticleType);
   fChain->SetBranchAddress("muon_0_matched_p4", &muon_0_matched_p4, &b_muon_0_matched_p4);
   fChain->SetBranchAddress("muon_0_matched_pdgId", &muon_0_matched_pdgId, &b_muon_0_matched_pdgId);
   fChain->SetBranchAddress("muon_0_matched_pz", &muon_0_matched_pz, &b_muon_0_matched_pz);
   fChain->SetBranchAddress("muon_0_matched_q", &muon_0_matched_q, &b_muon_0_matched_q);
   fChain->SetBranchAddress("muon_0_matched_type", &muon_0_matched_type, &b_muon_0_matched_type);
   fChain->SetBranchAddress("muon_0_p4", &muon_0_p4, &b_muon_0_p4);
   fChain->SetBranchAddress("muon_0_q", &muon_0_q, &b_muon_0_q);
   fChain->SetBranchAddress("muon_0_trk_d0_sig", &muon_0_trk_d0_sig, &b_muon_0_trk_d0_sig);
   fChain->SetBranchAddress("muon_0_trk_p4", &muon_0_trk_p4, &b_muon_0_trk_p4);
   fChain->SetBranchAddress("muon_0_trk_pvx_z0_sig", &muon_0_trk_pvx_z0_sig, &b_muon_0_trk_pvx_z0_sig);
   fChain->SetBranchAddress("muon_0_trk_pvx_z0_sintheta", &muon_0_trk_pvx_z0_sintheta, &b_muon_0_trk_pvx_z0_sintheta);
   fChain->SetBranchAddress("muon_0_trk_z0_sintheta", &muon_0_trk_z0_sintheta, &b_muon_0_trk_z0_sintheta);
   fChain->SetBranchAddress("n_actual_int", &n_actual_int, &b_n_actual_int);
   fChain->SetBranchAddress("n_actual_int_cor", &n_actual_int_cor, &b_n_actual_int_cor);
   fChain->SetBranchAddress("n_avg_int", &n_avg_int, &b_n_avg_int);
   fChain->SetBranchAddress("n_avg_int_cor", &n_avg_int_cor, &b_n_avg_int_cor);
   fChain->SetBranchAddress("n_bjets_MV2c10_FixedCutBEff_85", &n_bjets_MV2c10_FixedCutBEff_85, &b_n_bjets_MV2c10_FixedCutBEff_85);
   fChain->SetBranchAddress("n_electrons", &n_electrons, &b_n_electrons);
   fChain->SetBranchAddress("n_electrons_olr", &n_electrons_olr, &b_n_electrons_olr);
   fChain->SetBranchAddress("n_jets", &n_jets, &b_n_jets);
   fChain->SetBranchAddress("n_muons", &n_muons, &b_n_muons);
   fChain->SetBranchAddress("n_pvx", &n_pvx, &b_n_pvx);
   fChain->SetBranchAddress("n_taus", &n_taus, &b_n_taus);
   fChain->SetBranchAddress("n_taus_met", &n_taus_met, &b_n_taus_met);
   fChain->SetBranchAddress("n_taus_olr", &n_taus_olr, &b_n_taus_olr);
   fChain->SetBranchAddress("n_taus_rnn_loose", &n_taus_rnn_loose, &b_n_taus_rnn_loose);
   fChain->SetBranchAddress("n_taus_rnn_medium", &n_taus_rnn_medium, &b_n_taus_rnn_medium);
   fChain->SetBranchAddress("n_taus_rnn_tight", &n_taus_rnn_tight, &b_n_taus_rnn_tight);
   fChain->SetBranchAddress("n_taus_rnn_veryloose", &n_taus_rnn_veryloose, &b_n_taus_rnn_veryloose);
   fChain->SetBranchAddress("n_vx", &n_vx, &b_n_vx);
   fChain->SetBranchAddress("run_number", &run_number, &b_run_number);
   fChain->SetBranchAddress("tau_0", &tau_0, &b_tau_0);
   fChain->SetBranchAddress("tau_0_NOMINAL_TauEffSF_JetRNNloose", &tau_0_NOMINAL_TauEffSF_JetRNNloose, &b_tau_0_NOMINAL_TauEffSF_JetRNNloose);
   fChain->SetBranchAddress("tau_0_NOMINAL_TauEffSF_JetRNNmedium", &tau_0_NOMINAL_TauEffSF_JetRNNmedium, &b_tau_0_NOMINAL_TauEffSF_JetRNNmedium);
   fChain->SetBranchAddress("tau_0_NOMINAL_TauEffSF_JetRNNtight", &tau_0_NOMINAL_TauEffSF_JetRNNtight, &b_tau_0_NOMINAL_TauEffSF_JetRNNtight);
   fChain->SetBranchAddress("tau_0_NOMINAL_TauEffSF_LooseEleBDT_electron", &tau_0_NOMINAL_TauEffSF_LooseEleBDT_electron, &b_tau_0_NOMINAL_TauEffSF_LooseEleBDT_electron);
   fChain->SetBranchAddress("tau_0_NOMINAL_TauEffSF_MediumEleBDT_electron", &tau_0_NOMINAL_TauEffSF_MediumEleBDT_electron, &b_tau_0_NOMINAL_TauEffSF_MediumEleBDT_electron);
   fChain->SetBranchAddress("tau_0_NOMINAL_TauEffSF_reco", &tau_0_NOMINAL_TauEffSF_reco, &b_tau_0_NOMINAL_TauEffSF_reco);
   fChain->SetBranchAddress("tau_0_charged_tracks_d0", &tau_0_charged_tracks_d0, &b_tau_0_charged_tracks_d0);
   fChain->SetBranchAddress("tau_0_charged_tracks_d0_sig", &tau_0_charged_tracks_d0_sig, &b_tau_0_charged_tracks_d0_sig);
   fChain->SetBranchAddress("tau_0_charged_tracks_eProbabilityHT", &tau_0_charged_tracks_eProbabilityHT, &b_tau_0_charged_tracks_eProbabilityHT);
   fChain->SetBranchAddress("tau_0_charged_tracks_nInnermostPixelHits", &tau_0_charged_tracks_nInnermostPixelHits, &b_tau_0_charged_tracks_nInnermostPixelHits);
   fChain->SetBranchAddress("tau_0_charged_tracks_nPixelHits", &tau_0_charged_tracks_nPixelHits, &b_tau_0_charged_tracks_nPixelHits);
   fChain->SetBranchAddress("tau_0_charged_tracks_nSCTHits", &tau_0_charged_tracks_nSCTHits, &b_tau_0_charged_tracks_nSCTHits);
   fChain->SetBranchAddress("tau_0_charged_tracks_p4", &tau_0_charged_tracks_p4, &b_tau_0_charged_tracks_p4);
   fChain->SetBranchAddress("tau_0_charged_tracks_pt_err", &tau_0_charged_tracks_pt_err, &b_tau_0_charged_tracks_pt_err);
   fChain->SetBranchAddress("tau_0_charged_tracks_z0", &tau_0_charged_tracks_z0, &b_tau_0_charged_tracks_z0);
   fChain->SetBranchAddress("tau_0_charged_tracks_z0_sig", &tau_0_charged_tracks_z0_sig, &b_tau_0_charged_tracks_z0_sig);
   fChain->SetBranchAddress("tau_0_charged_tracks_z0_sintheta", &tau_0_charged_tracks_z0_sintheta, &b_tau_0_charged_tracks_z0_sintheta);
   fChain->SetBranchAddress("tau_0_charged_tracks_z0_sintheta_tjva", &tau_0_charged_tracks_z0_sintheta_tjva, &b_tau_0_charged_tracks_z0_sintheta_tjva);
   fChain->SetBranchAddress("tau_0_decay_mode", &tau_0_decay_mode, &b_tau_0_decay_mode);
   fChain->SetBranchAddress("tau_0_ele_bdt_loose_retuned", &tau_0_ele_bdt_loose_retuned, &b_tau_0_ele_bdt_loose_retuned);
   fChain->SetBranchAddress("tau_0_ele_bdt_medium_retuned", &tau_0_ele_bdt_medium_retuned, &b_tau_0_ele_bdt_medium_retuned);
   fChain->SetBranchAddress("tau_0_ele_bdt_score_retuned", &tau_0_ele_bdt_score_retuned, &b_tau_0_ele_bdt_score_retuned);
   fChain->SetBranchAddress("tau_0_ele_bdt_score_trans_retuned", &tau_0_ele_bdt_score_trans_retuned, &b_tau_0_ele_bdt_score_trans_retuned);
   fChain->SetBranchAddress("tau_0_ele_bdt_tight_retuned", &tau_0_ele_bdt_tight_retuned, &b_tau_0_ele_bdt_tight_retuned);
   fChain->SetBranchAddress("tau_0_ele_match_lhscore", &tau_0_ele_match_lhscore, &b_tau_0_ele_match_lhscore);
   fChain->SetBranchAddress("tau_0_ele_olr_pass", &tau_0_ele_olr_pass, &b_tau_0_ele_olr_pass);
   fChain->SetBranchAddress("tau_0_jetFakeFakeFlavour", &tau_0_jetFakeFakeFlavour, &b_tau_0_jetFakeFakeFlavour);
   fChain->SetBranchAddress("tau_0_jet_bdt_score", &tau_0_jet_bdt_score, &b_tau_0_jet_bdt_score);
   fChain->SetBranchAddress("tau_0_jet_bdt_score_trans", &tau_0_jet_bdt_score_trans, &b_tau_0_jet_bdt_score_trans);
   fChain->SetBranchAddress("tau_0_jet_rnn_loose", &tau_0_jet_rnn_loose, &b_tau_0_jet_rnn_loose);
   fChain->SetBranchAddress("tau_0_jet_rnn_medium", &tau_0_jet_rnn_medium, &b_tau_0_jet_rnn_medium);
   fChain->SetBranchAddress("tau_0_jet_rnn_score", &tau_0_jet_rnn_score, &b_tau_0_jet_rnn_score);
   fChain->SetBranchAddress("tau_0_jet_rnn_score_trans", &tau_0_jet_rnn_score_trans, &b_tau_0_jet_rnn_score_trans);
   fChain->SetBranchAddress("tau_0_jet_rnn_tight", &tau_0_jet_rnn_tight, &b_tau_0_jet_rnn_tight);
   fChain->SetBranchAddress("tau_0_jet_seed_TrackWidthPt1000_wrt_PV", &tau_0_jet_seed_TrackWidthPt1000_wrt_PV, &b_tau_0_jet_seed_TrackWidthPt1000_wrt_PV);
   fChain->SetBranchAddress("tau_0_jet_seed_TrackWidthPt1000_wrt_TV", &tau_0_jet_seed_TrackWidthPt1000_wrt_TV, &b_tau_0_jet_seed_TrackWidthPt1000_wrt_TV);
   fChain->SetBranchAddress("tau_0_n_charged_tracks", &tau_0_n_charged_tracks, &b_tau_0_n_charged_tracks);
   fChain->SetBranchAddress("tau_0_n_conversion_tracks", &tau_0_n_conversion_tracks, &b_tau_0_n_conversion_tracks);
   fChain->SetBranchAddress("tau_0_n_isolation_tracks", &tau_0_n_isolation_tracks, &b_tau_0_n_isolation_tracks);
   fChain->SetBranchAddress("tau_0_p4", &tau_0_p4, &b_tau_0_p4);
   fChain->SetBranchAddress("tau_0_q", &tau_0_q, &b_tau_0_q);
   fChain->SetBranchAddress("tau_0_truth", &tau_0_truth, &b_tau_0_truth);
   fChain->SetBranchAddress("tau_0_truth_classifierParticleOrigin", &tau_0_truth_classifierParticleOrigin, &b_tau_0_truth_classifierParticleOrigin);
   fChain->SetBranchAddress("tau_0_truth_classifierParticleType", &tau_0_truth_classifierParticleType, &b_tau_0_truth_classifierParticleType);
   fChain->SetBranchAddress("tau_0_truth_decayVertex", &tau_0_truth_decayVertex, &b_tau_0_truth_decayVertex);
   fChain->SetBranchAddress("tau_0_truth_decayVertex_v", &tau_0_truth_decayVertex_v, &b_tau_0_truth_decayVertex_v);
   fChain->SetBranchAddress("tau_0_truth_isEle", &tau_0_truth_isEle, &b_tau_0_truth_isEle);
   fChain->SetBranchAddress("tau_0_truth_isHadTau", &tau_0_truth_isHadTau, &b_tau_0_truth_isHadTau);
   fChain->SetBranchAddress("tau_0_truth_isJet", &tau_0_truth_isJet, &b_tau_0_truth_isJet);
   fChain->SetBranchAddress("tau_0_truth_isMuon", &tau_0_truth_isMuon, &b_tau_0_truth_isMuon);
   fChain->SetBranchAddress("tau_0_truth_isTau", &tau_0_truth_isTau, &b_tau_0_truth_isTau);
   fChain->SetBranchAddress("tau_0_truth_isTruthMatch", &tau_0_truth_isTruthMatch, &b_tau_0_truth_isTruthMatch);
   fChain->SetBranchAddress("tau_0_truth_p4", &tau_0_truth_p4, &b_tau_0_truth_p4);
   fChain->SetBranchAddress("tau_0_truth_pdgId", &tau_0_truth_pdgId, &b_tau_0_truth_pdgId);
   fChain->SetBranchAddress("tau_0_truth_productionVertex", &tau_0_truth_productionVertex, &b_tau_0_truth_productionVertex);
   fChain->SetBranchAddress("tau_0_truth_productionVertex_v", &tau_0_truth_productionVertex_v, &b_tau_0_truth_productionVertex_v);
   fChain->SetBranchAddress("tau_0_truth_pz", &tau_0_truth_pz, &b_tau_0_truth_pz);
   fChain->SetBranchAddress("tau_0_truth_vis_charged_p4", &tau_0_truth_vis_charged_p4, &b_tau_0_truth_vis_charged_p4);
   fChain->SetBranchAddress("tau_0_truth_vis_neutral_others_p4", &tau_0_truth_vis_neutral_others_p4, &b_tau_0_truth_vis_neutral_others_p4);
   fChain->SetBranchAddress("tau_0_truth_vis_neutral_p4", &tau_0_truth_vis_neutral_p4, &b_tau_0_truth_vis_neutral_p4);
   fChain->SetBranchAddress("tau_0_truth_vis_neutral_pions_p4", &tau_0_truth_vis_neutral_pions_p4, &b_tau_0_truth_vis_neutral_pions_p4);
   fChain->SetBranchAddress("triggerSF_em_NOMINAL", &triggerSF_em_NOMINAL, &b_triggerSF_em_NOMINAL);
   fChain->SetBranchAddress("weight_mc", &weight_mc, &b_weight_mc);
   fChain->SetBranchAddress("weight_mc_v", &weight_mc_v, &b_weight_mc_v);
   Notify();
}

Bool_t CLoop::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void CLoop::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t CLoop::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef CLoop_cxx
