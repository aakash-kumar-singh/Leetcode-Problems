class Solution {
public:
    int countLargestGroup(int n) {
        // vector<int> v(9,0);
        // for(int i=1;i<=9;i++){
        //     for(int j=1;j<=n;j++){
        //         int sum=0;
        //         int x=j;
        //         while(x!=0){
        //             int d=x%10;
        //             sum+=d;
        //             x/=10;
        //         }
        //         if(sum==i){
        //             v[i-1]+=1;
        //         }
        //     }

        // }
        // sort(v.begin(),v.end());
        // int m=v.size();
        // int maxm=v[m-1];
        // int count=0;
        // for(int i=0;i<m;i++){
        //     if(v[i]==maxm) count++;
        // }
        // return count;

        int maxSum = 9 * to_string(n).size();
        vector<int> v(maxSum + 1, 0);
        for (int j = 1; j <= n; j++) {
            int x = j, sum = 0;
            while (x > 0) {
                sum += x % 10;
                x /= 10;
            }
            v[sum]++;
        }
        int maxm = *max_element(v.begin(), v.end());
        int count = 0;
        for (int x : v) {
            if (x == maxm)
                count++;
        }

        return count;
    }
};