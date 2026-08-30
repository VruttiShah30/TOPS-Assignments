import { useState } from "react";

function SongItem({ song, dispatch }) {
  const [isEditing, setIsEditing] = useState(false);
  const [editedName, setEditedName] = useState(song.name);

  // Delete song
  const handleDelete = () => {
    dispatch({
      type: "REMOVE_SONG",
      payload: song.id,
    });
  };

  // Start editing
  const handleEdit = () => {
    setIsEditing(true);
  };

  // Save edited song
  const handleSave = () => {
    if (editedName.trim() === "") {
      alert("Song name cannot be empty");
      return;
    }

    dispatch({
      type: "EDIT_SONG",
      payload: {
        id: song.id,
        name: editedName,
      },
    });

    setIsEditing(false);
  };

  return (
    <div className="song-item">
      {isEditing ? (
        <>
          <input
            type="text"
            value={editedName}
            onChange={(e) => setEditedName(e.target.value)}
          />

          <button className="save-btn" onClick={handleSave}>
            Save
          </button>
        </>
      ) : (
        <>
          <span className="song-name">🎵 {song.name}</span>

          <div className="song-buttons">
            <button className="edit-btn" onClick={handleEdit}>
              Edit
            </button>

            <button className="delete-btn" onClick={handleDelete}>
              Delete
            </button>
          </div>
        </>
      )}
    </div>
  );
}

export default SongItem;