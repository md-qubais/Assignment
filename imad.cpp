























1.#include<bits/stdc++.h>
2.#define IOS ios_base::sync_with_stdio(false);  cin.tie(NULL)
3.#define int long long
4.#define endl "\n"
5.#define qubais_judge freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
6.using namespace std;
7.vector<vector<int>> threeSum(vector<int>&v) {
8.	vector<int> ans(3);
9.	int c_count=0;
10.    vector<vector<int>> res;
11.    if(v.size()<3){
12.    	return res;
13.    }
14.    //now find if array has only three numbers
15.    bool b=false;
16.    set<vector<int>> s;
17.    set<int> temp;
18.    for(int i=0;i<v.size();i++){
19.    	if(v[i]==0){
20.    		c_count++;
21.    	}
22.    	temp.insert(v[i]);
23.    	if(v[i]!=0){
24.    		b=true;
25.    	}
26.    }
27.    if(temp.size()==3){
28.    	int k=0;
29.    	int sum=0;
30.    	for(auto it:temp){
31.    		ans[k++]=it;
32.    		sum+=it;
33.    	}
34.    	if(sum==0){
35.    		if(c_count>=3){
36.    			s.insert({0,0,0});
37.    		}
38.    		s.insert(ans);
39.    	}
40.    	for(auto it:s){
41.    		res.push_back(it);
42.    	}
43.    	return res;
44.    }
45.    if(b==false){
46.    	ans[0]=0;
47.    	ans[1]=0;
48.    	ans[2]=0;
49.    	res.push_back(ans);
50.    	return res;
51.    }
52.    //sort(v.begin(),v.end());
53.    
54.    unordered_map<int,pair<int,int>> m;
55.    for(int i=0;i<v.size();i++){
56.    	m[v[i]]=make_pair(v[i],i);
57.    }
58.    int i=0;
59.    int j=i+1;
60.    while(i<v.size()-2){
61.    	if(j>=v.size()-1){
62.    		i++;
63.    		j=i+1;
64.    	}
65.    	if(m.find(-(v[i]+v[j]))!=m.end() and m[-(v[i]+v[j])].second!=i and m[-(v[i]+v[j])].second!=j ){
66.    		ans[0]=v[i];
67.    		ans[1]=v[j];
68.    		ans[2]=-(v[i]+v[j]);
69.    		sort(ans.begin(),ans.end());
70.    		s.insert(ans);
71.    	}
72.    	j++;
73.    }
74.    for(auto it:s){
75.    	res.push_back(it);
76.    }
77.    return res;
78.}


79.int32_t main(){
80.	qubais_judge;
81.	IOS;
82.	int n;
83.	cin>>n;
84.	vector<int> res(n);
85.	for(int i=0;i<n;i++){
86.		cin>>res[i];
87.	}
88.	vector<vector<int>> ans=threeSum(res);
89.	for(int i=0;i<ans.size();i++){
90.		for(int j=0;j<ans[0].size();j++){
91.			cout<<ans[i][j]<<" ";
92.		}
93.		cout<<endl;
94.	}
95.	return 0;
