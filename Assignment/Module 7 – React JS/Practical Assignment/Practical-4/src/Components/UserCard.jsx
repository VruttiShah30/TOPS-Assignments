export const UserCard = (props) => {
    return <>
        <div style={{
            display: "flex",
            justifyContent: "center",
            alignItems: "center",
            height: "50vh"
        }}>
            <div style={{
                border: "1px solid black",
                width: "250px",
                padding: "20px",
                textAlign: "center",
                borderRadius: "10px"
            }}>
                <h2>Name: {props.name}</h2>
                <h3>Age: {props.age}</h3>
                <h3>Location: {props.location}</h3>
            </div>
        </div>
    </>
}