const Client = require('pg')

const client = new Client ({
    host:"localhost",
    user : "years",
    port : 5432,
    password :"password",
    database : "years"
})

client.connect();

client.query('select * from user', (err,res)=>{
    if(!err){
        console.log(res.rows);

    }
    else{
        console.log(err.message);
    }
    client.end;
})