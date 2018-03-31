#include <fstream>
#include "testFront.h"

using namespace std;

using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::Test;
using ::testing::TestEventListeners;
using ::testing::TestInfo;
using ::testing::TestPartResult;
using ::testing::UnitTest;

int main(int argc, char** argv){
    InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
    return 0;
}

