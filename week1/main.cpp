#include<iostream>

using namespace std;

int main() {
    int m,n,a,b;
    
    //INPUT
    cout << "Nhập n: ";
    cin >> n;
    cout << "Nhập m: "; 
    cin >> m;
  
    //CALCULATE
    a = n/m;
    b = n%m;
    double c = n/(double)m;
  
    //OUTPUT
    cout << n << " + " << m << " = " << n+m << endl;
    cout << n << " - " << m << " = " << n-m << endl;
    cout << n << " * " << m << " = " << n*m << endl;
    cout << n << " / " << m << " = " << a << " du " << b << endl;
    cout << n << " / " << m << " = " << c << endl;
    return 0;
}
