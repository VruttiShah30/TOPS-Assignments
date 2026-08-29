import useFetchData from "../hooks/useFetchData";

function ProductList() {
  const url = "https://fakestoreapi.com/products";

  const {
    data,
    loading,
    error,
  } = useFetchData(url);

  if (loading) {
    return (
      <div className="card">
        <h2>🛍️ Flipkart Products</h2>
        <p>Loading products...</p>
      </div>
    );
  }

  if (error) {
    return (
      <div className="card error">
        <h2>🛍️ Flipkart Products</h2>
        <p>{error}</p>
      </div>
    );
  }

  return (
    <div className="section">
      <h2>🛍️ Flipkart Products</h2>

      <div className="product-grid">
        {data?.slice(0, 8).map((product) => (
          <div
            className="product-card"
            key={product.id}
          >
            <img
              src={product.image}
              alt={product.title}
            />

            <h3>
              {product.title}
            </h3>

            <p className="price">
              ₹{Math.round(product.price * 85)}
            </p>

            <p>
              ⭐ {product.rating?.rate}
            </p>

            <button>
              Add to Cart
            </button>
          </div>
        ))}
      </div>
    </div>
  );
}

export default ProductList;