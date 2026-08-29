function PlaylistCard({ songName, artist }) {
  return (
    <div className="card">
      <h3> {songName}</h3>
      <p>
        <strong>Artist:</strong> {artist}
      </p>
    </div>
  );
}

export default PlaylistCard;