// Longest Common Subsequence

/* Pseudocode
X and Y be two given sequences
    Initialize a table LCS of dimension X.length *Y.length
        X.label = X
                      Y.label = Y
    LCS[0][] = 0 LCS[][0] = 0 Start from LCS[1][1] Compare X[i] and Y[j] If X[i] = Y[j] LCS[i][j] = 1 + LCS[i - 1, j - 1] Point an arrow to LCS[i][j] Else
                                                                                                            LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1])
                                                                                                        Point an arrow to max(LCS[i - 1][j], LCS[i][j - 1]) */
// The longest common subsequence in C++

#include <iostream>
using namespace std;

void lcsAlgo(char *S1, char *S2, int m, int n)
{
    int LCS_table[m + 1][n + 1];

    // Building the mtrix in bottom-up way
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                LCS_table[i][j] = 0;
            else if (S1[i - 1] == S2[j - 1])
                LCS_table[i][j] = LCS_table[i - 1][j - 1] + 1;
            else
                LCS_table[i][j] = max(LCS_table[i - 1][j], LCS_table[i][j - 1]);
        }
    }

    int index = LCS_table[m][n];
    char lcsAlgo[index + 1];
    lcsAlgo[index] = '\0';

    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (S1[i - 1] == S2[j - 1])
        {
            lcsAlgo[index - 1] = S1[i - 1];
            i--;
            j--;
            index--;
        }

        else if (LCS_table[i - 1][j] > LCS_table[i][j - 1])
            i--;
        else
            j--;
    }

    // Printing the sub sequences
    cout << "S1 : " << S1 << "\nS2 : " << S2 << "\nLCS: " << lcsAlgo << "\n";
}

int main()
{
    char S1[] = "ACADB";
    char S2[] = "CBDA";
    int m = strlen(S1);
    int n = strlen(S2);

    lcsAlgo(S1, S2, m, n);
}