#ifndef TRANSFER_MODEL_H
#define TRANSFER_MODEL_H

#include <QAbstractListModel>


class TransferModel : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit TransferModel(QObject *parent = Q_NULLPTR);
    ~TransferModel();

    int rowCount(const QModelIndex &parent = QModelIndex()) const Q_DECL_OVERRIDE;
    //QModelIndex sibling(int row, int column, const QModelIndex &idx) const Q_DECL_OVERRIDE;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const Q_DECL_OVERRIDE;
    //bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole) Q_DECL_OVERRIDE;

    int columnCount(const QModelIndex &parent) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const Q_DECL_OVERRIDE;

    Qt::ItemFlags flags(const QModelIndex &index) const Q_DECL_OVERRIDE;

    //bool insertRows(int row, int count, const QModelIndex &parent = QModelIndex()) Q_DECL_OVERRIDE;
    //bool removeRows(int row, int count, const QModelIndex &parent = QModelIndex()) Q_DECL_OVERRIDE;

    //Qt::DropActions supportedDropActions() const Q_DECL_OVERRIDE;
protected:
    static const QList<QString> headers;
};

#endif // TRANSFER_MODEL_H
