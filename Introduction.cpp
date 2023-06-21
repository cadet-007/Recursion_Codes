//Introduction to Recursion
#include<bits/stdc++.h>

using namespace std;

int update(int x)
  {
    if(x==10)
    {
      cout<<"Reached limit.";
      return 0;
    }
    cout<<x<<"\n";
    x++;
    update(x);
  }

  int main()
  {
    int num=0;
    update(num);
    return 0;
  }
