import os
import sys
import ROOT

base_path='/media/diegol/Mobile/DATA/v19/mc/'
base_path_sherpa='/media/diegol/Mobile/DATA/v19/mc/mc_sherpa/'

mc={'Ztautau_2018':[base_path+'user.sdysch.v19.mc.361108.PoPy8_Ztt.M4.e3601_s3126_r10724_p3975.sv1_Le',361108,1901.2,1.026,1],
'Ztautau_2017':[base_path+'user.sdysch.v19.mc.361108.PoPy8_Ztt.M4.e3601_s3126_r10201_p3975.sv1_Le',361108,1901.2,1.026,1],
'Ztautau_2015':[base_path+'user.sdysch.v19.mc.361108.PoPy8_Ztt.M4.e3601_s3126_r9364_p3975.sv1_Le',361108,1901.2,1.026,1],
'Zmumu_2018':[base_path+'user.sdysch.v19.mc.361107.PoPy8_Zmumu.M4.e3601_s3126_r10724_p3975.sv1_Le',361107,1901.2,1.026,1],
'Zmumu_2017':[base_path+'user.sdysch.v19.mc.361107.PoPy8_Zmumu.M4.e3601_s3126_r10201_p3975.sv1_Le',361107,1901.2,1.026,1],
'Zmumu_2015':[base_path+'user.sdysch.v19.mc.361107.PoPy8_Zmumu.M4.e3601_s3126_r9364_p3975.sv1_Le',361107,1901.2,1.026,1],
'Zee_2018':[base_path+'user.sdysch.v19.mc.361106.PoPy8_Zee.M4.e3601_s3126_r10724_p3975.sv1_Le',361106,1901.2,1.026,1],
'Zee_2017':[base_path+'user.sdysch.v19.mc.361106.PoPy8_Zee.M4.e3601_s3126_r10201_p3975.sv1_Le',361106,1901.2,1.026,1],
'Zee_2015':[base_path+'user.sdysch.v19.mc.361106.PoPy8_Zee.M4.e3601_s3126_r9364_p3975.sv1_Le',361106,1901.2,1.026,1],
'Wplustaunu_2018':[base_path+'user.sdysch.v19.mc.361102.PoPy8_Wplustaunu.M4.e3601_s3126_r10724_p3975.sv1_Le',361102,11306,1.0172,1],
'Wplustaunu_2017':[base_path+'user.sdysch.v19.mc.361102.PoPy8_Wplustaunu.M4.e3601_s3126_r10201_p3975.sv1_Le',361102,11306,1.0172,1],
'Wplustaunu_2015':[base_path+'user.sdysch.v19.mc.361102.PoPy8_Wplustaunu.M4.e3601_s3126_r9364_p3975.sv1_Le',361102,11306,1.0172,1],
'Wplusmunu_2018':[base_path+'user.sdysch.v19.mc.361101.PoPy8_Wplusmunu.M4.e3601_s3126_r10724_p3972.sv1_Le',361101,11306,1.0172,1],
'Wplusmunu_2017':[base_path+'user.sdysch.v19.mc.361101.PoPy8_Wplusmunu.M4.e3601_s3126_r10201_p3972.sv1_Le',361101,11306,1.0172,1],
'Wplusmunu_2015':[base_path+'user.sdysch.v19.mc.361101.PoPy8_Wplusmunu.M4.e3601_s3126_r9364_p3972.sv1_Le',361101,11306,1.0172,1],
'Wplusenu_2018':[base_path+'user.sdysch.v19.mc.361100.PoPy8_Wplusenu.M4.e3601_s3126_r10724_p3972.sv1_Le',361100,11306,1.0172,1],
'Wplusenu_2017':[base_path+'user.sdysch.v19.mc.361100.PoPy8_Wplusenu.M4.e3601_s3126_r10201_p3975.sv1_Le',361100,11306,1.0172,1],
'Wplusenu_2015':[base_path+'user.sdysch.v19.mc.361100.PoPy8_Wplusenu.M4.e3601_s3126_r9364_p3972.sv1_Le',361100,11306,1.0172,1],
'Wminustaunu_2018':[base_path+'user.sdysch.v19.mc.361105.PoPy8_Wminustaunu.M4.e3601_s3126_r10724_p3975.sv1_Le',361105,8282.6,1.0358,1],
'Wminustaunu_2017':[base_path+'user.sdysch.v19.mc.361105.PoPy8_Wminustaunu.M4.e3601_s3126_r10201_p3975.sv1_Le',361105,8282.6,1.0358,1],
'Wminustaunu_2015':[base_path+'user.sdysch.v19.mc.361105.PoPy8_Wminustaunu.M4.e3601_s3126_r9364_p3975.sv1_Le',361105,8282.6,1.0358,1],
'Wminusmunu_2018':[base_path+'user.sdysch.v19.mc.361104.PoPy8_Wminusmunu.M4.e3601_s3126_r10724_p3975.sv1_Le',361104,8282.6,1.0358,1],
'Wminusmunu_2017':[base_path+'user.sdysch.v19.mc.361104.PoPy8_Wminusmunu.M4.e3601_s3126_r10201_p3972.sv1_Le',361104,8282.6,1.0358,1],
'Wminusmunu_2015':[base_path+'user.sdysch.v19.mc.361104.PoPy8_Wminusmunu.M4.e3601_s3126_r9364_p3972.sv1_Le',361104,8282.6,1.0358,1],
'Wminusenu_2018':[base_path+'user.sdysch.v19.mc.361103.PoPy8_Wminusenu.M4.e3601_s3126_r10724_p3972.sv1_Le',361103,8282.6,1.0358,1],
'Wminusenu_2017':[base_path+'user.sdysch.v19.mc.361103.PoPy8_Wminusenu.M4.e3601_s3126_r10201_p3972.sv1_Le',361103,8282.6,1.0358,1],
'Wminusenu_2015':[base_path+'user.sdysch.v19.mc.361103.PoPy8_Wminusenu.M4.e3601_s3126_r9364_p3972.sv1_Le',361103,8282.6,1.0358,1],
'ttbar_2018':[base_path+'user.sdysch.v19.1.mc.410470.PhPy8_A14_ttb_nonallh.M4.e6337_s3126_r10724_p3972.sv1_Le',410470,729.77,1.13975636159,0.54383],
'ttbar_2017':[base_path+'user.sdysch.v19.1.mc.410470.PhPy8_A14_ttb_nonallh.M4.e6337_s3126_r10201_p3972.sv1_Le',410470,729.77,1.13975636159,0.54383],
'ttbar_2015':[base_path+'user.sdysch.v19.1.mc.410470.PhPy8_A14_ttb_nonallh.M4.e6337_s3126_r9364_p3972.sv1_Le',410470,729.77,1.13975636159,0.54383],
'ZqqZvv_2018':[base_path+'user.sdysch.v19.mc.363355.Sh221_PDF30_ZqqZvv.M4.e5525_s3126_r10724_p3975.sv1_Le',363355,15.565,1,0.27963],
'ZqqZvv_2017':[base_path+'user.sdysch.v19.mc.363355.Sh221_PDF30_ZqqZvv.M4.e5525_s3126_r10201_p3975.sv1_Le',363355,15.565,1,0.27963],
'ZqqZvv_2015':[base_path+'user.sdysch.v19.mc.363355.Sh221_PDF30_ZqqZvv.M4.e5525_s3126_r9364_p3975.sv1_Le',363355,15.565,1,0.27963],
'ZqqZll_2018':[base_path+'user.sdysch.v19.mc.363356.Sh221_PDF30_ZqqZll.M4.e5525_s3126_r10724_p3975.sv1_Le',363356,15.561,1,0.14103],
'ZqqZll_2017':[base_path+'user.sdysch.v19.mc.363356.Sh221_PDF30_ZqqZll.M4.e5525_s3126_r10201_p3975.sv1_Le',363356,15.561,1,0.14103],
'ZqqZll_2015':[base_path+'user.sdysch.v19.mc.363356.Sh221_PDF30_ZqqZll.M4.e5525_s3126_r9364_p3975.sv1_Le',363356,15.561,1,0.14103],
'WqqZvv_2018':[base_path+'user.sdysch.v19.mc.363357.Sh221_PDF30_WqqZvv.M4.e5525_s3126_r10724_p3975.sv1_Le',363357,6.7908,1,1],
'WqqZvv_2017':[base_path+'user.sdysch.v19.mc.363357.Sh221_PDF30_WqqZvv.M4.e5525_s3126_r10201_p3975.sv1_Le',363357,6.7908,1,1],
'WqqZvv_2015':[base_path+'user.sdysch.v19.mc.363357.Sh221_PDF30_WqqZvv.M4.e5525_s3126_r9364_p3975.sv1_Le',363357,6.7908,1,1],
'WqqZll_2018':[base_path+'user.sdysch.v19.mc.363358.Sh221_PDF30_WqqZll.M4.e5525_s3126_r10724_p3975.sv1_Le',363358,3.4332,1,1],
'WqqZll_2017':[base_path+'user.sdysch.v19.mc.363358.Sh221_PDF30_WqqZll.M4.e5525_s3126_r10201_p3975.sv1_Le',363358,3.4332,1,1],
'WqqZll_2015':[base_path+'user.sdysch.v19.mc.363358.Sh221_PDF30_WqqZll.M4.e5525_s3126_r9364_p3975.sv1_Le',363358,3.4332,1,1],
'WlvZqq_2018':[base_path+'user.sdysch.v19.mc.363489.Sh221_PDF30_WlvZqq.M4.e5525_s3126_r10724_p3975.sv1_Le',363489,11.418,1,1],
'WlvZqq_2017':[base_path+'user.sdysch.v19.mc.363489.Sh221_PDF30_WlvZqq.M4.e5525_s3126_r10201_p3975.sv1_Le',363489,11.418,1,1],
'WlvZqq_2015':[base_path+'user.sdysch.v19.mc.363489.Sh221_PDF30_WlvZqq.M4.e5525_s3126_r9364_p3975.sv1_Le',363489,11.418,1,1],
'llll_2018':[base_path+'user.sdysch.v19.mc.364250.Sh222_PDF30_llll.M4.e5894_s3126_r10724_p3972.sv1_Le',364250,1.2519,1,1],
'llll_2017':[base_path+'user.sdysch.v19.mc.364250.Sh222_PDF30_llll.M4.e5894_s3126_r10201_p3972.sv1_Le',364250,1.2519,1,1],
'llll_2015':[base_path+'user.sdysch.v19.mc.364250.Sh222_PDF30_llll.M4.e5894_s3126_r9364_p3972.sv1_Le',364250,1.2519,1,1],
'lllv_2018':[base_path+'user.sdysch.v19.mc.364253.Sh222_PDF30_lllv.M4.e5916_s3126_r10724_p3972.sv1_Le',364253,4.5786,1,1],
'lllv_2017':[base_path+'user.sdysch.v19.mc.364253.Sh222_PDF30_lllv.M4.e5916_s3126_r10201_p3972.sv1_Le',364253,4.5786,1,1],
'lllv_2015':[base_path+'user.sdysch.v19.mc.364253.Sh222_PDF30_lllv.M4.e5916_s3126_r9364_p3972.sv1_Le',364253,4.5786,1,1],
'llvv_2018':[base_path+'user.sdysch.v19.mc.364254.Sh222_PDF30_llvv.M4.e5916_s3126_r10724_p3972.sv1_Le',364254,12.504,1,1],
'llvv_2017':[base_path+'user.sdysch.v19.mc.364254.Sh222_PDF30_llvv.M4.e5916_s3126_r10201_p3972.sv1_Le',364254,12.504,1,1],
'llvv_2015':[base_path+'user.sdysch.v19.mc.364254.Sh222_PDF30_llvv.M4.e5916_s3126_r9364_p3972.sv1_Le',364254,12.504,1,1],
'lvvv_2018':[base_path+'user.sdysch.v19.mc.364255.Sh222_PDF30_lvvv.M4.e5916_s3126_r10724_p3972.sv1_Le',364255,3.235,1,1],
'lvvv_2017':[base_path+'user.sdysch.v19.mc.364255.Sh222_PDF30_lvvv.M4.e5916_s3126_r10201_p3972.sv1_Le',364255,3.235,1,1],
'lvvv_2015':[base_path+'user.sdysch.v19.mc.364255.Sh222_PDF30_lvvv.M4.e5916_s3126_r9364_p3972.sv1_Le',364255,3.235,1,1],
'st_schan_top_2018':[base_path+'user.sdysch.v19.mc.410644.PoPy8_A14_st_schan_lept_top.M4.e6527_s3126_r10724_p3972.sv1_Le',410644,2.027,1.017,1],
'st_schan_top_2017':[base_path+'user.sdysch.v19.mc.410644.PoPy8_A14_st_schan_lept_top.M4.e6527_s3126_r10201_p3972.sv1_Le',410644,2.027,1.017,1],
'st_schan_top_2015':[base_path+'user.sdysch.v19.mc.410644.PoPy8_A14_st_schan_lept_top.M4.e6527_s3126_r9364_p3972.sv1_Le',410644,2.027,1.017,1],
'st_schan_atop_2018':[base_path+'user.sdysch.v19.mc.410645.PoPy8_A14_st_schan_lept_atop.M4.e6527_s3126_r10724_p3972.sv1_Le',410645,1.2674,1.0167,1],
'st_schan_atop_2017':[base_path+'user.sdysch.v19.mc.410645.PoPy8_A14_st_schan_lept_atop.M4.e6527_s3126_r10201_p3972.sv1_Le',410645,1.2674,1.0167,1],
'st_schan_atop_2015':[base_path+'user.sdysch.v19.mc.410645.PoPy8_A14_st_schan_lept_atop.M4.e6527_s3126_r9364_p3972.sv1_Le',410645,1.2674,1.0167,1],
'st_wt_top_2018':[base_path+'user.sdysch.v19.mc.410646.PoPy8_A14_Wt_DR_inclusive_top.M4.e6552_s3126_r10724_p3972.sv1_Le',410646,37.936,0.945,1],
'st_wt_top_2017':[base_path+'user.sdysch.v19.mc.410646.PoPy8_A14_Wt_DR_inclusive_top.M4.e6552_s3126_r10201_p3972.sv1_Le',410646,37.936,0.945,1],
'st_wt_top_2015':[base_path+'user.sdysch.v19.mc.410646.PoPy8_A14_Wt_DR_inclusive_top.M4.e6552_s3126_r9364_p3972.sv1_Le',410646,37.936,0.945,1],
'st_wt_atop_2018':[base_path+'user.sdysch.v19.mc.410647.PoPy8_A14_Wt_DR_inclusive_atop.M4.e6552_s3126_r10724_p3972.sv1_Le',410647,37.905,0.9457,1],
'st_wt_atop_2017':[base_path+'user.sdysch.v19.mc.410647.PoPy8_A14_Wt_DR_inclusive_atop.M4.e6552_s3126_r10201_p3972.sv1_Le',410647,37.905,0.9457,1],
'st_wt_atop_2015':[base_path+'user.sdysch.v19.mc.410647.PoPy8_A14_Wt_DR_inclusive_atop.M4.e6552_s3126_r9364_p3972.sv1_Le',410647,37.905,0.9457,1],
'st_tchan_top_2018':[base_path+'user.sdysch.v19.mc.410658.PhPy8_A14_tchan_BW50_lept_top.M4.e6671_s3126_r10724_p3972.sv1_Le',410658,36.996,1.1935,1],
'st_tchan_top_2017':[base_path+'user.sdysch.v19.mc.410658.PhPy8_A14_tchan_BW50_lept_top.M4.e6671_s3126_r10201_p3972.sv1_Le',410658,36.996,1.1935,1],
'st_tchan_top_2015':[base_path+'user.sdysch.v19.mc.410658.PhPy8_A14_tchan_BW50_lept_top.M4.e6671_s3126_r9364_p3972.sv1_Le',410658,36.996,1.1935,1],
'st_tchan_atop_2018':[base_path+'user.sdysch.v19.mc.410659.PhPy8_A14_tchan_BW50_lept_atop.M4.e6671_s3126_r10724_p3972.sv1_Le',410659,22.175,1.1849,1],
'st_tchan_atop_2017':[base_path+'user.sdysch.v19.mc.410659.PhPy8_A14_tchan_BW50_lept_atop.M4.e6671_s3126_r10201_p3972.sv1_Le',410659,22.175,1.1849,1],
'st_tchan_atop_2015':[base_path+'user.sdysch.v19.mc.410659.PhPy8_A14_tchan_BW50_lept_atop.M4.e6671_s3126_r9364_p3972.sv1_Le',410659,22.175,1.1849,1],

'Ztautau_sherpa1_2018':[base_path_sherpa+'user.dbaronmo.v19.mc.364128.Sh221_PDF30_Ztt_MV0_70_CVBV.M4.e5307_s3126_r10724_p3972.sv2_Le',364128,1981.7,0.9751,0.82142],
'Ztautau_sherpa1_2017':[base_path_sherpa+'user.dbaronmo.v19.mc.364128.Sh221_PDF30_Ztt_MV0_70_CVBV.M4.e5307_s3126_r10201_p3972.sv2_Le',364128,1981.7,0.9751,0.82142],
'Ztautau_sherpa1_2015':[base_path_sherpa+'user.dbaronmo.v19.mc.364128.Sh221_PDF30_Ztt_MV0_70_CVBV.M4.e5307_s3126_r9364_p3972.sv2_Le',364128,1981.7,0.9751,0.82142],
'Ztautau_sherpa2_2018':[base_path_sherpa+'user.dbaronmo.v19.mc.364129.Sh221_PDF30_Ztt_MV0_70_CFBV.M4.e5307_s3126_r10724_p3972.sv2_Le',364129,1981.6,0.9751,0.10907],
'Ztautau_sherpa2_2017':[base_path_sherpa+'user.dbaronmo.v19.mc.364129.Sh221_PDF30_Ztt_MV0_70_CFBV.M4.e5307_s3126_r10201_p3972.sv2_Le',364129,1981.6,0.9751,0.10907],
'Ztautau_sherpa2_2015':[base_path_sherpa+'user.dbaronmo.v19.mc.364129.Sh221_PDF30_Ztt_MV0_70_CFBV.M4.e5307_s3126_r9364_p3972.sv2_Le',364129,1981.6,0.9751,0.10907],
'Ztautau_sherpa3_2018':[base_path_sherpa+'user.dbaronmo.v19.mc.364130.Sh221_PDF30_Ztt_MV0_70_BF.M4.e5307_s3126_r10724_p3972.sv2_Le',364130,1982.1,0.9751,0.065759],
'Ztautau_sherpa3_2017':[base_path_sherpa+'user.dbaronmo.v19.mc.364130.Sh221_PDF30_Ztt_MV0_70_BF.M4.e5307_s3126_r10201_p3972.sv2_Le',364130,1982.1,0.9751,0.065759],
'Ztautau_sherpa3_2015':[base_path_sherpa+'user.dbaronmo.v19.mc.364130.Sh221_PDF30_Ztt_MV0_70_BF.M4.e5307_s3126_r9364_p3972.sv2_Le',364130,1982.1,0.9751,0.065759],
'Ztautau_sherpa4_2018':[base_path_sherpa+'user.dbaronmo.v19.mc.364131.Sh221_PDF30_Ztt_MV70_140_CVBV.M4.e5307_s3126_r10724_p3972.sv2_Le',364131,110.56,0.9751,0.6926],
'Ztautau_sherpa4_2017':[base_path_sherpa+'user.dbaronmo.v19.mc.364131.Sh221_PDF30_Ztt_MV70_140_CVBV.M4.e5307_s3126_r10201_p3972.sv2_Le',364131,110.56,0.9751,0.6926],
'Ztautau_sherpa4_2015':[base_path_sherpa+'user.dbaronmo.v19.mc.364131.Sh221_PDF30_Ztt_MV70_140_CVBV.M4.e5307_s3126_r9364_p3972.sv2_Le',364131,110.56,0.9751,0.6926],
'Ztautau_sherpa5_2018':[base_path_sherpa+'user.dbaronmo.v19.mc.364132.Sh221_PDF30_Ztt_MV70_140_CFBV.M4.e5307_s3126_r10724_p3972.sv2_Le',364132,110.55,0.9751,0.1902],
'Ztautau_sherpa5_2017':[base_path_sherpa+'user.dbaronmo.v19.mc.364132.Sh221_PDF30_Ztt_MV70_140_CFBV.M4.e5307_s3126_r10201_p3972.sv2_Le',364132,110.55,0.9751,0.1902],
'Ztautau_sherpa5_2015':[base_path_sherpa+'user.dbaronmo.v19.mc.364132.Sh221_PDF30_Ztt_MV70_140_CFBV.M4.e5307_s3126_r9364_p3972.sv2_Le',364132,110.55,0.9751,0.1902],
'Ztautau_sherpa6_2018':[base_path_sherpa+'user.dbaronmo.v19.mc.364133.Sh221_PDF30_Ztt_MV70_140_BF.M4.e5307_s3126_r10724_p3972.sv2_Le',364133,110.63,0.9751,0.110886],
'Ztautau_sherpa6_2017':[base_path_sherpa+'user.dbaronmo.v19.mc.364133.Sh221_PDF30_Ztt_MV70_140_BF.M4.e5307_s3126_r10201_p3972.sv2_Le',364133,110.63,0.9751,0.110886],
'Ztautau_sherpa6_2015':[base_path_sherpa+'user.dbaronmo.v19.mc.364133.Sh221_PDF30_Ztt_MV70_140_BF.M4.e5307_s3126_r9364_p3972.sv2_Le',364133,110.63,0.9751,0.110886],
'Ztautau_sherpa7_2018':[base_path_sherpa+'user.dbaronmo.v19.mc.364134.Sh221_PDF30_Ztt_MV140_280_CVBV.M4.e5307_s3126_r10724_p3972.sv2_Le',364134,40.793,0.9751,0.61823],
'Ztautau_sherpa7_2017':[base_path_sherpa+'user.dbaronmo.v19.mc.364134.Sh221_PDF30_Ztt_MV140_280_CVBV.M4.e5307_s3126_r10201_p3972.sv2_Le',364134,40.793,0.9751,0.61823],
'Ztautau_sherpa7_2015':[base_path_sherpa+'user.dbaronmo.v19.mc.364134.Sh221_PDF30_Ztt_MV140_280_CVBV.M4.e5307_s3126_r9364_p3972.sv2_Le',364134,40.793,0.9751,0.61823],
'Ztautau_sherpa8_2018':[base_path_sherpa+'user.dbaronmo.v19.mc.364135.Sh221_PDF30_Ztt_MV140_280_CFBV.M4.e5307_s3126_r10724_p3972.sv2_Le',364135,40.718,0.9751,0.23417],
'Ztautau_sherpa8_2017':[base_path_sherpa+'user.dbaronmo.v19.mc.364135.Sh221_PDF30_Ztt_MV140_280_CFBV.M4.e5307_s3126_r10201_p3972.sv2_Le',364135,40.718,0.9751,0.23417],
'Ztautau_sherpa8_2015':[base_path_sherpa+'user.dbaronmo.v19.mc.364135.Sh221_PDF30_Ztt_MV140_280_CFBV.M4.e5307_s3126_r9364_p3972.sv2_Le',364135,40.718,0.9751,0.23417],
'Ztautau_sherpa9_2018':[base_path_sherpa+'user.dbaronmo.v19.mc.364136.Sh221_PDF30_Ztt_MV140_280_BF.M4.e5307_s3126_r10724_p3972.sv2_Le',364136,40.735,0.9751,0.15608],
'Ztautau_sherpa9_2017':[base_path_sherpa+'user.dbaronmo.v19.mc.364136.Sh221_PDF30_Ztt_MV140_280_BF.M4.e5307_s3126_r10201_p3972.sv2_Le',364136,40.735,0.9751,0.15608],
'Ztautau_sherpa9_2015':[base_path_sherpa+'user.dbaronmo.v19.mc.364136.Sh221_PDF30_Ztt_MV140_280_BF.M4.e5307_s3126_r9364_p3972.sv2_Le',364136,40.735,0.9751,0.15608],
'Ztautau_sherpa10_2018':[base_path_sherpa+'user.dbaronmo.v19.mc.364137.Sh221_PDF30_Ztt_MV280_500_CVBV.M4.e5307_s3126_r10724_p3972.sv2_Le',364137,8.6642,0.9751,0.56327],
'Ztautau_sherpa10_2017':[base_path_sherpa+'user.dbaronmo.v19.mc.364137.Sh221_PDF30_Ztt_MV280_500_CVBV.M4.e5307_s3126_r10201_p3972.sv2_Le',364137,8.6642,0.9751,0.56327],
'Ztautau_sherpa10_2015':[base_path_sherpa+'user.dbaronmo.v19.mc.364137.Sh221_PDF30_Ztt_MV280_500_CVBV.M4.e5307_s3126_r9364_p3972.sv2_Le',364137,8.6642,0.9751,0.56327],
'Ztautau_sherpa11_2018':[base_path_sherpa+'user.dbaronmo.v19.mc.364138.Sh221_PDF30_Ztt_MV280_500_CFBV.M4.e5313_s3126_r10724_p3972.sv2_Le',364138,8.6756,0.9751,0.26523],
'Ztautau_sherpa11_2017':[base_path_sherpa+'user.dbaronmo.v19.mc.364138.Sh221_PDF30_Ztt_MV280_500_CFBV.M4.e5313_s3126_r10201_p3972.sv2_Le',364138,8.6756,0.9751,0.26523],
'Ztautau_sherpa11_2015':[base_path_sherpa+'user.dbaronmo.v19.mc.364138.Sh221_PDF30_Ztt_MV280_500_CFBV.M4.e5313_s3126_r9364_p3972.sv2_Le',364138,8.6756,0.9751,0.26523],
'Ztautau_sherpa12_2018':[base_path_sherpa+'user.dbaronmo.v19.mc.364139.Sh221_PDF30_Ztt_MV280_500_BF.M4.e5313_s3126_r10724_p3972.sv2_Le',364139,8.6797,0.9751,0.17626],
'Ztautau_sherpa12_2017':[base_path_sherpa+'user.dbaronmo.v19.mc.364139.Sh221_PDF30_Ztt_MV280_500_BF.M4.e5313_s3126_r10201_p3972.sv2_Le',364139,8.6797,0.9751,0.17626],
'Ztautau_sherpa12_2015':[base_path_sherpa+'user.dbaronmo.v19.mc.364139.Sh221_PDF30_Ztt_MV280_500_BF.M4.e5313_s3126_r9364_p3972.sv2_Le',364139,8.6797,0.9751,0.17626],
'Ztautau_sherpa13_2018':[base_path_sherpa+'user.dbaronmo.v19.mc.364140.Sh221_PDF30_Ztt_MV500_1000.M4.e5307_s3126_r10724_p3972.sv2_Le',364140,1.8079,0.9751,1],
'Ztautau_sherpa13_2017':[base_path_sherpa+'user.dbaronmo.v19.mc.364140.Sh221_PDF30_Ztt_MV500_1000.M4.e5307_s3126_r10201_p3972.sv2_Le',364140,1.8079,0.9751,1],
'Ztautau_sherpa13_2015':[base_path_sherpa+'user.dbaronmo.v19.mc.364140.Sh221_PDF30_Ztt_MV500_1000.M4.e5307_s3126_r9364_p3972.sv2_Le',364140,1.8079,0.9751,1],
'Ztautau_sherpa14_2018':[base_path_sherpa+'user.dbaronmo.v19.mc.364141.Sh221_PDF30_Ztt_MV1000_E_CMS.M4.e5307_s3126_r10724_p3972.sv2_Le',364141,0.14823,0.9751,1],
'Ztautau_sherpa14_2017':[base_path_sherpa+'user.dbaronmo.v19.mc.364141.Sh221_PDF30_Ztt_MV1000_E_CMS.M4.e5307_s3126_r10201_p3972.sv2_Le',364141,0.14823,0.9751,1],
'Ztautau_sherpa14_2015':[base_path_sherpa+'user.dbaronmo.v19.mc.364141.Sh221_PDF30_Ztt_MV1000_E_CMS.M4.e5307_s3126_r9364_p3972.sv2_Le',364141,0.14823,0.9751,1],


}

