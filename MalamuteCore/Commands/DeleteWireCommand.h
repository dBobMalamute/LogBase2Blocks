#ifndef DELETEWIRECOMMAND_H
#define DELETEWIRECOMMAND_H

#include "UndoCommand.h"
#include <QJsonObject>

class Corkboard;

class DeleteWireCommand: public UndoCommand
{
public:
    DeleteWireCommand(const QJsonObject& obj, Corkboard* corkboard);

    void undo() override;
    void redo() override;

private:
    Corkboard* m_corkboard;
    QJsonObject m_obj;
};

#endif // REMOVEWIRECOMMAND_H
