class Solution {
public:
    void asc_array(vector<int>& arr, int low, int high) {
        if (low >= high)
            return;

        int mid = low + (high - low) / 2;
        swap(arr[low], arr[mid]);

        int pivot = arr[low];

        int p = low + 1;
        int q = high;

        while (p <= q) {

            while (p <= q && arr[p] <= pivot)
                p++;

            while (p <= q && arr[q] > pivot)
                q--;

            if (p < q)
                swap(arr[p], arr[q]);
        }

        swap(arr[low], arr[q]);

        asc_array(arr, low, q - 1);
        asc_array(arr, q + 1, high);
    }

    vector<int> sortArray(vector<int>& arr) {
        asc_array(arr, 0, arr.size() - 1);
        return arr;
    }
};
