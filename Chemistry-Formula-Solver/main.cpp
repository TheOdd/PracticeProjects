#include <iostream>
#include <iomanip>
#include <vector>

std::string x;
bool invalidMenu = false;
int target;
std::string variableStr;
std::vector<double> options = {0, 0, 0, 0};

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
    if(invalidMenu) {
        std::cout << "Please enter a valid option!" << std::endl << std::endl;
    }
    std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(4);
    std::cin >> x;
    system("clear");
    invalidMenu = false;
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
        invalidMenu = true;
        selectLaw();
    }
    return 0;
}

double boyOperation() {
    std::vector<std::string> stringOptions = {"P1", "P2", "V1", "V2"};
    int P1 = 0, P2 = 1, V1 = 2, V2 = 3;
    std::cout << "P1 x V1 = P2 x V2" << std::endl << "Which variable are you solving for?" << std::endl;
    std::cin >> variableStr;
    system("clear");
    bool invalid = true;
    while (invalid) {
        for (int i = 0; i < 4; i++) {
            if (variableStr == stringOptions[i])
            invalid = false;
        }
        if (invalid) {
            system("clear");
            std::cout << "Please enter a valid option!" << std::endl;
            std::cin >> variableStr;
        }
    }
    for (int i = 0; i < 4; i++) {
        if (variableStr == stringOptions[i]) {
            target = i;
            continue;
        }
        else {
            std::cout << "What is the value of " << stringOptions[i] << "?" << std::endl;
            std::cin >> options[i];
        }
    }
    if (target == P1) {
        return (options[P2]*options[V2])/options[V1];
    } else if (target == P2) {
        return (options[P1]*options[V1])/options[V2];
    } else if (target == V1) {
        return (options[P2]*options[V2])/options[P1];
    } else if (target == V2) {
        return (options[P1]*options[V1])/options[P2];
    }
    return 0;
}

double charOperation() {
    std::vector<std::string> stringOptions = {"V1", "V2", "T1", "T2"};
    int V1 = 0, V2 = 1, T1 = 2, T2 = 3;
    std::cout << "V1/T1 = V2/T2" << std::endl << "Which variable are you solving for?" << std::endl;
    std::cin >> variableStr;
    system("clear");
    bool invalid = true;
    while (invalid) {
        for (int i = 0; i < 4; i++) {
            if (variableStr == stringOptions[i])
                invalid = false;
        }
        if (invalid) {
            system("clear");
            std::cout << "Please enter a valid option!" << std::endl;
            std::cin >> variableStr;
        }
    }
    for (int i = 0; i < 4; i++) {
        if (variableStr == stringOptions[i]) {
            target = i;
            continue;
        }
        else {
            std::cout << "What is the value of " << stringOptions[i] << "?" << std::endl;
            std::cin >> options[i];
        }
    }
    if (target == V1) {
        return (options[V2]/options[T2])*options[T1];
    } else if (target == V2) {
        return (options[V1]/options[T1])*options[T2];
    } else if (target == T1) {
        return options[V1]/(options[V2]/options[T2]);
    } else if (target == T2) {
        return options[V2]/(options[V1]/options[T1]);
    }
    return 0;
}

double lusOperation() {
    std::vector<std::string> stringOptions = {"P1", "P2", "T1", "T2"};
    int P1 = 0, P2 = 1, T1 = 2, T2 = 3;
    std::cout << "P1/T1 = P2/T2" << std::endl << "Which variable are you solving for?" << std::endl;
    std::cin >> variableStr;
    system("clear");
    bool invalid = true;
    while (invalid) {
        for (int i = 0; i < 4; i++) {
            if (variableStr == stringOptions[i])
                invalid = false;
        }
        if (invalid) {
            system("clear");
            std::cout << "Please enter a valid option!" << std::endl;
            std::cin >> variableStr;
        }
    }
    for (int i = 0; i < 4; i++) {
        if (variableStr == stringOptions[i]) {
            target = i;
            continue;
        }
        else {
            std::cout << "What is the value of " << stringOptions[i] << "?" << std::endl;
            std::cin >> options[i];
        }
    }
    if (target == P1) {
        return (options[P2]/options[T2])*T1;
    } else if (target == P2) {
        return (options[P1]/options[T1])*T2;
    } else if (target == T1) {
        return options[P1]/(options[P2]/options[T2]);
    } else if (target == T2) {
        return options[P2]/(options[P1]/options[T1]);
    }
    return 0;
}

double avogOperation() {
    std::vector<std::string> stringOptions = {"V1", "V2", "n1", "n2"};
    int V1 = 0, V2 = 1, n1 = 2, n2 = 3;
    std::cout << "V1/n1 = V2/n2" << std::endl << "Which variable are you solving for?" << std::endl;
    std::cin >> variableStr;
    system("clear");
    bool invalid = true;
    while (invalid) {
        for (int i = 0; i < 4; i++) {
            if (variableStr == stringOptions[i])
                invalid = false;
        }
        if (invalid) {
            system("clear");
            std::cout << "Please enter a valid option!" << std::endl;
            std::cin >> variableStr;
        }
    }
    for (int i = 0; i < 4; i++) {
        if (variableStr == stringOptions[i]) {
            target = i;
            continue;
        }
        else {
            std::cout << "What is the value of " << stringOptions[i] << "?" << std::endl;
            std::cin >> options[i];
        }
    }
    if (target == V1) {
        return (options[V2]/options[n2])*options[n1];
    } else if (target == V2) {
        return (options[V1]/options[n1])*options[n2];
    } else if (target == n1) {
        return options[V1]/(options[V2]/options[n2]);
    } else if (target == n2) {
        return options[V2]/(options[V1]/options[n1]);
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