#include "Blank.h"
#include <QQmlEngine>

BlankAttributes::BlankAttributes()
{
    m_listName = "Blank";
    m_displayName = "";
    m_authors << "dBob";
    m_description = "Test Idea please ignore.";

    m_iconPath = "";
    m_embeddedQMLPath = ":/QML/Blank.qml";

    m_resizeable = true;
}

BlankIdea::BlankIdea()
{
    setStatus(IdeaStatus::Working, "Showing Square", "Showing Square");
}

const IdeaAttributes BlankIdea::attributes()
{
    return Magic<BlankAttributes>::cast();
}



