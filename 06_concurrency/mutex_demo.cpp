#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;

void safePrint(int id) {
    std::lock_guard<std::mutex> lock(mtx);
    std::cout << "Thread " << id << " printing safely." << std::endl;
}

int main() {
    std::thread t1(safePrint, 1);
    std::thread t2(safePrint, 2);
    std::thread t3(safePrint, 3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
