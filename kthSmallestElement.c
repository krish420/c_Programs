#include<stdio.h>
int kthSmallestEl(int arr[], int n, int k){
        int i,j;
        for(i = 0; i < k; i++){
                for(j = 0; j < n-1-i; j++){
                        if(arr[j] < arr[j+1]){
                                int temp = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = temp;
                        }
                }
        }
        return arr[k-1];
}
void main(){
        int arr[]={10,9,8,7,6,5,4,3,2,1},n=10,k=3;
        int kth = kthSmallestEl(arr,n,k);
        printf("%d ",kth);

}