char toLower(char a) {
    if((a >= 'A' && a <= 'Z')) return (char) ((long long) a + 32);
    else return a;
}

string ToLower(string &s) {
    string temp;
    for(char &c : s) {
        temp += toLower(c);
    }
    return temp;
}
