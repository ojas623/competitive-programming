#include<bits/stdc++.h>
using namespace std;

//what's supposed to happen is that he paints with interval of x=a and x=b 
// problem is that the cow paints with the interval of x=c to x=d
// first line of input has ints a and b sepereated by a space
// second line of input has ints c and d sepereated by a space 
// output a single line containing the total length of the fence covered with paint
// if the intervals overlap, the total length is the sum of the two interval



ifstream fin("paint.in");
ofstream fout("paint.out");

int main(){
    int a, b, c, d;
    fin >> a >> b >> c >> d;
    int total = (b-a) + (d-c);
    int intersect = max(0, min(b, d) - max(a, c));
    int answer = total - intersect;
    fout << answer << endl;
}
