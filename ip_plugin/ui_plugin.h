/********************************************************************************
** Form generated from reading UI file 'plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGIN_H
#define UI_PLUGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginGui
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *ipLocalShow;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboServer;
    QLabel *label_2;
    QSpinBox *spinPort;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editMsg;
    QPushButton *btnSend;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDisconnect;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *PluginGui)
    {
        if (PluginGui->objectName().isEmpty())
            PluginGui->setObjectName(QStringLiteral("PluginGui"));
        PluginGui->resize(567, 530);
        gridLayout = new QGridLayout(PluginGui);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(PluginGui);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 2, 5, 2);
        ipLocalShow = new QLabel(groupBox);
        ipLocalShow->setObjectName(QStringLiteral("ipLocalShow"));

        verticalLayout->addWidget(ipLocalShow);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        comboServer = new QComboBox(groupBox);
        comboServer->setObjectName(QStringLiteral("comboServer"));
        comboServer->setMinimumSize(QSize(130, 0));
        comboServer->setEditable(true);

        horizontalLayout_2->addWidget(comboServer);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        spinPort = new QSpinBox(groupBox);
        spinPort->setObjectName(QStringLiteral("spinPort"));
        spinPort->setMinimumSize(QSize(0, 0));
        spinPort->setMinimum(1);
        spinPort->setMaximum(65535);
        spinPort->setValue(1200);

        horizontalLayout_2->addWidget(spinPort);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        editMsg = new QLineEdit(groupBox);
        editMsg->setObjectName(QStringLiteral("editMsg"));

        horizontalLayout->addWidget(editMsg);

        btnSend = new QPushButton(groupBox);
        btnSend->setObjectName(QStringLiteral("btnSend"));

        horizontalLayout->addWidget(btnSend);


        verticalLayout->addLayout(horizontalLayout);

        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButtonConnect = new QPushButton(groupBox);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));

        horizontalLayout_4->addWidget(pushButtonConnect);

        pushButtonDisconnect = new QPushButton(groupBox);
        pushButtonDisconnect->setObjectName(QStringLiteral("pushButtonDisconnect"));

        horizontalLayout_4->addWidget(pushButtonDisconnect);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_4->addWidget(pushButton);


        horizontalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(groupBox);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);


        retranslateUi(PluginGui);

        QMetaObject::connectSlotsByName(PluginGui);
    } // setupUi

    void retranslateUi(QWidget *PluginGui)
    {
        PluginGui->setWindowTitle(QApplication::translate("PluginGui", "Form", Q_NULLPTR));
        groupBox->setTitle(QString());
        ipLocalShow->setText(QString());
        label->setText(QApplication::translate("PluginGui", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        comboServer->clear();
        comboServer->insertItems(0, QStringList()
         << QApplication::translate("PluginGui", "127.0.0.1", Q_NULLPTR)
         << QApplication::translate("PluginGui", "localHost", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("PluginGui", "\347\253\257\345\217\243\357\274\232", Q_NULLPTR));
        btnSend->setText(QApplication::translate("PluginGui", "\345\217\221\351\200\201\346\266\210\346\201\257", Q_NULLPTR));
        pushButtonConnect->setText(QApplication::translate("PluginGui", "\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", Q_NULLPTR));
        pushButtonDisconnect->setText(QApplication::translate("PluginGui", "\346\226\255\345\274\200\350\277\236\346\216\245", Q_NULLPTR));
        pushButton->setText(QApplication::translate("PluginGui", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PluginGui: public Ui_PluginGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGIN_H
