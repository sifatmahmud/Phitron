//------------- 1 ---------------
// parbo
//  -------------- 2 --------------
// function odd_even(num) {
//     if (num % 2 == 0) {
//         return "Even"
//     }
//     else {
//         return "Odd"
//     }
// }
// console.log(odd_even(23));

// --------------- 3 --------------
// let oguchalo_array = [1, 2, 6, 3, 4, 5, 7, 8, 9, 20, 10, 11, 16, 12, 13, 14, 15, 17, 18, 19];

// let guchano_array = oguchalo_array.sort((a, b) => a - b);
// console.log(guchano_array);

// ----------------- 4 -------------------
// function isLeapYear(year) {
//     if (year % 4 == 0) {
//         if (year % 100 == 0) {
//             if (year % 400 == 0) {
//                 return true;
//             }
//             else {
//                 return false;
//             }
//         }
//         else {
//             return true;
//         }
//     }
//     else {
//         return false;
//     }
// }

// if (isLeapYear(2004)) {
//     console.log('Leap Year !!')
// }
// else {
//     console.log('Not a Leap Year !!')
// }


// --------------- 5 ----------------

// let bivajjo_3_5 = [];

// for (let i = 1; i < 51; i++) {
//     if (i % 3 == 0 || i % 5 == 0) {
//         bivajjo_3_5.push(i);
//     }
// }

// console.log(bivajjo_3_5);


// ---------------- 6 ----------------
// var friends = ["rahim", "karim", "abdul", "sadsd", "heroAlom"];

// let boro_nam = '';
// for (let i = 0; i < friends.length; i++) {
//     let element = friends[i];
//     if (element.length > boro_nam.length) {
//         boro_nam = element;
//     }
// }
// console.log(boro_nam);

// ------------- 7 -----------------

// var numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];

// let unique_numbers = new Set(numbers);

// console.log(unique_numbers);

// -------------- 8 ---------------

// var numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];

// let boro_num = Math.max(...numbers);

// console.log(boro_num)

// --------------- 9 --------------

// function monthlySavings(arr, cost) {
//     if (Array.isArray(arr) && typeof cost == 'number') {
//         let saved_money = 0;
//         let total_money = 0;
//         for (let i = 0; i < arr.length; i++) {
//             let element = arr[i];
//             if (element >= 3000) {
//                 element -= ((element / 100) * 10);
//                 total_money += element;
//             }
//             else {
//                 total_money += element;
//             }
//         }

//         saved_money += (total_money -= cost);

//         if (saved_money >= 0) {
//             return saved_money;
//         }
//         else {
//             return "earn more";
//         }
//     }
//     else {
//         return "invalid input"
//     }
// }

// console.log(monthlySavings([1000, 2000, 3000], 5400));
// console.log(monthlySavings([1000, 2000, 2500], 5000));
// console.log(monthlySavings([900, 2700, 3400], 10000));
// console.log(monthlySavings(100, [900, 2700, 3400]));
