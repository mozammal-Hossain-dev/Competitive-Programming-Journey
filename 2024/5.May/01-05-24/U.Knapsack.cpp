#include <bits/stdc++.h>

using namespace std;

int totalItems, capacity;
vector<int> itemValues, itemWeights;

struct KnapsackItem {
  int index;
  int remainingCapacity;
  int currentMaxValue;
};

int knapsack(KnapsackItem item) {

  if (item.index >= totalItems || item.remainingCapacity < 0) {
    return 0;
  }

  KnapsackItem option1 = item, option2 = item;

  option1.index++;


  option2.index++;
  option2.remainingCapacity -= itemWeights[item.index];
  option2.currentMaxValue += itemValues[item.index];

  return (item.currentMaxValue + max(knapsack(option1),knapsack(option2)));
}

int main() {
  cin >> totalItems >> capacity;

  itemValues.resize(totalItems);
  itemWeights.resize(totalItems);

  for (int i = 0; i < totalItems; i++) {
    cin >> itemWeights[i] >> itemValues[i];
  }

  KnapsackItem startingItem = {0, capacity, 0};

  int maxValue = knapsack(startingItem);
  cout << maxValue << endl;

  return 0;
}
