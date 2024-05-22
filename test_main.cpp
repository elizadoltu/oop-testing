#include <gtest/gtest.h>
#include <vector>
#include "quicksort.h"

TEST(SwapTest, BasicTest) {
    int a = 5;
    int b = 10;
    swap(a, b);
    EXPECT_EQ(a, 10);
    EXPECT_EQ(b, 5);
}

TEST(PartitionTest, BasicTest) {
    std::vector<int> arr = {10, 7, 8, 9, 1, 5};
    int pi = partition(arr, 0, static_cast<int>(arr.size()) - 1);
    EXPECT_EQ(pi, 5);
    std::vector<int> expected = {10, 7, 8, 9, 5, 1};
    EXPECT_EQ(arr, expected);
}

TEST(QuickSortTest, AlreadySorted) {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6};
    quickSort(arr, 0, static_cast<int>(arr.size()) - 1);
    std::vector<int> expected = {1, 2, 3, 4, 5, 6};
    EXPECT_EQ(arr, expected);
}

TEST(QuickSortTest, ReverseSorted) {
    std::vector<int> arr = {6, 5, 4, 3, 2, 1};
    quickSort(arr, 0, static_cast<int>(arr.size()) - 1);
    std::vector<int> expected = {1, 2, 3, 4, 5, 6};
    EXPECT_EQ(arr, expected);
}

TEST(QuickSortTest, Unsorted) {
    std::vector<int> arr = {10, 7, 8, 9, 1, 5};
    quickSort(arr, 0, static_cast<int>(arr.size()) - 1);
    std::vector<int> expected = {1, 5, 7, 8, 9, 10};
    EXPECT_EQ(arr, expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
