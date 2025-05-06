function passwords(){
    const password = document.getElementById("pass").value;
    const confirm = document.getElementById("confirmpass").value;
    if(confirm != password){
        console.log("the passwords dont match")
    }
}

const username = document.getElementById("username").value;