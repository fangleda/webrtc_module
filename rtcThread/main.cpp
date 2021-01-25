#include <iostream>
#include <functional>

#include "rtc_base/bind.h"
#include "rtc_base/messagehandler.h"
#include "rtc_base/thread.h"
 
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "ws2_32.lib")

int main(int, char**) {
    std::cout << "Hello, world!\n";
    //rtc::ThreadManager::Instance()->WrapCurrentThread();
    std::unique_ptr<rtc::Thread> test_thread = rtc::Thread::Create();
    test_thread->SetName("test_thread", nullptr);
    test_thread->Start();

    rtc::FunctorMessageHandler<void, std::function<void()>> handler([] {
        std::cout << "world hello" << std::endl;
    });
    test_thread->Post(RTC_FROM_HERE, &handler);

    test_thread->Invoke<void>(RTC_FROM_HERE, []() {
        std::cout << "hello" << std::endl;
    });

    std::cout << "world" << std::endl;
    //rtc::ThreadManager::Instance()->UnwrapCurrentThread();
}
