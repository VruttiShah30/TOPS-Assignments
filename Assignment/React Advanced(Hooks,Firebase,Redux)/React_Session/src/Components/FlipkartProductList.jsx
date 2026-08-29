import useFetchData from "../hooks/useFetchData";

function FlipkartProductList() {
  const {
    data: products,
    loading,
    error,
  } = useFetchData("https://fakestoreapi.com/products");

  if (loading) {
    return (
      <div className="card">
        <h2> Flipkart Products</h2>
        <p>Loading products...</p>
      </div>
    );
  }

  if (error) {
    return (
      <div className="card">
        <h2> Flipkart Products</h2>
        <p>Error: {error}</p>
      </div>
    );
  }

  return (
    <div className="products-section">
      <h2> Flipkart Products</h2>

      <div className="products">
        {products.map((product) => (
          <div className="product-card" key={product.id}>
            <h3>{product.title}</h3>

            <p>
              <strong>Price:</strong> ${product.price}
            </p>
          </div>
        ))}
      </div>
    </div>
  );
}

export default FlipkartProductList;