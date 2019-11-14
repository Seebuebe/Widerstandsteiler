/********************************************************************************
** Form generated from reading UI file 'Widerstandsteiler.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDERSTANDSTEILER_H
#define UI_WIDERSTANDSTEILER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widerstandsteiler
{
public:
    QWidget *centralWidget;
    QLabel *Picture;
    QWidget *layoutWidget;
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
    QWidget *widget;
    QVBoxLayout *verticalLayout_10;
    QLabel *FehlerLable;
    QHBoxLayout *horizontalLayout;
    QLabel *FehlerVal;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *UIn;
    QLineEdit *UinStr;
    QVBoxLayout *verticalLayout_2;
    QLabel *UOut;
    QLineEdit *UoutStr;
    QVBoxLayout *verticalLayout_3;
    QLabel *EReihe;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *EReiheDown;
    QLabel *EReiheInp;
    QPushButton *EReiheUp;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Widerstandsteiler)
    {
        if (Widerstandsteiler->objectName().isEmpty())
            Widerstandsteiler->setObjectName(QString::fromUtf8("Widerstandsteiler"));
        Widerstandsteiler->resize(732, 423);
        centralWidget = new QWidget(Widerstandsteiler);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Picture = new QLabel(centralWidget);
        Picture->setObjectName(QString::fromUtf8("Picture"));
        Picture->setGeometry(QRect(320, 40, 81, 281));
        Picture->setPixmap(QPixmap(QString::fromUtf8(":/ResImag/Images/Bild2.png")));
        Picture->setScaledContents(true);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(420, 50, 136, 241));
        verticalLayout_9 = new QVBoxLayout(layoutWidget);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        Res1Lable = new QLabel(layoutWidget);
        Res1Lable->setObjectName(QString::fromUtf8("Res1Lable"));

        verticalLayout_6->addWidget(Res1Lable);

        Res1 = new QLabel(layoutWidget);
        Res1->setObjectName(QString::fromUtf8("Res1"));

        verticalLayout_6->addWidget(Res1);


        verticalLayout_9->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        UoutLable = new QLabel(layoutWidget);
        UoutLable->setObjectName(QString::fromUtf8("UoutLable"));

        verticalLayout_7->addWidget(UoutLable);

        UoutVal = new QLabel(layoutWidget);
        UoutVal->setObjectName(QString::fromUtf8("UoutVal"));

        verticalLayout_7->addWidget(UoutVal);


        verticalLayout_9->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_8->addWidget(label_4);

        Res2 = new QLabel(layoutWidget);
        Res2->setObjectName(QString::fromUtf8("Res2"));

        verticalLayout_8->addWidget(Res2);


        verticalLayout_9->addLayout(verticalLayout_8);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(580, 51, 61, 71));
        verticalLayout_10 = new QVBoxLayout(widget);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        FehlerLable = new QLabel(widget);
        FehlerLable->setObjectName(QString::fromUtf8("FehlerLable"));

        verticalLayout_10->addWidget(FehlerLable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        FehlerVal = new QLabel(widget);
        FehlerVal->setObjectName(QString::fromUtf8("FehlerVal"));

        horizontalLayout->addWidget(FehlerVal);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);


        verticalLayout_10->addLayout(horizontalLayout);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(31, 279, 80, 25));
        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(32, 52, 196, 166));
        verticalLayout_4 = new QVBoxLayout(widget1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        UIn = new QLabel(widget1);
        UIn->setObjectName(QString::fromUtf8("UIn"));

        verticalLayout->addWidget(UIn);

        UinStr = new QLineEdit(widget1);
        UinStr->setObjectName(QString::fromUtf8("UinStr"));

        verticalLayout->addWidget(UinStr);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        UOut = new QLabel(widget1);
        UOut->setObjectName(QString::fromUtf8("UOut"));

        verticalLayout_2->addWidget(UOut);

        UoutStr = new QLineEdit(widget1);
        UoutStr->setObjectName(QString::fromUtf8("UoutStr"));

        verticalLayout_2->addWidget(UoutStr);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        EReihe = new QLabel(widget1);
        EReihe->setObjectName(QString::fromUtf8("EReihe"));

        verticalLayout_3->addWidget(EReihe);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        EReiheDown = new QPushButton(widget1);
        EReiheDown->setObjectName(QString::fromUtf8("EReiheDown"));

        horizontalLayout_2->addWidget(EReiheDown);

        EReiheInp = new QLabel(widget1);
        EReiheInp->setObjectName(QString::fromUtf8("EReiheInp"));

        horizontalLayout_2->addWidget(EReiheInp);

        EReiheUp = new QPushButton(widget1);
        EReiheUp->setObjectName(QString::fromUtf8("EReiheUp"));

        horizontalLayout_2->addWidget(EReiheUp);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        Widerstandsteiler->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Widerstandsteiler);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 732, 22));
        Widerstandsteiler->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Widerstandsteiler);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Widerstandsteiler->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Widerstandsteiler);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Widerstandsteiler->setStatusBar(statusBar);

        retranslateUi(Widerstandsteiler);

        QMetaObject::connectSlotsByName(Widerstandsteiler);
    } // setupUi

    void retranslateUi(QMainWindow *Widerstandsteiler)
    {
        Widerstandsteiler->setWindowTitle(QApplication::translate("Widerstandsteiler", "Widerstandsteiler", nullptr));
        Picture->setText(QString());
        Res1Lable->setText(QApplication::translate("Widerstandsteiler", "Widerstand 1", nullptr));
        Res1->setText(QApplication::translate("Widerstandsteiler", "Res1", nullptr));
        UoutLable->setText(QApplication::translate("Widerstandsteiler", "Ausgangsspannung", nullptr));
        UoutVal->setText(QApplication::translate("Widerstandsteiler", "Uout", nullptr));
        label_4->setText(QApplication::translate("Widerstandsteiler", "Widerstand 2", nullptr));
        Res2->setText(QApplication::translate("Widerstandsteiler", "Res2", nullptr));
        FehlerLable->setText(QApplication::translate("Widerstandsteiler", "Fehler", nullptr));
        FehlerVal->setText(QApplication::translate("Widerstandsteiler", "-", nullptr));
        label->setText(QApplication::translate("Widerstandsteiler", "%", nullptr));
        pushButton->setText(QApplication::translate("Widerstandsteiler", "GO", nullptr));
        UIn->setText(QApplication::translate("Widerstandsteiler", "U In", nullptr));
        UOut->setText(QApplication::translate("Widerstandsteiler", "U Out", nullptr));
        EReihe->setText(QApplication::translate("Widerstandsteiler", "Norm Reihe", nullptr));
        EReiheDown->setText(QApplication::translate("Widerstandsteiler", "<", nullptr));
        EReiheInp->setText(QApplication::translate("Widerstandsteiler", "E3", nullptr));
        EReiheUp->setText(QApplication::translate("Widerstandsteiler", ">", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widerstandsteiler: public Ui_Widerstandsteiler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDERSTANDSTEILER_H
