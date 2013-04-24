#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main() {
    vector<string> grade = {"A++", "A", "B", "C", "D"};
    unsigned int score = 0;
    while (cin >> score) {
        if (score > 100)
            cerr << "bad score inputed." << endl;
        else if (score < 60)
            cout << "the grade of " << score << " is F." << endl;
        else {
            cout << "the grade of " << score << " is "
                 << grade[(100-score+9) / 10]  << "." << endl;
        }
    }
    return 0;
}
