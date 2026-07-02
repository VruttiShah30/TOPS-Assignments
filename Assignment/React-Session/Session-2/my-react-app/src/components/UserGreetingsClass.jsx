import React, { Component } from 'react'

class UserGreetingsClass extends Component {
    render () {
        return (
            
            <h2>
                Hello , { this.props.username }!
            </h2>
        )
    }
}

export default UserGreetingsClass