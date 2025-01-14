



const search_meal_by_name = (name) => {
    fetch(`https://www.themealdb.com/api/json/v1/1/search.php?s=${name}`)
        .then(response => {
            if (!response.ok) {
                throw new Error('Network response was not ok');
            }
            return response.json();
        })
        .then(data => {
            displayMeal(data.meals)
            // console.log(data)
        })
        .catch(error => {
            console.error('Error fetching data:', error);
        });
};

const displayMeal = (meals) => {
    const productContainer = document.getElementById("meal-container");

    if (meals == null) {
        productContainer.innerHTML = `
        <h1>Searched meal not found !!</h1>
        `;
    }
    else {
        for (let i = 0; i < meals.length; i++) {
            const element = meals[i];
            const div = document.createElement("div");
            div.classList.add("card");

            div.innerHTML = `
                <img class="meal-img" src="${element.strMealThumb
                }">
                <h3 class="meal-name">
                ${element.strMeal}
                </h3>
                <h6>Meal Area : ${element.strArea}</h6>
                `;
            productContainer.appendChild(div);
            div.onclick = () => {
                const meal_details = document.getElementById("meal-details");
                meal_details.innerHTML = '';
                search_details_meal(element.idMeal);
            }
        }
    }
}



// search_meal_by_name("salad")

document.getElementById("submit-meal-btn").onclick = () => {

    let searchItem = document.getElementById("input-meal");
    search_meal_by_name(searchItem.value);
    searchItem.value = '';
    const productContainer = document.getElementById("meal-container");
    productContainer.innerHTML = '';
}






const search_details_meal = (id) => {

    fetch(`https://www.themealdb.com/api/json/v1/1/lookup.php?i=${id}`)
        .then(response => {
            if (!response.ok) {
                throw new Error('Network response was not ok');
            }
            return response.json();
        })
        .then(data => {
            show_meal_with_details(data.meals)
            console.log(data.meals)
        })
        .catch(error => {
            console.error('Error fetching data:', error);
        });
};

const show_meal_with_details = (meals) => {
    const meal_details = document.getElementById("meal-details");

    const element = meals[0];
    const div = document.createElement("div");
    div.classList.add("card");

    div.innerHTML = `
            <img class="meal-img" src="${element.strMealThumb
        }">
            <h3 class="meal-name">
            ${element.strMeal}
            </h3>
            <h4>Meal Area : ${element.strArea}</h4>
            <br><br>
            <h5>------ Ingredients ------</h5>
            <h7>${element.strIngredient1}</h7>
            <h7>${element.strIngredient2}</h7>
            <h7>${element.strIngredient3}</h7>
            <h7>${element.strIngredient4}</h7>
            <h7>${element.strIngredient5}</h7>
            <h7>${element.strIngredient6}</h7>
            <h7>${element.strIngredient7}</h7>
            <h7>${element.strIngredient8}</h7>
            `;
    meal_details.appendChild(div);
}