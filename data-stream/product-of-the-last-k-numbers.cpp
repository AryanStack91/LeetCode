class ProductOfNumbers {
public:
    vector<int> ans;
    ProductOfNumbers() { ans.push_back(1); }

    void add(int num) {
        if (num == 0) {
            ans.clear();
             ans.push_back(1);

        } else {
            int a = num * ans[ans.size() - 1];
            ans.push_back(a);
        }
    }

    int getProduct(int k) {
        if (k >= ans.size())
            return 0;
        else

            return ans[ans.size() - 1] / ans[ans.size() - k - 1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */