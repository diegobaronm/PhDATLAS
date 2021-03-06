import os
import sys
import ROOT


base_path=sys.argv[1]

base_path_sherpa=base_path

name_mc=os.listdir(base_path)

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

'Zee_sherpa1_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364127.Sh221_PDF30_Zee_MV1000_E_CMS.M4.e5299_s3126_r9364_p4097.sv1_Le', '364127', 0.14881, 0.9751, 1.0] ,
'Zee_sherpa1_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364127.Sh221_PDF30_Zee_MV1000_E_CMS.M4.e5299_s3126_r10724_p4097.sv1_Le', '364127', 0.14881, 0.9751, 1.0] ,
'Zee_sherpa1_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364127.Sh221_PDF30_Zee_MV1000_E_CMS.M4.e5299_s3126_r10201_p4097.sv1_Le', '364127', 0.14881, 0.9751, 1.0] ,
'Zee_sherpa2_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364118.Sh221_PDF30_Zee_MV70_140_CFBV.M4.e5299_s3126_r10201_p4097.sv1_Le', '364118', 110.5, 0.9751, 0.18933] ,
'Zee_sherpa2_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364118.Sh221_PDF30_Zee_MV70_140_CFBV.M4.e5299_s3126_r10724_p4097.sv1_Le', '364118', 110.5, 0.9751, 0.18933] ,
'Zee_sherpa2_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364118.Sh221_PDF30_Zee_MV70_140_CFBV.M4.e5299_s3126_r9364_p4097.sv1_Le', '364118', 110.5, 0.9751, 0.18933] ,
'Zee_sherpa3_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364114.Sh221_PDF30_Zee_MV0_70_CVBV.M4.e5299_s3126_r10724_p4097.sv1_Le', '364114', 1982.8, 0.9751, 0.8212] ,
'Zee_sherpa3_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364114.Sh221_PDF30_Zee_MV0_70_CVBV.M4.e5299_s3126_r10201_p4097.sv1_Le', '364114', 1982.8, 0.9751, 0.8212] ,
'Zee_sherpa3_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364114.Sh221_PDF30_Zee_MV0_70_CVBV.M4.e5299_s3126_r9364_p4097.sv1_Le', '364114', 1982.8, 0.9751, 0.8212] ,
'Zee_sherpa4_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364125.Sh221_PDF30_Zee_MV280_500_BF.M4.e5299_s3126_r10201_p4097.sv1_Le', '364125', 8.6801, 0.9751, 0.17632] ,
'Zee_sherpa4_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364125.Sh221_PDF30_Zee_MV280_500_BF.M4.e5299_s3126_r10724_p4097.sv1_Le', '364125', 8.6801, 0.9751, 0.17632] ,
'Zee_sherpa4_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364125.Sh221_PDF30_Zee_MV280_500_BF.M4.e5299_s3126_r9364_p4097.sv1_Le', '364125', 8.6801, 0.9751, 0.17632] ,
'Zee_sherpa5_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364123.Sh221_PDF30_Zee_MV280_500_CVBV.M4.e5299_s3126_r10201_p4097.sv1_Le', '364123', 8.6716, 0.9751, 0.56429] ,
'Zee_sherpa5_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364123.Sh221_PDF30_Zee_MV280_500_CVBV.M4.e5299_s3126_r9364_p4097.sv1_Le', '364123', 8.6716, 0.9751, 0.56429] ,
'Zee_sherpa5_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364123.Sh221_PDF30_Zee_MV280_500_CVBV.M4.e5299_s3126_r10724_p4097.sv1_Le', '364123', 8.6716, 0.9751, 0.56429] ,
'Zee_sherpa6_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364121.Sh221_PDF30_Zee_MV140_280_CFBV.M4.e5299_s3126_r9364_p4097.sv1_Le', '364121', 40.674, 0.9751, 0.23268] ,
'Zee_sherpa6_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364121.Sh221_PDF30_Zee_MV140_280_CFBV.M4.e5299_s3126_r10724_p4097.sv1_Le', '364121', 40.674, 0.9751, 0.23268] ,
'Zee_sherpa6_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364121.Sh221_PDF30_Zee_MV140_280_CFBV.M4.e5299_s3126_r10201_p4097.sv1_Le', '364121', 40.674, 0.9751, 0.23268] ,
'Zee_sherpa7_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364116.Sh221_PDF30_Zee_MV0_70_BF.M4.e5299_s3126_r10201_p4097.sv1_Le', '364116', 1982.0, 0.9751, 0.065194] ,
'Zee_sherpa7_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364116.Sh221_PDF30_Zee_MV0_70_BF.M4.e5299_s3126_r9364_p4097.sv1_Le', '364116', 1982.0, 0.9751, 0.065194] ,
'Zee_sherpa7_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364116.Sh221_PDF30_Zee_MV0_70_BF.M4.e5299_s3126_r10724_p4097.sv1_Le', '364116', 1982.0, 0.9751, 0.065194] ,
'Zee_sherpa8_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364122.Sh221_PDF30_Zee_MV140_280_BF.M4.e5299_s3126_r10724_p4097.sv1_Le', '364122', 40.68, 0.9751, 0.15352] ,
'Zee_sherpa8_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364122.Sh221_PDF30_Zee_MV140_280_BF.M4.e5299_s3126_r10201_p4097.sv1_Le', '364122', 40.68, 0.9751, 0.15352] ,
'Zee_sherpa8_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364122.Sh221_PDF30_Zee_MV140_280_BF.M4.e5299_s3126_r9364_p4097.sv1_Le', '364122', 40.68, 0.9751, 0.15352] ,
'Zee_sherpa9_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364120.Sh221_PDF30_Zee_MV140_280_CVBV.M4.e5299_s3126_r9364_p4097.sv1_Le', '364120', 40.645, 0.9751, 0.61591] ,
'Zee_sherpa9_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364120.Sh221_PDF30_Zee_MV140_280_CVBV.M4.e5299_s3126_r10724_p4097.sv1_Le', '364120', 40.645, 0.9751, 0.61591] ,
'Zee_sherpa9_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364120.Sh221_PDF30_Zee_MV140_280_CVBV.M4.e5299_s3126_r10201_p4097.sv1_Le', '364120', 40.645, 0.9751, 0.61591] ,
'Zee_sherpa10_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364117.Sh221_PDF30_Zee_MV70_140_CVBV.M4.e5299_s3126_r10201_p4097.sv1_Le', '364117', 110.71, 0.9751, 0.69362] ,
'Zee_sherpa10_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364117.Sh221_PDF30_Zee_MV70_140_CVBV.M4.e5299_s3126_r10724_p4097.sv1_Le', '364117', 110.71, 0.9751, 0.69362] ,
'Zee_sherpa10_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364117.Sh221_PDF30_Zee_MV70_140_CVBV.M4.e5299_s3126_r9364_p4097.sv1_Le', '364117', 110.71, 0.9751, 0.69362] ,
'Zee_sherpa11_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364119.Sh221_PDF30_Zee_MV70_140_BF.M4.e5299_s3126_r10201_p4097.sv1_Le', '364119', 110.53, 0.9751, 0.11587] ,
'Zee_sherpa11_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364119.Sh221_PDF30_Zee_MV70_140_BF.M4.e5299_s3126_r9364_p4097.sv1_Le', '364119', 110.53, 0.9751, 0.11587] ,
'Zee_sherpa11_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364119.Sh221_PDF30_Zee_MV70_140_BF.M4.e5299_s3126_r10724_p4097.sv1_Le', '364119', 110.53, 0.9751, 0.11587] ,
'Zee_sherpa12_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364126.Sh221_PDF30_Zee_MV500_1000.M4.e5299_s3126_r10201_p4097.sv1_Le', '364126', 1.8089, 0.9751, 1.0] ,
'Zee_sherpa12_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364126.Sh221_PDF30_Zee_MV500_1000.M4.e5299_s3126_r10724_p4097.sv1_Le', '364126', 1.8089, 0.9751, 1.0] ,
'Zee_sherpa12_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364126.Sh221_PDF30_Zee_MV500_1000.M4.e5299_s3126_r9364_p4097.sv1_Le', '364126', 1.8089, 0.9751, 1.0] ,
'Zee_sherpa13_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364124.Sh221_PDF30_Zee_MV280_500_CFBV.M4.e5299_s3126_r10724_p4097.sv1_Le', '364124', 8.6668, 0.9751, 0.26531] ,
'Zee_sherpa13_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364124.Sh221_PDF30_Zee_MV280_500_CFBV.M4.e5299_s3126_r9364_p4097.sv1_Le', '364124', 8.6668, 0.9751, 0.26531] ,
'Zee_sherpa13_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364124.Sh221_PDF30_Zee_MV280_500_CFBV.M4.e5299_s3126_r10201_p4097.sv1_Le', '364124', 8.6668, 0.9751, 0.26531] ,
'Zee_sherpa14_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364115.Sh221_PDF30_Zee_MV0_70_CFBV.M4.e5299_s3126_r9364_p4097.sv1_Le', '364115', 1981.7, 0.9751, 0.11367] ,
'Zee_sherpa14_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364115.Sh221_PDF30_Zee_MV0_70_CFBV.M4.e5299_s3126_r10201_p4097.sv1_Le', '364115', 1981.7, 0.9751, 0.11367] ,
'Zee_sherpa14_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2e-sherpa.mc.364115.Sh221_PDF30_Zee_MV0_70_CFBV.M4.e5299_s3126_r10724_p4097.sv1_Le', '364115', 1981.7, 0.9751, 0.11367] ,

}

