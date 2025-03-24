#include <iostream>
#include <thread>

void runLogAnalysis(const std::string& filename, int threadCount);

int main()
{
    std::string filename    = "logfile.txt";
    int         threadCount = 4;

    runLogAnalysis(filename, threadCount);
    return 0;
}
