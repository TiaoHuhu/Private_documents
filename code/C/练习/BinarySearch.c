#include <stdio.h>

int binary_search(int Arr[] ,int k){
    //二分查找法 算法实现
    int sz = sizeof(Arr)/sizeof(Arr[0]);
    int left = 0;
    int right = sz-1;
    int mid = (left + right)/2;

    while(1){
    if (Arr[mid] > k){
        right = mid;
        mid = (right + left)/2;
    }
    else if (Arr[mid < k]){
        left = mid;
        mid = (left + right)/2;
    }
    }
}

int mian(){
    //二分查找
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 7;
    int ret = binary_search(arr ,k);

    if (ret == 1){
        printf ("找到");
    }else printf ("未找到");

    return 0;
}