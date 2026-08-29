import { useState } from "react";

function useLikeButton(initialLikes = 0) {
  const [liked, setLiked] = useState(false);
  const [likeCount, setLikeCount] = useState(initialLikes);

  const toggleLike = () => {
    setLiked((previousLiked) => {
      if (previousLiked) {
        setLikeCount((count) => count - 1);
      } else {
        setLikeCount((count) => count + 1);
      }

      return !previousLiked;
    });
  };

  return {
    liked,
    likeCount,
    toggleLike,
  };
}

export default useLikeButton;