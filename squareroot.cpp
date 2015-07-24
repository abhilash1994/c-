#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#define EPSILON 0.0000001

using namespace std;
double squareroot(double val) {
        double low = 0;
        double high = 10000000; // a sufficiently big number
        double mid = 0;

        while (high - low > EPSILON) {
                mid = low + (high - low) / 2;
                if (mid*mid > val) {
                        high = mid;
                        cout<<mid<<"loop1"<<endl;
                } else {
                        low = mid;
                        cout<<mid<<"loop2"<<endl;
                }
        }
        return mid;
}

int main(){
  double x,y;
  cin>>x;
  y=squareroot(x);
  cout<<y<<endl;
  return 0;
}
