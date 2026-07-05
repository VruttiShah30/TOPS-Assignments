function UserProfile({ username, followers, profilePic }) {
  return (
    <div
      style={{
        width: "280px",
        border: "1px solid #ddd",
        padding: "20px",
        borderRadius: "12px",
        textAlign: "center",
        boxShadow: "0 2px 10px rgba(0,0,0,0.2)",
        margin: "20px",
      }}
    >
      <img
        src={profilePic}
        alt="profile"
        style={{
          width: "100px",
          height: "100px",
          borderRadius: "50%",
          objectFit: "cover",
        }}
      />
      <h2>{username}</h2>
      <p>{followers} Followers</p>
    </div>
  );
}

UserProfile.defaultProps = {
  followers: 0,
  profilePic: "https://via.placeholder.com/100",
};

export default UserProfile;