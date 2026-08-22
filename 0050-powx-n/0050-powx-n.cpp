class Solution {
public:
    double myPow(double x, int n) {
        if(x==1) return 1.0;
        if(x==0) return 0.0;
        if(n==1) return x;
        if(n==0) return 1.0;
        if(x==-1 && n%2==0)  return 1.0;
        if(x==-1 && n%2==1)  return -1.0;

        long binary_form=n;
        double ans=1;
        if(n<0){
            x=(1/x);
            binary_form=-binary_form;
        }
        while(binary_form>0){
            if(binary_form%2==1){
                ans *=x;
            }
            x*=x;
            binary_form/=2;
        }
        return ans;
        
    }
};