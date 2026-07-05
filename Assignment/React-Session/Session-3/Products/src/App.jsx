import ProductCard from "./ProductCard";
import UserProfile from "./UserProfile";

function App() {
  return (
    <div>
      <h1>React Props Example</h1>

      <ProductCard productName="iPhone 15" price={79999} />
      <ProductCard productName="Samsung TV" price={45000} />

      <UserProfile
        username="vrutti_shah"
        followers={1200}
        profilePic="https://images.unsplash.com/photo-1494790108377-be9c29b29330?w=300"
      />

      {/* Default Props Example */}
      <UserProfile username="guest_user" />
    </div>
  );
}

export default App;