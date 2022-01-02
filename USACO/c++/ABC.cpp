#include<bits/stdc++.h>
using namespace std;

//used help from online resources
ifstream fin("ABC.in");
ofstream fout("ABC.out");

int main(){
    int numbers[7];
    for(int i=0;i<7;i++){
        fin>>numbers[i];
    }
    sort(numbers, numbers+7);
    int a = numbers[0], b = numbers[1];
    int c = numbers[6] - a -b;
}
