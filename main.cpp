#include <bits/stdc++.h>

using namespace std;

long long conv_oct(int n)
{
 long long dec = 0;
  int rem, i = 1;

  while (n!=0) {
    rem = n % 8;
    n /= 8;
    dec += rem * i;
    i *= 10;
}
return dec;
}

int main() {
  long long n;
  cout<<"Enter an decimal number: ";
  cin>>n;
  cout<<"decimal number represented by : "<<conv_oct(n)<<" in octal";
  return 0;
}
