import { useState } from "react";

export const Counter = () => {

    var [count, setCount] = useState(0);

    const increment = () => {
        count++;
        setCount(count);
    }

    return <>
        <h2>Counter App</h2>
        <h3>Count: {count}</h3>
        <button onClick={increment}>Increment</button>
    </>
}