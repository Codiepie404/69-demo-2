#include<stdio.h>
int sorted(int array[],int n){
 for(int i=0;i<n-1;i++){
 if(array[i]>array[i+1]){
 return 0;
 }
 }
 return 1;
}
int main(){
 int n;
 printf("Enter Number of Elements:");
 scanf("%d",&n);
 int array[n];
 printf("Enter Array Elements:");
 for(int i=0;i<n;i++){
 scanf("%d",&array[i]);
 }
 if(sorted(array,n)){
 printf("The array is sorted!");
 }
 else{
 printf("The array isn't sorted!");
 }
 return 0;
}