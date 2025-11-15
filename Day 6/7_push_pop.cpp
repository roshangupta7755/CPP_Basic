#include<iostream>
using namespace std;

int main(){
    string s = "raghav";
    cout << s << endl;

    s.append(" garg");
    cout << s << endl;

    s.pop_back();
    cout << s << endl;

    s.pop_back();
    cout << s << endl;

    s.push_back('a');
    cout << s << endl;

    s.push_back('g');
    cout << s << endl;

    return 0;
}
