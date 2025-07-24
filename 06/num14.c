// How to do insert first, middle and last as well as delete first, middle and last using array.

//  Insert at First, Middle, and Last ----------------------------------------------------------

// int arr[100], n = 5, i, pos, val;

// Example initial array
// int arr[] = {10, 20, 30, 40, 50};

// // Insert at FIRST
// val = 5;
// for(i = n; i > 0; i--) {
//     arr[i] = arr[i-1];
// }
// arr[0] = val;
// n++;  // size increases

// // Insert at MIDDLE (say pos = 2, index starts from 0)
// pos = 2; val = 25;
// for(i = n; i > pos; i--) {
//     arr[i] = arr[i-1];
// }
// arr[pos] = val;
// n++;

// // Insert at LAST
// arr[n] = 60;
// n++;

// ----------------------------------------------------------------------------------------------------------


// Delete from First, Middle, and Last ----------------------------------------------------------------------

// Delete FIRST element
// for(i = 0; i < n-1; i++) {
//     arr[i] = arr[i+1];
// }
// n--;

// Delete from MIDDLE (say pos = 2)
// pos = 2; // pos ----- position
// for(i = pos; i < n-1; i++) {
//     arr[i] = arr[i+1];
// }
// n--;

// Delete LAST element
// n--;  // Just reduce size






