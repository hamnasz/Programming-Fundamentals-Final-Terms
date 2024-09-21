#include <iostream>
using namespace std;
int main() {
	int n=0; 
    for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= 4; j++) {
    for (int k = 1; k <= 4; k++) {
    for (int l = 1; l <= 4; l++) {
	n++;
	cout << i << " " << j << " " << k << " " << l << endl;
    }
    }
    }
    }
    cout<<n;
    return 0;
}