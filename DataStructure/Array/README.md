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
