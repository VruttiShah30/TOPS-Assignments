import { MiniProfile } from "./components/MiniProfile";
import { UserGreetings } from "./components/UserGreetings"
import UserGreetingsClass from "./components/UserGreetingsClass";

const App = () => {
  return (
    <>
      <div>
          <h1>Welcome to React JSX ! </h1>
          <UserGreetings username = "vrutti" />
          <UserGreetingsClass username = "vrutti"/>
          <MiniProfile />
      </div>
    </>
  )
}
export default App 


// import { UserGreetings } from "./components/UserGreetings";
// import UserGreetingsClass from "./components/UserGreetingsClass";
// function App() {
//   return (

//     <>
//     <h1>Welcome to React JSX ! </h1>

//     <UserGrettings username = "Vrutti" />
//     <UserGreetingsClass username = "Vrutti"/>
//     </>
//   )
// }

// export default App