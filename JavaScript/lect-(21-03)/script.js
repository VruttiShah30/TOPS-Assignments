console.log("External Script Example");

let product = {
    pname : "Sugar",
    price : "45",
    description : "Madhur Sugar"
}
console.log(product);

//=====================Add key and value in object==============================
product['weight'] = "1kg";
console.log(product);

//============Delete key from object ==================================

delete product.weight;
console.log(product);

//======================= for in loop in object =============================

function getKey(){
    let keyName = prompt("Enter Key");
    let valName = prompt("Enter value");
    let bag = {
        [keyName]:valName
    };
    console.log(bag);
}

for(key in product){
    let str = `${key} = ${product[key]}<br>`
    document.write(str)
}
console.log(product.pname);