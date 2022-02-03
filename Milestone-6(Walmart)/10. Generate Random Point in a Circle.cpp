class Solution {
public:
    double r, x, y;
    Solution(double radius, double x_center, double y_center) {
        r=radius;
        x=x_center;
        y=y_center;
    }
    
    vector<double> randPoint() {
        double len;
        double theta;
        double random=(double) rand()/RAND_MAX; //[0,1]
        theta = random*2*3.14159;
        double random2 = (double) rand()/RAND_MAX;
        len = sqrt(random2)*r;
        double x_r = x+len*cos(theta);
        double y_r = y+len*sin(theta);
        return vector<double>{x_r,y_r};
    }
};
