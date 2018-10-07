#include<iostream>
#include<string>
#include<stack>
using namespace std;
char s[110];
char pre[7][7]={
        {'>','>','<','<','<','>','>'},
        {'>','>','<','<','<','>','>'},
        {'>','>','>','>','<','>','>'},
        {'>','>','>','>','<','>','>'},
        {'<','<','<','<','<','=','0'},
        {'>','>','>','>','0','>','>'},
        {'<','<','<','<','<','0','='}};
char procede(char a,char b)
{
    int i,j;
    switch(a)
    {
        case'+':i=0;break;
        case'-':i=1;break;
        case'*':i=2;break;
        case'/':i=3;break;
        case'(':i=4;break;
        case')':i=5;break;
        case'#':i=6;break;
    }
    switch(b)
    {
        case'+':j=0;break;
        case'-':j=1;break;
        case'*':j=2;break;
        case'/':j=3;break;
        case'(':j=4;break;
        case')':j=5;break;
        case'#':j=6;break;
    }
    return pre[i][j];
}
int operate(int m,int n,char x)
{
    if(x=='+')
        return m+n;
    if(x=='-')
        return n-m;
    if(x=='*')
        return m*n;
    if(x=='/')
        return n/m;
}
int main()
{
    int k,y;
    stack <int> shu;
    stack <char> fu;
    char c;
    char ss[2]="#";
    fu.push('#');
    cin>>s;
    strcat(s,ss);
    c=s[0];
    k=1;
    while(c!='#'||fu.top()!='#')
    {
        y=0;
        if(c>='0'&&c<='9')
        {
            while(c>='0'&&c<='9')
            {
                y=y*10+(c-'0');
                c=s[k++];
            }
            shu.push(y);
        }
        else
        {
            switch(procede(fu.top(),c))
            {
                case'<':
                    fu.push(c);
                    c=s[k++];
                    break;
                case'=':
                    fu.pop();
                    c=s[k++];
                    break;
                case'>':
                    char x=fu.top();fu.pop();
                    int m=shu.top();shu.pop();
                    int n=shu.top();shu.pop();
                    shu.push(operate(m,n,x));
                    break;
            }
        }
    }
    cout<<shu.top();
    return 0;
}