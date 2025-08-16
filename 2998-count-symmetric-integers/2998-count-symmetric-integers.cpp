class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++){
            int n=to_string(i).size();
            if(n%2!=0) continue;
            else{
                string x=to_string(i);
                int mid=n/2;
                string a1=x.substr(0,mid);
                string a2=x.substr(mid,mid);
                int b1=stoi(a1);
                int b2=stoi(a2);
                int sum1=0;
                int sum2=0;
                while(b1!=0){
                    int d=b1%10;
                    sum1+=d;
                    b1/=10;
                }
                while(b2!=0){
                    int d=b2%10;
                    sum2+=d;
                    b2/=10;
                }
                if(sum1==sum2) count++;
            }
        }
        return count;
    }
};