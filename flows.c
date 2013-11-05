#include<stdio.h>
int comp(int * a, int * b)
{
    if (*a < *b){
        return 1;
    }
    else if(*a==*b){
        return 0;
    }
    return -1;
}
int main(){

//Helpers for input/output
   int i, N, K;
   int C[102];
   
   scanf("%d %d", &N, &K);
   for(i=0; i<N; i++){
      scanf("%d", &(C[i]));
   }
   qsort(C, N, sizeof(int), comp);
   
    int result=0;
    for(i=0;i<N;i++){
        result+=(i/K+1)*C[i];
    } 
   printf("%d\n", result);

}
