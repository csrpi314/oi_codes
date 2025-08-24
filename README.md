# oi_codes

这是一个包含多种C++算法实现的代码库，涵盖了高精度计算、排序算法、二分查找、素数筛、字符串处理等多个领域，还包括一些竞赛题目的解答。

## 文件分类

### 1. 高精度计算

- `high_precision_addition.cpp` - 高精度加法（带进位处理）
- `high_precision_addition_bug.cpp` - 高精度加法（有bug，未完成）
- `high_precision_division.cpp` - 高精度除法
- `high_precision_division_variant.cpp` - 高精度除法（另一个版本）
- `high_precision_multiplication_int.cpp` - 高精度乘法（大数乘整数）
- `high_precision_multiplication_big.cpp` - 高精度乘法（大数乘大数）
- `high_precision_subtraction.cpp` - 高精度减法

### 2. 排序算法

- `approximate_sorting.cpp` - 蓝桥杯近似排序题目解答
- `bubble_sort.cpp` - 冒泡排序
- `bubble_sort_count_swaps.cpp` - 冒泡排序并统计交换次数
- `insertion_sort.cpp` - 插入排序
- `selection_sort_with_index.cpp` - 选择排序并保留原始索引
- `sort_by_last_digit.cpp` - 根据数字的个位数进行排序
- `sort_by_reversed_value.cpp` - 按数字反转后的值排序
- `sort_elderly_first.cpp` - 将人员分为老年人和年轻人，对老年人按年龄降序排序
- `sort_even_numbers_descending.cpp` - 提取偶数并降序排序
- `sort_strings_by_int.cpp` - 根据整数数组对字符串数组进行同步排序
- `sort_with_index_and_calc_weighted_avg.cpp` - 对数组排序并保留原始索引，然后计算加权平均值
- `split_array_two_parts.cpp` - 将数组分成两部分，使和尽可能接近

### 3. 二分查找

- `binary_search_common_elements.cpp` - 使用二分查找两个数组中的共同元素
- `binary_search_count_pairs.cpp` - 使用二分查找统计数组中满足条件的数对数量
- `binary_search_left_bound.cpp` - 二分查找左边界（标准实现）
- `binary_search_left_right.cpp` - 实现二分查找的左边界和右边界查找
- `binary_search_min_distance.cpp` - 二分查找最小距离最大值（类似"跳石头"问题）
- `binary_search_min_distance_variant.cpp` - 二分查找最小距离最大值（另一个版本）
- `binary_search_standard.cpp` - 标准二分查找模板
- `binary_search_with_index_preservation.cpp` - 排序时保留原始索引，然后使用二分查找查询值的原始位置

### 4. 素数筛

- `eratosthenes_sieve.cpp` - 埃氏筛法求素数
- `eratosthenes_sieve_snippet.cpp` - 埃氏筛法代码片段
- `eratosthenes_sieve_variant.cpp` - 埃氏筛法（另一个版本）
- `euler_sieve.cpp` - 欧拉筛法（线性筛）
- `prime_demo_snippet.cpp` - 不完整的素数相关代码片段
- `twin_primes.cpp` - 找出所有孪生素数对
- `three_primes_sum.cpp` - 找出三个素数使其和等于给定数

### 5. 字符串处理

- `capitalize_words.cpp` - 将每个单词的首字母大写，其余小写
- `capitalize_words_variant.cpp` - 将每个单词的首字母大写（另一个版本）
- `count_char_types.cpp` - 统计字符串中大写字母、小写字母、空格、数字、符号的数量
- `count_substring_occurrences.cpp` - 统计子串"lanqiao"的出现次数
- `check_substring_exists.cpp` - 检查子串是否存在
- `find_all_palindromic_substrings.cpp` - 找出所有回文子串
- `insert_string_in_middle.cpp` - 在字符串中间插入另一个字符串
- `longest_common_substring.cpp` - 求两个字符串的最长公共子串长度
- `most_frequent_letter.cpp` - 统计字符串中出现最频繁的字母
- `palindrome_check.cpp` - 判断字符串是否为回文
- `remove_suffix.cpp` - 去除字符串末尾的"er", "ly", "ing"后缀
- `replace_substring.cpp` - 替换字符串中的子串
- `reverse_each_word.cpp` - 反转每个单词
- `reverse_words.cpp` - 反转句子中的单词
- `reverse_words_variant.cpp` - 反转句子中的单词（另一个版本）

### 6. 竞赛题目解答

- `find_number_by_mod.cpp` - 根据模数和余数查找数字（类似蓝桥杯"数列查询"问题）
- `point_distance_sorted_by_height.cpp` - 按高度排序三维点后计算总距离
- `student_sort_by_score.cpp` - 按成绩降序、学号升序排序学生
- `scholarship_calculation.cpp` - NOIP奖学金计算
- `volunteer_selection.cpp` - NOIP志愿者选拔问题（面试分数线划定）

### 7. 工具函数/片段

- `base_converter.cpp` - 进制转换工具（十进制与八进制、十六进制互转）
- `check_function_snippet.cpp` - 不完整的检查函数片段
- `combination_simplified.cpp` - 计算组合数C(m, n)的简化版本
- `reverse_integer.cpp` - 整数反转工具函数
- `reverse_word_order.cpp` - 反转单词顺序

### 8. 其他算法

- `binary_search_count_pairs_variant.cpp` - 使用二分查找统计数对（另一个版本）
- `jolly_jumpers_check.cpp` - 判断序列是否为"Jolly Jumper"
- `min_boxes_to_reach_height.cpp` - 最少需要多少箱子才能达到高度h
- `recommendation_system.cpp` - 基于用户评分的简单推荐系统