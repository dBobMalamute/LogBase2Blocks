#ifndef BLANKIDEA_H
#define BLANKIDEA_H

#include "../MalamuteCore/InheritedClasses/Idea.h"
#include <QQuickItem>

struct BlankAttributes : public IdeaAttributes
{
    BlankAttributes();
};

class BlankIdea : public Idea
{
    Q_OBJECT

public:
    explicit BlankIdea();
    const IdeaAttributes attributes() override;

private:

};

#endif // BLANKIDEA_H
