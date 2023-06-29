#include <chrono>
#include <iostream>
#include <thread>

void loadbar();

int main() {

  loadbar();

  return 0;
}

void loadbar() {

  const int total_progress = 100;
  const int bar_width = 50;
  for (int i = 0; i <= total_progress; ++i) {
    float progress_percent = static_cast<float>(i) / total_progress;
    int bar_filled = static_cast<int>(progress_percent * bar_width);
    std::cout << '[';
    for (int j = 0; j < bar_width; ++j) {
      if (j < bar_filled) {
        std::cout << '#';
      } else {
        std::cout << ' ';
      }
    }
    std::cout << "] " << static_cast<int>(progress_percent * 100) << "%\r";
    std::cout.flush();
  }
  std::cout << std::endl;
}
