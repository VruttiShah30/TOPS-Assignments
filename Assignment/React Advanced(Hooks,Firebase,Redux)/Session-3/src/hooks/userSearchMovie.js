import { useEffect, useState } from "react";

const API_KEY = import.meta.env.VITE_OMDB_API_KEY;

const useSearchMovies = (query) => {
  const [movies, setMovies] = useState([]);
  const [loading, setLoading] = useState(false);
  const [error, setError] = useState("");

  // Fetch movies whenever query changes
  useEffect(() => {
    const fetchMovies = async () => {
      // Don't call API for empty search
      if (!query.trim()) {
        setMovies([]);
        setError("");
        setLoading(false);
        return;
      }

      try {
        setLoading(true);
        setError("");

        const response = await fetch(
          `https://www.omdbapi.com/?apikey=${API_KEY}&s=${encodeURIComponent(
            query
          )}`
        );

        if (!response.ok) {
          throw new Error("Failed to connect to OMDb API");
        }

        const data = await response.json();

        // OMDb returns Response: "False" when search fails
        if (data.Response === "False") {
          throw new Error(data.Error || "Movies not found");
        }

        setMovies(data.Search || []);
      } catch (err) {
        setMovies([]);
        setError(err.message || "Something went wrong");
      } finally {
        setLoading(false);
      }
    };

    fetchMovies();
  }, [query]);

  // Log whenever movie data changes
  useEffect(() => {
    console.log("Movie data updated:", movies);
  }, [movies]);

  return {
    movies,
    loading,
    error,
  };
};

export default useSearchMovies;