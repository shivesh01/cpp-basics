// Longest Common Subsequence

/* Pseudocode
X and Y be two given sequences
    Initialize a table LCS of dimension X.length *Y.length
        X.label = X
                      Y.label = Y
    LCS[0][] = 0 LCS[][0] = 0 Start from LCS[1][1] Compare X[i] and Y[j] If X[i] = Y[j] LCS[i][j] = 1 + LCS[i - 1, j - 1] Point an arrow to LCS[i][j] Else
                                                                                                            LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1])
                                                                                                        Point an arrow to max(LCS[i - 1][j], LCS[i][j - 1]) */
