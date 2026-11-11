#include <iostream>
#include <thread>
#include <chrono>

void printMessage(const std::string& message) {
    for (int i = 0; i < 5; ++i) {
        std::cout << message << " " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

int main() {
    std::thread t1(printMessage, "Thread 1");
    std::thread t2(printMessage, "Thread 2");

    t1.join();
    t2.join();

    std::cout << "Threads finished." << std::endl;
    return 0;
}
