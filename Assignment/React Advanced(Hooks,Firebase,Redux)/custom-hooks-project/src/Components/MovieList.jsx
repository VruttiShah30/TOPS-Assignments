import useTrendingMovies from "../hooks/useTrendingMovies";

function MoviesList() {
  const { data, loading, error } = useTrendingMovies();

  if (loading) {
    return (
      <div className="card">
        <h2>🎬 Trending Movies</h2>
        <p>Loading movies...</p>
      </div>
    );
  }

  if (error) {
    return (
      <div className="card error">
        <h2>🎬 Trending Movies</h2>
        <p>{error}</p>
      </div>
    );
  }

  return (
    <div className="section">
      <h2>🎬 Trending Movies</h2>

      <div className="movie-grid">
        {data.slice(0, 6).map((movie) => (
          <div className="movie-card" key={movie.id}>
            {movie.poster_path ? (
              <img
                src={`https://image.tmdb.org/t/p/w500${movie.poster_path}`}
                alt={movie.title}
              />
            ) : (
              <div className="no-image">
                No Image
              </div>
            )}

            <div className="movie-info">
              <h3>{movie.title}</h3>

              <p>
                ⭐ {movie.vote_average?.toFixed(1)}
              </p>

              <small>
                Release: {movie.release_date || "N/A"}
              </small>
            </div>
          </div>
        ))}
      </div>
    </div>
  );
}

export default MoviesList;