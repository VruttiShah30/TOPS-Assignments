import { useMemo, useState } from "react";

function ProductList() {
  // Create 1000 products only once
  const [products] = useState(() => {
    const productArray = [];

    for (let i = 1; i <= 1000; i++) {
      productArray.push({
        id: i,
        name: `Product ${i}`,
        price: Math.floor(Math.random() * 5000) + 100,
      });
    }

    return productArray;
  });

  const [searchTerm, setSearchTerm] = useState("");

  // Measure filtering/render preparation time
  const startTime = performance.now();

  // useMemo prevents filtering from running unnecessarily
  const filteredProducts = useMemo(() => {
    return products.filter((product) =>
      product.name.toLowerCase().includes(searchTerm.toLowerCase())
    );
  }, [products, searchTerm]);

  const endTime = performance.now();

  console.log(
    `Filtering calculation time: ${(endTime - startTime).toFixed(2)} ms`
  );

  return (
    <div className="section">
      <h2>📦 Product List</h2>

      <p>Total Products: {products.length}</p>

      <input
        className="search-input"
        type="text"
        placeholder="Search product..."
        value={searchTerm}
        onChange={(e) => setSearchTerm(e.target.value)}
      />

      <p>
        Showing <strong>{filteredProducts.length}</strong> products
      </p>

      <div className="product-list">
        {filteredProducts.map((product) => (
          <div className="product-card" key={product.id}>
            <span>{product.name}</span>
            <strong>₹{product.price}</strong>
          </div>
        ))}
      </div>
    </div>
  );
}

export default ProductList;