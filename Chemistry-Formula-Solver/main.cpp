#include <iostream>
#include <iomanip>

#define PRECISION_LEVEL 4

std::string x;
bool invalid = false;

double boyOperation();
double charOperation();
double lusOperation();
double avogOperation();
double idealOperation();

int selectLaw() {
    system("clear");
    std::cout << "Please select the law to solve with." << std::endl <<
    "1.) Boyle's Law - P1 x V1 = P2 x V2" << std::endl <<
    "2.) Charles' Law - V1/T1 = V2/T2" << std::endl <<
    "3.) Gay-Lussac's Law - P1/T1 = P2/T2" << std::endl <<
    "4.) Avogadro's Principle - V1/n1 = V2/n2" << std::endl <<
    "5.) Ideal Gas Law - PV = nRT" << std::endl;
    if(invalid) {
        std::cout << "Please enter a valid option!" << std::endl << std::endl;
    }
    std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(PRECISION_LEVEL);
    std::cin >> x;
    system("clear");
    invalid = false;
    if (x == "1") {
        std::cout << boyOperation() << std::endl;
        std::cin.get();
    } else if (x == "2") {
        std::cout << charOperation() << std::endl;
        std::cin.get();
    } else if (x == "3") {
        std::cout << lusOperation() << std::endl;
        std::cin.get();
    } else if (x == "4") {
        std::cout << avogOperation() << std::endl;
        std::cin.get();
    } else if (x == "5") {
        std::cout << idealOperation() << std::endl;
        std::cin.get();
    } else {
        invalid = true;
        selectLaw();
    }
    return 0;
}

double boyOperation() {
    std::string variableStr;
    double P1;
    double P2;
    double V1;
    double V2;
    std::cout << "P1 x V1 = P2 x V2" << std::endl << "Which variable are you solving for?" << std::endl;
    std::cin >> variableStr;
    system("clear");
    if (variableStr == "P1") {
        std::cout << "What is the value of P2?" << std::endl;
        std::cin >> P2;
        std::cout << "What is the value of V1?" << std::endl;
        std::cin >> V1;
        std::cout << "What is the value of V2?" << std::endl;
        std::cin >> V2;
        P1 = (P2 * V2)/V1;
        return P1;
    } else if (variableStr == "P2") {
        std::cout << "What is the value of P1?" << std::endl;
        std::cin >> P1;
        std::cout << "What is the value of V1?" << std::endl;
        std::cin >> V1;
        std::cout << "What is the value of V2?" << std::endl;
        std::cin >> V2;
        P2 = (P1 * V1)/V2;
        return P2;
    } else if (variableStr == "V1") {
        std::cout << "What is the value of P1?" << std::endl;
        std::cin >> P1;
        std::cout << "What is the value of P2?" << std::endl;
        std::cin >> P2;
        std::cout << "What is the value of V2?" << std::endl;
        std::cin >> V2;
        V1 = (P2 * V2)/P1;
        return V1;
    } else if (variableStr == "V2") {
        std::cout << "What is the value of P1?" << std::endl;
        std::cin >> P1;
        std::cout << "What is the value of P2?" << std::endl;
        std::cin >> P2;
        std::cout << "What is the value of V1?" << std::endl;
        std::cin >> V1;
        V2 = (P1 * V1)/P2;
        return V2;
    } else {
        std::cout << "Please enter a valid option!" << std::endl;
        boyOperation();
    }
    return 0;
}

double charOperation() {
    std::string variableStr;
    double V1;
    double V2;
    double T1;
    double T2;
    std::cout << "V1/T1 = V2/T2" << std::endl << "Which variable are you solving for?" << std::endl;
    std::cin >> variableStr;
    system("clear");
    if (variableStr == "V1") {
        std::cout << "What is the value of T1 in Kelvin?" << std::endl;
        std::cin >> T1;
        std::cout << "What is the value of V2?" << std::endl;
        std::cin >> V2;
        std::cout << "What is the value of T2 in Kelvin?" << std::endl;
        std::cin >> T2;
        V1 = (V2/T2)*T1;
        return V1;
    } else if (variableStr == "V2") {
        std::cout << "What is the value of T1 in Kelvin?" << std::endl;
        std::cin >> T1;
        std::cout << "What is the value of T2 in Kelvin?" << std::endl;
        std::cin >> T2;
        std::cout << "What is the value of V1?" << std::endl;
        std::cin >> V1;
        V2 = (V1/T1)*T2;
        return V2;
    } else if (variableStr == "T1") {
        std::cout << "What is the value of T2 in Kelvin?" << std::endl;
        std::cin >> T2;
        std::cout << "What is the value of V1?" << std::endl;
        std::cin >> V1;
        std::cout << "What is the value of V2?" << std::endl;
        std::cin >> V2;
        T1 = V1/(V2/T2);
        return T1;
    } else if (variableStr == "T2") {
        std::cout << "What is the value of T1 in Kelvin?" << std::endl;
        std::cin >> T1;
        std::cout << "What is the value of V1?" << std::endl;
        std::cin >> V1;
        std::cout << "What is the value of V2?" << std::endl;
        std::cin >> V2;
        T2 = V2/(V1/T1);
        return T2;
    } else {
        std::cout << "Please enter a valid option!" << std::endl;
        charOperation();
    }
    return 0;
}

