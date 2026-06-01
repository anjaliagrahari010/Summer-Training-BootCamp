#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string ans = "";

    for (char ch : s) {
        if (ch != 'a' && ch != 'e' && ch != 'i' &&
            ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' &&
            ch != 'O' && ch != 'U') {
            ans += ch;
        }
    }

    cout << ans;

    return 0;
}