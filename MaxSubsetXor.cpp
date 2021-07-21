	//only when n<=20
	#include <bits/stdc++.h>
	using namespace std;

	void file_i_o()
	{
	    ios_base::sync_with_stdio(0); 
	    cin.tie(0); 
	    cout.tie(0);
		#ifndef ONLINE_JUDGE
		    freopen("input.txt", "r", stdin);
		    freopen("output.txt", "w", stdout);
		#endif
	}
	int main() {
		clock_t begin = clock();
		file_i_o();

	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	    	cin>>arr[i];
	    }
	    int p=pow(2,n)-1;
	    int res=INT_MIN;
	    for(int i=0;i<=p;i++)
	    {
	    	int sum=0;
	    	for(int j=0;j<n;j++)
	    	{
	    		if((i & (1<<j))>0)
	    		{
	    			
	    			sum=sum^arr[j];
	    		}
	    	}
	    	res=max(res,sum);
	    }
	    cout<<res<<endl;
	    #ifndef ONLINE_JUDGE 
	    clock_t end = clock();
		 cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
		#endif 

		return 0;
	}
