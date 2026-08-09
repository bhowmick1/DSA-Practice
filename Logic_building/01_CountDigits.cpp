#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    if(n == 0) {
        count = 1;
    }

    while(n > 0) {
        int digit = n % 10;
        count++;
        n = n / 10;
    }

    cout << count << endl;

    return 0;
}