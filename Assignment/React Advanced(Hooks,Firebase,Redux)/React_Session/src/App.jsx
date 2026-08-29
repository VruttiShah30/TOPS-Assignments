import PlaylistCard from "./components/PlaylistCard";
import LikeCounter from "./components/LikeCounter";
import Feed from "./components/Feed";
import FlipkartProductList from "./components/FlipkartProductList";

import UserContext from "./context/UserContext";

import "./App.css";

function App() {
  // User data for Context API
  const user = {
    name: "Vrutti",
    email: "vrutti@gmail.com",
  };

  return (
    <UserContext.Provider value={user}>
      <div className="container">

        {/* Main Heading */}
        <h1>React Practice Tasks</h1>

        <p className="subtitle">
          Props • useState • Context API • Custom Hooks
        </p>

        <hr />

        {/* ================================= */}
        {/* TASK 1 - PROPS */}
        {/* ================================= */}

        <section>
          <h2>1️⃣ Playlist Cards - Props</h2>

          <div className="playlist-container">

            <PlaylistCard
              songName="Kesariya"
              artist="Arijit Singh"
            />

            <PlaylistCard
              songName="Tum Hi Ho"
              artist="Arijit Singh"
            />

            <PlaylistCard
              songName="Apna Bana Le"
              artist="Arijit Singh"
            />

          </div>
        </section>

        <hr />

        {/* ================================= */}
        {/* TASK 2 - USESTATE */}
        {/* ================================= */}

        <section>
          <h2>2️⃣ Like Counter - useState</h2>

          <LikeCounter />
        </section>

        <hr />

        {/* ================================= */}
        {/* TASK 3 - CONTEXT API */}
        {/* ================================= */}

        <section>
          <h2>3️⃣ User Context - Avoid Prop Drilling</h2>

          <Feed />
        </section>

        <hr />

        {/* ================================= */}
        {/* TASK 4 - CUSTOM HOOK */}
        {/* ================================= */}

        <section>
          <h2>4️⃣ Product List - Custom Hook</h2>

          <FlipkartProductList />
        </section>

      </div>
    </UserContext.Provider>
  );
}

export default App;