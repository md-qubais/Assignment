1->#include<bits/stdc++.h>
2->#define IOS    ios_base::sync_with_stdio(false);  cin.tie(NULL)
3->#define int   long long
4->#define endl  "\n"
5->using namespace std;   
6->int profit(int n,int c,int *prices,int *weights){
7->if(n==0||c==0){
8->return 0;
9->}
10->int ans=0;
11->int inc,exc;
12->inc=exc=INT_MIN;
13->if(c>=weights[n-1]) inc=prices[n-1]+profit(n-1,c-weights[n-1],prices,weights);
14->exc=profit(n-1,c,prices,weights);
15->ans=max(inc,exc);
16->return ans;
17->}
18->
19->
20->int32_t main() 
21->{
22->	#ifndef qubais_judge
23->	freopen("input.txt","r",stdin);
24->	freopen("output.txt","w",stdout);
25->	#endif
26->	IOS;
27->	int prices[]={40,20,30,100};
28->	int weights[]={1,2,3,5};
29->	int c=7;
30->	int n=4;
31->	cout<<profit(n,c,prices,weights)<<endl;
32->return 0;
33->}