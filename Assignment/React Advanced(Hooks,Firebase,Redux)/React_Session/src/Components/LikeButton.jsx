import { useContext } from "react";
import UserContext from "../context/UserContext";

function LikeButton() {
  const user = useContext(UserContext);

  return (
    <div>
      <p>
         Logged in as: <strong>{user.name}</strong>
      </p>

      <p> Email: {user.email}</p>

      <button> Like Post</button>
    </div>
  );
}

export default LikeButton;