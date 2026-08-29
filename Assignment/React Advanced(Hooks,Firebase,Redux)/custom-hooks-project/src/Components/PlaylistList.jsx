import useFetchData from "../hooks/useFetchData";

function PlaylistList() {
  const url = "https://jsonplaceholder.typicode.com/albums";

  const {
    data,
    loading,
    error,
  } = useFetchData(url);

  if (loading) {
    return (
      <div className="card">
        <h2>🎵 Playlists</h2>
        <p>Loading playlists...</p>
      </div>
    );
  }

  if (error) {
    return (
      <div className="card error">
        <h2>🎵 Playlists</h2>
        <p>{error}</p>
      </div>
    );
  }

  return (
    <div className="section">
      <h2>🎵 Spotify Playlists</h2>

      <div className="playlist-grid">
        {data.slice(0, 6).map((playlist) => (
          <div
            className="playlist-card"
            key={playlist.id}
          >
            <div className="music-icon">
              🎵
            </div>

            <h3>
              {playlist.title}
            </h3>

            <p>
              Playlist #{playlist.id}
            </p>

            <button>
              ▶ Play
            </button>
          </div>
        ))}
      </div>
    </div>
  );
}

export default PlaylistList;