import PlaylistCard from "./PlaylistCard";

function App() {
  return (
    <div>
      <h1>My Playlist</h1>

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
  );
}

export default App;