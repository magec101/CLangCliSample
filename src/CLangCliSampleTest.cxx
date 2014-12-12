/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XmlPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::XmlPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XmlPrinter >( tmp, argc, argv );
    return status;
}
bool suite_CLangCliSampleTest_init = false;
#include "/var/www/html/codeit/workspace/CLangCliSample/src/CLangCliSampleTest.h"

static CLangCliSampleTest suite_CLangCliSampleTest;

static CxxTest::List Tests_CLangCliSampleTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_CLangCliSampleTest( "/var/www/html/codeit/workspace/CLangCliSample/src/CLangCliSampleTest.h", 5, "CLangCliSampleTest", suite_CLangCliSampleTest, Tests_CLangCliSampleTest );

static class TestDescription_suite_CLangCliSampleTest_test_Unit_Test_1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_CLangCliSampleTest_test_Unit_Test_1() : CxxTest::RealTestDescription( Tests_CLangCliSampleTest, suiteDescription_CLangCliSampleTest, 15, "test_Unit_Test_1" ) {}
 void runTest() { suite_CLangCliSampleTest.test_Unit_Test_1(); }
} testDescription_suite_CLangCliSampleTest_test_Unit_Test_1;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
