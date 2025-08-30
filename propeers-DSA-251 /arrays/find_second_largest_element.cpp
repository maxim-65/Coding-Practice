#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    int max=arr[0],sec_max=INT_MIN,same=0;
    for (int i=1;i<n;i++){
        if(arr[i]>max){
            sec_max = max;
            max=arr[i];
            same = 1;
        }
        else if (arr[i]>sec_max && arr[i]<max){
            sec_max = arr[i];
            same = 1;
        }else {

        }
    }
    if(same == 0){
        return -1;
    }
 
    return sec_max;
}
