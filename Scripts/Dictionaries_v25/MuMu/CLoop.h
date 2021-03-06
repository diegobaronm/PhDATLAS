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
   Int_t           event_is_bad_batman;
   ULong64_t       event_number;
   Float_t         jet_NOMINAL_central_jets_global_effSF_JVT;
   Float_t         jet_NOMINAL_central_jets_global_ineffSF_JVT;
   Float_t         jet_NOMINAL_forward_jets_global_effSF_JVT;
   Float_t         jet_NOMINAL_forward_jets_global_ineffSF_JVT;
   Float_t         jet_NOMINAL_global_effSF_MV2c10_FixedCutBEff_85;
   Float_t         jet_NOMINAL_global_ineffSF_MV2c10_FixedCutBEff_85;
   UInt_t          ljet_0;
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
   TLorentzVector  *met_reco_p4;
   UInt_t          muTrigMatch_0_HLT_mu20_iloose_L1MU15;
   UInt_t          muTrigMatch_0_HLT_mu26_ivarmedium;
   UInt_t          muTrigMatch_0_HLT_mu50;
   UInt_t          muTrigMatch_0_trigger_matched;
   UInt_t          muTrigMatch_1_HLT_mu20_iloose_L1MU15;
   UInt_t          muTrigMatch_1_HLT_mu26_ivarmedium;
   UInt_t          muTrigMatch_1_HLT_mu50;
   UInt_t          muTrigMatch_1_trigger_matched;
   UInt_t          muon_0;
   Float_t         muon_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium;
   Float_t         muon_0_NOMINAL_MuEffSF_HLT_mu26_ivarmedium_OR_HLT_mu50_QualMedium;
   Float_t         muon_0_NOMINAL_MuEffSF_IsoFCLoose;
   Float_t         muon_0_NOMINAL_MuEffSF_IsoFCLoose_FixedRad;
   Float_t         muon_0_NOMINAL_MuEffSF_IsoFCTight;
   Float_t         muon_0_NOMINAL_MuEffSF_IsoFCTightTrackOnly;
   Float_t         muon_0_NOMINAL_MuEffSF_IsoFCTightTrackOnly_FixedRad;
   Float_t         muon_0_NOMINAL_MuEffSF_IsoFCTight_FixedRad;
   Float_t         muon_0_NOMINAL_MuEffSF_IsoFixedCutHighPtTrackOnly;
   Float_t         muon_0_NOMINAL_MuEffSF_Reco_QualMedium;
   Float_t         muon_0_NOMINAL_MuEffSF_TTVA;
   Int_t           muon_0_id_medium;
   Int_t           muon_0_id_tight;
   UInt_t          muon_0_iso_FCLoose;
   UInt_t          muon_0_iso_FCLoose_FixedRad;
   UInt_t          muon_0_iso_FCTight;
   UInt_t          muon_0_iso_FCTightTrackOnly_FixedRad;
   UInt_t          muon_0_iso_FixedCutLoose;
   UInt_t          muon_0_iso_FixedCutTight;
   UInt_t          muon_0_iso_FixedCutTightCaloOnly;
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
   Float_t         muon_0_trk_pvx_z0_sig;
   Float_t         muon_0_trk_pvx_z0_sintheta;
   Float_t         muon_0_trk_z0_sintheta;
   UInt_t          muon_1;
   Float_t         muon_1_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium;
   Float_t         muon_1_NOMINAL_MuEffSF_HLT_mu26_ivarmedium_OR_HLT_mu50_QualMedium;
   Float_t         muon_1_NOMINAL_MuEffSF_IsoFCLoose;
   Float_t         muon_1_NOMINAL_MuEffSF_IsoFCLoose_FixedRad;
   Float_t         muon_1_NOMINAL_MuEffSF_IsoFCTight;
   Float_t         muon_1_NOMINAL_MuEffSF_IsoFCTightTrackOnly;
   Float_t         muon_1_NOMINAL_MuEffSF_IsoFCTightTrackOnly_FixedRad;
   Float_t         muon_1_NOMINAL_MuEffSF_IsoFCTight_FixedRad;
   Float_t         muon_1_NOMINAL_MuEffSF_IsoFixedCutHighPtTrackOnly;
   Float_t         muon_1_NOMINAL_MuEffSF_Reco_QualMedium;
   Float_t         muon_1_NOMINAL_MuEffSF_TTVA;
   Float_t         muon_1_cluster_eta;
   Float_t         muon_1_cluster_eta_be2;
   Int_t           muon_1_id_bad;
   Int_t           muon_1_id_charge;
   Int_t           muon_1_id_loose;
   Int_t           muon_1_id_medium;
   Int_t           muon_1_id_tight;
   Int_t           muon_1_id_veryloose;
   UInt_t          muon_1_iso_FCLoose;
   UInt_t          muon_1_iso_FCLoose_FixedRad;
   UInt_t          muon_1_iso_FCTight;
   UInt_t          muon_1_iso_FCTightTrackOnly_FixedRad;
   UInt_t          muon_1_iso_FixedCutLoose;
   UInt_t          muon_1_iso_FixedCutTight;
   UInt_t          muon_1_iso_FixedCutTightCaloOnly;
   UInt_t          muon_1_matched;
   Int_t           muon_1_matched_classifierParticleOrigin;
   Int_t           muon_1_matched_classifierParticleType;
   Int_t           muon_1_matched_mother_pdgId;
   Int_t           muon_1_matched_mother_status;
   Int_t           muon_1_matched_origin;
   TLorentzVector  *muon_1_matched_p4;
   Int_t           muon_1_matched_pdgId;
   Float_t         muon_1_matched_pz;
   Float_t         muon_1_matched_q;
   Int_t           muon_1_matched_status;
   Int_t           muon_1_matched_type;
   Int_t           muon_1_muonAuthor;
   Int_t           muon_1_muonType;
   Int_t           muon_1_origin;
   TLorentzVector  *muon_1_p4;
   Float_t         muon_1_q;
   Float_t         muon_1_trk_d0;
   Float_t         muon_1_trk_d0_sig;
   Float_t         muon_1_trk_pt_error;
   Float_t         muon_1_trk_pvx_z0;
   Float_t         muon_1_trk_pvx_z0_sig;
   Float_t         muon_1_trk_pvx_z0_sintheta;
   Int_t           muon_1_trk_vx;
   TVector3        *muon_1_trk_vx_v;
   Float_t         muon_1_trk_z0;
   Float_t         muon_1_trk_z0_sig;
   Float_t         muon_1_trk_z0_sintheta;
   Int_t           muon_1_type;
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
   Float_t         triggerSF_em_NOMINAL;
   TLorentzVector  *truth_Z_p4;
   Double_t        weight_mc;
   vector<float>   *weight_mc_v;
   Double_t        weight_total;

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
   TBranch        *b_event_is_bad_batman;   //!
   TBranch        *b_event_number;   //!
   TBranch        *b_jet_NOMINAL_central_jets_global_effSF_JVT;   //!
   TBranch        *b_jet_NOMINAL_central_jets_global_ineffSF_JVT;   //!
   TBranch        *b_jet_NOMINAL_forward_jets_global_effSF_JVT;   //!
   TBranch        *b_jet_NOMINAL_forward_jets_global_ineffSF_JVT;   //!
   TBranch        *b_jet_NOMINAL_global_effSF_MV2c10_FixedCutBEff_85;   //!
   TBranch        *b_jet_NOMINAL_global_ineffSF_MV2c10_FixedCutBEff_85;   //!
   TBranch        *b_ljet_0;   //!
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
   TBranch        *b_met_reco_p4;   //!
   TBranch        *b_muTrigMatch_0_HLT_mu20_iloose_L1MU15;   //!
   TBranch        *b_muTrigMatch_0_HLT_mu26_ivarmedium;   //!
   TBranch        *b_muTrigMatch_0_HLT_mu50;   //!
   TBranch        *b_muTrigMatch_0_trigger_matched;   //!
   TBranch        *b_muTrigMatch_1_HLT_mu20_iloose_L1MU15;   //!
   TBranch        *b_muTrigMatch_1_HLT_mu26_ivarmedium;   //!
   TBranch        *b_muTrigMatch_1_HLT_mu50;   //!
   TBranch        *b_muTrigMatch_1_trigger_matched;   //!
   TBranch        *b_muon_0;   //!
   TBranch        *b_muon_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium;   //!
   TBranch        *b_muon_0_NOMINAL_MuEffSF_HLT_mu26_ivarmedium_OR_HLT_mu50_QualMedium;   //!
   TBranch        *b_muon_0_NOMINAL_MuEffSF_IsoFCLoose;   //!
   TBranch        *b_muon_0_NOMINAL_MuEffSF_IsoFCLoose_FixedRad;   //!
   TBranch        *b_muon_0_NOMINAL_MuEffSF_IsoFCTight;   //!
   TBranch        *b_muon_0_NOMINAL_MuEffSF_IsoFCTightTrackOnly;   //!
   TBranch        *b_muon_0_NOMINAL_MuEffSF_IsoFCTightTrackOnly_FixedRad;   //!
   TBranch        *b_muon_0_NOMINAL_MuEffSF_IsoFCTight_FixedRad;   //!
   TBranch        *b_muon_0_NOMINAL_MuEffSF_IsoFixedCutHighPtTrackOnly;   //!
   TBranch        *b_muon_0_NOMINAL_MuEffSF_Reco_QualMedium;   //!
   TBranch        *b_muon_0_NOMINAL_MuEffSF_TTVA;   //!
   TBranch        *b_muon_0_id_medium;   //!
   TBranch        *b_muon_0_id_tight;   //!
   TBranch        *b_muon_0_iso_FCLoose;   //!
   TBranch        *b_muon_0_iso_FCLoose_FixedRad;   //!
   TBranch        *b_muon_0_iso_FCTight;   //!
   TBranch        *b_muon_0_iso_FCTightTrackOnly_FixedRad;   //!
   TBranch        *b_muon_0_iso_FixedCutLoose;   //!
   TBranch        *b_muon_0_iso_FixedCutTight;   //!
   TBranch        *b_muon_0_iso_FixedCutTightCaloOnly;   //!
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
   TBranch        *b_muon_0_trk_pvx_z0_sig;   //!
   TBranch        *b_muon_0_trk_pvx_z0_sintheta;   //!
   TBranch        *b_muon_0_trk_z0_sintheta;   //!
   TBranch        *b_muon_1;   //!
   TBranch        *b_muon_1_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium;   //!
   TBranch        *b_muon_1_NOMINAL_MuEffSF_HLT_mu26_ivarmedium_OR_HLT_mu50_QualMedium;   //!
   TBranch        *b_muon_1_NOMINAL_MuEffSF_IsoFCLoose;   //!
   TBranch        *b_muon_1_NOMINAL_MuEffSF_IsoFCLoose_FixedRad;   //!
   TBranch        *b_muon_1_NOMINAL_MuEffSF_IsoFCTight;   //!
   TBranch        *b_muon_1_NOMINAL_MuEffSF_IsoFCTightTrackOnly;   //!
   TBranch        *b_muon_1_NOMINAL_MuEffSF_IsoFCTightTrackOnly_FixedRad;   //!
   TBranch        *b_muon_1_NOMINAL_MuEffSF_IsoFCTight_FixedRad;   //!
   TBranch        *b_muon_1_NOMINAL_MuEffSF_IsoFixedCutHighPtTrackOnly;   //!
   TBranch        *b_muon_1_NOMINAL_MuEffSF_Reco_QualMedium;   //!
   TBranch        *b_muon_1_NOMINAL_MuEffSF_TTVA;   //!
   TBranch        *b_muon_1_cluster_eta;   //!
   TBranch        *b_muon_1_cluster_eta_be2;   //!
   TBranch        *b_muon_1_id_bad;   //!
   TBranch        *b_muon_1_id_charge;   //!
   TBranch        *b_muon_1_id_loose;   //!
   TBranch        *b_muon_1_id_medium;   //!
   TBranch        *b_muon_1_id_tight;   //!
   TBranch        *b_muon_1_id_veryloose;   //!
   TBranch        *b_muon_1_iso_FCLoose;   //!
   TBranch        *b_muon_1_iso_FCLoose_FixedRad;   //!
   TBranch        *b_muon_1_iso_FCTight;   //!
   TBranch        *b_muon_1_iso_FCTightTrackOnly_FixedRad;   //!
   TBranch        *b_muon_1_iso_FixedCutLoose;   //!
   TBranch        *b_muon_1_iso_FixedCutTight;   //!
   TBranch        *b_muon_1_iso_FixedCutTightCaloOnly;   //!
   TBranch        *b_muon_1_matched;   //!
   TBranch        *b_muon_1_matched_classifierParticleOrigin;   //!
   TBranch        *b_muon_1_matched_classifierParticleType;   //!
   TBranch        *b_muon_1_matched_mother_pdgId;   //!
   TBranch        *b_muon_1_matched_mother_status;   //!
   TBranch        *b_muon_1_matched_origin;   //!
   TBranch        *b_muon_1_matched_p4;   //!
   TBranch        *b_muon_1_matched_pdgId;   //!
   TBranch        *b_muon_1_matched_pz;   //!
   TBranch        *b_muon_1_matched_q;   //!
   TBranch        *b_muon_1_matched_status;   //!
   TBranch        *b_muon_1_matched_type;   //!
   TBranch        *b_muon_1_muonAuthor;   //!
   TBranch        *b_muon_1_muonType;   //!
   TBranch        *b_muon_1_origin;   //!
   TBranch        *b_muon_1_p4;   //!
   TBranch        *b_muon_1_q;   //!
   TBranch        *b_muon_1_trk_d0;   //!
   TBranch        *b_muon_1_trk_d0_sig;   //!
   TBranch        *b_muon_1_trk_pt_error;   //!
   TBranch        *b_muon_1_trk_pvx_z0;   //!
   TBranch        *b_muon_1_trk_pvx_z0_sig;   //!
   TBranch        *b_muon_1_trk_pvx_z0_sintheta;   //!
   TBranch        *b_muon_1_trk_vx;   //!
   TBranch        *b_muon_1_trk_vx_v;   //!
   TBranch        *b_muon_1_trk_z0;   //!
   TBranch        *b_muon_1_trk_z0_sig;   //!
   TBranch        *b_muon_1_trk_z0_sintheta;   //!
   TBranch        *b_muon_1_type;   //!
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
   TBranch        *b_triggerSF_em_NOMINAL;   //!
   TBranch        *b_truth_Z_p4;   //!
   TBranch        *b_weight_mc;   //!
   TBranch        *b_weight_mc_v;   //!
   TBranch        *b_weight_total;   //!

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
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("user.sdysch.19616269._000010.LepUniv_ttbar.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("user.sdysch.19616269._000010.LepUniv_ttbar.root");
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
   ljet_0_matched_p4 = 0;
   ljet_0_p4 = 0;
   ljet_1_matched_p4 = 0;
   ljet_1_p4 = 0;
   ljet_2_matched_p4 = 0;
   ljet_2_p4 = 0;
   met_reco_p4 = 0;
   muon_0_matched_p4 = 0;
   muon_0_p4 = 0;
   muon_1_matched_p4 = 0;
   muon_1_p4 = 0;
   muon_1_trk_vx_v = 0;
   truth_Z_p4 = 0;
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
   fChain->SetBranchAddress("event_is_bad_batman", &event_is_bad_batman, &b_event_is_bad_batman);
   fChain->SetBranchAddress("event_number", &event_number, &b_event_number);
   fChain->SetBranchAddress("jet_NOMINAL_central_jets_global_effSF_JVT", &jet_NOMINAL_central_jets_global_effSF_JVT, &b_jet_NOMINAL_central_jets_global_effSF_JVT);
   fChain->SetBranchAddress("jet_NOMINAL_central_jets_global_ineffSF_JVT", &jet_NOMINAL_central_jets_global_ineffSF_JVT, &b_jet_NOMINAL_central_jets_global_ineffSF_JVT);
   fChain->SetBranchAddress("jet_NOMINAL_forward_jets_global_effSF_JVT", &jet_NOMINAL_forward_jets_global_effSF_JVT, &b_jet_NOMINAL_forward_jets_global_effSF_JVT);
   fChain->SetBranchAddress("jet_NOMINAL_forward_jets_global_ineffSF_JVT", &jet_NOMINAL_forward_jets_global_ineffSF_JVT, &b_jet_NOMINAL_forward_jets_global_ineffSF_JVT);
   fChain->SetBranchAddress("jet_NOMINAL_global_effSF_MV2c10_FixedCutBEff_85", &jet_NOMINAL_global_effSF_MV2c10_FixedCutBEff_85, &b_jet_NOMINAL_global_effSF_MV2c10_FixedCutBEff_85);
   fChain->SetBranchAddress("jet_NOMINAL_global_ineffSF_MV2c10_FixedCutBEff_85", &jet_NOMINAL_global_ineffSF_MV2c10_FixedCutBEff_85, &b_jet_NOMINAL_global_ineffSF_MV2c10_FixedCutBEff_85);
   fChain->SetBranchAddress("ljet_0", &ljet_0, &b_ljet_0);
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
   fChain->SetBranchAddress("met_reco_p4", &met_reco_p4, &b_met_reco_p4);
   fChain->SetBranchAddress("muTrigMatch_0_HLT_mu20_iloose_L1MU15", &muTrigMatch_0_HLT_mu20_iloose_L1MU15, &b_muTrigMatch_0_HLT_mu20_iloose_L1MU15);
   fChain->SetBranchAddress("muTrigMatch_0_HLT_mu26_ivarmedium", &muTrigMatch_0_HLT_mu26_ivarmedium, &b_muTrigMatch_0_HLT_mu26_ivarmedium);
   fChain->SetBranchAddress("muTrigMatch_0_HLT_mu50", &muTrigMatch_0_HLT_mu50, &b_muTrigMatch_0_HLT_mu50);
   fChain->SetBranchAddress("muTrigMatch_0_trigger_matched", &muTrigMatch_0_trigger_matched, &b_muTrigMatch_0_trigger_matched);
   fChain->SetBranchAddress("muTrigMatch_1_HLT_mu20_iloose_L1MU15", &muTrigMatch_1_HLT_mu20_iloose_L1MU15, &b_muTrigMatch_1_HLT_mu20_iloose_L1MU15);
   fChain->SetBranchAddress("muTrigMatch_1_HLT_mu26_ivarmedium", &muTrigMatch_1_HLT_mu26_ivarmedium, &b_muTrigMatch_1_HLT_mu26_ivarmedium);
   fChain->SetBranchAddress("muTrigMatch_1_HLT_mu50", &muTrigMatch_1_HLT_mu50, &b_muTrigMatch_1_HLT_mu50);
   fChain->SetBranchAddress("muTrigMatch_1_trigger_matched", &muTrigMatch_1_trigger_matched, &b_muTrigMatch_1_trigger_matched);
   fChain->SetBranchAddress("muon_0", &muon_0, &b_muon_0);
   fChain->SetBranchAddress("muon_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium", &muon_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium, &b_muon_0_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium);
   fChain->SetBranchAddress("muon_0_NOMINAL_MuEffSF_HLT_mu26_ivarmedium_OR_HLT_mu50_QualMedium", &muon_0_NOMINAL_MuEffSF_HLT_mu26_ivarmedium_OR_HLT_mu50_QualMedium, &b_muon_0_NOMINAL_MuEffSF_HLT_mu26_ivarmedium_OR_HLT_mu50_QualMedium);
   fChain->SetBranchAddress("muon_0_NOMINAL_MuEffSF_IsoFCLoose", &muon_0_NOMINAL_MuEffSF_IsoFCLoose, &b_muon_0_NOMINAL_MuEffSF_IsoFCLoose);
   fChain->SetBranchAddress("muon_0_NOMINAL_MuEffSF_IsoFCLoose_FixedRad", &muon_0_NOMINAL_MuEffSF_IsoFCLoose_FixedRad, &b_muon_0_NOMINAL_MuEffSF_IsoFCLoose_FixedRad);
   fChain->SetBranchAddress("muon_0_NOMINAL_MuEffSF_IsoFCTight", &muon_0_NOMINAL_MuEffSF_IsoFCTight, &b_muon_0_NOMINAL_MuEffSF_IsoFCTight);
   fChain->SetBranchAddress("muon_0_NOMINAL_MuEffSF_IsoFCTightTrackOnly", &muon_0_NOMINAL_MuEffSF_IsoFCTightTrackOnly, &b_muon_0_NOMINAL_MuEffSF_IsoFCTightTrackOnly);
   fChain->SetBranchAddress("muon_0_NOMINAL_MuEffSF_IsoFCTightTrackOnly_FixedRad", &muon_0_NOMINAL_MuEffSF_IsoFCTightTrackOnly_FixedRad, &b_muon_0_NOMINAL_MuEffSF_IsoFCTightTrackOnly_FixedRad);
   fChain->SetBranchAddress("muon_0_NOMINAL_MuEffSF_IsoFCTight_FixedRad", &muon_0_NOMINAL_MuEffSF_IsoFCTight_FixedRad, &b_muon_0_NOMINAL_MuEffSF_IsoFCTight_FixedRad);
   fChain->SetBranchAddress("muon_0_NOMINAL_MuEffSF_IsoFixedCutHighPtTrackOnly", &muon_0_NOMINAL_MuEffSF_IsoFixedCutHighPtTrackOnly, &b_muon_0_NOMINAL_MuEffSF_IsoFixedCutHighPtTrackOnly);
   fChain->SetBranchAddress("muon_0_NOMINAL_MuEffSF_Reco_QualMedium", &muon_0_NOMINAL_MuEffSF_Reco_QualMedium, &b_muon_0_NOMINAL_MuEffSF_Reco_QualMedium);
   fChain->SetBranchAddress("muon_0_NOMINAL_MuEffSF_TTVA", &muon_0_NOMINAL_MuEffSF_TTVA, &b_muon_0_NOMINAL_MuEffSF_TTVA);
   fChain->SetBranchAddress("muon_0_id_medium", &muon_0_id_medium, &b_muon_0_id_medium);
   fChain->SetBranchAddress("muon_0_id_tight", &muon_0_id_tight, &b_muon_0_id_tight);
   fChain->SetBranchAddress("muon_0_iso_FCLoose", &muon_0_iso_FCLoose, &b_muon_0_iso_FCLoose);
   fChain->SetBranchAddress("muon_0_iso_FCLoose_FixedRad", &muon_0_iso_FCLoose_FixedRad, &b_muon_0_iso_FCLoose_FixedRad);
   fChain->SetBranchAddress("muon_0_iso_FCTight", &muon_0_iso_FCTight, &b_muon_0_iso_FCTight);
   fChain->SetBranchAddress("muon_0_iso_FCTightTrackOnly_FixedRad", &muon_0_iso_FCTightTrackOnly_FixedRad, &b_muon_0_iso_FCTightTrackOnly_FixedRad);
   fChain->SetBranchAddress("muon_0_iso_FixedCutLoose", &muon_0_iso_FixedCutLoose, &b_muon_0_iso_FixedCutLoose);
   fChain->SetBranchAddress("muon_0_iso_FixedCutTight", &muon_0_iso_FixedCutTight, &b_muon_0_iso_FixedCutTight);
   fChain->SetBranchAddress("muon_0_iso_FixedCutTightCaloOnly", &muon_0_iso_FixedCutTightCaloOnly, &b_muon_0_iso_FixedCutTightCaloOnly);
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
   fChain->SetBranchAddress("muon_0_trk_pvx_z0_sig", &muon_0_trk_pvx_z0_sig, &b_muon_0_trk_pvx_z0_sig);
   fChain->SetBranchAddress("muon_0_trk_pvx_z0_sintheta", &muon_0_trk_pvx_z0_sintheta, &b_muon_0_trk_pvx_z0_sintheta);
   fChain->SetBranchAddress("muon_0_trk_z0_sintheta", &muon_0_trk_z0_sintheta, &b_muon_0_trk_z0_sintheta);
   fChain->SetBranchAddress("muon_1", &muon_1, &b_muon_1);
   fChain->SetBranchAddress("muon_1_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium", &muon_1_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium, &b_muon_1_NOMINAL_MuEffSF_HLT_mu20_iloose_L1MU15_OR_HLT_mu50_QualMedium);
   fChain->SetBranchAddress("muon_1_NOMINAL_MuEffSF_HLT_mu26_ivarmedium_OR_HLT_mu50_QualMedium", &muon_1_NOMINAL_MuEffSF_HLT_mu26_ivarmedium_OR_HLT_mu50_QualMedium, &b_muon_1_NOMINAL_MuEffSF_HLT_mu26_ivarmedium_OR_HLT_mu50_QualMedium);
   fChain->SetBranchAddress("muon_1_NOMINAL_MuEffSF_IsoFCLoose", &muon_1_NOMINAL_MuEffSF_IsoFCLoose, &b_muon_1_NOMINAL_MuEffSF_IsoFCLoose);
   fChain->SetBranchAddress("muon_1_NOMINAL_MuEffSF_IsoFCLoose_FixedRad", &muon_1_NOMINAL_MuEffSF_IsoFCLoose_FixedRad, &b_muon_1_NOMINAL_MuEffSF_IsoFCLoose_FixedRad);
   fChain->SetBranchAddress("muon_1_NOMINAL_MuEffSF_IsoFCTight", &muon_1_NOMINAL_MuEffSF_IsoFCTight, &b_muon_1_NOMINAL_MuEffSF_IsoFCTight);
   fChain->SetBranchAddress("muon_1_NOMINAL_MuEffSF_IsoFCTightTrackOnly", &muon_1_NOMINAL_MuEffSF_IsoFCTightTrackOnly, &b_muon_1_NOMINAL_MuEffSF_IsoFCTightTrackOnly);
   fChain->SetBranchAddress("muon_1_NOMINAL_MuEffSF_IsoFCTightTrackOnly_FixedRad", &muon_1_NOMINAL_MuEffSF_IsoFCTightTrackOnly_FixedRad, &b_muon_1_NOMINAL_MuEffSF_IsoFCTightTrackOnly_FixedRad);
   fChain->SetBranchAddress("muon_1_NOMINAL_MuEffSF_IsoFCTight_FixedRad", &muon_1_NOMINAL_MuEffSF_IsoFCTight_FixedRad, &b_muon_1_NOMINAL_MuEffSF_IsoFCTight_FixedRad);
   fChain->SetBranchAddress("muon_1_NOMINAL_MuEffSF_IsoFixedCutHighPtTrackOnly", &muon_1_NOMINAL_MuEffSF_IsoFixedCutHighPtTrackOnly, &b_muon_1_NOMINAL_MuEffSF_IsoFixedCutHighPtTrackOnly);
   fChain->SetBranchAddress("muon_1_NOMINAL_MuEffSF_Reco_QualMedium", &muon_1_NOMINAL_MuEffSF_Reco_QualMedium, &b_muon_1_NOMINAL_MuEffSF_Reco_QualMedium);
   fChain->SetBranchAddress("muon_1_NOMINAL_MuEffSF_TTVA", &muon_1_NOMINAL_MuEffSF_TTVA, &b_muon_1_NOMINAL_MuEffSF_TTVA);
   fChain->SetBranchAddress("muon_1_cluster_eta", &muon_1_cluster_eta, &b_muon_1_cluster_eta);
   fChain->SetBranchAddress("muon_1_cluster_eta_be2", &muon_1_cluster_eta_be2, &b_muon_1_cluster_eta_be2);
   fChain->SetBranchAddress("muon_1_id_bad", &muon_1_id_bad, &b_muon_1_id_bad);
   fChain->SetBranchAddress("muon_1_id_charge", &muon_1_id_charge, &b_muon_1_id_charge);
   fChain->SetBranchAddress("muon_1_id_loose", &muon_1_id_loose, &b_muon_1_id_loose);
   fChain->SetBranchAddress("muon_1_id_medium", &muon_1_id_medium, &b_muon_1_id_medium);
   fChain->SetBranchAddress("muon_1_id_tight", &muon_1_id_tight, &b_muon_1_id_tight);
   fChain->SetBranchAddress("muon_1_id_veryloose", &muon_1_id_veryloose, &b_muon_1_id_veryloose);
   fChain->SetBranchAddress("muon_1_iso_FCLoose", &muon_1_iso_FCLoose, &b_muon_1_iso_FCLoose);
   fChain->SetBranchAddress("muon_1_iso_FCLoose_FixedRad", &muon_1_iso_FCLoose_FixedRad, &b_muon_1_iso_FCLoose_FixedRad);
   fChain->SetBranchAddress("muon_1_iso_FCTight", &muon_1_iso_FCTight, &b_muon_1_iso_FCTight);
   fChain->SetBranchAddress("muon_1_iso_FCTightTrackOnly_FixedRad", &muon_1_iso_FCTightTrackOnly_FixedRad, &b_muon_1_iso_FCTightTrackOnly_FixedRad);
   fChain->SetBranchAddress("muon_1_iso_FixedCutLoose", &muon_1_iso_FixedCutLoose, &b_muon_1_iso_FixedCutLoose);
   fChain->SetBranchAddress("muon_1_iso_FixedCutTight", &muon_1_iso_FixedCutTight, &b_muon_1_iso_FixedCutTight);
   fChain->SetBranchAddress("muon_1_iso_FixedCutTightCaloOnly", &muon_1_iso_FixedCutTightCaloOnly, &b_muon_1_iso_FixedCutTightCaloOnly);
   fChain->SetBranchAddress("muon_1_matched", &muon_1_matched, &b_muon_1_matched);
   fChain->SetBranchAddress("muon_1_matched_classifierParticleOrigin", &muon_1_matched_classifierParticleOrigin, &b_muon_1_matched_classifierParticleOrigin);
   fChain->SetBranchAddress("muon_1_matched_classifierParticleType", &muon_1_matched_classifierParticleType, &b_muon_1_matched_classifierParticleType);
   fChain->SetBranchAddress("muon_1_matched_mother_pdgId", &muon_1_matched_mother_pdgId, &b_muon_1_matched_mother_pdgId);
   fChain->SetBranchAddress("muon_1_matched_mother_status", &muon_1_matched_mother_status, &b_muon_1_matched_mother_status);
   fChain->SetBranchAddress("muon_1_matched_origin", &muon_1_matched_origin, &b_muon_1_matched_origin);
   fChain->SetBranchAddress("muon_1_matched_p4", &muon_1_matched_p4, &b_muon_1_matched_p4);
   fChain->SetBranchAddress("muon_1_matched_pdgId", &muon_1_matched_pdgId, &b_muon_1_matched_pdgId);
   fChain->SetBranchAddress("muon_1_matched_pz", &muon_1_matched_pz, &b_muon_1_matched_pz);
   fChain->SetBranchAddress("muon_1_matched_q", &muon_1_matched_q, &b_muon_1_matched_q);
   fChain->SetBranchAddress("muon_1_matched_status", &muon_1_matched_status, &b_muon_1_matched_status);
   fChain->SetBranchAddress("muon_1_matched_type", &muon_1_matched_type, &b_muon_1_matched_type);
   fChain->SetBranchAddress("muon_1_muonAuthor", &muon_1_muonAuthor, &b_muon_1_muonAuthor);
   fChain->SetBranchAddress("muon_1_muonType", &muon_1_muonType, &b_muon_1_muonType);
   fChain->SetBranchAddress("muon_1_origin", &muon_1_origin, &b_muon_1_origin);
   fChain->SetBranchAddress("muon_1_p4", &muon_1_p4, &b_muon_1_p4);
   fChain->SetBranchAddress("muon_1_q", &muon_1_q, &b_muon_1_q);
   fChain->SetBranchAddress("muon_1_trk_d0", &muon_1_trk_d0, &b_muon_1_trk_d0);
   fChain->SetBranchAddress("muon_1_trk_d0_sig", &muon_1_trk_d0_sig, &b_muon_1_trk_d0_sig);
   fChain->SetBranchAddress("muon_1_trk_pt_error", &muon_1_trk_pt_error, &b_muon_1_trk_pt_error);
   fChain->SetBranchAddress("muon_1_trk_pvx_z0", &muon_1_trk_pvx_z0, &b_muon_1_trk_pvx_z0);
   fChain->SetBranchAddress("muon_1_trk_pvx_z0_sig", &muon_1_trk_pvx_z0_sig, &b_muon_1_trk_pvx_z0_sig);
   fChain->SetBranchAddress("muon_1_trk_pvx_z0_sintheta", &muon_1_trk_pvx_z0_sintheta, &b_muon_1_trk_pvx_z0_sintheta);
   fChain->SetBranchAddress("muon_1_trk_vx", &muon_1_trk_vx, &b_muon_1_trk_vx);
   fChain->SetBranchAddress("muon_1_trk_vx_v", &muon_1_trk_vx_v, &b_muon_1_trk_vx_v);
   fChain->SetBranchAddress("muon_1_trk_z0", &muon_1_trk_z0, &b_muon_1_trk_z0);
   fChain->SetBranchAddress("muon_1_trk_z0_sig", &muon_1_trk_z0_sig, &b_muon_1_trk_z0_sig);
   fChain->SetBranchAddress("muon_1_trk_z0_sintheta", &muon_1_trk_z0_sintheta, &b_muon_1_trk_z0_sintheta);
   fChain->SetBranchAddress("muon_1_type", &muon_1_type, &b_muon_1_type);
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
   fChain->SetBranchAddress("triggerSF_em_NOMINAL", &triggerSF_em_NOMINAL, &b_triggerSF_em_NOMINAL);
   fChain->SetBranchAddress("truth_Z_p4", &truth_Z_p4, &b_truth_Z_p4);
   fChain->SetBranchAddress("weight_mc", &weight_mc, &b_weight_mc);
   fChain->SetBranchAddress("weight_mc_v", &weight_mc_v, &b_weight_mc_v);
   fChain->SetBranchAddress("weight_total", &weight_total, &b_weight_total);
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
