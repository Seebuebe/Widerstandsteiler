/********************************************************************************
** Form generated from reading UI file 'Widerstandsteiler.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDERSTANDSTEILER_H
#define UI_WIDERSTANDSTEILER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widerstandsteiler
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *UIn;
    QLineEdit *UinStr;
    QVBoxLayout *verticalLayout_2;
    QLabel *UOut;
    QLineEdit *UoutStr;
    QLabel *axWiderstand;
    QHBoxLayout *horizontalLayout;
    QLineEdit *MaxResStr;
    QSpinBox *MaxResExp;
    QVBoxLayout *verticalLayout_3;
    QLabel *EReihe;
    QSpinBox *NormReihe;
    QLabel *Picture;
    QWidget *widget;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_6;
    QLabel *Res1Lable;
    QLabel *Res1;
    QVBoxLayout *verticalLayout_7;
    QLabel *UoutLable;
    QLabel *UoutVal;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_4;
    QLabel *Res2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_10;
    QLabel *FehlerLable;
    QLabel *FehlerVal;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Widerstandsteiler)
    {
        if (Widerstandsteiler->objectName().isEmpty())
            Widerstandsteiler->setObjectName(QStringLiteral("Widerstandsteiler"));
        Widerstandsteiler->resize(639, 448);
        centralWidget = new QWidget(Widerstandsteiler);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 309, 89, 21));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 50, 121, 224));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        UIn = new QLabel(layoutWidget);
        UIn->setObjectName(QStringLiteral("UIn"));

        verticalLayout->addWidget(UIn);

        UinStr = new QLineEdit(layoutWidget);
        UinStr->setObjectName(QStringLiteral("UinStr"));

        verticalLayout->addWidget(UinStr);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        UOut = new QLabel(layoutWidget);
        UOut->setObjectName(QStringLiteral("UOut"));

        verticalLayout_2->addWidget(UOut);

        UoutStr = new QLineEdit(layoutWidget);
        UoutStr->setObjectName(QStringLiteral("UoutStr"));

        verticalLayout_2->addWidget(UoutStr);


        verticalLayout_4->addLayout(verticalLayout_2);

        axWiderstand = new QLabel(layoutWidget);
        axWiderstand->setObjectName(QStringLiteral("axWiderstand"));

        verticalLayout_4->addWidget(axWiderstand);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        MaxResStr = new QLineEdit(layoutWidget);
        MaxResStr->setObjectName(QStringLiteral("MaxResStr"));

        horizontalLayout->addWidget(MaxResStr);

        MaxResExp = new QSpinBox(layoutWidget);
        MaxResExp->setObjectName(QStringLiteral("MaxResExp"));

        horizontalLayout->addWidget(MaxResExp);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        EReihe = new QLabel(layoutWidget);
        EReihe->setObjectName(QStringLiteral("EReihe"));

        verticalLayout_3->addWidget(EReihe);

        NormReihe = new QSpinBox(layoutWidget);
        NormReihe->setObjectName(QStringLiteral("NormReihe"));

        verticalLayout_3->addWidget(NormReihe);


        verticalLayout_5->addLayout(verticalLayout_3);

        Picture = new QLabel(centralWidget);
        Picture->setObjectName(QStringLiteral("Picture"));
        Picture->setGeometry(QRect(240, 20, 91, 341));
        Picture->setPixmap(QPixmap(QString::fromUtf8("Images/Widerstand.svg")));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(340, 70, 136, 241));
        verticalLayout_9 = new QVBoxLayout(widget);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        Res1Lable = new QLabel(widget);
        Res1Lable->setObjectName(QStringLiteral("Res1Lable"));

        verticalLayout_6->addWidget(Res1Lable);

        Res1 = new QLabel(widget);
        Res1->setObjectName(QStringLiteral("Res1"));

        verticalLayout_6->addWidget(Res1);


        verticalLayout_9->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        UoutLable = new QLabel(widget);
        UoutLable->setObjectName(QStringLiteral("UoutLable"));

        verticalLayout_7->addWidget(UoutLable);

        UoutVal = new QLabel(widget);
        UoutVal->setObjectName(QStringLiteral("UoutVal"));

        verticalLayout_7->addWidget(UoutVal);


        verticalLayout_9->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_8->addWidget(label_4);

        Res2 = new QLabel(widget);
        Res2->setObjectName(QStringLiteral("Res2"));

        verticalLayout_8->addWidget(Res2);


        verticalLayout_9->addLayout(verticalLayout_8);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(510, 70, 91, 81));
        verticalLayout_10 = new QVBoxLayout(widget1);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        FehlerLable = new QLabel(widget1);
        FehlerLable->setObjectName(QStringLiteral("FehlerLable"));

        verticalLayout_10->addWidget(FehlerLable);

        FehlerVal = new QLabel(widget1);
        FehlerVal->setObjectName(QStringLiteral("FehlerVal"));

        verticalLayout_10->addWidget(FehlerVal);

        Widerstandsteiler->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Widerstandsteiler);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 639, 22));
        Widerstandsteiler->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Widerstandsteiler);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Widerstandsteiler->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Widerstandsteiler);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Widerstandsteiler->setStatusBar(statusBar);

        retranslateUi(Widerstandsteiler);

        QMetaObject::connectSlotsByName(Widerstandsteiler);
    } // setupUi

    void retranslateUi(QMainWindow *Widerstandsteiler)
    {
        Widerstandsteiler->setWindowTitle(QApplication::translate("Widerstandsteiler", "Widerstandsteiler", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widerstandsteiler", "GO", Q_NULLPTR));
        UIn->setText(QApplication::translate("Widerstandsteiler", "U In", Q_NULLPTR));
        UOut->setText(QApplication::translate("Widerstandsteiler", "U Out", Q_NULLPTR));
        axWiderstand->setText(QApplication::translate("Widerstandsteiler", "Max Widerstand", Q_NULLPTR));
        EReihe->setText(QApplication::translate("Widerstandsteiler", "Norm Reihe", Q_NULLPTR));
        NormReihe->setPrefix(QApplication::translate("Widerstandsteiler", "E", Q_NULLPTR));
        Picture->setText(QString());
        Res1Lable->setText(QApplication::translate("Widerstandsteiler", "Widerstand 1", Q_NULLPTR));
        Res1->setText(QApplication::translate("Widerstandsteiler", "Res1", Q_NULLPTR));
        UoutLable->setText(QApplication::translate("Widerstandsteiler", "Ausgangsspannung", Q_NULLPTR));
        UoutVal->setText(QApplication::translate("Widerstandsteiler", "Uout", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widerstandsteiler", "Widerstand 2", Q_NULLPTR));
        Res2->setText(QApplication::translate("Widerstandsteiler", "Res2", Q_NULLPTR));
        FehlerLable->setText(QApplication::translate("Widerstandsteiler", "Fehler", Q_NULLPTR));
        FehlerVal->setText(QApplication::translate("Widerstandsteiler", "Error", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widerstandsteiler: public Ui_Widerstandsteiler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDERSTANDSTEILER_H
