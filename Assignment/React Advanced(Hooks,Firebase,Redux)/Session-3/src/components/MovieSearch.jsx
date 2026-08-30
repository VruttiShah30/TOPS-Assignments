import { useState } from "react";
import useSearchMovies from "../hooks/useSearchMovies";

const MovieSearch = () => {
  const [query, setQuery] = useState("");

  const { movies, loading, error } = useSearchMovies(query);

  const handleChange = (e) => {
    setQuery(e.target.value);
  };

  return (
    <div className="movie-container">
      <h1>🎬 Movie Search App</h1>

      <div className="search-box">
        <input
          type="text"
          placeholder="Search for a movie..."
          value={query}
          onChange={handleChange}
        />
      </div>

      {/* Loading */}
      {loading && (
        <div className="loading-container">
          <div className="spinner"></div>
          <p>Searching movies...</p>
        </div>
      )}

      {/* Error */}
      {error && !loading && (
        <div className="error-message">
           {error}
        </div>
      )}

      {/* Empty search */}
      {!query.trim() && !loading && (
        <p className="message">
          Enter a movie name to start searching.
        </p>
      )}

      {/* Movies */}
      {!loading && !error && movies.length > 0 && (
        <div className="movie-grid">
          {movies.map((movie) => (
            <div className="movie-card" key={movie.imdbID}>
              <img
                src={
                  movie.Poster !== "N/A"
                    ? movie.Poster
                    : "https://via.placeholder.com/300x450?text=No+Poster"
                }
                alt={movie.Title}
              />

              <div className="movie-info">
                <h2>{movie.Title}</h2>
                <p>Year: {movie.Year}</p>
                <p>Type: {movie.Type}</p>
              </div>
            </div>
          ))}
        </div>
      )}

      {/* No results */}
      {!loading &&
        !error &&
        query.trim() &&
        movies.length === 0 && (
          <p className="message">No movies found.</p>
        )}
    </div>
  );
};

export default MovieSearch;