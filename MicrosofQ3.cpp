// you can use includes, for example:
#include <cstring>
#include <vector>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int mem[101][36][36][36];

int solve(int i,int s,int m,int l,int n,vector<int> &A, vector<int> &B, vector<int> &C)
{
    if(i == n)
        return 0;
    
    int & ret = mem[i][s][m][l];
    if(~ret) return ret;

    int op1,op2;
    op1=op2=0;

    int size = C[i]%10;
    int required = C[i]/10;
    int avaialbe = 0;

    if(size == 0)
        avaialbe = s+m+l;
    else if(size == 1)
        avaialbe = m+l;
    else
        avaialbe = l;

    if(required<=avaialbe)
    {
        if (size==0){
            if(required<=s)
                op1 = solve(i+1,s-required,m,l,n,A,B,C) + required*B[i];
            else if(required<=s+m)
                op1 = solve(i+1,0,m-required,l,n,A,B,C) + required*B[i];
            else
                op1 = solve(i+1,0,0,l-required,n,A,B,C) + required*B[i];
        }
        else if(size == 1)
        {
            if(required<=m)
                op1 = solve(i+1,s,m-required,l,n,A,B,C) + required*B[i];
            else
                op1 = solve(i+1,s,0,l-required,n,A,B,C) + required*B[i];
        }
        else{
            if(required<=l)
                op1 = solve(i+1,s,m,l-required,n,A,B,C) + required*B[i];
        }
    }

    op2 = solve(i+1,s,m,l,n,A,B,C);

    return ret=max(op1,op2);
}


int solution(vector<int> &A, vector<int> &B, vector<int> &C) {
    // Implement your solution here
    memset(mem,-1,sizeof mem);
    return solve(0,A[0],A[1],A[2],B.size(),A,B,C);
}
