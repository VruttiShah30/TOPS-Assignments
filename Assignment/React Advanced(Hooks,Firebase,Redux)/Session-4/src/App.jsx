import PlaylistCounter from "./components/PlaylistCounter";
import CartItem from "./components/CartItem";
import "./App.css";

function App() {
  return (
    <div className="app">
      <h1>React useReducer Practice</h1>

      <div className="container">
        <PlaylistCounter />
        <CartItem />
      </div>
    </div>
  );
}

export default App;