#include <iostream>
using namespace std;

int main() {
    int N, current;
    int maxPalindrome = -1;
    bool found = false;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> current;


        if (current >= 100) {
            int original = current;
            int reversed = 0;
            int temp = current;


            while (temp > 0) {
                reversed = (reversed * 10) + (temp % 10);
                temp /= 10;
            }

            if (original == reversed) {

                if (!found || original > maxPalindrome) {
                    maxPalindrome = original;
                }
                found = true;
            }
        }
    }

    if (found) {
        cout << maxPalindrome << endl;
    } else {
        cout << "No Valid Palindrome" << endl;
    }

    return 0;
}
