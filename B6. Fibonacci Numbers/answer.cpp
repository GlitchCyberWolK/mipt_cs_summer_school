int phib(int n) {
    if(n <= 2) return 1;
    return phib(n - 1) + phib(n - 2);
}
