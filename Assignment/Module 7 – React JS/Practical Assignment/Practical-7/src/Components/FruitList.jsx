export const FruitList = () => {

    var fruits = ["Apple", "Banana", "Mango", "Orange", "Grapes"];

    return <>
        <h1 style={{ textAlign: "center" }}>
            Fruit List
        </h1>

        <ul style={{
            width: "200px",
            margin: "auto",
            textAlign: "left"
        }}>
            {
                fruits.map((fruit, index) => {
                    return <li key={index}>
                        {fruit}
                    </li>
                })
            }
        </ul>
    </>
}