#include "Account.hpp"
#include <iostream>

int main(void) {
    Account acc1(42);
    Account acc2(54);
    Account acc3(957);
    Account acc4(432);

    acc1.makeDeposit(5);
    acc1.makeDeposit(5);
    acc2.makeDeposit(765);
    acc2.makeDeposit(85);
    acc2.makeDeposit(1765);

    acc3.makeDeposit(20);
    acc3.makeDeposit(1);
    acc4.makeDeposit(42);

    acc1.makeWithdrawal(34);
    acc2.makeWithdrawal(657);
    acc2.makeWithdrawal(765);
    acc3.makeWithdrawal(2);
    acc4.makeWithdrawal(42);
    acc4.makeWithdrawal(42);

    Account::displayAccountsInfos();

    return 0;
}
