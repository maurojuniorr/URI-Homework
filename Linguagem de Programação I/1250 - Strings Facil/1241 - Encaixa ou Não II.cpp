#include <iostream>	/// cin/cout
#include <string>	/// string/size/substr
 
using namespace std;
 
int main() {
    int n;
    string a, b;
     
    cin >> n;
 
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        int as = a.size(), bs = b.size();
 
        if ((a == b) or (as > bs and a.substr(as - bs, bs) == b)) {
            cout << "encaixa\n";
        } else {
            cout << "nao encaixa\n";
        }
    }
}
