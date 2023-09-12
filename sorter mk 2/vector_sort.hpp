
#ifndef VECTOR_SORT_HPP
#define VECTOR_SORT_HPP
class vector_base_sort {
public:
    void swap(vector<int>& ar, int index1, int index2) {
        int indexs1 = ar[index1];
        int indexs2 = ar[index2];
        ar[index1] = indexs2;
        ar[index2] = indexs1;
    }
    void shuffle(vector<int>& shufflearray, int n) {
        srand(time(NULL));
        for (int i = 0; i < n; i++) {
            shufflearray[i] = i + 1;
        }
        //is this unnessisary? yes. do I care? no. will I change it? probably not.
        for (int i = 0; i < n; i++) {
            swap(shufflearray, i, rand() % n);
        }
    }
    void printarray(vector<int> ar, int len) {
        for (int i = 0; i < len; i++) {
            std::cout << ar[i] << " : ";
        }
        std::cout << std::endl;
    }
    void sort(vector<int>& ar, int len) {
        int correct = 0;
        while (correct != len) {
            for (int i = 0; i < len; i++) {
                if ((ar[i] > ar[static_cast<std::vector<int, std::allocator<int>>::size_type>(i) + 1])) {
                    swap(ar, i, i + 1);
                }
            }
            for (correct = 0; correct < len; correct++) {
                if (ar[correct] > ar[static_cast<std::vector<int, std::allocator<int>>::size_type>(correct) + 1]) {
                    break;
                }
            }
        }
    }
    bool check(vector<int>& ar, int len) {
        int checks = 0;
        for (checks; checks < len - 1; checks++) {
            if (ar[checks] > ar[checks + 1]) {
                return false;
            }
        }
        return true;
    }
};
#endif