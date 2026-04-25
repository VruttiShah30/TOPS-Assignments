const geocode = (city,callback)=>{

    const url = `https://geocoding-api.open-meteo.com/v1/search?name=surat,gujrat,india&count=10&language=en&format=json`


    fetch(url).then(res=>res.json())
    .then(data =>{
        if(data.length===0){
            callback("City not found",undefined);
        }
        else{
            const lt = data[0].lt;
            const lg = data[0].lg;
            callback(undefined,{lt,lg});
        }
    })
    .catch(err=>
        callback("Error fetching Geocode",undefined))
};
module.exports =geocode ;