import { useReducer, useState } from "react";
import playlistReducer from "../reducers/playlistReducer";
import SongItem from "./SongItem";

const initialSongs = [
  {
    id: 1,
    name: "Perfect - Ed Sheeran",
  },
  {
    id: 2,
    name: "Shape of You - Ed Sheeran",
  },
  {
    id: 3,
    name: "Believer - Imagine Dragons",
  },
];

function Playlist() {
  const [songs, dispatch] = useReducer(
    playlistReducer,
    initialSongs
  );

  const [songName, setSongName] = useState("");

  // Add new song
  const handleAddSong = () => {
    if (songName.trim() === "") {
      alert("Please enter a song name");
      return;
    }

    dispatch({
      type: "ADD_SONG",
      payload: songName,
    });

    setSongName("");
  };

  // Add song when Enter is pressed
  const handleKeyDown = (e) => {
    if (e.key === "Enter") {
      handleAddSong();
    }
  };

  return (
    <div className="playlist-container">
      <div className="playlist-header">
        <h1>🎧 My Spotify Playlist</h1>
        <p>{songs.length} Songs</p>
      </div>

      {/* Add Song */}
      <div className="add-song">
        <input
          type="text"
          placeholder="Enter song name..."
          value={songName}
          onChange={(e) => setSongName(e.target.value)}
          onKeyDown={handleKeyDown}
        />

        <button onClick={handleAddSong}>
          Add Song
        </button>
      </div>

      {/* Song List */}
      <div className="song-list">
        {songs.length === 0 ? (
          <p className="empty-message">
            No songs in your playlist.
          </p>
        ) : (
          songs.map((song) => (
            <SongItem
              key={song.id}
              song={song}
              dispatch={dispatch}
            />
          ))
        )}
      </div>
    </div>
  );
}

export default Playlist;