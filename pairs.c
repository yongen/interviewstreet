#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/* Head ends here */

int comp(int * a, int * b)
{
    if(*a >*b){
        return 1;
    }
    else if(*a ==*b){
        return 0;
    }
    return -1;
}

int pairs(int a_size, int* a, int k) {
   int ans=0;
    
    /* Write your code here */
    qsort(a, a_size, sizeof(int), comp);
    if(a[a_size-1]-a[0]<k){
        return 0;
    }
    for(int i=0;i<a_size;i++){
        for(int j=i+1;j<a_size-1;j++){
            if(a[j]-a[i]==k){
                ans++;
                break;
            }
            if(a[j]-a[i]>k){
                break;
            }
        }
    }
    
    
   return ans;
}

/* Tail starts here */
int main() {
   int res;
   
    int _a_size,_a_i,_k;
    scanf("%d %d", &_a_size,&_k);
    int _a[_a_size];
    for(_a_i = 0; _a_i < _a_size; _a_i++) { 
        int _a_item;
        scanf("%d", &_a_item);
        
        _a[_a_i] = _a_item;
    }
   res=pairs(_a_size,_a,_k);
   printf("%d\n",res);    
    return 0;
}
