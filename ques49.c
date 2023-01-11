#include <stdio.h>//call by value 
void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d ",a,b);
}
void main(){
    int x , y;
    scanf("%d%d",&x,&y);
    swap(x,y);
    printf("%d %d ",x,y);

}
#include <stdio.h>//call by reference
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("%d %d ",*a,*b);
}
void main(){
    int x , y;
    scanf("%d%d",&x,&y);
    swap(&x,&y);
    printf("%d %d ",x,y);

}