#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double loanAmount;
    double annualRate;
    int numberOfPayments;

    // Nhập dữ liệu
    cout << "Loan Amount: ";
    cin >> loanAmount;

    cout << "Annual Interest Rate (%): ";
    cin >> annualRate;

    cout << "Number of Payments (months): ";
    cin >> numberOfPayments;

    // Tính lãi suất hàng tháng
    double monthlyRate = annualRate / 100 / 12;

    // Tính tiền trả hàng tháng
    double monthlyPayment = 
        (monthlyRate * pow(1 + monthlyRate, numberOfPayments)) /
        (pow(1 + monthlyRate, numberOfPayments) - 1) * loanAmount;

    // Tổng tiền trả và tiền lãi
    double amountPaidBack = monthlyPayment * numberOfPayments;
    double interestPaid = amountPaidBack - loanAmount;

    // Hiển thị kết quả
    cout << fixed << setprecision(2);
    cout << "\n----- Loan Payment Report -----\n";
    cout << "Loan Amount:          $ " << loanAmount << endl;
    cout << "Monthly Interest Rate:  " << monthlyRate * 100 << "%" << endl;
    cout << "Number of Payments:     " << numberOfPayments << endl;
    cout << "Monthly Payment:      $ " << monthlyPayment << endl;
    cout << "Amount Paid Back:     $ " << amountPaidBack << endl;
    cout << "Interest Paid:        $ " << interestPaid << endl;

    return 0;
}
