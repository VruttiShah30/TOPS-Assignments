const App = () => {

  var topic = "JSX";
  var message = "JSX allows us to write HTML-like code inside JavaScript using curly braces for dynamic data.";

  return <>
    <h1>Welcome to JSX</h1>
    <p>{message}</p>
    <h3>Topic: {topic}</h3>
  </>
}

export default App;