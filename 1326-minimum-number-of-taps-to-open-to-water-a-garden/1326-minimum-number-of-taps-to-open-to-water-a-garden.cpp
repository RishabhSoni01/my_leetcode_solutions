class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        int min=0;
        int max=0;
        int count=0;
        int index=0;
        while(max<n){
            for(int i=index;i<ranges.size();i++){
                if((i - ranges[i])<=min && (i + ranges[i])>max){
                    max = i + ranges[i];
                    index=i;
                }
                //here after one loop we have 2--5 and open a 2nd tab;
                //other loop give 5--6
                //ans return count =2
            }
            //base case
            if(min==max)return -1;
            count++;
            min=max;
        }
        return count;
    }
};


/*0  1  2  3  4  5  6
    
2  4  3  1  1  1  1
x-----x
   x-----------x
      x--------x
         x--x
            x--x
               x--x
               */