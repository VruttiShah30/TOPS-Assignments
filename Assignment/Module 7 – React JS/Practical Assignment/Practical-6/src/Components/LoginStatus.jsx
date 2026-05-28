import { useState } from "react";

export const LoginStatus = () => {

    var [login, setLogin] = useState(false);

    const changeStatus = () => {
        setLogin(!login);
    }

    return <>
        <h1>User Status</h1>

        {
            login ?
                <button onClick={changeStatus}>Logout</button>
                :
                <button onClick={changeStatus}>Login</button>
        }
    </>
}