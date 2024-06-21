int a, b, c, d;
        char slash, comma;
        stringstream ss(str);
        
        // Parsing the input string
        ss >> a >> slash >> b >> comma >> c >> slash >> d;

        // Using cross multiplication to compare fractions
        // We compare a/b and c/d by comparing a * d and b * c
        long long lhs = static_cast<long long>(a) * d;
        long long rhs = static_cast<long long>(b) * c;
        
        if (lhs > rhs) {
            return to_string(a) + "/" + to_string(b);
        } else if (lhs < rhs) {
            return to_string(c) + "/" + to_string(d);
        } else {
            return "equal";
        }
