#ifndef RTW_HEADER_flightControlSystem_h_
#define RTW_HEADER_flightControlSystem_h_
#include <emmintrin.h>
#include <string.h>
#include <xmmintrin.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#ifndef flightControlSystem_COMMON_INCLUDES_
#define flightControlSystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "flightControlSystem_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { int8_T fau3qf03xm ; } hrtts4l5bc ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real32_T htf25nqhxk [ 2 ] ; } orji2pbk05 ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { int8_T mkkaskumzr ; boolean_T jhr0womnye ; } imbf3wrgri ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real32_T dnef2md1w4 [ 2 ] ; } dyc32xehtl ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { int8_T ley0an2uip ; boolean_T njk4w5jozv ; } gabr0rnvjj ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real32_T mdrpoej4lt_cl54gopm0x [ 16 ] ; real32_T
clnirnukxj_kkiq3xxxve [ 12 ] ; real32_T gnqjk3ekdz_cxarnvbvui [ 9 ] ;
real32_T evt5f2fhcq ; real32_T d5dpfk43k1 [ 2 ] ; real32_T p1km24ifqe [ 2 ] ;
real32_T mckw2ynp4z [ 4 ] ; real32_T nrskdalgto ; real32_T p0n1amfymz [ 2 ] ;
real32_T n05hpcqwt3 [ 2 ] ; real32_T bdv304ylcl [ 2 ] ; real32_T c2w2emamwd ;
real32_T fj5ggfzceh [ 8 ] ; real32_T nkehmsm4xj [ 8 ] ; real32_T lcc3jlernp [
16 ] ; real_T ozxmcnyl1v_bhxxfovxdy [ 4 ] ; real_T mgncvqwnlt_pbm3vprmfu [ 3
] ; real_T gnqjk3ekdz_cv5hdgrwft [ 3 ] ; real_T jaczvqj5jb ; real_T
n0h512aihk [ 2 ] ; real_T ac1it4ng3l ; real_T my05elrnjm [ 3 ] ; real_T
naeqnylnyv [ 2 ] ; real32_T oh3wahvbbp [ 4 ] ; real32_T me0charsam [ 4 ] ;
real32_T mrivjnug2k [ 4 ] ; real32_T lr0444poz2 [ 4 ] ; real32_T
heucow5bl5_fqdqrf4qbc [ 4 ] ; real32_T ji5kr5zw3j_g2mlkqadfk [ 4 ] ; real32_T
prgnowbwdx_g1smspu5ke [ 4 ] ; real_T brzjt30squ [ 2 ] ; real_T a5y4fiqq0i [ 2
] ; real_T el1qq42y3k [ 2 ] ; real_T jx4d0lqgrd [ 4 ] ; real_T m0o0zuouqs [ 2
] ; real_T dihbhcnlck [ 2 ] ; real_T dbujelatlt_merlcviukg [ 2 ] ; real32_T
el1qq42y3k_nz4o0shxby [ 3 ] ; real32_T mmfwkbr0ff_ppxrqq0gsf [ 3 ] ; real_T
b52votpazt ; real_T gzv22bbxk5_llw0u2ae0v ; real_T dlfbs1nmgq_jwzvbuczlb ;
real_T hl3tjwsegf_dhmrxtyqop ; real_T unnamed_idx_2 ; real_T iningj1nyb_idx_0
; real_T pajruxwaiy_idx_1 ; real_T iningj1nyb_idx_1 ; real_T mgncvqwnlt_tmp ;
real_T mgncvqwnlt_tmp_guugdwf2m3 ; real32_T axhmowdfoa [ 2 ] ; real32_T
f4khr24yt3 [ 2 ] ; real32_T n4asyags2v [ 2 ] ; real32_T dlp14f23hs [ 4 ] ;
real32_T poqgh23ef5 [ 3 ] ; real32_T iningj1nyb [ 16 ] ; real32_T
blhscp3hs0_mbvzarwird [ 2 ] ; real32_T kxsruwy0ie [ 2 ] ; real32_T f0exetjrgh
[ 4 ] ; real32_T heucow5bl5 [ 2 ] ; real32_T lbfgt3cmly [ 2 ] ; real32_T
mrys1omtch [ 2 ] ; real32_T inobyp4z1i [ 4 ] ; real32_T h05af1sudr [ 2 ] ;
real32_T hitpmach0y_ldqodwenvz [ 2 ] ; real32_T ge2bcgejxt_dhamdvybc1 [ 2 ] ;
real32_T mrys1omtch_dypejvacrn [ 2 ] ; real32_T jx4d0lqgrd_lxo5edjg3c [ 2 ] ;
real32_T oblks44e5e_owjr1h1vqy [ 2 ] ; real32_T ljh40jfwhw_bjbgfqrolh [ 2 ] ;
real32_T gpbcxyi3ev_nuebgmauvi [ 2 ] ; real32_T hxixmw1suj_bsqwvugooi [ 2 ] ;
real32_T awxost1ifs_lnjdk5wtww [ 2 ] ; real32_T aq2drp3ee2 ; real32_T
knsgyeakch ; real32_T j52hdzpeqd ; real32_T ox1lixvdix ; real32_T acc1 ;
real32_T hqsyqwft0k_hv2ho1zopz ; real32_T iylgqjvnko_bnlywzniup ; real32_T
iuwqzbay5e_dapv3jlyq5 ; real32_T obgv3kshrz_ezqlmfzvpq ; real32_T
gae1oocdat_bjvjhhzy4i ; real32_T giy0aui1ck_jzx3amusab ; real32_T
e1tn5bkzvv_fdinthrxmb ; real32_T cek52etsot_idx_1 ; real32_T cek52etsot_idx_2
; real32_T mpmutq3s0k_idx_0 ; real32_T mpmutq3s0k_idx_1 ; real32_T
mpmutq3s0k_idx_2 ; real32_T josig2hpnf_idx_2 ; real32_T cb3wrbrkt1_idx_1 ;
real32_T josig2hpnf_idx_0 ; real32_T josig2hpnf_idx_1 ; real32_T
igjpsypur1_idx_0 ; real32_T gmzclnbov5_idx_0 ; real32_T gmzclnbov5_idx_1 ;
real32_T ol12qx0dnz_idx_1 ; real32_T j3lgqnsnba_idx_1 ; real32_T
j3lgqnsnba_idx_2 ; real32_T ol12qx0dnz_idx_2 ; real32_T l0hh0kpitk_idx_0 ;
real32_T l0hh0kpitk_idx_1 ; real32_T ml45lzmkzc_idx_2 ; real32_T
l0hh0kpitk_idx_2 ; real32_T gnqjk3ekdz_tmp ; real32_T btgpokc5ys_al00mdgrv4 ;
real32_T h5bkvudid1_ju13rw2h0m ; real32_T otbarff0ed_jz50ptvnrg ; real32_T
nm4ozfgnz2_o4f35lbcvx ; int32_T cff ; int32_T denIdx ; int32_T memOffset ;
int32_T i ; uint32_T kxpppsfz0o ; uint32_T jm0xix504o ; uint32_T mziqjo4wqj ;
real32_T dtafchoz0k [ 6 ] ; real32_T cktmncxn5j ; real32_T c3twds4zta ;
real32_T blhscp3hs0 ; real32_T iushc4yuhn ; uint32_T kxsruwy0ie_nyxm0bsxsn ;
uint32_T l05124nmdl_icdfyazkhu ; uint32_T je4risa14b_oyypvi4boh ; uint32_T
dp2y4aaxwo_nvsvtgkap4 ; uint32_T pgz0o1vifu_m3yhjduhi1 ; uint32_T
mck5veoijj_czkfpwuzm5 ; uint16_T lumzsm2l3t ; int16_T fumnhu3plh ; uint16_T
fhguyjwgx3_mdoasc5av4 ; uint16_T gcsv1g4pv4_m3ybdk4ikc ; uint8_T nbw0gsj35e ;
boolean_T docbffljft ; boolean_T p2k0zo33mh ; boolean_T ntknivdxfu ;
boolean_T ftsjmdiyzs ; boolean_T pcamntsk2q_jacdjrqyev ; boolean_T
myiumx35cv_h522xzlxvt ; boolean_T bggxxng52k_c0dok3111h ; boolean_T
dqh4k14gx4_ctvw0tpkon ; boolean_T b ; boolean_T b1 ; boolean_T
nj2nmxxnni_pxqvlbal2i ; boolean_T k00qnsp4m3_p5h3gwuwqg ; boolean_T
pgzdzp4xho_afnsueciae ; boolean_T bwmlu4cxkd_evg4t2fsev ; boolean_T
abyjsjqoti_ax3wx1gs5w ; boolean_T goipu2uwcd_as0qznsxlv ; boolean_T
ewacqqshtn_ifotjnizh4 ; boolean_T hapcgrwjho_ltu3syw14q ; dyc32xehtl
ipbtas1tys ; orji2pbk05 bm3dpymkhz ; dyc32xehtl ifzbhw4mrws ; orji2pbk05
phrpuocqmvu ; } eo4bbte2ey ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real_T mi4mocbazh ; real_T mtonzezz2z [ 2 ] ; real_T
ddv3ztj2wp [ 3 ] ; real_T bw2ribqmwm ; real_T f2ynnmexgv ; struct { void *
LoggedData ; void * SignalProbe ; } mpopad3fr1 ; real32_T b3fmbw5stg [ 2 ] ;
real32_T aq2aymvaio [ 3 ] ; real32_T dzwopklw3c ; real32_T d4fp3a2mpz [ 15 ]
; real32_T fl0vv44tbs [ 2 ] ; real32_T as5a0ikbk1 [ 2 ] ; real32_T ncgo1wegzg
; real32_T mirtkskmtr ; real32_T jduomia1pb [ 5 ] ; real32_T od5c00niot [ 4 ]
; real32_T dqfv1m130o [ 10 ] ; real32_T meognsjf1t [ 2 ] ; real32_T
gcgpru4rcb [ 2 ] ; real32_T peklmaellz [ 2 ] ; real32_T bsetqjfri4 ; real32_T
dsjbzv2lh4 [ 2 ] ; real32_T gixvkpnpus [ 2 ] ; real32_T ow5xb5ovt0 [ 2 ] ;
real32_T krs1cvkxzk [ 2 ] ; real32_T c4kiksmhh2 ; int32_T bbkjtf4kuy ;
uint32_T l3lcputuyl ; uint32_T pjgu33zeph ; uint32_T dxm3w2i52x ; real32_T
orkq4iljgu ; real32_T b1nmhkw4zo ; real32_T n0mydijbcx ; real32_T iwg03owvar
; real32_T mf2pp40f5v [ 2 ] ; real32_T pwlp5beuqs [ 2 ] ; uint16_T gaxgdudnvc
; uint16_T ldli3sruhl ; int8_T dq5lalhp1e ; int8_T fpr1qi0oiw ; int8_T
klyrn0mwhb ; int8_T mfifybuxty ; int8_T a1oodzfxvv ; int8_T mgysgsd2g4 ;
int8_T idn2v5d33m ; uint8_T dlnskgun5s ; uint8_T dmblp3webv ; boolean_T
de4yc1bkky ; boolean_T jd3dqtmo2p ; boolean_T f1jy25gy04 ; boolean_T
gdn4qfzvsk ; boolean_T cqi2pi21ow ; boolean_T kh1khihcrt ; boolean_T
iftedegxuv ; boolean_T g4zcogq4xi ; gabr0rnvjj ipbtas1tys ; imbf3wrgri
bm3dpymkhz ; gabr0rnvjj ifzbhw4mrws ; imbf3wrgri phrpuocqmvu ; hrtts4l5bc
ciy1c2o0rv ; hrtts4l5bc jvbbqhrajh ; hrtts4l5bc clwiujjdqo ; hrtts4l5bc
acfz1zxm4t ; hrtts4l5bc ghadbep3bbv ; } dmp1xsadgu ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real_T b3ouxrig41 ; } k5baggiqtb ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { ZCSigState b1rw3rggh2 ; } ph1mky0ofs ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { uint8_T b_varargout_3 [ 19200 ] ; uint8_T b_varargout_2 [
19200 ] ; uint8_T b_varargout_1 [ 19200 ] ; boolean_T cuahaa1qts [ 21 ] ;
boolean_T jpcrts1ocu [ 3726 ] ; boolean_T cvgu5n3yxn [ 1281 ] ; boolean_T
odavsexrnf [ 21 ] ; boolean_T mk3epapljc [ 6600 ] ; boolean_T metigxgs00 [
6720 ] ; boolean_T g0i3yrlwxd [ 19200 ] ; boolean_T apdisaccoq_mbvzarwird ;
boolean_T f30gd2om4v_cl54gopm0x ; boolean_T odi02jwab0_kkiq3xxxve ; boolean_T
osahu3rd1m_cxarnvbvui ; boolean_T iqnhg2eff1_bhxxfovxdy ; eo4bbte2ey
otjykwnhb3s ; } ircitwx3zdm ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { bjqsgn0csy l152eirbdu ; boolean_T apmirysnvx ; boolean_T
fxn4ff02p2 ; boolean_T adu241h3cs ; boolean_T idji1cak4a ; boolean_T
jacbm5emdo ; boolean_T jjrfotind4 ; dmp1xsadgu otjykwnhb3s ; } nllkaxiwhzw ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { k5baggiqtb otjykwnhb3s ; } h5liyesltnn ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { ph1mky0ofs otjykwnhb3s ; } cspyln32yuv ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct bpvdgm2xq5_ { uint8_T P_0 ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct je33m1dqwd_ { real32_T P_0 ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct fpqg1jdlo0_ { real32_T P_0 ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct nu4qaxumex_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ;
real_T P_4 ; real_T P_5 ; real32_T P_6 [ 2 ] ; real32_T P_7 [ 2 ] ; real32_T
P_8 ; real32_T P_9 ; real32_T P_10 ; real32_T P_11 ; real32_T P_12 ; real32_T
P_13 ; real32_T P_14 ; real32_T P_15 ; real32_T P_16 [ 2 ] ; real32_T P_17 ;
real32_T P_18 ; real32_T P_19 ; real32_T P_20 [ 2 ] ; real32_T P_21 ;
real32_T P_22 ; real32_T P_23 ; real32_T P_24 ; real32_T P_25 ; real32_T P_26
; real32_T P_27 ; real32_T P_28 ; real32_T P_29 ; real32_T P_30 ; real32_T
P_31 ; real32_T P_32 ; real32_T P_33 ; real32_T P_34 ; real32_T P_35 ;
real32_T P_36 ; real32_T P_37 ; real32_T P_38 ; real32_T P_39 ; real32_T P_40
; real32_T P_41 ; real32_T P_42 ; real32_T P_43 ; real32_T P_44 ; real32_T
P_45 ; uint32_T P_46 ; uint32_T P_47 ; uint32_T P_48 ; uint32_T P_49 ;
uint32_T P_50 ; uint16_T P_51 ; uint16_T P_52 ; real_T P_53 ; real_T P_54 ;
real_T P_55 ; real_T P_56 ; real_T P_57 [ 4 ] ; real_T P_58 [ 4 ] ; real_T
P_59 ; real_T P_60 ; real_T P_61 ; real_T P_62 ; real_T P_63 ; real_T P_64 ;
real_T P_65 [ 4 ] ; real_T P_66 [ 2 ] ; real_T P_67 [ 2 ] ; real_T P_68 [ 4 ]
; real_T P_69 [ 2 ] ; real_T P_70 [ 2 ] ; real_T P_71 ; real_T P_72 [ 4 ] ;
real_T P_73 [ 2 ] ; real_T P_74 ; real_T P_75 ; real_T P_76 ; real_T P_77 ;
real_T P_78 [ 2 ] ; real_T P_79 [ 3 ] ; real_T P_80 [ 4 ] ; real_T P_81 [ 2 ]
; real_T P_82 [ 2 ] ; real_T P_83 [ 4 ] ; real_T P_84 [ 2 ] ; real_T P_85 [ 2
] ; real_T P_86 ; real_T P_87 [ 3 ] ; real_T P_88 [ 16 ] ; real_T P_89 [ 8 ]
; real_T P_90 [ 8 ] ; real32_T P_91 ; real32_T P_92 ; real32_T P_93 ;
real32_T P_94 [ 2 ] ; real32_T P_95 ; real32_T P_96 ; real32_T P_97 ;
real32_T P_98 ; real32_T P_99 ; real32_T P_100 ; real32_T P_101 ; real32_T
P_102 ; real32_T P_103 ; real32_T P_104 ; real32_T P_105 [ 4 ] ; real32_T
P_106 [ 4 ] ; real32_T P_107 ; real32_T P_108 ; real32_T P_109 ; real32_T
P_110 [ 6 ] ; real32_T P_111 [ 6 ] ; real32_T P_112 ; real32_T P_113 [ 6 ] ;
real32_T P_114 ; real32_T P_115 [ 2 ] ; real32_T P_116 [ 2 ] ; real32_T P_117
; real32_T P_118 [ 2 ] ; real32_T P_119 [ 2 ] ; real32_T P_120 ; real32_T
P_121 [ 6 ] ; real32_T P_122 [ 6 ] ; real32_T P_123 ; real32_T P_124 ;
real32_T P_125 [ 6 ] ; real32_T P_126 [ 6 ] ; real32_T P_127 ; real32_T P_128
; real32_T P_129 ; real32_T P_130 ; real32_T P_131 ; real32_T P_132 ;
real32_T P_133 ; real32_T P_134 ; real32_T P_135 ; real32_T P_136 ; real32_T
P_137 ; real32_T P_138 ; real32_T P_139 ; real32_T P_140 [ 2 ] ; real32_T
P_141 [ 2 ] ; real32_T P_142 ; real32_T P_143 ; real32_T P_144 ; real32_T
P_145 ; real32_T P_146 ; real32_T P_147 ; real32_T P_148 ; real32_T P_149 ;
real32_T P_150 ; real32_T P_151 ; real32_T P_152 ; real32_T P_153 ; real32_T
P_154 ; real32_T P_155 ; real32_T P_156 ; real32_T P_157 [ 4 ] ; real32_T
P_158 ; real32_T P_159 ; real32_T P_160 ; real32_T P_161 ; real32_T P_162 [
16 ] ; real32_T P_163 ; real32_T P_164 ; real32_T P_165 ; real32_T P_166 [ 4
] ; real32_T P_167 [ 2 ] ; real32_T P_168 [ 2 ] ; real32_T P_169 ; real32_T
P_170 [ 4 ] ; real32_T P_171 [ 4 ] ; real32_T P_172 [ 2 ] ; real32_T P_173 [
2 ] ; real32_T P_174 [ 4 ] ; real32_T P_175 ; real32_T P_176 [ 2 ] ; real32_T
P_177 [ 4 ] ; real32_T P_178 [ 2 ] ; real32_T P_179 [ 2 ] ; real32_T P_180 ;
real32_T P_181 [ 4 ] ; real32_T P_182 [ 4 ] ; real32_T P_183 [ 2 ] ; real32_T
P_184 [ 2 ] ; real32_T P_185 [ 4 ] ; real32_T P_186 ; real32_T P_187 [ 2 ] ;
real32_T P_188 ; real32_T P_189 ; real32_T P_190 [ 16 ] ; real32_T P_191 [ 8
] ; real32_T P_192 [ 8 ] ; real32_T P_193 [ 4 ] ; real32_T P_194 [ 16 ] ;
real32_T P_195 [ 16 ] ; real32_T P_196 [ 8 ] ; real32_T P_197 [ 8 ] ;
real32_T P_198 [ 16 ] ; real32_T P_199 [ 4 ] ; real32_T P_200 [ 4 ] ;
uint32_T P_201 ; uint32_T P_202 ; uint32_T P_203 ; uint32_T P_204 ; uint32_T
P_205 ; uint32_T P_206 ; uint32_T P_207 ; uint32_T P_208 ; uint32_T P_209 ;
uint16_T P_210 ; uint16_T P_211 ; uint16_T P_212 ; boolean_T P_213 ;
boolean_T P_214 ; boolean_T P_215 ; boolean_T P_216 ; boolean_T P_217 ;
boolean_T P_218 ; uint8_T P_219 ; uint8_T P_220 ; uint8_T P_221 ; fpqg1jdlo0
ipbtas1tys ; je33m1dqwd bm3dpymkhz ; fpqg1jdlo0 ifzbhw4mrws ; je33m1dqwd
phrpuocqmvu ; bpvdgm2xq5 ciy1c2o0rv ; bpvdgm2xq5 jvbbqhrajh ; bpvdgm2xq5
clwiujjdqo ; bpvdgm2xq5 acfz1zxm4t ; bpvdgm2xq5 ghadbep3bbv ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct ileg2v2ld1r_ { real_T P_1 ; uint8_T P_2 ; uint8_T P_3 ; uint8_T P_4 ;
uint8_T P_5 ; uint8_T P_6 ; boolean_T P_7 ; boolean_T P_8 ; boolean_T P_9 ;
boolean_T P_10 ; boolean_T P_11 ; nu4qaxumex otjykwnhb3s ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct diqjpw4041 { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 29 ] ; int32_T * vardimsAddress [
29 ] ; RTWLoggingFcnPtr loggingPtrs [ 29 ] ; sysRanDType * systemRan [ 33 ] ;
int_T systemTid [ 33 ] ; } DataMapInfo ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { ipf5ube4r0 rtm ; } lhjbdsj2rjg ;
#endif
extern struct_8SSZ93PxvPkADZcA4gG8MD rtP_Sensors ; extern void ha1ipjbq54 (
uint8_T * o3vpgniqky ) ; extern void gwlyno50ln ( void ) ; extern void
k3yxem35zg ( void ) ; extern void bog0frvixl ( void ) ; extern void
pyvd4pdf3iTID0 ( void ) ; extern void pyvd4pdf3iTID1 ( void ) ; extern void
pyvd4pdf3iTID2 ( void ) ; extern void flightControlSystemTID0 ( const
SensorsBus * pxdb2gu5va , real32_T pikqq4svts [ 4 ] , uint8_T * o3vpgniqky )
; extern void flightControlSystemTID1 ( void ) ; extern void
flightControlSystemTID2 ( void ) ; extern void o2f5l50guo ( void ) ; extern
void f4qzdbbxmw ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , int_T mdlref_TID2 , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_flightControlSystem_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray *
mr_flightControlSystem_GetDWork ( ) ; extern void
mr_flightControlSystem_SetDWork ( const mxArray * ssDW ) ; extern void
mr_flightControlSystem_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_flightControlSystem_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * flightControlSystem_GetCAPIStaticMap (
void ) ;
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern void ghadbep3bb ( uint8_T * hfpztkhwej , bpvdgm2xq5 * localP ) ;
extern void jfkq2sjtgw ( const real32_T duqg5o24fi [ 4 ] , boolean_T
pfxu5bb25d ) ; extern void gcledvfwzt ( orji2pbk05 * localB , je33m1dqwd *
localP ) ; extern void alfdzl2fz1 ( orji2pbk05 * localB , imbf3wrgri *
localDW , je33m1dqwd * localP ) ; extern void phrpuocqmv ( ipf5ube4r0 * const
accn4cnket , boolean_T hjrswm4ob0 , const real32_T ndqlqfbq0n [ 2 ] ,
real32_T pp4ryk1bnn , const real32_T crftt4mdlv [ 2 ] , const real32_T
pc1pu0u41d [ 2 ] , real32_T kemszrfmdj , real32_T k3tun14l4o , orji2pbk05 *
localB , imbf3wrgri * localDW , je33m1dqwd * localP ) ; extern void
e0j2slboh1 ( dyc32xehtl * localB , fpqg1jdlo0 * localP ) ; extern void
ng2z3yysbc ( dyc32xehtl * localB , gabr0rnvjj * localDW , fpqg1jdlo0 * localP
) ; extern void ifzbhw4mrw ( ipf5ube4r0 * const accn4cnket , boolean_T
ny1m4yhfkt , const real32_T izmwj1ddpc [ 2 ] , const real32_T fppyei0jac [ 2
] , real32_T fjag4trd4p , const real32_T fn1cyjs1o0 [ 2 ] , dyc32xehtl *
localB , gabr0rnvjj * localDW , fpqg1jdlo0 * localP ) ; extern void
ic5jb3movn ( eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex * localP
) ; extern void bxsrqc204k ( eo4bbte2ey * localB , dmp1xsadgu * localDW ,
nu4qaxumex * localP ) ; extern void kegjp2lgms ( eo4bbte2ey * localB ,
dmp1xsadgu * localDW , nu4qaxumex * localP ) ; extern void lsjhvu4egy (
eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex * localP ) ; extern
void otjykwnhb3 ( ipf5ube4r0 * const accn4cnket , const SensorsBus *
fp0u5nlpgw , boolean_T ay1xsyaztb , boolean_T nfqd2uxnr0 , boolean_T
melqzsunve , boolean_T a1uyjx15qi , boolean_T bgilitfgis , eo4bbte2ey *
localB , dmp1xsadgu * localDW , nu4qaxumex * localP , ph1mky0ofs * localZCE )
; extern void otjykwnhb3TID2 ( eo4bbte2ey * localB , nu4qaxumex * localP ) ;
#endif
void mr_flightControlSystem_CreateInitRestoreData ( ) ; void
mr_flightControlSystem_CopyFromInitRestoreData ( ) ; void
mr_flightControlSystem_DestroyInitRestoreData ( ) ;
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern lhjbdsj2rjg lhjbdsj2rj ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern ircitwx3zdm ksm0js2nhsy ; extern nllkaxiwhzw dqykr4eggmg ; extern
cspyln32yuv f51itwtzkqf ;
#endif
#endif
