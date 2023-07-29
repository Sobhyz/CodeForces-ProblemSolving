#include <iostream>
#include <cstring>

#define ll long long int


using namespace std;

const ll N=5e3+5,K=1e5+5,mod=1e9+7;
ll mem[N],n;
char str[N],tmp[K];

struct trie
{
    trie *child[26];
    bool end;
    trie(){
        for(int i=0;i<26;i++)
            child[i]=NULL;
        end=false;
    }

    void insert(char* curr){
        if(*curr=='\0')
            end=true;
        else{
            int idx=*curr-'a';
            if(child[idx]==0) child[idx]=new trie();
            child[idx]->insert(curr+1);
        }
    }

    bool search(char* curr)
    {
        if(*curr=='\0')
            return end;
        int idx=*curr-'a';
        if(child[idx]==0)return false;
        return child[idx]->search(curr+1);
    }
};

void test()
{
    string str;
    cin>>str;
    str+=str;
    cout<<str;
}

int main()
{
    // test();
    // return 0;
    trie *t;
    t=new trie();
    scanf(" %s %lld",str,&n);

    for(int i=0;i<n;i++)
    {
        scanf("%s",tmp);
        t->insert(tmp);
    }

    int len=strlen(str);
    memset(mem,0,sizeof mem);
    mem[len]=1;
    for(int i=len-1;i>=0;i--)
    {
        trie *temp=t;
        for(int j=i;j<len;j++)
        {
            ll idx=str[j]-'a';
            if(temp->child[idx]==0)
                break;
            temp = temp->child[idx];
            if(temp->end)
            {
                mem[i]=(mem[i]+mem[j+1])%mod;
            }

        }

    }
    cout<<mem[0];
}