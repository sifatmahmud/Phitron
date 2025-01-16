



const search_drink_by_name = (name) => {
    fetch(`https://www.thecocktaildb.com/api/json/v1/1/search.php?s=${name}`)
        .then(response => {
            if (!response.ok) {
                throw new Error('Network response was not ok');
            }
            return response.json();
        })
        .then(data => {
            displayDrink(data.drinks)
            // console.log(data)
        })
        .catch(error => {
            console.error('Error fetching data:', error);
        });
};

// ---------------- by default drinks -------------------



const productContainer = document.getElementById("drinks-container");
for (let i = 0; i < 12; i++) {

    fetch(`https://www.thecocktaildb.com/api/json/v1/1/random.php`)
        .then(response => {
            if (!response.ok) {
                throw new Error('Network response was not ok');
            }
            return response.json();
        })
        .then(data => {
            const element = data.drinks[0];
            const div = document.createElement("div");
            div.classList.add("card");

            div.innerHTML = `
                    <img class="drink-img" src="${element.strDrinkThumb
                }">
                    <h3 class="drink-name">
                    ${element.strDrink}
                    </h3>
                    <h6>Category : ${element.strCategory}</h6>
                    <p>Instructions : ${element.strInstructions.slice(0, 15)}...</p>
                    <div class="card-btn-container">
                    <button onclick="card_details_btn('${element.idDrink}')" class="card-btn">Details</button>
                    <button onclick="handleAddToCart('${element.strDrink.slice(0, 10)}', '${element.strDrinkThumb}')" class="card-btn">Add To Group</button>
                    </div>
                    `;
            productContainer.appendChild(div);
        })
        .catch(error => {
            console.error('Error fetching data:', error);
        });

}
// -------------------------------------------------------------

const displayDrink = (drinks) => {
    const productContainer = document.getElementById("drinks-container");
    productContainer.innerHTML = '';

    if (drinks == null) {
        productContainer.innerHTML = `
        <h1>Your Searched drinks not found !!</h1>
        `;
    }
    else {
        for (let i = 0; i < drinks.length; i++) {
            const element = drinks[i];
            const div = document.createElement("div");
            div.classList.add("card");

            div.innerHTML = `
            <img class="drink-img" src="${element.strDrinkThumb
                }">
            <h3 class="drink-name">
            ${element.strDrink}
            </h3>
            <h6>Category : ${element.strCategory}</h6>
            <p>Instructions : ${element.strInstructions.slice(0, 15)}...</p>
            <div class="card-btn-container">
            <button onclick="card_details_btn('${element.idDrink}')" class="card-btn">Details</button>
            <button onclick="handleAddToCart('${element.strDrink.slice(0, 10)}', '${element.strDrinkThumb}')" class="card-btn">Add To Group</button>
            </div>
            `;
            productContainer.appendChild(div);
        }
    }
}

const card_details_btn = (id) => {
    const drink_details = document.getElementById("drink-details");
    drink_details.innerHTML = '';
    search_details_drink(id);
}

const handleAddToCart = (name, img) => {

    const cartCount = document.getElementById("count").innerText;
    let convertedCount = parseInt(cartCount);
    convertedCount += 1;
    if (convertedCount > 7) {
        alert("You have selected more than 7 drinks  to group!!")
    }

    else {
        document.getElementById("count").innerText = convertedCount;


        const container = document.getElementById("cart-main-container")
        const div = document.createElement("div");
        div.classList.add("cart-info")

        div.innerHTML = `
        <div class="cart-drinks">
        <h2>${convertedCount}-</h2>
        <img src="${img}" class="cart-drink-img">
        <h4>${name}</h4>
        </div>
        `
        container.appendChild(div);
    }

}


document.getElementById("submit-drink-btn").onclick = () => {

    let searchItem = document.getElementById("input-drink");
    search_drink_by_name(searchItem.value);
    searchItem.value = '';
    const productContainer = document.getElementById("drinks-container");
    productContainer.innerHTML = '';
}






const search_details_drink = (id) => {

    fetch(`https://www.thecocktaildb.com/api/json/v1/1/lookup.php?i=${id}`)
        .then(response => {
            if (!response.ok) {
                throw new Error('Network response was not ok');
            }
            return response.json();
        })
        .then(data => {
            show_drink_with_details(data.drinks)
        })
        .catch(error => {
            console.error('Error fetching data:', error);
        });
};

const show_drink_with_details = (drinks) => {
    const drink_details = document.getElementById("drink-details");

    const element = drinks[0];
    const div = document.createElement("div");
    div.classList.add("card");

    div.innerHTML = `
            <img class="drink-img" src="${element.strDrinkThumb
        }">
            <h3 class="drink-name">
            ${element.strDrink}
            </h3>
            <h4>Catergory : ${element.strCategory}</h4>
            <h7>Glass : ${element.strGlass}</h7>
            <h7>Alcoholic status : ${element.strAlcoholic}</h7>
            <br>
            <h4>Instruction : </h4>${element.strInstructions}
            `;
    drink_details.appendChild(div);
}