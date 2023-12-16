import numpy as np
import matplotlib.pyplot as plt

def linear_regression_MSE(data_x, data_y):
    A = np.vstack([data_x, np.ones(len(data_x))])
    A_inv = np.linalg.inv(np.dot(A, A.T))

    k, m = np.dot(np.dot(A_inv, A), data_y)
    print(f"k: {k}, m: {m}")
    return k, m
    
if __name__ == "__main__":
    data_x = np.array([0, 1, 2])
    data_y = np.array([1, 3, 2])

    k, m = linear_regression_MSE(data_x, data_y)