// This is a branch of Kalculator, Mostly calculating, but revolving around a different purpose.
// This is supposed to calculate discounts.
// You're supposed to enter your original price of any product (you don't include what product here) , then any discount and then it'll output the discount.
// Happy New Years and Calculating, by the way!
// _______________________________________________________________________________________
#include <iostream>
using namespace std;
int main() {
int l, v;
long long j, k;
cout << "Enter how much are you gonna make a operation" <<endl;
cin >> v;
for(int c=0; c<= v; c++){
cout << "Enter your original price." <<endl;
cin >> k;
cout << "Now enter your discount." <<endl;
cin >> j;
if (k > j)
l = k - j;
else l = j - k;
cout<<"Your discount is "<<l<<endl;
cout << "Formula = subtract original price with discount"<<endl;}
}
