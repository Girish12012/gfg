class Solution {
  public:
    string isAutomorphic(int n) {
        // code here
        long long sq=n*n;
        long long temp=n;
        int p=1;
        while(temp>0){
            p=p*10;
            temp=temp/10;
        }
        if(sq%p==n){
            return "Automorphic";
        }
        else{
            return "Not Automorphic";
        }
    }
};