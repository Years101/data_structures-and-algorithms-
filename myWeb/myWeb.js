

function validateAndRedirect() {

    const username = document.getElementById('names').value;
    const password = document.getElementById('passwords').value;

    if (username === "mourad" && password === "password123") {

        window.location.href = "anotherPage.html";  
    } else {

        document.getElementById('p1').textContent = "Invalid username or password!";
    }
}

function signup(){
    window.location.href = "signup.html";

}
function forgotpassword(){
    window.location.href = "forgotpassword.html";
}