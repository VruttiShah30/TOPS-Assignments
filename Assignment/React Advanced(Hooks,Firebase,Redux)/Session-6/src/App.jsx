import ProductList from "./components/ProductList";
import PlaylistManager from "./components/PlaylistManager";
import "./App.css";

function App() {
  return (
    <div className="app">
      <h1>⚡ React Performance Optimization</h1>

      <p className="subtitle">
        useMemo + useCallback + React.memo
      </p>

      <ProductList />

      <PlaylistManager />
    </div>
  );
}

export default App;