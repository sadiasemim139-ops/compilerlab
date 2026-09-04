#include <iostream>
using namespace std;

int main() {

    string p;
    cin >> p;

    if (p == "ab*") {

        string s = "a";

        for (int i = 0; i < 4; i++) {
            cout << s << " ";
            s += "b";
        }
    }

    else if (p == "ab+") {

        string s = "ab";

        for (int i = 0; i < 4; i++) {
            cout << s << " ";
            s += "b";
        }
    }

    else if (p == "a+b") {

        string s = "b";

        for (int i = 0; i < 4; i++) {
            s = "a" + s;
            cout << s << " ";
        }
    }

    else if (p == "a?b+") {

        cout << "b ";

        string s = "ab";

        for (int i = 0; i < 4; i++) {
            cout << s << " ";
            s += "b";
        }
    }

    else {
        cout << "Invalid Pattern";
    }

    return 0;
}
