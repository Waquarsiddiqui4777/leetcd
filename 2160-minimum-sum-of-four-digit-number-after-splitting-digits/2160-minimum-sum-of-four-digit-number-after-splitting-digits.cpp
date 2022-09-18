class Solution {
public:
    int minimumSum(int num) {
           int arr[4];
        for(int i = 0; i < 4; i++){
            arr[i] = num%10;
            num /= 10;
        }
        sort(arr, arr + 4);
        int i,j;
        j=arr[0]*10+arr[2];
        i=arr[1]*10+arr[3];
        int k=i+j;
    return k ;
    }};