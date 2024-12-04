#include<stdio.h>
int a[10][10],vis[10],n;
int main(){
    int i,j,src;
    printf("enter the no. of nodes");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }vis[i]=0;
    }
    printf("enter the source code");
    scanf("%d",&src);
    printf(" nodes reacheable after traversal: \n");
    bfs(src);
}
void bfs(int v){
   int f=1,r=1,u,i,q[10];
    q[r]=v;
    vis[v]=1;
    while(f<=r){
        u=q[f];
        printf("%d \n",u );
        for(i=0;i<n;i++){
            if(a[v][i]=1 && vis[i]==0){
                vis[i]=1;
                r=r+1;
                q[r]=i;

        }
                    }f=f+1;
}
    }
