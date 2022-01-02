#include<bits/stdc++.h>
using namespace std;
// ^ importing library and namespace

ifstream fin("square.in");
ofstream fout("square.out");

// ^ creating input/output files the problem requires
int main(){
    int ax1, ax2, ay1, ay2;
    int bx1, bx2, by1, by2;

    fin >> ax1 >> ay1 >> ax2 >> ay2;
    fin >> bx1 >> by1 >> bx2 >> by2;
// ^ importing variables into file
    
    int maxy = max(ay2, by2);
    int miny = min(ay1, by1);
// ^ finding max and min Y coordinates for pasture A and B
    int maxx = max(ax2, bx2);
    int minx = min(ax1, bx1);
// ^ finding max and min X coordindates for pasture A and B
    
    int d1 = maxy-miny;
    int d2 = maxx-minx;
    
// ^ finding distance 1 and 2

    fout << max (pow(d1, 2), pow(d2, 2));
}
// print solution
