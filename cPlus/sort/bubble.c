#include "stdio.h"

int gArray1[] = {3,2,8,1,4,89,20,18,5,9};
int gNum1 = sizeof(gArray1)/sizeof(int);
int gArray2[] = {13,12,18,23,1,24,9,210,128,25,19};
int gNum2 = sizeof(gArray2)/sizeof(int);

void outArray(int a[], int N){
        int num = N;
        for(int i=0; i<num; i++){
                printf("%d ", a[i]);
        }
        printf(" --- Total: %d\n", N);
        return;
}

void swapArray(int a[], int i, int j) {
        int t=0;
        t = a[i];
        a[i] = a[j];
        a[j] = t;
}

void sortLittleUp(int a[], int N){
        printf(">>%s,array num: %d\n", __FUNCTION__,N);
        for(int i=0; i<N-1; i++)
                for(int j=i+1; j<N; j++) {
                        if(a[j] < a[i]) {
                                swapArray(a, i, j);
                        }
                }
        return;
}
void sortBigUp(int a[], int N){
        printf(">>%s,array num: %d\n", __FUNCTION__,N);
        for(int i=0; i<N-1; i++)
                for(int j=i+1; j<N; j++) {
                        if(a[j] > a[i]) {
                                swapArray(a, i, j);
                        }
                }
        return;
}

void sortBigBottomV2(int a[], int N){
        printf(">>%s,array num: %d\n", __FUNCTION__,N);
        for(int i=0; i<N-1; i++)
                for(int j=0; j<N-1-i; j++) {
                        if(a[j] > a[j+1]) {
                                swapArray(a, j+1, j);
                        }
                }
        return;
}

void sortLittleBottomV2(int a[], int N){
        printf(">>%s,array num: %d\n", __FUNCTION__,N);

        int t = 0;
        for(int i=0; i<N-1; i++)
                for(int j=0; j<N-1-i; j++) {
                        if(a[j] < a[j+1]) {
                                swapArray(a, j+1, j);
                        }
                }
        return;
}

void sortByDown(int a[], int N){
        printf(">>%s enter,array num: %d\n", __FUNCTION__,N);
        int change = 1;
        int cnt = 0;
        for(int i=N-1; i>0 && change; i--) {
                change=0;
                for(int j=0; j<i; j++) {
                        cnt++;
                        if(a[j] > a[j+1]) {
                                swapArray(a, j+1, j);
                                change = 1;
                        }
                }
        }
        printf(">>%s exit, forJ iteration cnt: %d\n", __FUNCTION__,cnt);
        return;

}

int main(int argc, char** argv) {
        printf("--------- V2 2020.02.14 main sort begin, num: %d-%d------------\n", gNum1,gNum2);
        outArray(gArray1,gNum1);
        outArray(gArray2,gNum2);

        printf("--------- main sort start ------\n", gNum1,gNum2);
        sortLittleUp(gArray1, gNum1);
        outArray(gArray1,gNum1);
        sortBigUp(gArray2, gNum2);
        outArray(gArray2,gNum2);
        sortLittleUp(gArray2, gNum2);
        outArray(gArray2,gNum2);

        printf("11---------------------, cnt: %d\n", gNum1);
        outArray(gArray1,gNum1);

        sortLittleBottomV2(gArray1, gNum1);
        printf("22---------------------, cnt: %d\n", gNum1);
        outArray(gArray1,gNum1);
        sortBigBottomV2(gArray1, gNum1);
        outArray(gArray1,gNum1);

        outArray(gArray2,gNum2);
        sortBigBottomV2(gArray2, gNum2);
        outArray(gArray2,gNum2);
        sortLittleBottomV2(gArray2, gNum2);
        outArray(gArray2,gNum2);

        sortByDown(gArray2, gNum2);
        outArray(gArray2,gNum2);
        sortByDown(gArray2, gNum2);
        outArray(gArray2,gNum2);

        return 0;
}

