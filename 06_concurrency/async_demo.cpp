#include <algorithm>
#include <chrono>
#include <future>
#include <iostream>
#include <thread>

int task(int x) {
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    return x * x;
}

int main() {
    std::future<int> result = std::async(std::launch::async, task, 8);
    std::cout << "Result: " << result.get() << '\n';
    return 0;
}
