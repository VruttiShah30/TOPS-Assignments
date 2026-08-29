import useCurrentTime from "../hooks/useCurrentTime";

function Clock() {
  const currentTime = useCurrentTime();

  return (
    <div className="card clock-card">
      <h2>⏰ Live Clock</h2>

      <h1>
        {currentTime.toLocaleTimeString()}
      </h1>

      <p>
        {currentTime.toLocaleDateString()}
      </p>
    </div>
  );
}

export default Clock;