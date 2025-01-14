// ----------- let & const ES6 ----------------

// const num = 5;

// let name = "Sifat";

// console.log(num, name);



// ---------- Tamplate litarels & Spread Operators ------------

// const countryName = "Bangladesh";

// const country = `my country name is ${countryName}`

// console.log(country)


// const numbers = [1, 2, 3, 4, 5, 6, 7, 8, 10];

// const numbers2 = [11, 12, 13, 14, 15, 16, 17, 18, 19];

// console.log([...numbers, ...numbers2]);

// console.log(Math.max(...numbers))




// --------------- Distructuring array and object ----------------

// const person = {
//     name: "Sifat",
//     age: 10,
//     friends: ["korim", "rohim", "jabbar"]
// };


// const age = person.age;
// const {age, friends} = person;

// console.log(age)
// console.log(friends)


// const names = ["rohim", 10, "loremfapjgfpe"];

// const [name, age, description] = names;

// console.log(description)





// ------------------ Arrow function --------------------

// const sum2 = (num1, num2) => num1 + num2;

// const output2 = sum2(10,20);

// console.log(output2)



// ------------------- Find -------------------

// const products = [
//     {id:1, name:"xiaomi", description:"this is xiaomi", price:500, color:"black"},
//     {id:2, name:"iphone", description:"this is iphone", price:800, color:"golden"},
//     {id:3, name:"xiaomi", description:"this is xiaomi", price:400, color:"black"}
// ]


// for(let i=0; i< products.length; i++){
// const element = products[i];
// if(element.id == 3){
//     console.log(element)
// }
// }

// const result =  products.find(pd=>pd.id == 3);

// console.log(result)




// -------------------- Filter -------------------
// const products = [
//     { id: 1, name: "xiaomi", description: "this is xiaomi", price: 500, color: "black" },
//     { id: 2, name: "iphone", description: "this is iphone", price: 800, color: "golden" },
//     { id: 3, name: "xiaomi", description: "this is xiaomi", price: 400, color: "black" }
// ]

// const result = products.filter(product=> product.color == 'black')

// console.log(result);



// --------------------- Map ---------------------

// const products = [
//     { id: 1, name: "xiaomi", description: "this is xiaomi", price: 500, color: "black" },
//     { id: 2, name: "iphone", description: "this is iphone", price: 800, color: "golden" },
//     { id: 3, name: "xiaomi", description: "this is xiaomi", price: 400, color: "black" }
// ]

// const sum = products.map(product=> product.id*2);

// console.log(sum)


// const result = products.forEach(product=> {
//     console.log(product.id);
// });
// console.log(result);





// ---------------- problem solving part 1 -------------------

const numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

const oddEven = (array)=>{
    let evenNum = [];
    let oddNum = [];

    for (let i = 0; i < array.length; i++) {
        const element = array[i];
        
        if(element % 2 == 0){
            evenNum.push(element)
        }
        else{
            oddNum.push(element)
        }
    }

    return oddNum

}

const result = oddEven(numbers)

console.log(result)




alert()