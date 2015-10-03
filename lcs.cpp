#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <cmath>
#include <string.h>

using namespace std;

// A utility function to find maximum of two integers
int max(int a, int b)
{   return (a > b)? a : b; }

int lcs(char *a, char *b, int m, int n){

	int lcssuff [m+1][n+1];
	int result =0;
	for (int i = 0; i <= m; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i==0 || j==0)
			
			lcssuff[i][j] = 0;
			
			else if (a[i-1] == b[j-1])
			{
				/* code */
				lcssuff[i][j] = lcssuff[i-1][j-1] + 1;
				result = max(result,lcssuff[i][j]);
			}
			else{
				lcssuff[i][j] = 0;
			}
			printf("%d ",lcssuff[i][j]);
		}
		printf("\n");
	}
	return result;
}

int LCSubStr(char *X, char *Y, int m, int n)
{
    // Create a table to store lengths of longest common suffixes of
    // substrings.   Notethat LCSuff[i][j] contains length of longest
    // common suffix of X[0..i-1] and Y[0..j-1]. The first row and
    // first column entries have no logical meaning, they are used only
    // for simplicity of program
    int LCSuff[m+1][n+1];
    int result = 0;  // To store length of the longest common substring
 
    /* Following steps build LCSuff[m+1][n+1] in bottom up fashion. */
    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;
 
            else if (X[i-1] == Y[j-1])
            {
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else LCSuff[i][j] = 0;
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
	/* code */

    char X[] = "abcbdcabdabd";
    char Y[] = "cdabcabdabdad";
 
    int m = strlen(X);
    int n = strlen(Y);
 	cout << "\n" <<endl;
    cout << "Length of Longest Common Substring is " << lcs(X, Y, m, n);
	return 0;
}