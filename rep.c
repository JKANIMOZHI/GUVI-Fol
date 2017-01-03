#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,num[100],n;
    cin>>n;
    for(i=1;i<=n;i++)
        {
        cin>>num[i];
        
    }
    for(i=1;i<=n;i++)
        {
        if(num[abs(num[i])]>0)
            num[abs(num[i])]=-num[abs(num[i])];
        else
            cout<<abs(num[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

