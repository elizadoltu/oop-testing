#include "gtest/gtest.h"
#include <vector>
#include "quicksort.h"
#include "bubblesort.h"
#include "mergesort.h"

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
    quickSort(arr, 0, static_cast<int>(arr.size()) - 1);S
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

TEST(BubbleSortTest, BasicTest) {
    std::vector<int> arr = { 5, 3, 8, 4, 2 };
    bubbleSort(arr);
    std::vector<int> expected = { 2, 3, 4, 5, 8 };
    EXPECT_EQ(arr, expected);
}

TEST(BubbleSortTest, AlreadySorted) {
    std::vector<int> arr = { 1, 2, 3, 4, 5 };
    bubbleSort(arr);
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    EXPECT_EQ(arr, expected);
}

TEST(BubbleSortTest, ReverseSorted) {
    std::vector<int> arr = { 5, 4, 3, 2, 1 };
    bubbleSort(arr);
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    EXPECT_EQ(arr, expected);
}

TEST(BubbleSortTest, SingleElement) {
    std::vector<int> arr = { 1 };
    bubbleSort(arr);
    std::vector<int> expected = { 1 };
    EXPECT_EQ(arr, expected);
}

TEST(BubbleSortTest, EmptyArray) {
    std::vector<int> arr;
    bubbleSort(arr);
    std::vector<int> expected;
    EXPECT_EQ(arr, expected);
}


TEST(MergeSortTest, AlreadySorted) {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6};
    mergeSort(arr, 0, static_cast<int>(arr.size()) - 1);
    std::vector<int> expected = {1, 2, 3, 4, 5, 6};
    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTest, ReverseSorted) {
    std::vector<int> arr = {6, 5, 4, 3, 2, 1};
    mergeSort(arr, 0, static_cast<int>(arr.size()) - 1);
    std::vector<int> expected = {1, 2, 3, 4, 5, 6};
    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTest, Unsorted) {
    std::vector<int> arr = {10, 7, 8, 9, 1, 5};
    mergeSort(arr, 0, static_cast<int>(arr.size()) - 1);
    std::vector<int> expected = {1, 5, 7, 8, 9, 10};
    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTest, SingleElement) {
    std::vector<int> arr = {1};
    mergeSort(arr, 0, static_cast<int>(arr.size()) - 1);
    std::vector<int> expected = {1};
    EXPECT_EQ(arr, expected);
}

TEST(MergeSortTest, EmptyArray) {
    std::vector<int> arr;
    mergeSort(arr, 0, static_cast<int>(arr.size()) - 1);
    std::vector<int> expected;
    EXPECT_EQ(arr, expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
