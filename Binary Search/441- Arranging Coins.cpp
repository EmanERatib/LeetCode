class Solution {
public:
    int arrangeCoins(int n) {
     int low =0;
     int high =n;
        while (low <= high){
            long long mid =(low+high)/2;
            long long coins =(mid*(mid+1))/2;

            if(coins==n)
            return mid;
            else if (coins < n)
            low =mid+1;
            else
            high =mid-1;
        }
        return high;
    }
};
//Time Complexity : O(log n)
//Space Complexity :O(1)