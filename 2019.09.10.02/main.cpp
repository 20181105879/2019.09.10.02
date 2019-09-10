//
//  main.cpp
//  2019.09.10.01
//
//  Created by s20181105879 on 2019/9/10.
//  Copyright © 2019 s20181105879.  All rights reserved.
//

#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
struct stu{
    int fz1;
    int fm1;
};
int find(int fz,int fm)
{
    int t;
    while(fz)
    {
        t=fm%fz;
        fm=fz;
        fz=t;
    }
    return fm;
    
}
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    stu s[n];
    int fz=1,fm=1;
    if(n==0)
    {
        return 0;
    }
    int flag;
    scanf("%d/%d",&s[0].fz1,&s[0].fm1);
    fz=s[0].fz1;
    fm=s[0].fm1;
    for(long long i=1;i<n;i++)
    {
        scanf("%d/%d",&s[i].fz1,&s[i].fm1);
        int t=fz;
        fz=fz*+s[i].fm1+s[i].fz1*fm;
        fm=t*s[i].fm1;
        flag=find(fz,fm);
        fz/=flag;
        fm/=flag;
    }
    fm=fm*n;
    flag=find( fz, fm);
    fz/=flag;
    fm/=flag;
    printf("%d/%d",fz,fm);
    
   
   
   
    
   
    
    
    
    return 0;
}
