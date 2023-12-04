// Given the distinct and valid birthdates of n people as triples (DD, MM, YYYY), order them first by ascending birth months (MM)
// then by ascending birth dates (DD), and finally by ascending age

#include <bits/stdc++.h>
using namespace std;
using iii = tuple<int, int, int>; // use natural order
#define EB emplace_back
int main() {
    vector<iii> birthdays;
    birthdays.EB(5, 24, -1980); // reorder DD/MM/YYYY
    birthdays.EB(5, 24, -1982); // to MM, DD, and then
    birthdays.EB(11, 13, -1983); // use negative YYYY
    // note that we want ascending AGE, i.e. descending YYYY. Hence, we use negative YYYY in our vectors, so that it gets sorted 
    // ascending, i.e. -1982, -1980. Hence, the younger person will be in the list first.
    sort(birthdays.begin(), birthdays.end());
    for (auto &[mm, dd, yyyy] : birthdays) {
        printf("%d %d %d\n", dd, mm, -yyyy);
    }
}