## THIS SCRIPT MUST BE LAUNCHED AS

## python lister.py 1.NAME_SAMPLES 2.DIRECTORY_WHERE 3.SAMPLE_DSID 4.CROSS_SECTION 5.K-FACTOR 6.FILTER-EFF

pwd=os.getcwd()

def list(name,directory,home):
    string=''
    os.chdir(directory)
    j=0
    for i in os.listdir():
        if i[-4:]=='root':
            string=string+"'"+name+"_"+str(j)+"'"+":"+"'"+i+"'"+","+'\n'
            j=j+1
    os.chdir(home)
    return string
def data_combo(name,directory,home):
    string=''
    os.chdir(directory)
    j=0
    for i in os.listdir():
        if i[-4:]=='root':
            string=string+"'"+name+"_"+str(j)+"'"+","
            j=j+1
    os.chdir(home)
    return '"'+name+'"'+':'+'['+string+'],\n'

def info_file(name,directory,DSID,XSEC,KFAC,FIL_EFF,home):
    os.chdir(directory)
    strin=''
    sumw=0
    for file in os.listdir():
        if file[-4:]=='root':
            f = ROOT.TFile.Open(file, 'read')
            hist = f.Get('h_metadata')
            sumw+=hist.GetBinContent(8)        
    k=0
    for file in os.listdir():
        if file[-4:]=='root':
            f = ROOT.TFile.Open(file, 'read')
            a="'%s_%d': {'DSID'    : %d,'events'  : %f,'red_eff' :1,'sumw'    :%f,'xsec'    :%f,'kfac'    :%f,'fil_eff'    :%f},"%(name,k,int(DSID),sumw,sumw,float(XSEC),float(KFAC),float(FIL_EFF))
            strin=strin+a+'\n'
            k=k+1
    os.chdir(home)
    return strin

for sample in mc:
    
    files=open('files.txt','a+')
    files.write('#%s\n'%(sample))
    files.write(list(sample,mc[sample][0],pwd))
    files.close()

    combos=open('combos.txt','a+')
    combos.write('#%s\n'%(sample))
    combos.write(data_combo(sample,mc[sample][0],pwd))
    combos.close()

    f=open('info.txt','a+')
    f.write('#%s\n'%(sample))
    f.write(info_file(sample,mc[sample][0],mc[sample][1],mc[sample][2],mc[sample][3],mc[sample][4],pwd))
    f.close()
