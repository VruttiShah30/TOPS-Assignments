import { useState } from "react";

export const UserInput = () => {

    var [name, setName] = useState("");

    return <>
        <h1>Enter Your Name</h1>

        <input
            type="text"
            placeholder="Enter name"
            value={name}
            onChange={(e) => setName(e.target.value)}
        />

        <h2>Your Name: {name}</h2>
    </>
}