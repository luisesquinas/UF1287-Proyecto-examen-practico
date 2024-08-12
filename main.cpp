#include <iostream>
#include <vector>
#include <random>
#include <conio.h>
#include <cstdlib>

int main() {
    std::vector<std::string> opciones = {
        "Akali + Zed (wombo ninja)",
        "Akshan + Pyke (wombo invisible)",
        "Ashe + Mundo (Los frenadores del infierno)",
        "Chino + Pantheon",
        "Darius + Sett (duo mascachapa)",
        "Galio + Shen",
        "Graves + Teemo (combo cegador)",
        "Kaisa + Cartitas",
        "Lux + Morgana",
        "Maokai + Teemo (wombo de cagadiñas)",
        "Nautilus + Leona (wombo de stun infinito)",
        "Nocturne + Cartitas (wombo de ultis)",
        "Olaf + Mundo (duo de hachazos al horto)",
        "Seraphine + Sona (doble sona combo)",
        "Sion + Shen (tiratorres)",
        "Tahm + Yasuo",
        "Tahm + Zac (doble catapulta)",
        "Talon + Zed (wombo de asesinos)",
        "Tresh + Blitz (wombo de ganchos)",
        "Urgot + Singed (doble catapulta)",
        "Varus + Ashe (wombo ulti de flechas)",
        "Vexx + Neeko",
        "Xerath + Lux (castigadores del infierno)"
    };

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, opciones.size() - 1); // Inicialización correcta

    while (!opciones.empty()) {
        int indice_aleatorio = dis(gen);

        system("cls");
        std::cout << opciones[indice_aleatorio] << "\n\n";
        std::cout << "Si no te atreves con este wombo, pulsa Enter para generar un nuevo resultado, o Escape para salir.\n";

        opciones.erase(opciones.begin() + indice_aleatorio);

        if (opciones.empty()) {
            system("cls");
            std::cout << "Elije uno, pesado\n";
            break;
        }

        char tecla = _getch();
        if (tecla == 27) { 
            break;
        }

        // Actualiza la distribución después de eliminar una opción
        dis = std::uniform_int_distribution<>(0, opciones.size() - 1);
    }

    return 0;
}
