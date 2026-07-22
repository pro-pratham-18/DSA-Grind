//way to sort the vector of pairs (sorted on first element)

// sort(v.begin(), v.end());


//way to sort the vector of pairs (sorted on second element)

// sort(v.begin(), v.end(),
//         [](const auto & a, const auto & b) {
//             return a[1] < b[1];
//         });


//way to sort the vector of vector pair (sorted on first element)

// sort(v.begin(), v.end());



//way to sort the vector of vector pair (sorted on second element)

// sort(v.begin(), v.end(),
//         [](const auto & a, const auto & b) {
//             return a[1] < b[1];
//         });


// --------------using function--------------------------------------------------------


// bool compare(const auto & a,const auto and b){             //exampl , sorting based on first element of a pair or a two sized vector , inside a vector
//     return a.first < first.b;
// }

// sort(v.begin(),v.end(),compare);

