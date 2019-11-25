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
    QVBoxLayout *verticalLayout_10;
    QLabel *FehlerLable;
    QHBoxLayout *horizontalLayout;
    QLabel *FehlerVal;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *UIn;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *UinStr;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *UOut;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *UoutStr;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *EReihe;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *EReiheDown;
    QLabel *EReiheInp;
    QPushButton *EReiheUp;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_7;
    QLabel *Res1Lable;
    QHBoxLayout *horizontalLayout_6;
    QLabel *Res1;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *UoutLable;
    QHBoxLayout *horizontalLayout_5;
    QLabel *UoutVal;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *Res2;
    QLabel *label_7;
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
        layoutWidget->setGeometry(QRect(580, 51, 61, 71));
        verticalLayout_10 = new QVBoxLayout(layoutWidget);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        FehlerLable = new QLabel(layoutWidget);
        FehlerLable->setObjectName(QString::fromUtf8("FehlerLable"));

        verticalLayout_10->addWidget(FehlerLable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        FehlerVal = new QLabel(layoutWidget);
        FehlerVal->setObjectName(QString::fromUtf8("FehlerVal"));

        horizontalLayout->addWidget(FehlerVal);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);


        verticalLayout_10->addLayout(horizontalLayout);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(31, 279, 80, 25));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(33, 54, 196, 172));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        UIn = new QLabel(widget);
        UIn->setObjectName(QString::fromUtf8("UIn"));

        verticalLayout->addWidget(UIn);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        UinStr = new QLineEdit(widget);
        UinStr->setObjectName(QString::fromUtf8("UinStr"));

        horizontalLayout_4->addWidget(UinStr);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        UOut = new QLabel(widget);
        UOut->setObjectName(QString::fromUtf8("UOut"));

        verticalLayout_2->addWidget(UOut);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        UoutStr = new QLineEdit(widget);
        UoutStr->setObjectName(QString::fromUtf8("UoutStr"));

        horizontalLayout_3->addWidget(UoutStr);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        EReihe = new QLabel(widget);
        EReihe->setObjectName(QString::fromUtf8("EReihe"));

        verticalLayout_3->addWidget(EReihe);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        EReiheDown = new QPushButton(widget);
        EReiheDown->setObjectName(QString::fromUtf8("EReiheDown"));

        horizontalLayout_2->addWidget(EReiheDown);

        EReiheInp = new QLabel(widget);
        EReiheInp->setObjectName(QString::fromUtf8("EReiheInp"));

        horizontalLayout_2->addWidget(EReiheInp);

        EReiheUp = new QPushButton(widget);
        EReiheUp->setObjectName(QString::fromUtf8("EReiheUp"));

        horizontalLayout_2->addWidget(EReiheUp);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_3);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(420, 53, 136, 231));
        verticalLayout_9 = new QVBoxLayout(widget1);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        Res1Lable = new QLabel(widget1);
        Res1Lable->setObjectName(QString::fromUtf8("Res1Lable"));

        verticalLayout_7->addWidget(Res1Lable);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        Res1 = new QLabel(widget1);
        Res1->setObjectName(QString::fromUtf8("Res1"));

        horizontalLayout_6->addWidget(Res1);

        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);


        verticalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout_9->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        UoutLable = new QLabel(widget1);
        UoutLable->setObjectName(QString::fromUtf8("UoutLable"));

        verticalLayout_6->addWidget(UoutLable);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        UoutVal = new QLabel(widget1);
        UoutVal->setObjectName(QString::fromUtf8("UoutVal"));

        horizontalLayout_5->addWidget(UoutVal);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);


        verticalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout_9->addLayout(verticalLayout_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_8->addWidget(label_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        Res2 = new QLabel(widget1);
        Res2->setObjectName(QString::fromUtf8("Res2"));

        horizontalLayout_7->addWidget(Res2);

        label_7 = new QLabel(widget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);


        verticalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout_9->addLayout(verticalLayout_8);

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
        FehlerLable->setText(QApplication::translate("Widerstandsteiler", "Fehler", nullptr));
        FehlerVal->setText(QApplication::translate("Widerstandsteiler", "-", nullptr));
        label->setText(QApplication::translate("Widerstandsteiler", "%", nullptr));
        pushButton->setText(QApplication::translate("Widerstandsteiler", "GO", nullptr));
        UIn->setText(QApplication::translate("Widerstandsteiler", "U In", nullptr));
        label_3->setText(QApplication::translate("Widerstandsteiler", "V", nullptr));
        UOut->setText(QApplication::translate("Widerstandsteiler", "U Out", nullptr));
        label_2->setText(QApplication::translate("Widerstandsteiler", "V", nullptr));
        EReihe->setText(QApplication::translate("Widerstandsteiler", "Norm Reihe", nullptr));
        EReiheDown->setText(QApplication::translate("Widerstandsteiler", "<", nullptr));
        EReiheInp->setText(QApplication::translate("Widerstandsteiler", "E3", nullptr));
        EReiheUp->setText(QApplication::translate("Widerstandsteiler", ">", nullptr));
        Res1Lable->setText(QApplication::translate("Widerstandsteiler", "Widerstand 1", nullptr));
        Res1->setText(QApplication::translate("Widerstandsteiler", "Res1", nullptr));
        label_6->setText(QApplication::translate("Widerstandsteiler", "Ohm", nullptr));
        UoutLable->setText(QApplication::translate("Widerstandsteiler", "Ausgangsspannung", nullptr));
        UoutVal->setText(QApplication::translate("Widerstandsteiler", "Uout", nullptr));
        label_5->setText(QApplication::translate("Widerstandsteiler", "V", nullptr));
        label_4->setText(QApplication::translate("Widerstandsteiler", "Widerstand 2", nullptr));
        Res2->setText(QApplication::translate("Widerstandsteiler", "Res2", nullptr));
        label_7->setText(QApplication::translate("Widerstandsteiler", "Ohm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widerstandsteiler: public Ui_Widerstandsteiler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDERSTANDSTEILER_H
