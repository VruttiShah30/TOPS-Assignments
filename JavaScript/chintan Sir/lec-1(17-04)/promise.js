const add = (a,b) =>{
    return new Promise((resolve,reject)=>{
        var r = a+b;
        if(r>100){
            resolve(r)
        }
        else{
            reject("Invalid Data")
        }
    });
};

const square = (a) => {
    return new Promise((resolve,reject)=>{
        resolve(a*a);
    })
}
const cube = (a) => {
    return new Promise((resolve,reject)=>{
        resolve(a*a*a);
    })
}

const myFun = async () => {
    try {
        const result = await add(10,200);
        console.log(result);

        const resp = await square(result);
        console.log(resp);

        const cb = await cube(resp);
        console.log(cb);

    } catch (error) {
        console.log(err);
        
    }    
}

myFun();