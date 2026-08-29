import useLikeButton from "../hooks/useLikeButton";

function PostCard({ username, image, caption, initialLikes }) {
  const {
    liked,
    likeCount,
    toggleLike,
  } = useLikeButton(initialLikes);

  return (
    <div className="post-card">
      <div className="post-header">
        <div className="profile-circle">
          {username.charAt(0).toUpperCase()}
        </div>

        <strong>{username}</strong>
      </div>

      <img
        src={image}
        alt="Post"
        className="post-image"
      />

      <div className="post-actions">
        <button
          className={liked ? "like-button liked" : "like-button"}
          onClick={toggleLike}
        >
          {liked ? "❤️" : "🤍"}
        </button>

        <span>{likeCount} likes</span>
      </div>

      <p>
        <strong>{username}</strong> {caption}
      </p>
    </div>
  );
}

export default PostCard;