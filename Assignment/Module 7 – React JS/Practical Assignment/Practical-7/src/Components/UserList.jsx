export const UserList = () => {

    var users = [
        { id: 1, name: "Vrutti" },
        { id: 2, name: "Riya" },
        { id: 3, name: "Priya" },
        { id: 4, name: "Amit" }
    ];

    return <>
        <h1 style={{ textAlign: "center" }}>
            User List
        </h1>

        <ul style={{
            width: "200px",
            margin: "auto",
            textAlign: "left"
        }}>
            {
                users.map((user) => {
                    return <li key={user.id}>
                        {user.name}
                    </li>
                })
            }
        </ul>
    </>
} 