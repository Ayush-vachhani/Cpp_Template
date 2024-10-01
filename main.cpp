using namespace std;
//------------------------------------------------------------------------------------------------------------------------------
#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
#include "pch.h"
#endif
//------------------------------------------------------------------------------------------------------------------------------
//macros
//read array
template <typename T>
vector<T> read_array(int n) {
    vector<T> result(n); // Create a vector of size n
    for (int i = 0; i < n; i++) {
        cin >> result[i]; // Read n elements directly into the vector
    }
    return result;
}
// Recursive case for creating a multi-dimensional vector
template <typename T, typename... Args>
vector<vector<T>> read_array(int n, Args... args) {
    vector<vector<T>> result(n); // Create a 2D vector with n rows
    for (int i = 0; i < n; i++) {
        result[i] = read_array<T>(args...); // Recursively read the rest of the dimensions
    }
    return result;
}

template<typename T, typename... Args>
auto VEC(T initial_value, int dim, Args... sizes) {
    // Handle the base case when only one dimension is left
    if constexpr (sizeof...(sizes) == 0) {
        return vector<T>(dim, initial_value); // Create 1D vector
    } else {
        // Create a vector of the specified sizes and initialize with the initial value
        auto inner_vec = VEC(initial_value, sizes...); // Recursive call
        return vector<decltype(inner_vec)>(dim, inner_vec); // Create outer vector
    }
}
//-------------------------------------------------------------------------------------------------------------------------------
//String utils
inline string to_lowercase(const std::string& str) {
    string result = str; // Copy the input string to result
    ranges::transform(result, result.begin(),
                      [](const unsigned char c) { return std::tolower(c); });
    return result;
}
inline string to_uppercase(const std::string& str) {
    string result = str; // Copy the input string to result
    ranges::transform(result, result.begin(),
                      [](const unsigned char c) { return std::toupper(c); });
    return result;
}
//-------------------------------------------------------------------------------------------------------------------------------
// Overload for 1D vector
template<typename T>
ostream& operator<<(ostream& os, const vector<T>& vec) {
    for (const auto& elem : vec) {
        os << elem << " "; // Print each element in the vector
    }
    os << "\n";
    return os; // Return the ostream object for chaining
}

// Overload for 2D vector
ostream& operator<<(ostream& os, const vector<vector<int>>& adjList) {
    for (size_t node = 0; node < adjList.size(); ++node) {
        os << node << ": ";  // Print the node number (index of the outer vector)
        for (const auto& neighbor : adjList[node]) {
            os << neighbor << " ";  // Print each neighbor in the inner vector
        }
        os << "\n";  // Newline after each node's adjacency list
    }
    return os;
}

//Overload for sets
template<typename T>
ostream& operator<<(ostream& os, const set<T>& s) {
    for (const auto& elem : s) {
        os << elem << " "; // Print each element in the vector
    }
    os << "\n";
    return os; // Return the ostream object for chaining
}
//-------------------------------------------------------------------------------------------------------------------------------

void solve()
{
    cout<<"Hello me";
}

int main() {
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int tc = 1;
    // cin>>tc;
    while(tc--)
    {
        solve();
    }
}