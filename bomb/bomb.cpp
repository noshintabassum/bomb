/*	In Chefland, there are N houses numbered from 1
    to N, i-th house has a defence system having strength Ai.

    Chef suspects a bomb drop on one of the houses very soon.
    A bomb with attack strength X can destroy the i-th house,
    if the defence system of the i-th house Ai, is strictly less than X.

    Also, when the i-th house is destroyed due to the bomb, all
    houses with indices j such that 1≤j<i get destroyed as well
    irrespective of their defence system.

    Given one bomb with attack strength X, find the maximum number of houses that can get destroyed.
*/

#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int i=1; i<=t; i++){
	    int n, x, r=0;
	    cin>>n>>x;
	    for(int u=1; u<=n; u++){
	        int a, co=0;
	        cin>>a;
	        if(a<x){
	            co = co+u;
	            r = co;
	        }
	    }
	    cout<<r;
	    cout<<endl;
	}
}
