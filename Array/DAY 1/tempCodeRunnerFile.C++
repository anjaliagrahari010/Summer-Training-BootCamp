#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<string> str;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        str.push_back(s);
    }

    int count = 0;

    for(int i = 0; i < n; i++) {

        char ch = str[i][0];

        if(ch == 'a' || ch == 'A' ||
           ch == 'e' || ch == 'E' ||
           ch == 'i' || ch == 'I' ||
           ch == 'o' || ch == 'O' ||
           ch == 'u' || ch == 'U') {

            count++;
        }
    }

    cout << count;

    return 0;
}