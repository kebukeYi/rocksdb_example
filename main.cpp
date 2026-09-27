#include <rocksdb/db.h>
#include <rocksdb/options.h>
#include <stdlib.h>
#include <time.h>

#include <chrono>
#include <cstdint>
#include <iostream>
#include <random>
#include <string>
#include <thread>
#include <vector>

#include "test/test_open.h"

using namespace std;

int main() {
    TestOpen();
    // TestOpenForReadOnly();
    // TestSecondary();
    return 0;
}