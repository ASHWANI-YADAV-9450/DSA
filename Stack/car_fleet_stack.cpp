#include<iostream>
#include<stack>
#include<algorithm> 
#include<vector>
using namespace std;

class Car{
    public:
        int pos, speed;
        Car(int p, int s):pos(p), speed(s) {};
};

static bool myComp(Car&a, Car&b) {
    return a.pos < b.pos;
}

int carFleet(int target, vector<int>& position, vector<int> speed) {
    vector<Car>cars;
    for(int i=0; i<position.size(); ++i) {
        Car car(position[i], speed[i]);
        cars.push_back(car);
    }
    sort(cars.begin(), cars.end(), myComp);

    stack<float>st;
    for(auto car: cars) {
        float time = (target-car.pos) / ((float) car.speed);
        while(!st.empty() && time >= st.top()){
            st.pop();
        }
        st.push(time);
    }
    return st.size();
}


int main() {
    int target= 12;
    // int position = [10,8,0,5,3]; 
    vector<int> position= {10,8,0,5,3};
    vector<int> speed={2,4,1,1,3};
    //output 3

    int ans = carFleet(target, position , speed);
    cout << " ans: " << ans << endl;
}