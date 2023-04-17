#include<iostream>
#include<stack>
#include<utility>
#include<string>

using namespace std;

int N;

int main(void)
{
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    cin>>N;
    stack<pair<int,int>> st;
    int t,cnt=0;
    string ans;
    st.push({100000001,0});
    for(int i=1; i<=N;i++)
    {
        cin >> t;
        while(st.top().first < t)
            st.pop();
        cout<<st.top().second<<" ";
        st.push({t,i});
        
    }
    return 0;
}

