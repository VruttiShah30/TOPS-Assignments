import { UserCard } from "./Components/UserCard";
import { Counter } from "./Components/Counter";

const App = () => {

    return <>
        <h1>User Card</h1>

        <UserCard
            name="Vrutti Shah"
            age="21"
            location="Surat"
        />

        <Counter />
    </>
}

export default App;