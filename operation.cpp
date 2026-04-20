#include <iostream>
using namespace std;
class Student {
private:
    int scores[5];
public:
    void input() {
        for (int i = 0; i < 5; i++) {
            cin >> scores[i];
        }
    }
    int totalScore() {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += scores[i];
        }
        return sum;
    }
    bool operator>(Student other) {
        return this->totalScore() > other.totalScore();
    }
};
int main() {
    int n;
    cin >> n;
    Student s[100];
    for (int i = 0; i < n; i++) {
        s[i].input();
    }
    int count = 0;

    for (int i = 1; i < n; i++) {
        if (s[i] > s[0]) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
