class solution {
    public:

    bool isPossibleSoluton(vector<int>&stalls, int k, i) {
        // can we place k cows, with at least mid distance between cows

        int c =1;
        int pos = stalls[0];


        for(int i=0; i<stalls.size(); i++) {
            if(stalls[i] - pos >=mid) {
                c++;
                pos = stalls[i];
            }
            if(c == k) return true;
        }
        return false;
    }

    int solve(int n, int k, vecotr<int&stalls) {
        sort(stalls.begin(), stalls.end());
        int start =0; 
        int end = stalls[stalls.size() -1] - stalls[0];

        int ans = -1;

        while(start <=end) {
            int mind = (start +end) >> 1;
            if(isPossibleSoluton(stalls, k, mid)) {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid -1;
            }
        }
        return ans; 
    }
}