#include <bits/stdc++.h>

using namespace std;

int main() {

    cout << "------------------\n";
    int j;
    cout << "j = ";
    cin >> j;
    cout << endl;
    int k;
    cout << "k = ";
    cin >> k;

    //we will have a remainder, quotient
    double r = 0;
    double q = 0;
    int i = 1;
    cout << "J\tk\tq\tr\n";
    do {

        //calc the quotient and remainder
        q = j / k;
        r = j % k;
        cout << j << "\t" << k << "\t" << q << "\t" << r << "\t" << "Iteration:" << i++ << endl;
        //shift k to j and r to k
        j = k, k = r;
    } while (r >= 0);
}

