import Navbar from "./components/Navbar";
import Clock from "./components/Clock";
import MoviesList from "./components/MoviesList";
import PostCard from "./components/PostCard";
import PlaylistList from "./components/PlaylistList";
import ProductList from "./components/ProductList";

import "./App.css";

function App() {
  return (
    <>
      <Navbar />

      <main className="container">

        {/* Task 1 */}
        <section id="clock">
          <Clock />
        </section>

        {/* Task 2 */}
        <section id="movies">
          <MoviesList />
        </section>

        {/* Task 3 */}
        <section id="posts">
          <h2>❤️ Instagram Posts</h2>

          <div className="posts-container">

            <PostCard
              username="Vrutti"
              image="https://images.unsplash.com/photo-1494790108377-be9c29b29330?w=600"
              caption="Beautiful day! ✨"
              initialLikes={120}
            />

            <PostCard
              username="John"
              image="https://images.unsplash.com/photo-1500648767791-00dcc994a43e?w=600"
              caption="Enjoying the weekend! 😎"
              initialLikes={250}
            />

          </div>
        </section>

        {/* Task 4 */}
        <section id="playlists">
          <PlaylistList />
        </section>

        {/* Flipkart example */}
        <section id="products">
          <ProductList />
        </section>

      </main>
    </>
  );
}

export default App;