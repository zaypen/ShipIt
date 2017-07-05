#include "transfermodel.h"

const QList<QString> TransferModel::headers = {
    tr("Name"), tr("Size"), tr("Progress")
};

TransferModel::TransferModel(QObject *parent) :
    QAbstractListModel(parent)
{

}

TransferModel::~TransferModel()
{

}

int TransferModel::rowCount(const QModelIndex &parent) const
{
    return 1;
}

QVariant TransferModel::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole)
        return tr("a");
    else
        return QVariant();
}

int TransferModel::columnCount(const QModelIndex &parent) const
{
    return headers.length();
}

QVariant TransferModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (orientation == Qt::Horizontal && role == Qt::DisplayRole) {
        return headers.at(section);
    } else {
        return QAbstractListModel::headerData(section, orientation, role);
    }
}

Qt::ItemFlags TransferModel::flags(const QModelIndex &index) const
{
    return QAbstractListModel::flags(index);
}

