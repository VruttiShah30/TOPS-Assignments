import { useReducer } from "react";

// Initial state
const initialState = 0;

// Reducer function
function playlistReducer(state, action) {
  switch (action.type) {
    case "INCREMENT":
      return state + 1;

    case "DECREMENT":
      // Prevent negative count
      return state > 0 ? state - 1 : 0;

    case "RESET":
      return 0;

    default:
      return state;
  }
}

function PlaylistCounter() {
  const [count, dispatch] = useReducer(playlistReducer, initialState);

  return (
    <div className="card">
      <h2>🎵 Playlist Counter</h2>

      <h3>Songs: {count}</h3>

      <div className="buttons">
        <button onClick={() => dispatch({ type: "INCREMENT" })}>
          +
        </button>

        <button
          onClick={() => dispatch({ type: "DECREMENT" })}
          disabled={count === 0}
        >
          -
        </button>

        <button onClick={() => dispatch({ type: "RESET" })}>
          Reset
        </button>
      </div>
    </div>
  );
}

export default PlaylistCounter;