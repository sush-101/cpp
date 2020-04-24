/*
Vedsar and Ankit are very passionate about counting prime numbers. This time they wanted to plot a 3D graph, where X and Y axes show the range and Z axis shows count of prime numbers between X and Y (X and Y are not included in the range). Now they want to write a program which takes Q queries, where each query has X and Y as inputs. For each X and Y as inputs, print the number of primes between X and Y (X and Y are not included).

Input Format

First line will contain Q, the number of queries.
Line 2 to Line Q+1 will contain two integers X and Y with a space between them.
0 < Q < 100001
0 < L < R < 10000001

Output Format

Output Q lines, where ith line represents the count of prime numbers between X and Y.
For ith line, X and Y are defined in input line i+1.

Sample Input

5
1 10
2 10
4 6
3 5
100 102

Sample Output

4
3
1
0
1

Explanation

between 1 and 10: there are 4 primes (2,3,5,7)
between 4 and 6: there is 1 prime (5)
between 100 and 102: there is 1 prime (101)*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define vi vector<int>
#define sz 10000001
#define pb push_back
#define fr(i,m,k,n,inc) for(int i=m;k<n;i+=inc)
using namespace std;
int p[sz];
void seive(){
    p[0] = 1;
    p[1] = 1;
    fr(i,2,i*i,sz,1){
        if(p[i] == 0){
            fr(j,i,i*j,sz,1){
                p[i*j] = 1;
            }
        }
    }
   }

int main() {
   seive();
    vi vec;
    vi::iterator itr1,itr2;
    fr(i,0,i,sz,1){
        if(p[i] == 0)vec.pb(i);
    }
    int t;
    cin>>t;
    while(t--!=0){
        int a,b;
        cin >> a >> b;
        itr1 = lower_bound(vec.begin(),vec.end(),b);
        itr2 = upper_bound(vec.begin(),vec.end(),a);
        cout<< itr1 - itr2<<endl;
        
    }
    return 0;
}
