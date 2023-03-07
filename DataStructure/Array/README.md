    //배열 초기화 팁
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
