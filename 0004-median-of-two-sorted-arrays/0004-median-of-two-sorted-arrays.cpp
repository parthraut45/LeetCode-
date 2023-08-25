class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
    int m = arr1.size();
    int n = arr2.size();
    int totalSize = m + n;
    vector<int> merged(totalSize);

    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    int middleIndex = totalSize / 2;
    if (totalSize % 2 == 0) {
        double median = (merged[middleIndex - 1] + merged[middleIndex]) / 2.0;
        return median;
    } else {
        return merged[middleIndex];
    }
}
};