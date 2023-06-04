/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.11 and Signal Processing Toolbox 8.7.
 * Generated on: 12-Apr-2023 10:46:38
 */

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 1001
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * D:\matlab\extern\include\tmwtypes.h 
 */
const int BL = 1001;
const real64_T B[1001] = {
  -1.318841300048e-05,-2.442378656317e-05,-1.87043465337e-05,-3.081207887921e-06,
  1.105937853249e-05,1.313979383789e-05,-1.791402191611e-06,-3.05843409019e-05,
  -6.29218424659e-05,-8.533537053406e-05,-8.670255605686e-05,-6.299353419675e-05,
  -1.930551992283e-05,3.170016396338e-05,7.439628366242e-05,9.602452471686e-05,
  9.144868877268e-05,6.492337166747e-05,2.816619352392e-05,-4.488334632725e-06,
  -2.188930869549e-05,-2.046429484375e-05,-5.411870515407e-06,1.180196937044e-05,
  1.861902889439e-05,7.096133134936e-06,-2.224507361782e-05,-6.008501652112e-05,
  -9.172344927771e-05,-0.0001029333310058,-8.590092075315e-05,-4.280990044685e-05,
  1.446485419263e-05,6.853422285147e-05,0.0001029467118489, 0.000108365345753,
  8.598885833837e-05,4.681863784433e-05,7.043005828693e-06,-1.860490591888e-05,
  -2.281069650305e-05,-8.506589392814e-06,1.263139567041e-05,2.543649370551e-05,
  1.810602738668e-05,-1.220056741504e-05,-5.742095509729e-05,-0.0001012442114724,
  -0.0001254121251045,-0.0001171782575015,-7.488279163122e-05,-9.288134861461e-06,
  6.000636257967e-05,0.0001117573864687,0.0001310615171754,0.0001149299447992,
  7.317390761541e-05,2.419435936758e-05,-1.26530253457e-05,-2.501549360798e-05,
  -1.254068407525e-05,1.319793783416e-05,3.389056410403e-05,3.270641894258e-05,
  2.131982964113e-06,-5.190311442559e-05,-0.0001114915845016,-0.0001534076182411,
  -0.0001583859512139,-0.0001192753420172,-4.466496714253e-05,4.365954275221e-05,
  0.0001185897512323,0.0001578533120004,0.0001524059799141,0.0001096381900335,
  5.003123610552e-05,-1.441492517269e-06,-2.568929324728e-05,-1.738275889261e-05,
  1.297834898536e-05,4.376891755456e-05,5.186712537721e-05,2.325263433327e-05,
  -3.989676181951e-05,-0.0001187482947322,-0.0001844576852507,-0.0002094254034126,
  -0.0001786754068329,-9.666488976236e-05, 1.34326652466e-05,0.0001179243890505,
  0.0001851606610186,0.0001974841850927,0.0001577244579228,8.753103223962e-05,
  1.813670155988e-05,-2.273231647819e-05,-2.242506996877e-05, 1.14278228544e-05,
  5.435714358962e-05,7.586901184229e-05,5.323092060056e-05,-1.753678277562e-05,
  -0.0001182310704043,-0.0002143502136948,-0.0002682110196561,-0.000254137131708,
  -0.0001695248181639,-3.709547559533e-05,0.0001028721483552,0.0002074603739335,
  0.0002473120664426,0.0002175849977253, 0.000139150603523,4.944588718397e-05,
  -1.336546417991e-05,-2.644097599909e-05,8.166340894383e-06,6.452141642845e-05,
  0.0001041846233372, 9.33817136549e-05,1.884302714296e-05,-0.0001044596815247,
  -0.0002372663411188,-0.0003304903964014,-0.0003445926021703,-0.0002660491022201,
  -0.0001140492071955,6.562527311529e-05,0.0002174118720745,0.0002969135675123,
  0.0002875865845404,0.0002063556875745,9.576219701108e-05,5.748364088181e-06,
  -2.749101029183e-05, 3.17971974464e-06,7.285969141234e-05, 0.000135444615446,
  0.0001439961536536,7.226624535383e-05,-7.172211328122e-05,-0.000246080425834,
  -0.0003898341164936,-0.0004464893137331,-0.000386977411851,-0.0002225353142461,
  -1.947320020175e-06,0.0002061588985787, 0.000339135723854,0.0003639664597239,
  0.0002891465094318,0.0001598582926681,3.829033866859e-05,-2.289578708681e-05,
  -2.986942953854e-06,7.790864859039e-05,0.0001674962726027,0.0002041542035573,
  0.0001446945082978,-1.459901517284e-05,-0.0002327967761102,-0.0004378016469899,
  -0.0005535866840173,-0.0005304412379847,-0.0003659107137741,-0.0001075979879699,
  0.0001637950413099,0.0003647600009722,0.0004406012672159,0.0003856154366362,
  0.0002435436130583,8.798523815327e-05,-9.288451877895e-06,-9.065947835144e-06,
  7.838763142795e-05,0.0001975514406669,0.0002716378643729, 0.000236669596721,
   7.14955174216e-05,-0.0001890899925327,-0.000464273312662,-0.000656930262164,
  -0.0006915517782987,-0.0005450922042383,-0.0002579393799299,7.996536182041e-05,
  0.0003627771809544,0.0005089108641288,0.0004915699696426,0.0003471899191846,
  0.0001582287504908,1.724788194815e-05,-1.295393452623e-05,7.345681293262e-05,
  0.0002224123650943,0.0003429545135016,0.0003470485110494,0.0001898021999488,
  -0.0001069047241833,-0.0004579212274425,-0.0007450043024231,-0.0008621489067105,
  -0.0007579581735456,-0.0004576789012559,-5.543803902231e-05,0.0003208073352518,
   0.000557904481322,0.0006002470348475,0.0004692728620768,0.0002516638087494,
  6.096070635084e-05,-1.166420657561e-05,6.296533679613e-05,0.0002387560554734,
  0.0004134689155487,0.0004728544210629,0.0003417777018074,2.093757567042e-05,
  -0.000406775230356,-0.0008040425052671,-0.001030722507672,-0.0009988821396082,
  -0.0007089045851611,-0.0002515410881976,0.0002256276763579,0.0005743580291802,
  0.0007021318119109,0.0006059566323936,0.0003697319020347,0.0001261385981739,
  -1.352049731598e-06, 4.76666599101e-05,0.0002434516459159,0.0004776309415923,
  0.0006092548022335,0.0005267670706112,0.0002001823865226,-0.0002988236495479,
  -0.0008184531194074,-0.001182493413811,-0.001258421166784,-0.001010474182762,
  -0.0005157777289682,6.375104028886e-05,0.0005430879056865,0.0007848751129423,
  0.0007507391506076,0.0005122264768111,0.0002167721229023,2.258919803828e-05,
  2.938309950397e-05,0.0002338813878289,0.0005292745216584,0.0007496640803011,
  0.0007418167517071,0.0004346961096982,-0.0001225725461403,-0.0007712873251832,
  -0.001299610324425,-0.001523157369159,-0.001357548623277,-0.0008532761748747,
  -0.0001780245415438,0.0004472567139552,0.0008332754921051,0.0008941577117216,
   0.000676871788711,0.0003361933641821,6.537577099825e-05,1.111003839271e-05,
  0.0002082347839029, 0.000561952071168,0.0008859518764535,0.0009816453180231,
  0.0007261908051484,0.0001325313312527,-0.0006446457213306,-0.001361378001882,
  -0.001775655175809,-0.001741292757627,-0.001266418271289,-0.0005122024657782,
  0.0002686052892475,0.0008292510664536, 0.001023525735874,0.0008589397763349,
   0.000486728604315,0.0001326544266091,-2.936887913903e-06,0.0001657470869623,
  0.0005692570032561, 0.001008718867885, 0.001238774261091, 0.001074182265758,
   0.000475935041267,-0.0004198688900876,-0.001344372382568,-0.001994444402722,
  -0.002148738262869, -0.00175465583174,-0.0009504587657352,-1.255735220062e-05,
  0.0007516608031321, 0.001122622337478, 0.001050895901754,0.0006694037094062,
  0.0002303466750441,-7.309132668831e-06,0.0001068578178324,0.0005450727441325,
   0.001107577851079, 0.001503804148102, 0.001476253472795,0.0009162398723468,
  -7.727600865197e-05,-0.001222200364693,-0.002153854343734,  -0.0025627604126,
  -0.002314683460149,-0.001504019125377,-0.0004178839385347,0.0005757212422516,
   0.001171169839035, 0.001242024365149,0.0008837465471935,0.0003645974916164,
  4.705653264776e-06,3.327172187184e-05,0.0004836640648918, 0.001171340854593,
   0.001765801464314, 0.001928725149131, 0.001462154027962,  0.00040494273305,
  -0.000964479404638,-0.002223370741983,-0.002962048713476,-0.002941107809781,
  -0.002184910743962,-0.0009725316244034,0.0002715437004132, 0.001143767197134,
   0.001417904642648, 0.001127738460217,0.0005419667359777, 4.12392682852e-05,
  -5.20869163824e-05,0.0003794809642093,  0.00118794602394, 0.002012735302384,
   0.002427914812405, 0.002124623766343, 0.001053414153215,-0.0005342291534372,
  -0.002165874384681,-0.003320816382325,-0.003627857651284,-0.003008788760645,
  -0.001708679736398,-0.0001991595561672, 0.001007590132353,  0.00155944627358,
   0.001397985901921,0.0007701232696528,0.0001123401628524,-0.0001452262130275,
  0.0002264389168565, 0.001143812301906, 0.002231860378523, 0.002972371671217,
   0.002921158227745, 0.001905386316018,0.0001180245953408,-0.001933400884659,
  -0.003607699415222,-0.004370851686552,-0.004000842786411,-0.002673115178159,
  -0.0008902929254687,0.0007173179202201, 0.001640801199056, 0.001690237360977,
   0.001059598536601,0.0002312904165079,-0.0002413349168682,1.616446091226e-05,
   0.001021946542767, 0.002409851747761, 0.003567025602355, 0.003884745683485,
   0.003021268431332, 0.001067447534173,-0.001457201530036,-0.003782552813805,
  -0.005173192701321, -0.00520845443726,-0.003944009244362,-0.001887674929268,
  0.0002034616693127, 0.001624437566485, 0.002000532677638, 0.001427976683979,
  0.0004179356352065,-0.0003351081673031,-0.0002660939041365,0.0007970944376014,
   0.002532250676203, 0.004231802340582, 0.005083800299196, 0.004513637733018,
   0.002446228507915,-0.0006233837861305,-0.003787661876973,-0.006056459333931,
  -0.006730883849544,-0.005671303527536, -0.00334902052098,-0.0006568209119308,
   0.001448437143186, 0.002327806398297, 0.001910524693428,0.0007075141624982,
  -0.0004211247899711,-0.000651799893392,0.0004227945633465, 0.002580967771579,
   0.005022732878614, 0.006673394622518, 0.006623526710352, 0.004527617925962,
    0.00079392293289,-0.003522137317464,-0.007089982070874,-0.008800300722841,
  -0.008189283648554,-0.005617319821355,-0.002123968467287, 0.000988856390829,
   0.002680857330537,  0.00259152335134, 0.001177523029347,-0.0004942451747069,
  -0.001220233349636,-0.0002089330870918, 0.002525198065898, 0.006096755633175,
   0.009057334789362, 0.009966633666054, 0.008002225823824, 0.003356749365482,
  -0.002752928569369,-0.008488613344918, -0.01206193974147, -0.01241395431412,
  -0.009628902017621,-0.004905384184972,-8.195738527821e-05, 0.003103453960762,
   0.003724705367086, 0.002053903654811,-0.0005499965355836,-0.002224607085235,
  -0.001435818612589, 0.002281117240861, 0.007991134584119,  0.01360729508358,
    0.01665474061782,  0.01527029307316, 0.009041435895455,-0.0006722034424877,
   -0.01110406616082, -0.01903334057154, -0.02198082597743, -0.01918272500012,
   -0.01193677605998,-0.003142689356576, 0.003826676034674, 0.006506335331092,
   0.004423394803604,-0.0005849130519971,-0.005014572771905,-0.005121093581438,
     0.0013820541969,  0.01402099217532,   0.0292304811643,  0.04124445122724,
     0.0440073697893,  0.03349286369872, 0.009599983917745,  -0.0231262787223,
   -0.05634296568105, -0.08018679304528, -0.08632280529356,  -0.0707852313674,
   -0.03563633785012,  0.01118723373984,  0.05789398396029,  0.09215730582598,
     0.1047211955302,  0.09215730582598,  0.05789398396029,  0.01118723373984,
   -0.03563633785012,  -0.0707852313674, -0.08632280529356, -0.08018679304528,
   -0.05634296568105,  -0.0231262787223, 0.009599983917745,  0.03349286369872,
     0.0440073697893,  0.04124445122724,   0.0292304811643,  0.01402099217532,
     0.0013820541969,-0.005121093581438,-0.005014572771905,-0.0005849130519971,
   0.004423394803604, 0.006506335331092, 0.003826676034674,-0.003142689356576,
   -0.01193677605998, -0.01918272500012, -0.02198082597743, -0.01903334057154,
   -0.01110406616082,-0.0006722034424877, 0.009041435895455,  0.01527029307316,
    0.01665474061782,  0.01360729508358, 0.007991134584119, 0.002281117240861,
  -0.001435818612589,-0.002224607085235,-0.0005499965355836, 0.002053903654811,
   0.003724705367086, 0.003103453960762,-8.195738527821e-05,-0.004905384184972,
  -0.009628902017621, -0.01241395431412, -0.01206193974147,-0.008488613344918,
  -0.002752928569369, 0.003356749365482, 0.008002225823824, 0.009966633666054,
   0.009057334789362, 0.006096755633175, 0.002525198065898,-0.0002089330870918,
  -0.001220233349636,-0.0004942451747069, 0.001177523029347,  0.00259152335134,
   0.002680857330537, 0.000988856390829,-0.002123968467287,-0.005617319821355,
  -0.008189283648554,-0.008800300722841,-0.007089982070874,-0.003522137317464,
    0.00079392293289, 0.004527617925962, 0.006623526710352, 0.006673394622518,
   0.005022732878614, 0.002580967771579,0.0004227945633465,-0.000651799893392,
  -0.0004211247899711,0.0007075141624982, 0.001910524693428, 0.002327806398297,
   0.001448437143186,-0.0006568209119308, -0.00334902052098,-0.005671303527536,
  -0.006730883849544,-0.006056459333931,-0.003787661876973,-0.0006233837861305,
   0.002446228507915, 0.004513637733018, 0.005083800299196, 0.004231802340582,
   0.002532250676203,0.0007970944376014,-0.0002660939041365,-0.0003351081673031,
  0.0004179356352065, 0.001427976683979, 0.002000532677638, 0.001624437566485,
  0.0002034616693127,-0.001887674929268,-0.003944009244362, -0.00520845443726,
  -0.005173192701321,-0.003782552813805,-0.001457201530036, 0.001067447534173,
   0.003021268431332, 0.003884745683485, 0.003567025602355, 0.002409851747761,
   0.001021946542767,1.616446091226e-05,-0.0002413349168682,0.0002312904165079,
   0.001059598536601, 0.001690237360977, 0.001640801199056,0.0007173179202201,
  -0.0008902929254687,-0.002673115178159,-0.004000842786411,-0.004370851686552,
  -0.003607699415222,-0.001933400884659,0.0001180245953408, 0.001905386316018,
   0.002921158227745, 0.002972371671217, 0.002231860378523, 0.001143812301906,
  0.0002264389168565,-0.0001452262130275,0.0001123401628524,0.0007701232696528,
   0.001397985901921,  0.00155944627358, 0.001007590132353,-0.0001991595561672,
  -0.001708679736398,-0.003008788760645,-0.003627857651284,-0.003320816382325,
  -0.002165874384681,-0.0005342291534372, 0.001053414153215, 0.002124623766343,
   0.002427914812405, 0.002012735302384,  0.00118794602394,0.0003794809642093,
  -5.20869163824e-05, 4.12392682852e-05,0.0005419667359777, 0.001127738460217,
   0.001417904642648, 0.001143767197134,0.0002715437004132,-0.0009725316244034,
  -0.002184910743962,-0.002941107809781,-0.002962048713476,-0.002223370741983,
  -0.000964479404638,  0.00040494273305, 0.001462154027962, 0.001928725149131,
   0.001765801464314, 0.001171340854593,0.0004836640648918,3.327172187184e-05,
  4.705653264776e-06,0.0003645974916164,0.0008837465471935, 0.001242024365149,
   0.001171169839035,0.0005757212422516,-0.0004178839385347,-0.001504019125377,
  -0.002314683460149,  -0.0025627604126,-0.002153854343734,-0.001222200364693,
  -7.727600865197e-05,0.0009162398723468, 0.001476253472795, 0.001503804148102,
   0.001107577851079,0.0005450727441325,0.0001068578178324,-7.309132668831e-06,
  0.0002303466750441,0.0006694037094062, 0.001050895901754, 0.001122622337478,
  0.0007516608031321,-1.255735220062e-05,-0.0009504587657352, -0.00175465583174,
  -0.002148738262869,-0.001994444402722,-0.001344372382568,-0.0004198688900876,
   0.000475935041267, 0.001074182265758, 0.001238774261091, 0.001008718867885,
  0.0005692570032561,0.0001657470869623,-2.936887913903e-06,0.0001326544266091,
   0.000486728604315,0.0008589397763349, 0.001023525735874,0.0008292510664536,
  0.0002686052892475,-0.0005122024657782,-0.001266418271289,-0.001741292757627,
  -0.001775655175809,-0.001361378001882,-0.0006446457213306,0.0001325313312527,
  0.0007261908051484,0.0009816453180231,0.0008859518764535, 0.000561952071168,
  0.0002082347839029,1.111003839271e-05,6.537577099825e-05,0.0003361933641821,
   0.000676871788711,0.0008941577117216,0.0008332754921051,0.0004472567139552,
  -0.0001780245415438,-0.0008532761748747,-0.001357548623277,-0.001523157369159,
  -0.001299610324425,-0.0007712873251832,-0.0001225725461403,0.0004346961096982,
  0.0007418167517071,0.0007496640803011,0.0005292745216584,0.0002338813878289,
  2.938309950397e-05,2.258919803828e-05,0.0002167721229023,0.0005122264768111,
  0.0007507391506076,0.0007848751129423,0.0005430879056865,6.375104028886e-05,
  -0.0005157777289682,-0.001010474182762,-0.001258421166784,-0.001182493413811,
  -0.0008184531194074,-0.0002988236495479,0.0002001823865226,0.0005267670706112,
  0.0006092548022335,0.0004776309415923,0.0002434516459159, 4.76666599101e-05,
  -1.352049731598e-06,0.0001261385981739,0.0003697319020347,0.0006059566323936,
  0.0007021318119109,0.0005743580291802,0.0002256276763579,-0.0002515410881976,
  -0.0007089045851611,-0.0009988821396082,-0.001030722507672,-0.0008040425052671,
  -0.000406775230356,2.093757567042e-05,0.0003417777018074,0.0004728544210629,
  0.0004134689155487,0.0002387560554734,6.296533679613e-05,-1.166420657561e-05,
  6.096070635084e-05,0.0002516638087494,0.0004692728620768,0.0006002470348475,
   0.000557904481322,0.0003208073352518,-5.543803902231e-05,-0.0004576789012559,
  -0.0007579581735456,-0.0008621489067105,-0.0007450043024231,-0.0004579212274425,
  -0.0001069047241833,0.0001898021999488,0.0003470485110494,0.0003429545135016,
  0.0002224123650943,7.345681293262e-05,-1.295393452623e-05,1.724788194815e-05,
  0.0001582287504908,0.0003471899191846,0.0004915699696426,0.0005089108641288,
  0.0003627771809544,7.996536182041e-05,-0.0002579393799299,-0.0005450922042383,
  -0.0006915517782987,-0.000656930262164,-0.000464273312662,-0.0001890899925327,
   7.14955174216e-05, 0.000236669596721,0.0002716378643729,0.0001975514406669,
  7.838763142795e-05,-9.065947835144e-06,-9.288451877895e-06,8.798523815327e-05,
  0.0002435436130583,0.0003856154366362,0.0004406012672159,0.0003647600009722,
  0.0001637950413099,-0.0001075979879699,-0.0003659107137741,-0.0005304412379847,
  -0.0005535866840173,-0.0004378016469899,-0.0002327967761102,-1.459901517284e-05,
  0.0001446945082978,0.0002041542035573,0.0001674962726027,7.790864859039e-05,
  -2.986942953854e-06,-2.289578708681e-05,3.829033866859e-05,0.0001598582926681,
  0.0002891465094318,0.0003639664597239, 0.000339135723854,0.0002061588985787,
  -1.947320020175e-06,-0.0002225353142461,-0.000386977411851,-0.0004464893137331,
  -0.0003898341164936,-0.000246080425834,-7.172211328122e-05,7.226624535383e-05,
  0.0001439961536536, 0.000135444615446,7.285969141234e-05, 3.17971974464e-06,
  -2.749101029183e-05,5.748364088181e-06,9.576219701108e-05,0.0002063556875745,
  0.0002875865845404,0.0002969135675123,0.0002174118720745,6.562527311529e-05,
  -0.0001140492071955,-0.0002660491022201,-0.0003445926021703,-0.0003304903964014,
  -0.0002372663411188,-0.0001044596815247,1.884302714296e-05, 9.33817136549e-05,
  0.0001041846233372,6.452141642845e-05,8.166340894383e-06,-2.644097599909e-05,
  -1.336546417991e-05,4.944588718397e-05, 0.000139150603523,0.0002175849977253,
  0.0002473120664426,0.0002074603739335,0.0001028721483552,-3.709547559533e-05,
  -0.0001695248181639,-0.000254137131708,-0.0002682110196561,-0.0002143502136948,
  -0.0001182310704043,-1.753678277562e-05,5.323092060056e-05,7.586901184229e-05,
  5.435714358962e-05, 1.14278228544e-05,-2.242506996877e-05,-2.273231647819e-05,
  1.813670155988e-05,8.753103223962e-05,0.0001577244579228,0.0001974841850927,
  0.0001851606610186,0.0001179243890505, 1.34326652466e-05,-9.666488976236e-05,
  -0.0001786754068329,-0.0002094254034126,-0.0001844576852507,-0.0001187482947322,
  -3.989676181951e-05,2.325263433327e-05,5.186712537721e-05,4.376891755456e-05,
  1.297834898536e-05,-1.738275889261e-05,-2.568929324728e-05,-1.441492517269e-06,
  5.003123610552e-05,0.0001096381900335,0.0001524059799141,0.0001578533120004,
  0.0001185897512323,4.365954275221e-05,-4.466496714253e-05,-0.0001192753420172,
  -0.0001583859512139,-0.0001534076182411,-0.0001114915845016,-5.190311442559e-05,
  2.131982964113e-06,3.270641894258e-05,3.389056410403e-05,1.319793783416e-05,
  -1.254068407525e-05,-2.501549360798e-05,-1.26530253457e-05,2.419435936758e-05,
  7.317390761541e-05,0.0001149299447992,0.0001310615171754,0.0001117573864687,
  6.000636257967e-05,-9.288134861461e-06,-7.488279163122e-05,-0.0001171782575015,
  -0.0001254121251045,-0.0001012442114724,-5.742095509729e-05,-1.220056741504e-05,
  1.810602738668e-05,2.543649370551e-05,1.263139567041e-05,-8.506589392814e-06,
  -2.281069650305e-05,-1.860490591888e-05,7.043005828693e-06,4.681863784433e-05,
  8.598885833837e-05, 0.000108365345753,0.0001029467118489,6.853422285147e-05,
  1.446485419263e-05,-4.280990044685e-05,-8.590092075315e-05,-0.0001029333310058,
  -9.172344927771e-05,-6.008501652112e-05,-2.224507361782e-05,7.096133134936e-06,
  1.861902889439e-05,1.180196937044e-05,-5.411870515407e-06,-2.046429484375e-05,
  -2.188930869549e-05,-4.488334632725e-06,2.816619352392e-05,6.492337166747e-05,
  9.144868877268e-05,9.602452471686e-05,7.439628366242e-05,3.170016396338e-05,
  -1.930551992283e-05,-6.299353419675e-05,-8.670255605686e-05,-8.533537053406e-05,
  -6.29218424659e-05,-3.05843409019e-05,-1.791402191611e-06,1.313979383789e-05,
  1.105937853249e-05,-3.081207887921e-06,-1.87043465337e-05,-2.442378656317e-05,
  -1.318841300048e-05
};