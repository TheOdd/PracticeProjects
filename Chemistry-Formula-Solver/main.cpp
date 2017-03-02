#include <iostream>
#include <iomanip>

using namespace std;

string x;
bool invalid = false;

double boyOperation();
double charOperation();
double lusOperation();
double avogOperation();
double idealOperation();

int selectLaw() {
    system("clear");
    cout << "Please select the law to solve with." << endl <<
    "1.) Boyle's Law - P1 x V1 = P2 x V2" << endl <<
    "2.) Charles' Law - V1/T1 = V2/T2" << endl <<
    "3.) Gay-Lussac's Law - P1/T1 = P2/T2" << endl <<
    "4.) Avogadro's Principle - V1/n1 = V2/n2" << endl <<
    "5.) Ideal Gas Law - PV = nRT" << endl;
    if(invalid) {
        cout << "Please enter a valid option!\n\n";
    }
    cout << fixed << showpoint;
    cout << setprecision(4);
    cin >> x;
    system("clear");
    if (x == "1") {
        cout << boyOperation() << endl;
        cin.get();
        invalid = false;
    } else if (x == "2") {
        cout << charOperation() << endl;
        cin.get();
        invalid = false;
    } else if (x == "3") {
        cout << lusOperation() << endl;
        cin.get();
        invalid = false;
    } else if (x == "4") {
        cout << avogOperation() << endl;
        cin.get();
        invalid = false;
    } else if (x == "5") {
        cout << idealOperation() << endl;
        cin.get();
        invalid = false;
    } else {
        invalid = true;
        selectLaw();
    }
    return 0;
}

double boyOperation() {
    string variableStr;
    double P1;
    double P2;
    double V1;
    double V2;
    cout << "P1 x V1 = P2 x V2" << endl << "Which variable are you solving for?" << endl;
    cin >> variableStr;
    system("clear");
    if (variableStr == "P1") {
        cout << "What is the value of P2?" << endl;
        cin >> P2;
        cout << "What is the value of V1?" << endl;
        cin >> V1;
        cout << "What is the value of V2?" << endl;
        cin >> V2;
        P1 = (P2 * V2)/V1;
        return P1;
    } else if (variableStr == "P2") {
        cout << "What is the value of P1?" << endl;
        cin >> P1;
        cout << "What is the value of V1?" << endl;
        cin >> V1;
        cout << "What is the value of V2?" << endl;
        cin >> V2;
        P2 = (P1 * V1)/V2;
        return P2;
    } else if (variableStr == "V1") {
        cout << "What is the value of P1?" << endl;
        cin >> P1;
        cout << "What is the value of P2?" << endl;
        cin >> P2;
        cout << "What is the value of V2?" << endl;
        cin >> V2;
        V1 = (P2 * V2)/P1;
        return V1;
    } else if (variableStr == "V2") {
        cout << "What is the value of P1?" << endl;
        cin >> P1;
        cout << "What is the value of P2?" << endl;
        cin >> P2;
        cout << "What is the value of V1?" << endl;
        cin >> V1;
        V2 = (P1 * V1)/P2;
        return V2;
    } else {
        cout << "Please enter a valid option!" << endl;
        boyOperation();
    }
    return 0;
}

double charOperation() {
    string variableStr;
    double V1;
    double V2;
    double T1;
    double T2;
    cout << "V1/T1 = V2/T2" << endl << "Which variable are you solving for?" << endl;
    cin >> variableStr;
    system("clear");
    if (variableStr == "V1") {
        cout << "What is the value of T1 in Kelvin?" << endl;
        cin >> T1;
        cout << "What is the value of V2?" << endl;
        cin >> V2;
        cout << "What is the value of T2 in Kelvin?" << endl;
        cin >> T2;
        V1 = (V2/T2)*T1;
        return V1;
    } else if (variableStr == "V2") {
        cout << "What is the value of T1 in Kelvin?" << endl;
        cin >> T1;
        cout << "What is the value of T2 in Kelvin?" << endl;
        cin >> T2;
        cout << "What is the value of V1?" << endl;
        cin >> V1;
        V2 = (V1/T1)*T2;
        return V2;
    } else if (variableStr == "T1") {
        cout << "What is the value of T2 in Kelvin?" << endl;
        cin >> T2;
        cout << "What is the value of V1?" << endl;
        cin >> V1;
        cout << "What is the value of V2?" << endl;
        cin >> V2;
        T1 = V1/(V2/T2);
        return T1;
    } else if (variableStr == "T2") {
        cout << "What is the value of T1 in Kelvin?" << endl;
        cin >> T1;
        cout << "What is the value of V1?" << endl;
        cin >> V1;
        cout << "What is the value of V2?" << endl;
        cin >> V2;
        T2 = V2/(V1/T1);
        return T2;
    } else {
        cout << "Please enter a valid option!" << endl;
        charOperation();
    }
    return 0;
}

