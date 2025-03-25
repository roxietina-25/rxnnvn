let techProducts = []; 

function displayProducts() {
    if (techProducts.length === 0) {
        console.log("No products displayed in inventory.");
    } else {
        console.table(techProducts);  
    }
}

function Product(name, quantity, pricePerUnit) {
    this.name = name;
    this.quantity = quantity;
    this.pricePerUnit = pricePerUnit;
}


let enterCommand = prompt("Hi! Welcome to Techmart! Please type 'enter' for inventory!");
if (enterCommand !== 'enter') {
    alert("Invalid command! Exiting.");
    throw new Error("Program exited due to invalid command");
}

while (true) {
    let command = prompt("Enter 'display', 'add', 'remove', 'change quantity', 'change product name', 'calculate', or 'exit':").toLowerCase(); 
    
    if (command === null) {
        alert("Action canceled. Please try again.");
        continue;
    }

    switch (command) {
        case "display":
            displayProducts();
            break;
        case "add":
            let name = prompt("Enter Product Name:");
            if (name === null) break; 
            let quantity = prompt("Enter Quantity:");
            if (quantity === null) break;
            quantity = parseInt(quantity, 10);
            if (isNaN(quantity)) {
                console.log("Invalid quantity. Please enter a number.");
                break;
            }
            let pricePerUnit = prompt("Enter Price per Unit:");
            if (pricePerUnit === null) break;
            pricePerUnit = parseFloat(pricePerUnit);
            if (isNaN(pricePerUnit)) {
                console.log("Invalid price. Please enter a number.");
                break;
            }
            techProducts.push(new Product(name, quantity, pricePerUnit));
            console.log(`${name} added to inventory.`);
            break;

        case "remove":
            let removeProduct = prompt("Enter Product Name to Remove:");
            if (removeProduct === null) break; 
            techProducts = techProducts.filter(product => product.name !== removeProduct);
            console.log(`${removeProduct} removed from inventory.`);
            break;

        case "change quantity":
            let changeProduct = prompt("Enter Product Name to Change Quantity:");
            if (changeProduct === null) break; 
            let newQuantity = prompt("Enter New Quantity:");
            if (newQuantity === null) break; 
            newQuantity = parseInt(newQuantity, 10);
            if (isNaN(newQuantity)) {
                console.log("Invalid quantity. Please enter a number.");
                break;
            }
            let productToEdit = techProducts.find(product => product.name === changeProduct);
            if (productToEdit) {
                productToEdit.quantity = newQuantity;
                console.log(`Updated ${changeProduct} quantity to ${newQuantity}.`);
            } else {
                console.log(`Product ${changeProduct} not found.`);
            }
            break;

        case "change product name":
            let oldName = prompt("Enter Current Product Name:");
            if (oldName === null) break; 
            let newName = prompt("Enter New Product Name:");
            if (newName === null) break; 
            let productToRename = techProducts.find(product => product.name === oldName);
            if (productToRename) {
                productToRename.name = newName;
                console.log(`Updated product name from ${oldName} to ${newName}.`);
            } else {
                console.log(`Product ${oldName} not found.`);
            }
            break;

        case "calculate":
            let totalValue = techProducts.reduce((total, product) => total + (product.quantity * product.pricePerUnit), 0);
            console.log(`Total Inventory Value: $${totalValue.toFixed(2)}`);
            break;
        case "exit":
            console.log("Exiting the program.");
            alert("See you again!");
            break;
        default:
            console.log("Invalid command. Please try again.");
    }

    if (command === "exit") {
        break;
    }
}