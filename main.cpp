#include <iostream>
using namespace std;

int gcd_recursion(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return(gcd_recursion(b, a%b));
    }
}

int main() {
    cout << "Find the GCD of two numbers" <<endl;
    int a;
    int b;
    int c;
    cout << "Enter the numbers :"<<endl;
    cin>> a >> b;
    c = gcd_recursion(a , b);
    cout<< "The GCD of "<< a << " and "<< b << " is "<< c<< endl;
    return 0;
}
