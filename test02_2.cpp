#include<iostream>
using namespace std;
const long long x=20;
long long factorial(long long x) {
	cout << "x= " << x << " at " << &x << endl;
    if(x>1) {
    	return factorial(x-1)*x;
	} 
    else {
    	return 1;
	}
}
int main() {
    cout << factorial(x);
    return 0;
}
