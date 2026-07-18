class node {
public:
    int data;
    int row;
    int col;

    node(int d, int i, int j) {
        this->data = d;
        row = i;
        col = j; 
    }
};

class compare {
public:
    bool operator()(node* a, node* b) { return a->data > b->data; }
};
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<node*, vector<node*>, compare> minHeap;

        int mini = INT_MAX;
        int maxi = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            int ele = nums[i][0];
            mini = min(mini, ele);
            maxi = max(maxi, ele);

            minHeap.push(new node(ele, i, 0));
        }
        int start = mini;
        int end = maxi;
        while (!minHeap.empty()) {
            node* temp = minHeap.top();
            minHeap.pop();

            mini = temp->data;

            if (maxi - mini < end - start) {
                start = mini;
                end = maxi;
            }

            if (1 + temp->col < nums[temp->row].size()) {
                maxi = max(maxi, nums[temp->row][temp->col + 1]);
                minHeap.push(new node(nums[temp->row][temp->col + 1], temp->row,
                             temp->col + 1));

            } else {
                break;
            }
        }
        return {start, end};
    }
};