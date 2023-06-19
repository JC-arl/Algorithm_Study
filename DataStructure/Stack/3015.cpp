#include <iostream>
#include<stack>
using namespace std;

int N,num;
long long cnt=0;

int main()
{
    stack<pair<int,int>> st;
    cin>> N;
    while(N--)
    {
        cin >> num;
        int same = 1;
        while(!st.empty() && st.top().first <= num)
        {
            cnt += st.top().second;
            if(st.top().first == num)   //연속된 같은 수 일때
            {
                same+=st.top().second;
            }st.pop();
        }
        
        if(!st.empty())     //내림차순 스택의 맨아래에 가장 큰키와 현재키 쌍
            cnt++;
        st.push({num,same});
    }
    
    cout<<cnt;
    return 0;
}
