import { useState } from "react";

function LikeCounter() {
  const [likes, setLikes] = useState(0);

  const handleLike = () => {
    setLikes(likes + 1);
  };

  return (
    <div>
      <h2>Instagram Post</h2>

      <p>{likes} Likes</p>

      <button onClick={handleLike}>
        Like
      </button>
    </div>
  );
}

export default LikeCounter;