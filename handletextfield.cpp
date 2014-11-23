#include "handletextfield.h"

/*
 * This class handles interactions with the text field
 */
HandleTextField::HandleTextField(QObject *parent) :
    QObject(parent)
{
}

void HandleTextField::handleSubmitTextField(const QString &in)
{
    qDebug() << "c++: HandleTextField::handleSubmitTextField:" << in;
    emit setTextField(in.toUpper());
}
