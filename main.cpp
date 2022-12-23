#include <iostream>
#include <cmath>
using namespace std;

float f (float arg) {
return arg*arg*cos(arg)+1;
} 

int main() {
   float a=0, b=0, x=0, err=0;
while (f(a)*f(b)>=0) {
cout << "inserire estremi" << endl;
cin >> a >> b;
}
do {
x=(a+b)/2;
if (f(x) != 0) {
if (f(x)*f(b)<0) {
a=x;
} else {
b=x;
}
err = (b-a)/2;
}
}while ((err >= 1e-6)||(-err >= 1e-6));
printf ("%.4", x);
   return 0;
}
