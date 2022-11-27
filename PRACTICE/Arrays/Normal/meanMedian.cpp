
class Solution{
    public:
    //Function to find median of the array elements.
    int median(int A[],int N)
    {
        
        sort(A,A+N);
        
        if(N%2!=0){
        
        return floor(A[N/2]);
        }
        
        return (A[N/2]+A[N/2-1])/2;
        
        //your code here
        //If median is in fraction then convert it to integer and return
    }
    //Function to find mean of the array elements.
    int mean(int A[],int N)
    {
        //your code here
        int res=A[0];
        for(int i=1;i<N;i++)
        {
            res+=A[i];
        }
        return res/N;
    }
};