#include <iostream>
#include<stack>
#include<utility>
using namespace std;
int N;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    stack<int> apt;
    cin>>N;
    long long int h, cnt = 0;        //int 범위 초과도 틀린닶 =>long long int
    while(N--)
    {
        cin>>h;
        while(!apt.empty() && apt.top() <= h)
            apt.pop();
        
        apt.push(h);
        cnt += apt.size() - 1;
    }
    cout << cnt;
    
    return 0;
}
