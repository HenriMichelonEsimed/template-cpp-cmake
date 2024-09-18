#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>

// Importation de l'exercice
import Exo1;
using namespace Exo1;

// Exemple de test unitaire
TEST_CASE("Exo1", "[MyClass]") {
    auto obj1 = MyClass{};
    REQUIRE(obj1.GetValue() == 0);

    obj1.SetValue(123);
    REQUIRE(obj1.GetValue() == 123);
    REQUIRE(obj1.ToString() == "123.00");

    const MyClass obj2{456};
    REQUIRE(obj2.GetValue() == 456);
    REQUIRE(obj2.ToString() == "456.00");

}
