import { useReducer } from "react";

// Initial quantity
const initialState = 1;

// Reducer function
function cartReducer(state, action) {
  switch (action.type) {
    case "INCREMENT":
      return state + 1;

    case "DECREMENT":
      return state > 1 ? state - 1 : 1;

    case "RESET":
      return 1;

    default:
      return state;
  }
}

function CartItem() {
  const [quantity, dispatch] = useReducer(cartReducer, initialState);

  return (
    <div className="card cart-card">
      <h2>🛒 Flipkart Cart</h2>

      <div className="product">
        <div>
          <h3>Wireless Headphones</h3>
          <p>₹1,499</p>
        </div>
      </div>

      <h3>Quantity: {quantity}</h3>

      <div className="buttons">
        <button
          onClick={() => dispatch({ type: "DECREMENT" })}
          disabled={quantity === 1}
        >
          -
        </button>

        <span className="quantity">{quantity}</span>

        <button onClick={() => dispatch({ type: "INCREMENT" })}>
          +
        </button>

        <button onClick={() => dispatch({ type: "RESET" })}>
          Reset
        </button>
      </div>
    </div>
  );
}

export default CartItem;