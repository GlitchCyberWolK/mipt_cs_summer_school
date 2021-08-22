char CaseChange(char a) {
    if(isupper(a)) {
        return tolower(a);
    } else if(islower(a)) {
        return toupper(a);
    } return a;
}
