export const VoteEligibility = () => {

    var age = 20;

    return <>
        <h1>Voting Eligibility</h1>

        {
            age >= 18 ?
                <h2>You are eligible to vote</h2>
                :
                <h2>You are not eligible to vote</h2>
        }
    </>
}