double lusOperation() {
    string variableStr;
    double P1;
    double P2;
    double T1;
    double T2;
    cout << "P1/T1 = P2/T2" << endl << "Which variable are you solving for?" << endl;
    cin >> variableStr;
    system("clear");
    if (variableStr == "P1") {
        cout << "What is the value of P2?" << endl;
        cin >> P2;
        cout << "What is the value of T1 in Kelvin?" << endl;
        cin >> T1;
        cout << "What is the value of T2 in Kelvin?" << endl;
        cin >> T2;
        P1 = (P2/T2)*T1;
        return P1;
    } else if (variableStr == "P2") {
        cout << "What is the value of P1?" << endl;
        cin >> P1;
        cout << "What is the value of T1 in Kelvin?" << endl;
        cin >> T1;
        cout << "What is the value of T2 in Kelvin?" << endl;
        cin >> T2;
        P2 = (P1/T1)*T2;
        return P2;
    } else if (variableStr == "T1") {
        cout << "What is the value of P1?" << endl;
        cin >> P1;
        cout << "What is the value of P2?" << endl;
        cin >> P2;
        cout << "What is the value of T2 in Kelvin?" << endl;
        cin >> T2;
        T1 = P1/(P2/T2);
        return T1;
    } else if (variableStr == "T2") {
        cout << "What is the value of P1?" << endl;
        cin >> P1;
        cout << "What is the value of P2" << endl;
        cin >> P2;
        cout << "What is the value of T1 in Kelvin?" << endl;
        cin >> T1;
        T2 = P2/(P1/T1);
        return T2;
    } else {
        cout << "Please enter a valid option!" << endl;
        lusOperation();
    }
    return 0;
}

double avogOperation() {
    string variableStr;
    double V1;
    double V2;
    double n1;
    double n2;
    cout << "V1/n1 = V2/n2" << endl << "Which variable are you solving for?" << endl;
    cin >> variableStr;
    system("clear");
    if (variableStr == "V1") {
        cout << "What is the value of V2?" << endl;
        cin >> V2;
        cout << "What is the value of n1?" << endl;
        cin >> n1;
        cout << "What is the value of n2?" << endl;
        cin >> n2;
        V1 = (V2/n2)*n1;
        return V1;
    } else if (variableStr == "V2") {
        cout << "What is the value of V1?" << endl;
        cin >> V1;
        cout << "What is the value of n1?" << endl;
        cin >> n1;
        cout << "What is the value of n2?" << endl;
        cin >> n2;
        V2 = (V1/n1)*n2;
        return V2;
    } else if (variableStr == "n1") {
        cout << "What is the value of V1?" << endl;
        cin >> V1;
        cout << "What is the value of V2?" << endl;
        cin >> V2;
        cout << "What is the value of n2?" << endl;
        cin >> n2;
        n1 = V1/(V2/n2);
        return n1;
    } else if (variableStr == "n2") {
        cout << "What is the value of V1?" << endl;
        cin >> V1;
        cout << "What is the value of V2?" << endl;
        cin >> V2;
        cout << "What is the value of n1?" << endl;
        cin >> n1;
        n2 = V2/(V1/n1);
        return n2;
    } else {
        cout << "Please enter a valid option!" << endl;
        avogOperation();
    }
    return 0;
}

double idealOperation() {
    string variableStr;
    double P;
    double V;
    double n;
    double T;
    cout << "Are you using atmoshperes or kilopascals?" << endl << 
    "1.) Atmospheres" << endl <<
    "2.) Kilopascals" << endl;
    cin >> x;
    system("clear");
    if (x != "1" && x != "2") {
        cout << "Please enter a valid option!" << endl;
        idealOperation();
    }
    cout << "PV = nRT" << endl << "Which variable are you solving for?" << endl;
    cin >> variableStr;
    system("clear");
    double R;
    if (x == "1")
        R = 0.0821;
    else
        R = 8.3150;
    if (variableStr == "P") {
        cout << "What is the value of V?" << endl;
        cin >> V;
        cout << "What is the value of n?" << endl;
        cin >> n;
        cout << "What is the value of T?" << endl;
        cin >> T;
        P = (n*R*T)/V;
        return P;
    } else if (variableStr == "V") {
        cout << "What is the value of P?" << endl;
        cin >> P;
        cout << "What is the value of n?" << endl;
        cin >> n;
        cout << "What is the value of T?" << endl;
        cin >> T;
        V = (n*R*T)/P;
        return V;
    } else if (variableStr == "n") {
        cout << "What is the value of P?" << endl;
        cin >> P;
        cout << "What is the value of V?" << endl;
        cin >> V;
        cout << "What is the value of T?" << endl;
        cin >> T;
        n = (P*V)/(R*T);
        return n;
    } else if (variableStr == "T") {
        cout << "What is the value of P?" << endl;
        cin >> P;
        cout << "What is the value of V?" << endl;
        cin >> V;
        cout << "What is the value of n?" << endl;
        cin >> n;
        T = (P*V)/(n*R);
        return T;
    } else {
        cout << "Please enter a valid option!" << endl;
        idealOperation();
    }
    return 0;
}

int main() {
    selectLaw();
}