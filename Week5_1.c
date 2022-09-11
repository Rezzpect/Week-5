/*
จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นสี่เหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 2)
*/
#include<stdio.h>
int main(){
    int row,column,n;
    printf("enter num: ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(column=1;column<=n;column++){
            printf("*");
        }
        printf("\n");
    }
}