#ifndef MODE_PARAMETERS_H
#define MODE_PARAMETERS_H

#define MODE_CLASSES 2
#define MODE_FEATURES 180
#define MODE_DIMENSIONS 1
#define MODE_WINDOW 10

const float MODE_XBAR[MODE_FEATURES] = {-4.25204775023, 7.9746097337, 1.78392102847, -4.25204775023, 7.9746097337, 1.78392102847, -3.76743801653, 8.66399449036, -1.33454545455, -3.76743801653, 8.66399449036, -1.33454545455, -3.77103764922, 8.65983471074, -1.33934802571, -3.77103764922, 8.65983471074, -1.33934802571, -4.80017447199, 7.81000918274, 1.32640036731, -4.80017447199, 7.81000918274, 1.32640036731, -4.12456382002, 8.36853076217, -1.45830119376, -4.12456382002, 8.36853076217, -1.45830119376, -4.13237832874, 8.35668503214, -1.46758494031, -4.13237832874, 8.35668503214, -1.46758494031, -5.28058769513, 7.41966942149, 0.741772268136, -5.28058769513, 7.41966942149, 0.741772268136, -4.58380165289, 7.95438016529, -1.63740128558, -4.58380165289, 7.95438016529, -1.63740128558, -4.59444444444, 7.9375573921, -1.6476584022, -4.59444444444, 7.9375573921, -1.6476584022, -5.71343434343, 6.82529843893, 0.0683287419651, -5.71343434343, 6.82529843893, 0.0683287419651, -5.08547291093, 7.42214876033, -1.85917355372, -5.08547291093, 7.42214876033, -1.85917355372, -5.09205693297, 7.40873278237, -1.86832874197, -5.09205693297, 7.40873278237, -1.86832874197, -5.86272727273, 6.01384756657, -0.67665748393, -5.86272727273, 6.01384756657, -0.67665748393, -5.58183654729, 6.77689623508, -2.14524334252, -5.58183654729, 6.77689623508, -2.14524334252, -5.58404040404, 6.76329660239, -2.15193755739, -5.58404040404, 6.76329660239, -2.15193755739, -5.78290174472, 4.94584022039, -1.39510560147, -5.78290174472, 4.94584022039, -1.39510560147, -5.9824426079, 6.02529843893, -2.41221303949, -5.9824426079, 6.02529843893, -2.41221303949, -5.98334251607, 6.00909090909, -2.42033976125, -5.98334251607, 6.00909090909, -2.42033976125, -5.53710743802, 3.76381083563, -2.00921028466, -5.53710743802, 3.76381083563, -2.00921028466, -6.28023875115, 5.27643709826, -2.64839302112, -6.28023875115, 5.27643709826, -2.64839302112, -6.28015610652, 5.25764003673, -2.6506795225, -6.28015610652, 5.25764003673, -2.6506795225, -5.17081726354, 2.62816345271, -2.527456382, -5.17081726354, 2.62816345271, -2.527456382, -6.47478420569, 4.69029384757, -2.82376492195, -6.47478420569, 4.69029384757, -2.82376492195, -6.47922865014, 4.67839302112, -2.82011019284, -6.47922865014, 4.67839302112, -2.82011019284, -4.95670339761, 1.73719926538, -2.83825528007, -4.95670339761, 1.73719926538, -2.83825528007, -6.5812855831, 4.34124885216, -2.80896235078, -6.5812855831, 4.34124885216, -2.80896235078, -6.58516988062, 4.34017447199, -2.80032139578, -6.58516988062, 4.34017447199, -2.80032139578, -4.80588613407, 1.21092745638, -2.81601469238, -4.80588613407, 1.21092745638, -2.81601469238, -6.55529843893, 4.25741046832, -2.70835629017, -6.55529843893, 4.25741046832, -2.70835629017, -6.55609733701, 4.25696969697, -2.70355371901, -6.55609733701, 4.25696969697, -2.70355371901};
const float MODE_SCALINGS[MODE_FEATURES][MODE_DIMENSIONS] = {{0.00717198003702}, {0.000363600583471}, {-0.0147985117317}, {0.00717198003702}, {0.000363600583472}, {-0.0147985117317}, {-0.0304381112404}, {-0.0349114914169}, {0.0572510672434}, {-0.0304381112404}, {-0.0349114914169}, {0.0572510672434}, {0.0605451718481}, {0.0605934149931}, {0.0185293091169}, {0.0605451718481}, {0.0605934149931}, {0.0185293091169}, {-0.0120063942196}, {0.00114353456652}, {-0.0146827265928}, {-0.0120063942196}, {0.00114353456652}, {-0.0146827265928}, {0.0220988478087}, {0.0931658299048}, {0.0287373481927}, {0.0220988478087}, {0.0931658299048}, {0.0287373481927}, {-0.011573315106}, {-0.113775920826}, {0.0263185157833}, {-0.011573315106}, {-0.113775920826}, {0.0263185157833}, {4.79272866097e-05}, {0.00181798905591}, {-0.00559061868059}, {4.79272866092e-05}, {0.00181798905591}, {-0.00559061868059}, {-0.0196015003843}, {0.084609159985}, {0.0192455493225}, {-0.0196015003843}, {0.084609159985}, {0.0192455493225}, {0.0291026059972}, {-0.126568296155}, {0.0260881443148}, {0.0291026059972}, {-0.126568296155}, {0.0260881443148}, {-0.00493057566967}, {0.00523033584591}, {-0.00384103671081}, {-0.00493057566967}, {0.00523033584591}, {-0.00384103671081}, {-0.011848873573}, {0.00291262199792}, {-0.0276026162602}, {-0.011848873573}, {0.00291262199792}, {-0.0276026162602}, {0.0460613978871}, {-0.0328565599743}, {0.0594444377893}, {0.0460613978871}, {-0.0328565599743}, {0.0594444377893}, {-0.0205104548789}, {-0.00724873435639}, {0.0257909530788}, {-0.0205104548789}, {-0.00724873435639}, {0.0257909530788}, {-0.00101243961735}, {-0.0355508813685}, {-0.104174318061}, {-0.00101243961736}, {-0.0355508813685}, {-0.104174318061}, {0.0214506019333}, {0.00758997820064}, {0.127211407837}, {0.0214506019333}, {0.00758997820064}, {0.127211407837}, {-0.0141953410223}, {-0.00209033619722}, {0.0213416836689}, {-0.0141953410223}, {-0.00209033619722}, {0.0213416836689}, {0.0243378762211}, {-0.0340867717899}, {-0.102598175812}, {0.0243378762211}, {-0.0340867717899}, {-0.102598175812}, {-0.00503989692269}, {0.0102213623602}, {0.144481290576}, {-0.00503989692269}, {0.0102213623602}, {0.144481290576}, {-0.0347183411554}, {0.0119778388726}, {0.013559314682}, {-0.0347183411554}, {0.0119778388726}, {0.013559314682}, {0.0677776190504}, {0.0173113769706}, {-0.0146218836492}, {0.0677776190504}, {0.0173113769706}, {-0.0146218836492}, {-0.0588589863701}, {-0.0556124427533}, {0.0708246951499}, {-0.0588589863701}, {-0.0556124427533}, {0.0708246951499}, {-0.0380987152862}, {-0.0114495656273}, {0.0259126307885}, {-0.0380987152862}, {-0.0114495656273}, {0.0259126307885}, {0.0976889205753}, {-0.0392584356933}, {0.156711776046}, {0.0976889205753}, {-0.0392584356933}, {0.156711776046}, {-0.0802342193559}, {-0.0861688833042}, {-0.137035006915}, {-0.0802342193559}, {-0.0861688833042}, {-0.137035006915}, {-0.0316631662207}, {0.0251179556745}, {-0.00651956682415}, {-0.0316631662207}, {0.0251179556745}, {-0.00651956682415}, {0.0621962859283}, {0.0436602169602}, {0.229972194429}, {0.0621962859283}, {0.0436602169602}, {0.229972194429}, {-0.056152551056}, {-0.138072422497}, {-0.127847711449}, {-0.056152551056}, {-0.138072422497}, {-0.127847711449}, {-0.0186052801585}, {0.0958030587144}, {-0.0980871859982}, {-0.0186052801585}, {0.0958030587144}, {-0.0980871859982}, {0.111862760728}, {-0.0621442303953}, {0.0483262140723}, {0.111862760728}, {-0.0621442303953}, {0.0483262140723}, {0.0166108583308}, {0.0258575251483}, {0.177726290954}, {0.0166108583308}, {0.0258575251483}, {0.177726290954}};

const float MODE_GNB_CLASS_PRIOR[MODE_CLASSES] = {0.782369146006, 0.217630853994};
const float MODE_GNB_MEANS[MODE_CLASSES][MODE_DIMENSIONS] = {{-1.68290635209}, {6.04994182271}};
const float MODE_GNB_STDEVS[MODE_CLASSES][MODE_DIMENSIONS] = {{0.97853724103}, {1.0687184929}};

#endif