double lusOperation() {
    std::string variableStr;
    double P1;
    double P2;
    double T1;
    double T2;
    std::cout << "P1/T1 = P2/T2" << std::endl << "Which variable are you solving for?" << std::endl;
    std::cin >> variableStr;
    system("clear");
    if (variableStr == "P1") {
        std::cout << "What is the value of P2?" << std::endl;
        std::cin >> P2;
        std::cout << "What is the value of T1 in Kelvin?" << std::endl;
        std::cin >> T1;
        std::cout << "What is the value of T2 in Kelvin?" << std::endl;
        std::cin >> T2;
        P1 = (P2/T2)*T1;
        return P1;
    } else if (variableStr == "P2") {
        std::cout << "What is the value of P1?" << std::endl;
        std::cin >> P1;
        std::cout << "What is the value of T1 in Kelvin?" << std::endl;
        std::cin >> T1;
        std::cout << "What is the value of T2 in Kelvin?" << std::endl;
        std::cin >> T2;
        P2 = (P1/T1)*T2;
        return P2;
    } else if (variableStr == "T1") {
        std::cout << "What is the value of P1?" << std::endl;
        std::cin >> P1;
        std::cout << "What is the value of P2?" << std::endl;
        std::cin >> P2;
        std::cout << "What is the value of T2 in Kelvin?" << std::endl;
        std::cin >> T2;
        T1 = P1/(P2/T2);
        return T1;
    } else if (variableStr == "T2") {
        std::cout << "What is the value of P1?" << std::endl;
        std::cin >> P1;
        std::cout << "What is the value of P2" << std::endl;
        std::cin >> P2;
        std::cout << "What is the value of T1 in Kelvin?" << std::endl;
        std::cin >> T1;
        T2 = P2/(P1/T1);
        return T2;
    } else {
        std::cout << "Please enter a valid option!" << std::endl;
        lusOperation();
    }
    return 0;
}

double avogOperation() {
    std::string variableStr;
    double V1;
    double V2;
    double n1;
    double n2;
    std::cout << "V1/n1 = V2/n2" << std::endl << "Which variable are you solving for?" << std::endl;
    std::cin >> variableStr;
    system("clear");
    if (variableStr == "V1") {
        std::cout << "What is the value of V2?" << std::endl;
        std::cin >> V2;
        std::cout << "What is the value of n1?" << std::endl;
        std::cin >> n1;
        std::cout << "What is the value of n2?" << std::endl;
        std::cin >> n2;
        V1 = (V2/n2)*n1;
        return V1;
    } else if (variableStr == "V2") {
        std::cout << "What is the value of V1?" << std::endl;
        std::cin >> V1;
        std::cout << "What is the value of n1?" << std::endl;
        std::cin >> n1;
        std::cout << "What is the value of n2?" << std::endl;
        std::cin >> n2;
        V2 = (V1/n1)*n2;
        return V2;
    } else if (variableStr == "n1") {
        std::cout << "What is the value of V1?" << std::endl;
        std::cin >> V1;
        std::cout << "What is the value of V2?" << std::endl;
        std::cin >> V2;
        std::cout << "What is the value of n2?" << std::endl;
        std::cin >> n2;
        n1 = V1/(V2/n2);
        return n1;
    } else if (variableStr == "n2") {
        std::cout << "What is the value of V1?" << std::endl;
        std::cin >> V1;
        std::cout << "What is the value of V2?" << std::endl;
        std::cin >> V2;
        std::cout << "What is the value of n1?" << std::endl;
        std::cin >> n1;
        n2 = V2/(V1/n1);
        return n2;
    } else {
        std::cout << "Please enter a valid option!" << std::endl;
        avogOperation();
    }
    return 0;
}

double idealOperation() {
    std::string variableStr;
    double P;
    double V;
    double n;
    double T;
    std::cout << "Are you using atmoshperes or kilopascals?" << std::endl << 
    "1.) Atmospheres" << std::endl <<
    "2.) Kilopascals" << std::endl;
    std::cin >> x;
    system("clear");
    if (x != "1" && x != "2") {
        std::cout << "Please enter a valid option!" << std::endl;
        idealOperation();
    }
    double R;
    if (x == "1")
        R = 0.0821;
    else
        R = 8.3150;
    std::cout << "PV = nRT" << std::endl << "Which variable are you solving for?" << std::endl;
    std::cin >> variableStr;
    system("clear");
    if (variableStr == "P") {
        std::cout << "What is the value of V?" << std::endl;
        std::cin >> V;
        std::cout << "What is the value of n?" << std::endl;
        std::cin >> n;
        std::cout << "What is the value of T?" << std::endl;
        std::cin >> T;
        P = (n*R*T)/V;
        return P;
    } else if (variableStr == "V") {
        std::cout << "What is the value of P?" << std::endl;
        std::cin >> P;
        std::cout << "What is the value of n?" << std::endl;
        std::cin >> n;
        std::cout << "What is the value of T?" << std::endl;
        std::cin >> T;
        V = (n*R*T)/P;
        return V;
    } else if (variableStr == "n") {
        std::cout << "What is the value of P?" << std::endl;
        std::cin >> P;
        std::cout << "What is the value of V?" << std::endl;
        std::cin >> V;
        std::cout << "What is the value of T?" << std::endl;
        std::cin >> T;
        n = (P*V)/(R*T);
        return n;
    } else if (variableStr == "T") {
        std::cout << "What is the value of P?" << std::endl;
        std::cin >> P;
        std::cout << "What is the value of V?" << std::endl;
        std::cin >> V;
        std::cout << "What is the value of n?" << std::endl;
        std::cin >> n;
        T = (P*V)/(n*R);
        return T;
    } else {
        std::cout << "Please enter a valid option!" << std::endl;
        idealOperation();
    }
    return 0;
}

int main() {
    selectLaw();
}