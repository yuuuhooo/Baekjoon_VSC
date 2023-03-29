#include <iostream>
using namespace std;

int main() {
    int num;
    int num5;

    cin >> num;

    int count = 0;

    if (num % 5 == 0) {
        count = num / 5;
        cout << count;
        return 0;
    }
    else if (num / 5 == 0 && num/3==0) {
        cout << -1;
        return 0;
    }

    num5 = num / 5;
    int num_e;

    while (1) {
        num_e = num;

        if ((num_e - (5 * num5)) % 3 == 0) {
            count = num5 + ((num_e - (5 * num5)) / 3);
            cout << count;
            return 0;
        }

        num5--;

        if (num5 < 0) {
            cout << -1;
            return 0;
        }
    }

    cout << -1;
    return 0;
}
