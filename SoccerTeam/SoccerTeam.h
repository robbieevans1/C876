#pragma once
#include "TeamPerson.h"

class SoccerTeam {
public:
    void SetHeadCoach(TeamPerson teamPerson);
    void SetAssistantCoach(TeamPerson teamPerson);

    TeamPerson GetHeadCoach() const;
    TeamPerson GetAssistantCoach() const;

    void Print() const;

private:
    TeamPerson headCoach;
    TeamPerson assistantCoach;
    // Players omitted for brevity
};