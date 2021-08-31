/*
Question
1. You are given a number n.
2. You are required to find the value of nth catalan number.
C0 -> 1
C1 -> 1
C2 -> 2
C3 -> 5
..
Cn -> C0.Cn-1 + C1.Cn-2 + .. + Cn-2.C1 + Cn-1.C0
Input Format
A number n
Output Format
A number representing the value of nth catalan number.
Constraints
0 <= n <= 15
Sample Input
4
Sample Output
14

*/

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int catalan[(n+1)];
	catalan[0]=1;
	catalan[1]=1;
	for(int i=2;i<=n;i++){
		catalan[i]=0;
		for(int j=0;j<i;j++){
			catalan[i]=catalan[i]+(catalan[j]*catalan[(i-j-1)]);
		}
	}
	cout<<catalan[n];
}