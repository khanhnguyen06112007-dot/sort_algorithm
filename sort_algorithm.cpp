#include <iostream>
#include <vector>

using namespace std;

void Selection_sort(vector <int> &a){
    int n = a.size();
    for (int i = 0; i < n; i++){
        int minpos = i;
        for (int j = i + 1; j < n; j++){
            if (a[j] < a[minpos]) minpos = j;
        }
        swap(a[i], a[minpos]);
    }
}

void insertion_sort(vector <int> &a){
    int n = a.size();
    for (int i = 0; i < n; i++){
        int j = i;
        while (j > 0 && a[j - 1] > a[j]){
            swap(a[j - 1], a[j]);
            j--;
        }
    }
}

void bubblesort(vector <int> &a){
    int n = a.size();
    for (int i = 0; i < n; i++){
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++){
            if (a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}


void heapify (vector <int> &a, int n, int id){
    int l = 2 * id + 1;
    int r = 2 * id + 2;
    
    int max_id = id;
    if (l < n && a[l] > a[max_id]) max_id = l;
    if (r < n && a[r] > a[max_id]) max_id = r;
    
    if (max_id != id){
        swap(a[id], a[max_id]);
        heapify(a, n, max_id);
    }
}
void heapsort (vector <int> &a){
    int n = a.size();
    for (int i = n / 2 - 1; i >= 0; i--) heapify(a, n, i);
    for (int i = n - 1; i >= 1; i--){
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

vector <int> aux1(500000);
void mergesort (vector <int> &a, int left, int right){
    if (left == right) return;
    int mid = (left + right) / 2;
    mergesort(a, left, mid);
    mergesort(a, mid + 1, right);
    
    int i = left;
    int j = mid + 1;
    int k = left;
    
    while (i <= mid && j <= right){
        if (a[i] < a[j]) aux1[k++] = a[i++];
        else aux1[k++] = a[j++];
    }
    
    while (i <= mid) aux1[k++] = a[i++];
    while (j <= right) aux1[k++] = a[j++];
    
    for (int i = left; i <= right; i++) a[i] = aux1[i];
}


void quicksort (vector <int> &a, int left, int right){
    if (left >= right) return;
    int pivot = a[(left + right) / 2];
    
    int i = left;
    for (int j = left; j <= right; j++){
        if (a[j] < pivot){
            swap(a[i], a[j]);
            i++;
        }
    }
    int mid1 = i - 1;
    
    for (int j = left; j <= right; j++){
        if (a[j] == pivot){
            swap(a[i], a[j]);
            i++;
        }
    }
    int mid2 = i;
    
    quicksort(a, left, mid1);
    quicksort(a, mid2, right);
}

void countingsort(vector <int> &a){
    int n = a.size();
    vector <int> cnt(500000);
    for (int x : a) cnt[x]++;
    int k = 0;
    for (int i = 0; i <= 500000; i++){
        for (int j = 1; j <= cnt[i]; j++){
            a[k++] = i;
        }
    }
}

void radixsort (vector <int> &a){
    int n = a.size();
    
    int maxNums = INT_MIN;
    for (int i = 0; i < n; i++) maxNums = max (maxNums, a[i]);
    vector <int> aux(n);
    for (int exp = 1; exp <= maxNums; exp *= 10){
        int k = 0;
        for (int digit = 0; digit <= 9; digit++){
            for (int x : a){
                if ((x / exp) % 10 == digit){
                    aux[k++] = x;
                }
            }
        }
        a = aux;
    }
}
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    //Selection_sort(a);
    //insertion_sort(a);
    //bubblesort(a);
    //shellsort_hibird(a);
    //shellsort_knuth(a);
    //shellsort_traditional(a);
    //heapsort(a);
    //mergesort(a, 0, n - 1);
    //quicksort(a, 0, n - 1);
    //countingsort(a);
    radixsort(a);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
  
    return 0;
}