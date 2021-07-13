#include <iostream>
#include <boost/version.hpp>
#include <boost/asio.hpp>

#include "Brigde/Messager.h"
#include "Brigde/PcMessagerBase.h"
#include "Brigde/MobileMessagerBase.h"
#include "Brigde/MessagerLite.h"
#include "Brigde/MessagerPerfect.h"

#include "Factory/TextFactory.h"
#include "Factory/BinaryFactory.h"
#include "Factory/TextSplitter.h"
#include "Factory/BinarySplitter.h"

using namespace std;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int zero_num = 0;
    bool is_one = false;
    int ans = 0;
    while (N > 0){
        if ((N & 1) != 0){
            is_one = true;
            ans = max(ans,zero_num);
            zero_num = 0;
        }else{
            if (is_one) {
                zero_num++;
            }
            //is_one = false;
        }

        N = N >> 1;
    }
    return ans;
}

int solution_2(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> left_area,right_area;
    for (int i = 0; i < A.size(); i++){
        if (i < A.size() - 1){
            if (i == 0)
                left_area.push_back(A[i]);
            else
                left_area.push_back(A[i] + left_area[i - 1]);
        }

        if (i > 0){
            if (i == 1){
                right_area.push_back(A[A.size()-i]);
            }else{
                right_area.push_back(A[A.size()-i] +  right_area[i - 2]);
            }

        }

    }

    int ans = INT_MAX;
    for (int i =0; i < left_area.size(); i++){
        ans = min(ans,abs(left_area[i] - right_area[left_area.size() - 1 -i]));
    }
    return ans;
}

int solution3(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(),A.end());
    int left = 0 , right = A.size();
    int mid = 0;
    while (left < right){
        mid = left + (right - left)/ 2;
        if (mid + 1 == A[mid])
            left = mid + 1;
        else
            right = mid;
    }
    return left + 1 ;
}

void sort_bubble_sort(vector<int> &array){
    int len = array.size();
    for (int i = 0 ; i < len - 1; i++){
        for (int j = 0 ; j < len - i - 1; j++){
            if (array[j] > array[j+1]){
                int temp = array[j]; array[j] = array[j+1];array[j+1] = temp;
            }
        }
    }

}

void selection_sort(vector<int> &array){
    int len = array.size();
    int minIndex;
    for (int i = 0; i < len - 1;i++){
        minIndex = i;
        for (int j = i + 1; j < len ; j++){
            if (array[j] < array[minIndex]){
                minIndex = j;
            }
        }
        int temp = array[i]; array[i] = array[minIndex]; array[minIndex] = temp;
    }
}

void Insertion_sort(vector<int> &array){
    int len = array.size();
    int preIndex,current;
    for (int i = 1 ; i < len ;i++){
        preIndex = i - 1;
        current = array[i];
        while (preIndex >= 0 && array[preIndex] > current){
            array[preIndex + 1] = array[preIndex];
            preIndex--;
        }
        array[preIndex + 1] = current;
    }
}


int pratition(vector<int> &v,int begin,int end) {
    int pivot = end,counter = begin;
    for (int i = begin; i < end; i++){
        if (v[pivot] > v[i]){
            int tmp = v[i];
            v[i] = v[counter];
            v[counter] = tmp;
            counter++;
        }
    }

    int tmp = v[pivot];
    v[pivot] = v[counter];
    v[counter] = tmp;
    return counter;
}


void quick_sort(vector<int> &v,int begin,int end){
    if (begin >= end) return;
    int pivot = pratition(v,begin,end);

    quick_sort(v,begin,pivot - 1);
    quick_sort(v,pivot + 1,end);
}

void merge(vector<int> &v,int left,int mid, int right){
    vector<int> tmp(right - left + 1);
    int i = left,j = mid + 1,k = 0;
    while (i <= mid && j <= right)
        tmp[k++] = v[i] < v[j] ? v[i++] : v[j++];
    while (i <= mid) tmp[k++] = v[i++];
    while (j <= right) tmp[k++] = v[j++];

    for (k = 0; k < tmp.size(); k++){
        v[left + k] = tmp[k];
    }

}
void merge_sort(vector<int> &v,int left,int right){
    if (left >= right) return;
    int mid = (left + right) >> 1;
    merge_sort(v,left,mid);
    merge_sort(v,mid + 1,right);

    merge(v,left,mid,right);
}

int solution4(int X, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)

    int ans = -1;
    map<int,int> cache;
    for (int i = 1; i <= X;i++)
        cache[i] = -1;
    for (int i = 0 ; i < A.size();i++){
        if (cache[A[i]] == -1) cache[A[i]] = i;
    }

    for (auto &p:cache){
        if (p.second == -1) return -1;
        ans = max(ans,p.second);
    }
    return ans;
}

vector<int> solution6(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int len = A.size();
    vector<int> ans(N,0);
    int m =0;
    for (int i = 0; i < len; i++){
        if (N + 1 == A[i])
            ans.assign(N,m);
        else{
            ans[A[i] - 1]++;
            m = max(m,ans[A[i] - 1]);
        }
    }
    return ans;

}

int solution7(vector<int> &A) {
    map<long long,int> c;
    int max_num = 0,len = A.size();
    for (int i = 0; i < len; i++){
        c[A[i]]++;
        max_num = max(max_num,A[i]);
    }

    for (int i = max_num; i > max_num - len;i--){
        if (c.count(i) == 0) return 0;
    }
    return 1;
}

int main() {
    /**
    int ans = 0;
    vector<int> v = {1, 4, 4, 6, 1, 3, 4};
    //ans = solution3(v);
    //cout << "ans = " << ans;
    //sort_bubble_sort(v);
    //selection_sort(v);
    //Insertion_sort(v);
    //merge_sort(v,0,v.size()-1);



    //merge_sort(v,0,v.size() - 1);
    quick_sort(v,0,v.size() - 1);
    //vector<int> as = solution6(5,v);
    for (auto s:v)
        cout << s << ',' ;
    //vector<int> v = {4, 1, 3, 2};
    //cout << solution7(v);

    //cout << endl <<  "jump = " << solution4(1,v);
    **/

    /** Brigde
    MessagerImp* m1 = new PcMessagerBase();
    Messager* n1 = new MessagerLite(m1);
    n1->SendMessage();

    MessagerImp* m2 = new MobileMessagerBase();
    Messager* n2 = new MessagerLite(m2);
    n2->SendMessage();
    **/

    Factory* f1 = new BinaryFactory();
    ISplitter* i1 = f1->createSplitter();
    i1->split();
    delete f1;
    delete i1;

    Factory* f2 = new TextFactory();
    ISplitter* i2 = f2->createSplitter();
    i2->split();
    delete f2;
    delete i2;


    return 0;
}
