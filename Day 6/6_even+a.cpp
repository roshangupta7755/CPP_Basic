#include <iostream>
using namespace std;

int main() {
    string s = "cow is an animal with four legs";
    char a = '*';    

    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0) {
            s[i] = a;
        }
    }

    cout << s;
    return 0;
}
