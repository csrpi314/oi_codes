#include <iostream>
#include <vector>
#include <map>

// 用户评分数据结构
struct UserRating {
    int userId;
    int itemId;
    int rating;
};

// 推荐算法类
class Recommender {
public:
    void addUserRating(const UserRating& rating) {
        userRatings.push_back(rating);
    }

    std::vector<int> recommendItems(int userId) {
        std::map<int, int> itemScores;

        // 计算用户之间的相似度
        for (const auto& rating : userRatings) {
            if (rating.userId == userId) {
                continue;  // 跳过当前用户
            }

            // 计算用户之间的相似度，这里简化为共同评分的物品数量
            int similarity = calculateSimilarity(userId, rating.userId);

            // 遍历该用户评分的物品
            for (const auto& itemRating : userRatings) {
                if (itemRating.userId == rating.userId) {
                    // 如果当前用户未评分该物品，则根据相似度累加推荐分数
                    if (itemScores.find(itemRating.itemId) == itemScores.end()) {
                        itemScores[itemRating.itemId] = similarity;
                    } else {
                        itemScores[itemRating.itemId] += similarity;
                    }
                }
            }
        }

        // 根据推荐分数排序，返回推荐的物品
        std::vector<int> recommendedItems;
        for (const auto& itemScore : itemScores) {
            recommendedItems.push_back(itemScore.first);
        }
        return recommendedItems;
    }

private:
    std::vector<UserRating> userRatings;

    int calculateSimilarity(int userId1, int userId2) {
        // 在实际应用中，可以根据更复杂的相似度计算方法来计算用户之间的相似度
        // 这里简化为共同评分的物品数量
        int similarity = 0;
        for (const auto& rating : userRatings) {
            if (rating.userId == userId1 || rating.userId == userId2) {
                similarity++;
            }
        }
        return similarity;
    }
};

int main() {
    Recommender recommender;

    // 添加用户评分数据
    recommender.addUserRating({1, 1, 5});
    recommender.addUserRating({1, 2, 4});
    recommender.addUserRating({1, 3, 3});
    recommender.addUserRating({2, 1, 4});
    recommender.addUserRating({2, 2, 5});
    recommender.addUserRating({2, 4, 2});
    recommender.addUserRating({3, 2, 3});
    recommender.addUserRating({3, 3, 4});
    recommender.addUserRating({3, 4, 5});

    // 根据用户ID进行推荐
    std::vector<int> recommendedItems = recommender.recommendItems(1);

    // 输出推荐的物品
    std::cout << "Recommended items for user 1:" << std::endl;
    for (const auto& itemId : recommendedItems) {
        std::cout << itemId << std::endl;
    }

    return 0;
}
