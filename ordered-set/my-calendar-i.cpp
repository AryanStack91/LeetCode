#include<vector>
class MyCalendar {
    private:
       std::vector<std::pair<int,int>>bookings;
public:
    MyCalendar() {}

    bool book(int start, int end) {
        for(const auto& booking : bookings){
            if(std::max(booking.first,start) < std::min(booking.second,end))
            {
                return false;
            }
        }
        bookings.emplace_back(start,end);
        return true;
        }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */