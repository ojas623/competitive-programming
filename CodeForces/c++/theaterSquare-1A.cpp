#include<bits/stdc++.h>
using namespace std;

//rectangle with size n*m
//size of each flagstone is a*a
// find minimum number of flagstones to cover the rectangle

int main(){
    double n, m, a;
    cin>>n>>m>>a;
    // ceil is used because you can't have a fraction of a flagstone or round down
    // x = the top line of rectangle
    long long x = ceil(n/a);

    // y = the left line of rectangle
    long long y = ceil(m/a);

    // multiplying gives you the maximum number of flagstones
    long long ans = x * y;
    
    cout << ans << endl;
    
}