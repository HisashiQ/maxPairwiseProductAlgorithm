#include <iostream>
#include <vector>
#include <cstdlib>

long long maxPairwiseProduct(std::vector<long long>&numbers);

int main(){
int n = 0;
std::cin >> n;
std::vector<long long> numbers(n);
for (int i = 0; i < n; i++){
  std::cin >> numbers[i];
}
// COMMENT OUT ABOVE AND REMOVE COMMENTS BELOW TO STRESS TEST

// int n = 100000;
// std::vector<long long> numbers(n);
// for (int i = 0; i < n; i++){
//   numbers.push_back(rand() % 500000);
//   std::cout << numbers.back() << '\n';
// }
std::cout << maxPairwiseProduct(numbers) << '\n';
return 0;
}
long long maxPairwiseProduct(std::vector<long long>&numbers){
  int indexOne = -1;
  for (int i = 0; i < numbers.size(); i++){
    if ((indexOne == -1) || (numbers[i] > numbers[indexOne])){
      indexOne = i;
    }
  }

  int indexTwo = 0;
  for (int j = 0; j < numbers.size(); j++){
    if((j != indexOne) && ((indexTwo == -1) || (numbers[j] > numbers[indexTwo]) || (indexOne == 0) )){
      indexTwo = j;
    }
  }
  std::cout << indexOne << " : " << numbers[indexOne] << "/" << indexTwo << " : " << numbers[indexTwo]  << '\n';
  return (numbers[indexOne] * numbers[indexTwo]);
}
