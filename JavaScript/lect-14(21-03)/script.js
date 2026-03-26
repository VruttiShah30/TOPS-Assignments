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

// =============================Copy and Reference==================

let user = {
    name : "Megha"
};

let userobj = user;
userobj['sname']="patel";

console.log(user); // { name: "megha", sname: "patel" }

console.log(user === userobj); // true ✅ (same reference)

const sub ={
    sname : "java"
}
sub["sname"]="python"

console.log(sub);

//======================cloning object=================================

let clone = {};
for ( key in user){
    clone[key]=user[key];
}
console.log("Clone",clone);


clone.sname="patil";  //This changes only clone, NOT original user.
console.log("clone",clone);

console.log(user);

user.printMsg=function(){
    console.log(`welcome ${this.name}`);
    
}
user.printMsg();
