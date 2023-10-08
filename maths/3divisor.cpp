static bool isPrime(int N)
    {
        if(N==1){
            return false;
        }
        if(N==2 || N==3){
            return true;
        }
        if(N%2==0 || N%3==0){
            return false;
        }
        int s = sqrt(N);
        for(int i=5;i<=s;i+=6){
            if(N%i==0 || N%(i+2)==0){
                return false;
            }
        }
        return true;
    }
    int exactly3Divisors(int N)
    {
        //Your code here
        int count = 0;
        for(int i =2;i<=sqrt(N);i++)
            if(isPrime(i))
                count++;
        return count;
    }

};