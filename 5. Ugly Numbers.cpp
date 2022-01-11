class Solution{
public:	

	int getNthUglyNo(int n) {
	    // code here
	   set<int> possibleNum, fix;
	   possibleNum.insert(1);
	   while((int)fix.size()!=n){
	       int next=*possibleNum.begin();
	       fix.insert(next);
	       possibleNum.erase(next);
	       possibleNum.insert(2*next);
	       possibleNum.insert(3*next);
	       possibleNum.insert(5*next);
	   }
	   return *fix.rbegin();
	}
};
