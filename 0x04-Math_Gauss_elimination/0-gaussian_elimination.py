#!/usr/bin/env python3

import numpy as np


def gaussian_elimination(A, b):

    try:
        return (np.linalg.solve(A, b))
    except:
        print("You can't divide by zero!")
        return None
