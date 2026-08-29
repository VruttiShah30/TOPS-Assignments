import { useState } from "react";

function LikeCounter() {
  const [likes, setLikes] = useState(0);

  const handleLike = () => {
    setLikes((previousLikes) => previousLikes + 1);
  };

  return (
    <div className="card">
      <h2> Like Counter</h2>

      <p className="like-count">
        {likes} {likes === 1 ? "Like" : "Likes"}
      </p>

      <button onClick={handleLike}>
         Like
      </button>
    </div>
  );
}

export default LikeCounter;