mc_not_used={
    '''
'Zmumu_sherpa1_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364100.Sh221_PDF30_Zmumu_MV0_70_CVBV.M4.e5271_s3126_r10201_p4097.sv1_Le', '364100', 1981.7, 0.9751, 0.82152] ,
'Zmumu_sherpa1_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364100.Sh221_PDF30_Zmumu_MV0_70_CVBV.M4.e5271_s3126_r9364_p4097.sv1_Le', '364100', 1981.7, 0.9751, 0.82152] ,
'Zmumu_sherpa1_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364100.Sh221_PDF30_Zmumu_MV0_70_CVBV.M4.e5271_s3126_r10724_p4097.sv1_Le', '364100', 1981.7, 0.9751, 0.82152] ,
'Zmumu_sherpa2_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364101.Sh221_PDF30_Zmumu_MV0_70_CFBV.M4.e5271_s3126_r10201_p4097.sv1_Le', '364101', 1982.6, 0.9751, 0.11357] ,
'Zmumu_sherpa2_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364101.Sh221_PDF30_Zmumu_MV0_70_CFBV.M4.e5271_s3126_r10724_p4097.sv1_Le', '364101', 1982.6, 0.9751, 0.11357] ,
'Zmumu_sherpa2_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364101.Sh221_PDF30_Zmumu_MV0_70_CFBV.M4.e5271_s3126_r9364_p4097.sv1_Le', '364101', 1982.6, 0.9751, 0.11357] ,
'Zmumu_sherpa3_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364102.Sh221_PDF30_Zmumu_MV0_70_BF.M4.e5271_s3126_r10201_p4097.sv1_Le', '364102', 1981.5, 0.9751, 0.065853] ,
'Zmumu_sherpa3_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364102.Sh221_PDF30_Zmumu_MV0_70_BF.M4.e5271_s3126_r10724_p4097.sv1_Le', '364102', 1981.5, 0.9751, 0.065853] ,
'Zmumu_sherpa3_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364102.Sh221_PDF30_Zmumu_MV0_70_BF.M4.e5271_s3126_r9364_p4097.sv1_Le', '364102', 1981.5, 0.9751, 0.065853] ,
'Zmumu_sherpa4_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364103.Sh221_PDF30_Zmumu_MV70_140_CVBV.M4.e5271_s3126_r10201_p4097.sv1_Le', '364103', 109.07, 0.9751, 0.68831] ,
'Zmumu_sherpa4_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364103.Sh221_PDF30_Zmumu_MV70_140_CVBV.M4.e5271_s3126_r10724_p4097.sv1_Le', '364103', 109.07, 0.9751, 0.68831] ,
'Zmumu_sherpa4_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364103.Sh221_PDF30_Zmumu_MV70_140_CVBV.M4.e5271_s3126_r9364_p4097.sv1_Le', '364103', 109.07, 0.9751, 0.68831] ,
'Zmumu_sherpa5_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364104.Sh221_PDF30_Zmumu_MV70_140_CFBV.M4.e5271_s3126_r10201_p4097.sv1_Le', '364104', 108.98, 0.9751, 0.19027] ,
'Zmumu_sherpa5_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364104.Sh221_PDF30_Zmumu_MV70_140_CFBV.M4.e5271_s3126_r10724_p4097.sv1_Le', '364104', 108.98, 0.9751, 0.19027] ,
'Zmumu_sherpa5_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364104.Sh221_PDF30_Zmumu_MV70_140_CFBV.M4.e5271_s3126_r9364_p4097.sv1_Le', '364104', 108.98, 0.9751, 0.19027] ,
'Zmumu_sherpa6_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364105.Sh221_PDF30_Zmumu_MV70_140_BF.M4.e5271_s3126_r10724_p4097.sv1_Le', '364105', 109.05, 0.9751, 0.11374] ,
'Zmumu_sherpa6_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364105.Sh221_PDF30_Zmumu_MV70_140_BF.M4.e5271_s3126_r9364_p4097.sv1_Le', '364105', 109.05, 0.9751, 0.11374] ,
'Zmumu_sherpa6_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364105.Sh221_PDF30_Zmumu_MV70_140_BF.M4.e5271_s3126_r10201_p4097.sv1_Le', '364105', 109.05, 0.9751, 0.11374] ,
'Zmumu_sherpa7_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364106.Sh221_PDF30_Zmumu_MV140_280_CVBV.M4.e5271_s3126_r10201_p4097.sv1_Le', '364106', 39.87, 0.9751, 0.61125] ,
'Zmumu_sherpa7_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364106.Sh221_PDF30_Zmumu_MV140_280_CVBV.M4.e5271_s3126_r10724_p4097.sv1_Le', '364106', 39.87, 0.9751, 0.61125] ,
'Zmumu_sherpa7_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364106.Sh221_PDF30_Zmumu_MV140_280_CVBV.M4.e5271_s3126_r9364_p4097.sv1_Le', '364106', 39.87, 0.9751, 0.61125] ,
'Zmumu_sherpa8_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364107.Sh221_PDF30_Zmumu_MV140_280_CFBV.M4.e5271_s3126_r10201_p4097.sv1_Le', '364107', 39.857, 0.9751, 0.23359] ,
'Zmumu_sherpa8_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364107.Sh221_PDF30_Zmumu_MV140_280_CFBV.M4.e5271_s3126_r9364_p4097.sv1_Le', '364107', 39.857, 0.9751, 0.23359] ,
'Zmumu_sherpa8_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364107.Sh221_PDF30_Zmumu_MV140_280_CFBV.M4.e5271_s3126_r10724_p4097.sv1_Le', '364107', 39.857, 0.9751, 0.23359] ,
'Zmumu_sherpa9_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364108.Sh221_PDF30_Zmumu_MV140_280_BF.M4.e5271_s3126_r10201_p4097.sv1_Le', '364108', 39.888, 0.9751, 0.1557] ,
'Zmumu_sherpa9_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364108.Sh221_PDF30_Zmumu_MV140_280_BF.M4.e5271_s3126_r10724_p4097.sv1_Le', '364108', 39.888, 0.9751, 0.1557] ,
'Zmumu_sherpa9_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364108.Sh221_PDF30_Zmumu_MV140_280_BF.M4.e5271_s3126_r9364_p4097.sv1_Le', '364108', 39.888, 0.9751, 0.1557] ,
'Zmumu_sherpa10_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364109.Sh221_PDF30_Zmumu_MV280_500_CVBV.M4.e5271_s3126_r10201_p4097.sv1_Le', '364109', 8.522, 0.9751, 0.56046] ,
'Zmumu_sherpa10_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364109.Sh221_PDF30_Zmumu_MV280_500_CVBV.M4.e5271_s3126_r10724_p4097.sv1_Le', '364109', 8.522, 0.9751, 0.56046] ,
'Zmumu_sherpa10_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364109.Sh221_PDF30_Zmumu_MV280_500_CVBV.M4.e5271_s3126_r9364_p4097.sv1_Le', '364109', 8.522, 0.9751, 0.56046] ,
'Zmumu_sherpa11_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364110.Sh221_PDF30_Zmumu_MV280_500_CFBV.M4.e5271_s3126_r10201_p4097.sv1_Le', '364110', 8.5194, 0.9751, 0.26621] ,
'Zmumu_sherpa11_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364110.Sh221_PDF30_Zmumu_MV280_500_CFBV.M4.e5271_s3126_r10724_p4097.sv1_Le', '364110', 8.5194, 0.9751, 0.26621] ,
'Zmumu_sherpa11_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364110.Sh221_PDF30_Zmumu_MV280_500_CFBV.M4.e5271_s3126_r9364_p4097.sv1_Le', '364110', 8.5194, 0.9751, 0.26621] ,
'Zmumu_sherpa12_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364111.Sh221_PDF30_Zmumu_MV280_500_BF.M4.e5271_s3126_r10201_p4097.sv1_Le', '364111', 8.5301, 0.9751, 0.17666] ,
'Zmumu_sherpa12_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364111.Sh221_PDF30_Zmumu_MV280_500_BF.M4.e5271_s3126_r10724_p4097.sv1_Le', '364111', 8.5301, 0.9751, 0.17666] ,
'Zmumu_sherpa12_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364111.Sh221_PDF30_Zmumu_MV280_500_BF.M4.e5271_s3126_r9364_p4097.sv1_Le', '364111', 8.5301, 0.9751, 0.17666] ,
'Zmumu_sherpa13_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364112.Sh221_PDF30_Zmumu_MV500_1000.M4.e5271_s3126_r10201_p4097.sv1_Le', '364112', 1.7876, 0.9751, 1.0] ,
'Zmumu_sherpa13_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364112.Sh221_PDF30_Zmumu_MV500_1000.M4.e5271_s3126_r10724_p4097.sv1_Le', '364112', 1.7876, 0.9751, 1.0] ,
'Zmumu_sherpa13_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364112.Sh221_PDF30_Zmumu_MV500_1000.M4.e5271_s3126_r9364_p4097.sv1_Le', '364112', 1.7876, 0.9751, 1.0] ,
'Zmumu_sherpa14_2017'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364113.Sh221_PDF30_Zmumu_MV1000_E_CMS.M4.e5271_s3126_r10201_p4097.sv1_Le', '364113', 0.1476, 0.9751, 1.0] ,
'Zmumu_sherpa14_2018'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364113.Sh221_PDF30_Zmumu_MV1000_E_CMS.M4.e5271_s3126_r10724_p4097.sv1_Le', '364113', 0.1476, 0.9751, 1.0] ,
'Zmumu_sherpa14_2015'  :  [base_path_sherpa+'user.dbaronmo.v25-2mu-sherpa.mc.364113.Sh221_PDF30_Zmumu_MV1000_E_CMS.M4.e5271_s3126_r9364_p4097.sv1_Le', '364113', 0.1476, 0.9751, 1.0] ,
'''
}


for x in mc:
    for y in name_mc:
        if str(mc[x][1]) in y :
            if "r9364" in y and "2015" in x:
                mc[x][0]=base_path+y
            elif "r10201" in y and "2017" in x:
                mc[x][0]=base_path+y
            elif "r10724" in y and "2018" in x:
                mc[x][0]=base_path+y


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
    print(sample)
    f.write(info_file(sample,mc[sample][0],mc[sample][1],mc[sample][2],mc[sample][3],mc[sample][4],pwd))
    f.close()
