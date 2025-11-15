#include <iostream>
using namespace std;

int main() {
    string s = "raghav";

    string front = "Mr_";
    string back = "_Bhai";

    // Add front + original + back
    s = front + s + back;

    cout << s << endl;

    return 0;
}
