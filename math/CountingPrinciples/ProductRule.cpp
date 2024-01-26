/*
    How many 3-letter words that consist of only B and C?
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    char letters[] = "BC";
    char answer[4];
    answer[3] = '\0';

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                answer[0] = letters[i];
                answer[1] = letters[j];
                answer[2] = letters[k];
                cout << answer <<'\n';
            }
        }
    }
    return 0;
}