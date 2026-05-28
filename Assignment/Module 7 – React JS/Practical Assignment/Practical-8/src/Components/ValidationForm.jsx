import { useState } from "react";

export const ValidationForm = () => {

    var [email, setEmail] = useState("");
    var [message, setMessage] = useState("");

    const validateEmail = (e) => {
        e.preventDefault();

        if (email.includes("@") && email.includes(".")) {
            setMessage("Valid Email Address");
        }
        else {
            setMessage("Invalid Email Address");
        }
    }

    return <>
        <h1>Email Validation</h1>

        <form onSubmit={validateEmail}>

            <input
                type="text"
                placeholder="Enter Email"
                value={email}
                onChange={(e) => setEmail(e.target.value)}
            />
            <br/><br/>

            <button type="submit">Check Email</button>

        </form>

        <h3>{message}</h3>
    </>
}