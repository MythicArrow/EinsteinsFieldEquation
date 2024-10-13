#include <iostream>
#include <cmath> 

// Constants
const double G = 6.67430e-11; // Gravitational constant (in m^3 kg^-1 s^-2)
const double c = 299792458;   // Speed of light (in m/s)

// Function to calculate G_{\mu\nu}
void calculateEinsteinTensor(double T[4][4], double G_mu_nu[4][4]) {
    // Calculate the factor: 8 * pi * G / c^4
    double factor = (8.0 * M_PI * G) / pow(c, 4);

    // Calculate G_{\mu\nu} = factor * T_{\mu\nu}
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            G_mu_nu[i][j] = factor * T[i][j];
        }
    }
}

int main() {
    // Declare the stress-energy tensor T_{\mu\nu} and Einstein tensor G_{\mu\nu}
    double T[4][4];
    double G_mu_nu[4][4];

    // Input the values of the stress-energy tensor T_{\mu\nu} from the user
    std::cout << "Enter the components of the stress-energy tensor T_{mu,nu} (4x4 matrix):\n";
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << "T[" << i << "][" << j << "] = ";
            std::cin >> T[i][j];
        }
    }

    // Calculate G_{\mu\nu}
    calculateEinsteinTensor(T, G_mu_nu);

    // Output the result
    std::cout << "\nEinstein Tensor G_{mu,nu}:\n";
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
                std::cout << G_mu_nu[i][j] << " ";
            }
            std::cout << std::endl;
            }
        
                return 0;
        }
