#ifndef INC_3SEM_LAB7_ALGORITHM_H
#define INC_3SEM_LAB7_ALGORITHM_H

#include <algorithm>

namespace algorithm {
    template <typename Iterator, typename Predicate>
    Iterator search(Iterator first, Iterator last, Predicate condition) {
        while (first != last) {
            if (condition(*first)) {
                return first;
            }
            ++first;
        }
        return last;
    }
    template <typename Iterator, typename Compare>
    void sort(Iterator first, Iterator last, Compare compare) {
        std::sort(first, last, compare);
    }
}


#endif //INC_3SEM_LAB7_ALGORITHM_H
