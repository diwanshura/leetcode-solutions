class Solution { 
public: 
    vector<int> getConcatenation(vector<int>& arr) { 

        vector<int> arr2; 
        int size = arr.size(); 

        for(int i = 0; i < size; i++) {
            arr2.push_back(arr[i]);
        }

        for(int i = 0; i < size; i++) {
            arr2.push_back(arr[i]);
        }

        return arr2;
    } 
};