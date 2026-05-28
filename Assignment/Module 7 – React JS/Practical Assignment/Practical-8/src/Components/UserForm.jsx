import { useState } from "react";

export const UserForm = () => {

    var [name, setName] = useState("");
    var [email, setEmail] = useState("");
    var [password, setPassword] = useState("");

    var [userData, setUserData] = useState(null);

    const handleSubmit = (e) => {
        e.preventDefault();

        setUserData({
            name: name,
            email: email,
            password: password
        });
    }

    return <>
        <h1>User Form</h1>

        <form onSubmit={handleSubmit}>

            <input
                type="text"
                placeholder="Enter Name"
                value={name}
                onChange={(e) => setName(e.target.value)}
            />
            <br /><br />

            <input
                type="email"
                placeholder="Enter Email"
                value={email}
                onChange={(e) => setEmail(e.target.value)}
            />
            <br /><br />

            <input
                type="password"
                placeholder="Enter Password"
                value={password}
                onChange={(e) => setPassword(e.target.value)}
            />
            <br /><br />

            <button type="submit">
                Submit
            </button>

        </form>

        {
            userData && <>
                <h2>Submitted Data</h2>

                <p>Name: {userData.name}</p>
                <p>Email: {userData.email}</p>
                <p>Password: {userData.password}</p>
            </>
        }
    </>
}