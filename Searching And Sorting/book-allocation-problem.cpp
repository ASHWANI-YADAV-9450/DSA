class solution {
    public:

    bool isPossibleSolution(int A[], int N, int M, int sol) {
        int pageSum = 0;
        int c =1;
        for(int i=0; i<N; i++){
            if(A[i] > sol) {
                return false;
            }
            if(pageSum + A[i] > sol) {
                c++;
                pageSum = A[i];
                if(c> M) {
                    return false;
                }
            }
            else {
                pageSum += A[i];
            }
        }
        return true;
    }


    // function to find minimum number of pages
    int findPages(int A[], int N, int M) {
        int(M>N) return -1;

        int start =0; 
        int end = accumulate(A, A+N, 0);
        int ans = -2;

        while(start <= end) {
            int mid = (start + end) >> 1;
            if(isPossibleSolution(A, N, M, mid)){
                ans = mid;
                end = mid -1;
            } else {
                start= mid + 1;
            }
        }
        return ans;
    }
};