## 배열과 연결리스트 -선형리스트

||배열|연결리스트|
|:--:|:--:|:--:|
|k번째 원소 접근|O(1)|O(k)|
|임의의 위치에 원소 추가/제거|O(n)|O(1)|
|메모리상의 배치|연속|불연속|
|추가적으로 필요한 공간(Overhead)|-|O(n)|

### 팁

#### 배열 전체 접근
    //range-based for loof
    for(auto c: arr/vector)//C++11이상부터 -> auto& c - 값 자체 변동있음
        cout<< c <<" ";     //c에 배열이나 벡터값이 하나씩 순서대로 들감
    
#### 배열 초기화
    int a[10];
    int b[10][10];
    //1. memset  *비추천(2차원 이상배열 오류, 인자값 0만)
    memset(a, 0, sizeof a);
    memset(b, 0, sizeof a);

    //2. for
    for(int i=0; i < 10; i++)
        a[i] = 0;
    for(int i=0; i < 10; i++)
        for(int k=0; j<10; j++)
            b[i][j] = 0;
            
    //3. fill  algorithm 헤더 *추천
    fill(a, a+10, 0);
    for(int i=0; i < 10; i++)
        fill(b[i], b[i]+10, 0);

### 연결리스트 종류
1. 단일 연결 리스트
2. 이중 연결 리스트    //STL LIST는 이중연결리스트
3. 원형 연결 리스트

#### 야매 연결리스트 코드
    const int MX = 1000005;
    int dat[MX], pre[MX], nxt[MX];
    int unused = 1;

    fill(pre, pre+MX, -1)
    fill(nxt, nxt+MX, -1)
    
    void traverse()
    {
        int cur = nxt[0];
        while(cur != -1)
        {
            cout << dat[cur]<<" ";
            cur = nxt[cur];
        }
    }
