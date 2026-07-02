import profile from '../assets/profile.jpeg'

export const MiniProfile = () => {
    return (
        <>
            <div>
                <img 
                    src={profile} 
                    alt="profile" 
                    width="150"
                />

                <h2>Vrutti Shah</h2>
                <p>Learning MERN Stack</p>
            </div>
        </>
    )
}