#include <iostream>
#include <future>
#include <chrono>

int task(int x) {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    return x * x;
}

int main() {
    std::future<int> fut = std::async(std::launch::async, task, 8);
    std::cout << "Result: " << fut.get() << std::endl;
    return 0;
}
