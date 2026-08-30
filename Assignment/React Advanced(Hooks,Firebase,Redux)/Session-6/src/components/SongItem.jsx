import React from "react";

const SongItem = React.memo(function SongItem({
  song,
  onToggleFavorite,
}) {
  console.log("Rendering:", song.name);

  return (
    <div className="song-card">
      <div>
        <h3>{song.name}</h3>
        <p>{song.artist}</p>
      </div>

      <button
        className="favorite-button"
        onClick={() => onToggleFavorite(song.id)}
      >
        {song.favorite ? "❤️" : "🤍"}
      </button>
    </div>
  );
});

export default SongItem;