import { useState } from "react";

export const ClickButton = () => {

    var [status, setStatus] = useState(false);

    const handleClick = () => {
        setStatus(true);
    }

    return <>
        <h1>
            {status ? "Clicked!" : "Not Clicked"}
        </h1>

        <button onClick={handleClick}>
            Click Here
        </button>
    </>
}