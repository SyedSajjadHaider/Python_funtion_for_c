#define count(X) (sizeof(X)/sizeof(X[0]))


#include<stdio.h>


int max(int *arr,int count){
int i, max =0;
for(i=0;i<count;i++){
    if(arr[i] > max)
        max = arr[i];
   }
return max;
}


int min(int *arr,int count){
int i=0,min;
min = arr[i];
for(i=1;i<count;i++){
    if(arr[i] <  min)
        min = arr[i];
   }
return min;
}


int set(int *arr,int arr_count){

int temp[arr_count],i,j,len=0,count=0;
for(i=0;i<arr_count; i++){
    for(j=0; j<len; j++){
        if(arr[i] == temp[j])
            count++;
     }
    if(count == 0){
        temp[len] = arr[i]; 
        len += 1;
     }
    count=0;
    }

for(i=0;i<len;i++){
    arr[i] = temp[i];
 }

return len;
}




int main(){
int i;
int arr[] = {5,5,5,5,5,6,6,6,8,8,8};
//printf("%d",count(arr));
//int y = max(arr,count(arr));
//int z = min(arr,count(arr));
int x = set(arr,count(arr));
//printf(" %d ",x);

for(i=0;i<x;i++){

printf(" %d ",arr[i]);
}

}

