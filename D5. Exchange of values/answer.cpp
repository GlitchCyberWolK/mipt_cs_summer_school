int my_swap(int &a, int &b, int &c, string s) {
    int temp_a = a;
    int temp_b = b;
    int temp_c = c;
    for(int i = 0; i < 3; ++i) {
        if(i == 0) {
            if(s[i] == '1') {
                a = temp_a;
            } else if(s[i] == '2') {
                a = temp_b;
            } else {
                a = temp_c;
            }
        } else if(i == 1) {
            if(s[i] == '1') {
                b = temp_a;
            } else if(s[i] == '2') {
                b = temp_b;
            } else {
                b = temp_c;
            }
        } else {
            if(s[i] == '1') {
                c = temp_a;
            } else if(s[i] == '2') {
                c = temp_b;
            } else {
                c = temp_c;
            }
        }
    }
    return 0;
}
