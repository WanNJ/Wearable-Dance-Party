from Main_Classifier_Simulations.DataGetter import TestDataGetter
from Main_Classifier_Simulations.DataGetter import DataSpliter
from Main_Classifier_Simulations.LDA_PCA_FA_Simulation import DimensionReduction
from sklearn.naive_bayes import GaussianNB


def test_GNB(X_train, y_train, X_test, y_test, dim=2):
    gnb = GaussianNB()
    y_pred = gnb.fit(X_train, y_train).predict(X_test)
    # print("Number of mislabeled points out of a total %d points : %d"
    #       % (X_test.shape[0], (y_test != y_pred).sum()))
    print("Dim = %2d: Error Rate of GNB classifier: %.2f%%" % (dim, (float((y_test != y_pred).sum())/X_test.shape[0]*100)) )

def get_GNB(only_gst_data=True):
    # Get Data
    data_getter = TestDataGetter(5, 4)
    X = data_getter.get_x_data(only_gst_data=only_gst_data)
    y = data_getter.get_y_data(only_gst_data=only_gst_data)

    # Dimensionality Reduction
    dimred = DimensionReduction(X, y)
    X_lda_2d = dimred.lda_2D_data()
    
    return GaussianNB().fit(X_lda_2d, y)



def get_GNB_test_points(only_gst_data=True):
    data_getter = TestDataGetter(5, 4)
    X = data_getter.get_x_data(only_gst_data=only_gst_data)
    y = data_getter.get_y_data(only_gst_data=only_gst_data)

    # Dimensionality Reduction
    dimred = DimensionReduction(X, y)
    X_lda_2d = dimred.lda_2D_data()

    gnb = GaussianNB().fit(X_lda_2d, y)

    return X, gnb.predict(X_lda_2d)


def main():
    # Get Data
    data_getter = TestDataGetter(5, 4)
    X = data_getter.get_x_data()
    y = data_getter.get_y_data()

    # Shuffle the data and split it
    spliter = DataSpliter(X, y, 0.6, 0, 0.4)
    X_train, y_train = spliter.get_training_set()
    X_test, y_test = spliter.get_testing_set()

    # Dimensionality Reduction
    dimred = DimensionReduction(X_train, y_train, X_test)
    X_reduced_trian, X_reduced_test = dimred.lda_data()

    test_GNB(X_reduced_trian, y_train, X_reduced_test, y_test)

def test_dim():
    # Get Data
    data_getter = TestDataGetter(5, 4)
    X = data_getter.get_x_data(only_gst_data=True)
    y = data_getter.get_y_data(only_gst_data=True)

    # Shuffle the data and split it
    spliter = DataSpliter(X, y, 0.7, 0, 0.3)
    X_train, y_train = spliter.get_training_set()
    X_test, y_test = spliter.get_testing_set()

    # Dimensionality Reduction
    print("LDA")
    for i in range(1,3):
        dimred = DimensionReduction(X_train, y_train, X_test, i)
        X_reduced_trian, X_reduced_test = dimred.pca_data()
        test_GNB(X_reduced_trian, y_train, X_reduced_test, y_test, i)

    print("PCA")
    for i in range(1,30):
        dimred = DimensionReduction(X_train, y_train, X_test, i)
        X_reduced_trian, X_reduced_test = dimred.pca_data()
        test_GNB(X_reduced_trian, y_train, X_reduced_test, y_test, i)

    print("FA")
    for i in range(1,30):
        dimred = DimensionReduction(X_train, y_train, X_test, i)
        X_reduced_trian, X_reduced_test = dimred.fa_2D_data()
        test_GNB(X_reduced_trian, y_train, X_reduced_test, y_test, i)

if __name__ == "__main__":
    test_dim()
