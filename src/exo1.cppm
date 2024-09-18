// Nom de ce module
export module Exo1;

// Import rapide de la bibliothèque standard
import std;

// On met toutes les classes du module dans un espace de nom
// ayant le même nom que le module pour plus de clarté et éviter
// les conflits de nommage.
// On exporte la totalité des classe de l'espace de nom.
export namespace Exo1 {

    // Exemple de classe pour convention de nommage
    class MyClass {
    private:
        // Prendre l'habitude d'utiliser la syntaxe moderne d'initialisation
        // identique pour tous les types de données : simples, class, struct, ...
        double mValue{0.0};

    public:
        MyClass() = default;

        MyClass(double value): mValue{value} {}

        // Ne pas oublier d'être "const-correct"
        double GetValue() const { return mValue; }

        void SetValue(double value) { mValue = value; }

        std::string ToString() const {
            return std::format("{0:.2f}", mValue);
        }
    };

    // Exemple de classe utilisée dans la fonction main()
    class Application {
    public:
        // Tout le code de l'exercice doit être dans ce constructeur
        Application() {
            std::cout << "Hello from Exo1::Application()\n";
            // Par défaut les variables sont constantes et on utilise l'inférence de type avec "auto"
            // ainsi que la syntaxe moderne d'instanciation automatique avec {}
            const auto obj1 = MyClass{123.456};
            std::cout << obj1.ToString() << std::endl;
        }
    };

}