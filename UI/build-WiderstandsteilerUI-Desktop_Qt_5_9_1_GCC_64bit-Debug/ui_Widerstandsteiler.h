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
    QLabel *Tolleranz;
    QLabel *Res1;
    QLabel *Res2;
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
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Widerstandsteiler)
    {
        if (Widerstandsteiler->objectName().isEmpty())
            Widerstandsteiler->setObjectName(QStringLiteral("Widerstandsteiler"));
        Widerstandsteiler->resize(818, 448);
        centralWidget = new QWidget(Widerstandsteiler);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 310, 89, 21));
        Tolleranz = new QLabel(centralWidget);
        Tolleranz->setObjectName(QStringLiteral("Tolleranz"));
        Tolleranz->setGeometry(QRect(650, 100, 67, 17));
        Res1 = new QLabel(centralWidget);
        Res1->setObjectName(QStringLiteral("Res1"));
        Res1->setGeometry(QRect(480, 100, 67, 17));
        Res2 = new QLabel(centralWidget);
        Res2->setObjectName(QStringLiteral("Res2"));
        Res2->setGeometry(QRect(480, 230, 67, 17));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 41, 202, 224));
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
        Picture->setGeometry(QRect(380, 0, 91, 341));
        Picture->setPixmap(QPixmap(QString::fromUtf8("Images/Widerstand.svg")));
        Widerstandsteiler->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Widerstandsteiler);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 818, 22));
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
        Tolleranz->setText(QApplication::translate("Widerstandsteiler", "Tolleranz", Q_NULLPTR));
        Res1->setText(QApplication::translate("Widerstandsteiler", "Res1", Q_NULLPTR));
        Res2->setText(QApplication::translate("Widerstandsteiler", "Res2", Q_NULLPTR));
        UIn->setText(QApplication::translate("Widerstandsteiler", "U In", Q_NULLPTR));
        UOut->setText(QApplication::translate("Widerstandsteiler", "U Out", Q_NULLPTR));
        axWiderstand->setText(QApplication::translate("Widerstandsteiler", "Max Widerstand", Q_NULLPTR));
        EReihe->setText(QApplication::translate("Widerstandsteiler", "Norm Reihe", Q_NULLPTR));
        Picture->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widerstandsteiler: public Ui_Widerstandsteiler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDERSTANDSTEILER_H
