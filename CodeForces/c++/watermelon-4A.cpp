#include<bits/stdc++.h>
using namespace std;


// input line 1 is w
// output line 1 is YES or NO if when w is divided by 2, the remainder is even or odd
int main(){
    int w; cin >> w; // number of kilos in the watermelon
    if(w == 2 ){
        cout << "NO" << endl;
    }
    else if(w % 2 == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}