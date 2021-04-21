#include "NumberWithUnits.hpp"
#include "doctest.h"
#include <iostream>

using namespace std;
using namespace ariel;

NumberWithUnits m{100,"m"};
NumberWithUnits km{1,"km"};
NumberWithUnits hour{1,"hour"};
NumberWithUnits minute{1,"min"};

TEST_CASE("Arithmetic operators") {
    CHECK((km+m) == NumberWithUnits{1.1,"km"});
    CHECK((m+km) == NumberWithUnits{1000,"m"});
    CHECK((km-m) == NumberWithUnits{0.9,"km"});
    CHECK((m-km) == NumberWithUnits{900,"m"});
    CHECK((km+=m) == NumberWithUnits{1.1,"km"});
    CHECK((km-=m) == NumberWithUnits{0.9,"km"});
    CHECK_THROWS(km+hour);
    CHECK_THROWS(km-hour);
    CHECK_THROWS(km-=hour);
    CHECK_THROWS(km+=hour);
}

TEST_CASE("Multipication operators") {
    CHECK((km*2) == NumberWithUnits{2,"km"});
    CHECK((2*km) == NumberWithUnits{2,"km"});
}

TEST_CASE("Boolean operators") {
    CHECK_FALSE(km < m);
    CHECK_EQ(km, m);
    CHECK_NE(km, m);
    CHECK_FALSE(hour < minute);
    CHECK_EQ(hour, minute);
    CHECK_NE(hour, minute);
}

TEST_CASE("Increment and Decrement operators") {
    CHECK((m++) == NumberWithUnits{100,"m"});
    CHECK((++m) == NumberWithUnits{101,"m"});
    CHECK((m--) == NumberWithUnits{100,"m"});
    CHECK((--m) == NumberWithUnits{99,"m"});
}
