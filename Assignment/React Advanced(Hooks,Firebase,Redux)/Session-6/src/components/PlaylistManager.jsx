import { useCallback, useState } from "react";
import SongItem from "./SongItem";

const initialSongs = [
  {
    id: 1,
    name: "Perfect",
    artist: "Ed Sheeran",
    favorite: false,
  },
  {
    id: 2,
    name: "Believer",
    artist: "Imagine Dragons",
    favorite: false,
  },
  {
    id: 3,
    name: "Shape of You",
    artist: "Ed Sheeran",
    favorite: false,
  },
  {
    id: 4,
    name: "Blinding Lights",
    artist: "The Weeknd",
    favorite: false,
  },
  {
    id: 5,
    name: "Senorita",
    artist: "Shawn Mendes",
    favorite: false,
  },
];

function PlaylistManager() {
  const [songs, setSongs] = useState(initialSongs);

  const [count, setCount] = useState(0);

  // Memoized function
  const toggleFavorite = useCallback((songId) => {
    setSongs((currentSongs) =>
      currentSongs.map((song) =>
        song.id === songId
          ? {
              ...song,
              favorite: !song.favorite,
            }
          : song
      )
    );
  }, []);

  return (
    <div className="section">
      <h2>🎵 Playlist Manager</h2>

      <button
        className="counter-button"
        onClick={() => setCount(count + 1)}
      >
        Other Counter: {count}
      </button>

      <p className="info">
        Click the counter. The SongItem components will not
        unnecessarily re-render because of useCallback + React.memo.
      </p>

      <div className="song-list">
        {songs.map((song) => (
          <SongItem
            key={song.id}
            song={song}
            onToggleFavorite={toggleFavorite}
          />
        ))}
      </div>
    </div>
  );
}

export default PlaylistManager;