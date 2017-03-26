/********************************************************************************
** Form generated from reading UI file 'prismmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRISMMAINWINDOW_H
#define UI_PRISMMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PRISMMainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *lbl_atomsfile;
    QLineEdit *lineedit_atomsfile;
    QPushButton *btn_atomsfile_browse;
    QPushButton *btn_go;
    QPushButton *btn_outputfile_browse;
    QLabel *lbl_outputfile;
    QLineEdit *lineedit_outputfile;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *box_sampleSettings;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_loadCoordinates;
    QPushButton *btn_saveCoordinates;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_8;
    QLabel *label_cellDim;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_cellDimX;
    QLineEdit *lineEdit_tileX;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_cellDimY;
    QLineEdit *lineEdit_tileY;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_cellDimZ;
    QLineEdit *lineEdit_tileZ;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *label_7;
    QGroupBox *box_simulationSettings;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lbl_pixelSize;
    QLineEdit *lineedit_pixelSize;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl_E0;
    QLineEdit *lineEdit_E0;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbl_potBound;
    QLineEdit *lineEdit_potbound;
    QHBoxLayout *horizontalLayout;
    QLabel *label_alphaBeamMax;
    QLineEdit *lineEdit_alphaBeamMax;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_10;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbl_numfp;
    QSpinBox *spinBox_numFP;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_sliceThickness;
    QLineEdit *lineEdit_sliceThickness;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QLabel *label;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_13;
    QLineEdit *lineedit_interpFactor_x;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_14;
    QLineEdit *lineedit_interpFactor_y;
    QGroupBox *box_calculationSettings;
    QLabel *lbl_numgpus;
    QSpinBox *spinBox_numGPUs;
    QLabel *lbl_numthreads;
    QSpinBox *spinBox_numThreads;
    QLabel *lbl_algo;
    QRadioButton *radBtn_PRISM;
    QRadioButton *radBtn_Multislice;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PRISMMainWindow)
    {
        if (PRISMMainWindow->objectName().isEmpty())
            PRISMMainWindow->setObjectName(QStringLiteral("PRISMMainWindow"));
        PRISMMainWindow->resize(901, 584);
        centralWidget = new QWidget(PRISMMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lbl_atomsfile = new QLabel(centralWidget);
        lbl_atomsfile->setObjectName(QStringLiteral("lbl_atomsfile"));

        gridLayout->addWidget(lbl_atomsfile, 0, 0, 1, 2);

        lineedit_atomsfile = new QLineEdit(centralWidget);
        lineedit_atomsfile->setObjectName(QStringLiteral("lineedit_atomsfile"));

        gridLayout->addWidget(lineedit_atomsfile, 0, 2, 1, 2);

        btn_atomsfile_browse = new QPushButton(centralWidget);
        btn_atomsfile_browse->setObjectName(QStringLiteral("btn_atomsfile_browse"));

        gridLayout->addWidget(btn_atomsfile_browse, 0, 4, 1, 2);

        btn_go = new QPushButton(centralWidget);
        btn_go->setObjectName(QStringLiteral("btn_go"));
        btn_go->setMinimumSize(QSize(0, 145));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        btn_go->setFont(font);

        gridLayout->addWidget(btn_go, 0, 6, 1, 4);

        btn_outputfile_browse = new QPushButton(centralWidget);
        btn_outputfile_browse->setObjectName(QStringLiteral("btn_outputfile_browse"));

        gridLayout->addWidget(btn_outputfile_browse, 1, 4, 2, 3);

        lbl_outputfile = new QLabel(centralWidget);
        lbl_outputfile->setObjectName(QStringLiteral("lbl_outputfile"));

        gridLayout->addWidget(lbl_outputfile, 2, 0, 1, 2);

        lineedit_outputfile = new QLineEdit(centralWidget);
        lineedit_outputfile->setObjectName(QStringLiteral("lineedit_outputfile"));

        gridLayout->addWidget(lineedit_outputfile, 2, 2, 1, 2);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        box_sampleSettings = new QGroupBox(centralWidget);
        box_sampleSettings->setObjectName(QStringLiteral("box_sampleSettings"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(box_sampleSettings->sizePolicy().hasHeightForWidth());
        box_sampleSettings->setSizePolicy(sizePolicy);
        horizontalLayout_13 = new QHBoxLayout(box_sampleSettings);
        horizontalLayout_13->setSpacing(0);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(2, 2, 2, 2);
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(0);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btn_loadCoordinates = new QPushButton(box_sampleSettings);
        btn_loadCoordinates->setObjectName(QStringLiteral("btn_loadCoordinates"));

        horizontalLayout_2->addWidget(btn_loadCoordinates);

        btn_saveCoordinates = new QPushButton(box_sampleSettings);
        btn_saveCoordinates->setObjectName(QStringLiteral("btn_saveCoordinates"));

        horizontalLayout_2->addWidget(btn_saveCoordinates);


        verticalLayout_13->addLayout(horizontalLayout_2);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_8 = new QLabel(box_sampleSettings);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_12->addWidget(label_8);

        label_cellDim = new QLabel(box_sampleSettings);
        label_cellDim->setObjectName(QStringLiteral("label_cellDim"));
        label_cellDim->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(label_cellDim);

        label_6 = new QLabel(box_sampleSettings);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(label_6);


        horizontalLayout_12->addLayout(verticalLayout_12);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(box_sampleSettings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 30));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        lineEdit_cellDimX = new QLineEdit(box_sampleSettings);
        lineEdit_cellDimX->setObjectName(QStringLiteral("lineEdit_cellDimX"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_cellDimX->sizePolicy().hasHeightForWidth());
        lineEdit_cellDimX->setSizePolicy(sizePolicy1);
        lineEdit_cellDimX->setMaximumSize(QSize(40, 16777215));
        lineEdit_cellDimX->setLayoutDirection(Qt::LeftToRight);
        lineEdit_cellDimX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(lineEdit_cellDimX);

        lineEdit_tileX = new QLineEdit(box_sampleSettings);
        lineEdit_tileX->setObjectName(QStringLiteral("lineEdit_tileX"));
        lineEdit_tileX->setMaximumSize(QSize(40, 16777215));
        lineEdit_tileX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(lineEdit_tileX);


        horizontalLayout_12->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(box_sampleSettings);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(16777215, 30));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        lineEdit_cellDimY = new QLineEdit(box_sampleSettings);
        lineEdit_cellDimY->setObjectName(QStringLiteral("lineEdit_cellDimY"));
        sizePolicy1.setHeightForWidth(lineEdit_cellDimY->sizePolicy().hasHeightForWidth());
        lineEdit_cellDimY->setSizePolicy(sizePolicy1);
        lineEdit_cellDimY->setMaximumSize(QSize(40, 16777215));
        lineEdit_cellDimY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(lineEdit_cellDimY);

        lineEdit_tileY = new QLineEdit(box_sampleSettings);
        lineEdit_tileY->setObjectName(QStringLiteral("lineEdit_tileY"));
        lineEdit_tileY->setMaximumSize(QSize(40, 16777215));
        lineEdit_tileY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(lineEdit_tileY);


        horizontalLayout_12->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_4 = new QLabel(box_sampleSettings);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(16777215, 30));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_4);

        lineEdit_cellDimZ = new QLineEdit(box_sampleSettings);
        lineEdit_cellDimZ->setObjectName(QStringLiteral("lineEdit_cellDimZ"));
        sizePolicy1.setHeightForWidth(lineEdit_cellDimZ->sizePolicy().hasHeightForWidth());
        lineEdit_cellDimZ->setSizePolicy(sizePolicy1);
        lineEdit_cellDimZ->setMaximumSize(QSize(40, 16777215));
        lineEdit_cellDimZ->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(lineEdit_cellDimZ);

        lineEdit_tileZ = new QLineEdit(box_sampleSettings);
        lineEdit_tileZ->setObjectName(QStringLiteral("lineEdit_tileZ"));
        lineEdit_tileZ->setMaximumSize(QSize(40, 16777215));
        lineEdit_tileZ->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(lineEdit_tileZ);


        horizontalLayout_12->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_9 = new QLabel(box_sampleSettings);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_4->addWidget(label_9);

        label_5 = new QLabel(box_sampleSettings);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_5);

        label_7 = new QLabel(box_sampleSettings);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_7);


        horizontalLayout_12->addLayout(verticalLayout_4);


        verticalLayout_13->addLayout(horizontalLayout_12);


        horizontalLayout_13->addLayout(verticalLayout_13);

        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        lineEdit_tileX->raise();
        lineEdit_tileY->raise();
        lineEdit_tileZ->raise();
        label_7->raise();
        lineEdit_tileX->raise();
        label_cellDim->raise();
        label_8->raise();
        label_9->raise();
        label_9->raise();
        btn_loadCoordinates->raise();
        btn_saveCoordinates->raise();

        verticalLayout_11->addWidget(box_sampleSettings);

        box_simulationSettings = new QGroupBox(centralWidget);
        box_simulationSettings->setObjectName(QStringLiteral("box_simulationSettings"));
        horizontalLayout_11 = new QHBoxLayout(box_simulationSettings);
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(2, 2, 2, 2);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(-1, 10, -1, -1);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(30);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, -1, -1, -1);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        lbl_pixelSize = new QLabel(box_simulationSettings);
        lbl_pixelSize->setObjectName(QStringLiteral("lbl_pixelSize"));

        horizontalLayout_5->addWidget(lbl_pixelSize);

        lineedit_pixelSize = new QLineEdit(box_simulationSettings);
        lineedit_pixelSize->setObjectName(QStringLiteral("lineedit_pixelSize"));
        sizePolicy1.setHeightForWidth(lineedit_pixelSize->sizePolicy().hasHeightForWidth());
        lineedit_pixelSize->setSizePolicy(sizePolicy1);
        lineedit_pixelSize->setMaximumSize(QSize(30, 16777215));
        lineedit_pixelSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(lineedit_pixelSize);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lbl_E0 = new QLabel(box_simulationSettings);
        lbl_E0->setObjectName(QStringLiteral("lbl_E0"));

        horizontalLayout_3->addWidget(lbl_E0);

        lineEdit_E0 = new QLineEdit(box_simulationSettings);
        lineEdit_E0->setObjectName(QStringLiteral("lineEdit_E0"));
        sizePolicy1.setHeightForWidth(lineEdit_E0->sizePolicy().hasHeightForWidth());
        lineEdit_E0->setSizePolicy(sizePolicy1);
        lineEdit_E0->setMaximumSize(QSize(30, 16777215));
        lineEdit_E0->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(lineEdit_E0);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lbl_potBound = new QLabel(box_simulationSettings);
        lbl_potBound->setObjectName(QStringLiteral("lbl_potBound"));

        horizontalLayout_7->addWidget(lbl_potBound);

        lineEdit_potbound = new QLineEdit(box_simulationSettings);
        lineEdit_potbound->setObjectName(QStringLiteral("lineEdit_potbound"));
        sizePolicy1.setHeightForWidth(lineEdit_potbound->sizePolicy().hasHeightForWidth());
        lineEdit_potbound->setSizePolicy(sizePolicy1);
        lineEdit_potbound->setMaximumSize(QSize(30, 16777215));
        lineEdit_potbound->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(lineEdit_potbound);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_alphaBeamMax = new QLabel(box_simulationSettings);
        label_alphaBeamMax->setObjectName(QStringLiteral("label_alphaBeamMax"));
        label_alphaBeamMax->setMinimumSize(QSize(0, 40));
        label_alphaBeamMax->setWordWrap(true);

        horizontalLayout->addWidget(label_alphaBeamMax);

        lineEdit_alphaBeamMax = new QLineEdit(box_simulationSettings);
        lineEdit_alphaBeamMax->setObjectName(QStringLiteral("lineEdit_alphaBeamMax"));
        sizePolicy1.setHeightForWidth(lineEdit_alphaBeamMax->sizePolicy().hasHeightForWidth());
        lineEdit_alphaBeamMax->setSizePolicy(sizePolicy1);
        lineEdit_alphaBeamMax->setMaximumSize(QSize(30, 16777215));
        lineEdit_alphaBeamMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(lineEdit_alphaBeamMax);


        verticalLayout_5->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_10 = new QLabel(box_simulationSettings);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_6->addWidget(label_10);

        label_11 = new QLabel(box_simulationSettings);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_6->addWidget(label_11);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lbl_numfp = new QLabel(box_simulationSettings);
        lbl_numfp->setObjectName(QStringLiteral("lbl_numfp"));
        lbl_numfp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lbl_numfp->setWordWrap(true);

        horizontalLayout_6->addWidget(lbl_numfp);

        spinBox_numFP = new QSpinBox(box_simulationSettings);
        spinBox_numFP->setObjectName(QStringLiteral("spinBox_numFP"));
        spinBox_numFP->setMaximumSize(QSize(30, 16777215));
        spinBox_numFP->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(spinBox_numFP);


        verticalLayout_6->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_sliceThickness = new QLabel(box_simulationSettings);
        label_sliceThickness->setObjectName(QStringLiteral("label_sliceThickness"));
        label_sliceThickness->setMinimumSize(QSize(0, 40));
        label_sliceThickness->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_sliceThickness->setWordWrap(true);

        horizontalLayout_9->addWidget(label_sliceThickness);

        lineEdit_sliceThickness = new QLineEdit(box_simulationSettings);
        lineEdit_sliceThickness->setObjectName(QStringLiteral("lineEdit_sliceThickness"));
        sizePolicy1.setHeightForWidth(lineEdit_sliceThickness->sizePolicy().hasHeightForWidth());
        lineEdit_sliceThickness->setSizePolicy(sizePolicy1);
        lineEdit_sliceThickness->setMaximumSize(QSize(30, 16777215));
        lineEdit_sliceThickness->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(lineEdit_sliceThickness);


        verticalLayout_6->addLayout(horizontalLayout_9);


        horizontalLayout_4->addLayout(verticalLayout_6);


        verticalLayout_10->addLayout(horizontalLayout_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(-1, 20, -1, -1);
        label = new QLabel(box_simulationSettings);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 30));
        label->setWordWrap(true);

        verticalLayout_9->addWidget(label);


        horizontalLayout_10->addLayout(verticalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_13 = new QLabel(box_simulationSettings);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_13);

        lineedit_interpFactor_x = new QLineEdit(box_simulationSettings);
        lineedit_interpFactor_x->setObjectName(QStringLiteral("lineedit_interpFactor_x"));
        lineedit_interpFactor_x->setMaximumSize(QSize(30, 16777215));

        verticalLayout_7->addWidget(lineedit_interpFactor_x);


        horizontalLayout_8->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_14 = new QLabel(box_simulationSettings);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_14);

        lineedit_interpFactor_y = new QLineEdit(box_simulationSettings);
        lineedit_interpFactor_y->setObjectName(QStringLiteral("lineedit_interpFactor_y"));
        lineedit_interpFactor_y->setMaximumSize(QSize(30, 16777215));

        verticalLayout_8->addWidget(lineedit_interpFactor_y);


        horizontalLayout_8->addLayout(verticalLayout_8);


        horizontalLayout_10->addLayout(horizontalLayout_8);


        verticalLayout_10->addLayout(horizontalLayout_10);


        horizontalLayout_11->addLayout(verticalLayout_10);

        label_10->raise();
        label_11->raise();

        verticalLayout_11->addWidget(box_simulationSettings);


        gridLayout->addLayout(verticalLayout_11, 2, 9, 5, 1);

        box_calculationSettings = new QGroupBox(centralWidget);
        box_calculationSettings->setObjectName(QStringLiteral("box_calculationSettings"));

        gridLayout->addWidget(box_calculationSettings, 3, 2, 2, 7);

        lbl_numgpus = new QLabel(centralWidget);
        lbl_numgpus->setObjectName(QStringLiteral("lbl_numgpus"));

        gridLayout->addWidget(lbl_numgpus, 4, 5, 1, 2);

        spinBox_numGPUs = new QSpinBox(centralWidget);
        spinBox_numGPUs->setObjectName(QStringLiteral("spinBox_numGPUs"));
        spinBox_numGPUs->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(spinBox_numGPUs, 4, 7, 1, 2);

        lbl_numthreads = new QLabel(centralWidget);
        lbl_numthreads->setObjectName(QStringLiteral("lbl_numthreads"));

        gridLayout->addWidget(lbl_numthreads, 5, 5, 1, 3);

        spinBox_numThreads = new QSpinBox(centralWidget);
        spinBox_numThreads->setObjectName(QStringLiteral("spinBox_numThreads"));
        spinBox_numThreads->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(spinBox_numThreads, 5, 8, 1, 1);

        lbl_algo = new QLabel(centralWidget);
        lbl_algo->setObjectName(QStringLiteral("lbl_algo"));

        gridLayout->addWidget(lbl_algo, 6, 0, 1, 1);

        radBtn_PRISM = new QRadioButton(centralWidget);
        radBtn_PRISM->setObjectName(QStringLiteral("radBtn_PRISM"));

        gridLayout->addWidget(radBtn_PRISM, 6, 1, 1, 2);

        radBtn_Multislice = new QRadioButton(centralWidget);
        radBtn_Multislice->setObjectName(QStringLiteral("radBtn_Multislice"));

        gridLayout->addWidget(radBtn_Multislice, 6, 3, 1, 2);

        PRISMMainWindow->setCentralWidget(centralWidget);
        box_simulationSettings->raise();
        box_calculationSettings->raise();
        box_sampleSettings->raise();
        box_sampleSettings->raise();
        lineedit_interpFactor_y->raise();
        label_13->raise();
        label_14->raise();
        box_sampleSettings->raise();
        box_simulationSettings->raise();
        menuBar = new QMenuBar(PRISMMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 901, 22));
        PRISMMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PRISMMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PRISMMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PRISMMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PRISMMainWindow->setStatusBar(statusBar);

        retranslateUi(PRISMMainWindow);

        QMetaObject::connectSlotsByName(PRISMMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PRISMMainWindow)
    {
        PRISMMainWindow->setWindowTitle(QApplication::translate("PRISMMainWindow", "PRISMMainWindow", Q_NULLPTR));
        lbl_atomsfile->setText(QApplication::translate("PRISMMainWindow", "Atoms File ", Q_NULLPTR));
        btn_atomsfile_browse->setText(QApplication::translate("PRISMMainWindow", "Browse", Q_NULLPTR));
        btn_go->setText(QApplication::translate("PRISMMainWindow", "Calculate!", Q_NULLPTR));
        btn_outputfile_browse->setText(QApplication::translate("PRISMMainWindow", "Browse", Q_NULLPTR));
        lbl_outputfile->setText(QApplication::translate("PRISMMainWindow", "Output File", Q_NULLPTR));
        box_sampleSettings->setTitle(QApplication::translate("PRISMMainWindow", "Sample Settings", Q_NULLPTR));
        btn_loadCoordinates->setText(QApplication::translate("PRISMMainWindow", "Load Coords", Q_NULLPTR));
        btn_saveCoordinates->setText(QApplication::translate("PRISMMainWindow", "Save Coords", Q_NULLPTR));
        label_8->setText(QString());
        label_cellDim->setText(QApplication::translate("PRISMMainWindow", "Cell Dim.", Q_NULLPTR));
        label_6->setText(QApplication::translate("PRISMMainWindow", "Tile Cells", Q_NULLPTR));
        label_2->setText(QApplication::translate("PRISMMainWindow", "X", Q_NULLPTR));
        lineEdit_cellDimX->setText(QApplication::translate("PRISMMainWindow", "100", Q_NULLPTR));
        label_3->setText(QApplication::translate("PRISMMainWindow", "Y", Q_NULLPTR));
        lineEdit_cellDimY->setText(QApplication::translate("PRISMMainWindow", "100", Q_NULLPTR));
        label_4->setText(QApplication::translate("PRISMMainWindow", "Z", Q_NULLPTR));
        lineEdit_cellDimZ->setText(QApplication::translate("PRISMMainWindow", "80", Q_NULLPTR));
        label_9->setText(QString());
        label_5->setText(QApplication::translate("PRISMMainWindow", "A", Q_NULLPTR));
        label_7->setText(QApplication::translate("PRISMMainWindow", "UCs", Q_NULLPTR));
        box_simulationSettings->setTitle(QApplication::translate("PRISMMainWindow", "Simulation Settings", Q_NULLPTR));
        lbl_pixelSize->setText(QApplication::translate("PRISMMainWindow", "Pixel Size (A)", Q_NULLPTR));
        lineedit_pixelSize->setText(QApplication::translate("PRISMMainWindow", "0.1", Q_NULLPTR));
        lbl_E0->setText(QApplication::translate("PRISMMainWindow", "Energy (keV)", Q_NULLPTR));
        lineEdit_E0->setText(QApplication::translate("PRISMMainWindow", "80", Q_NULLPTR));
        lbl_potBound->setText(QApplication::translate("PRISMMainWindow", "Potential Bound (A)", Q_NULLPTR));
        lineEdit_potbound->setText(QApplication::translate("PRISMMainWindow", "1", Q_NULLPTR));
        label_alphaBeamMax->setText(QApplication::translate("PRISMMainWindow", "Probe Semiangle (mrads)", Q_NULLPTR));
        lineEdit_alphaBeamMax->setText(QApplication::translate("PRISMMainWindow", "20", Q_NULLPTR));
        label_10->setText(QApplication::translate("PRISMMainWindow", "l = 0.1 A", Q_NULLPTR));
        label_11->setText(QApplication::translate("PRISMMainWindow", "a_max = 24", Q_NULLPTR));
        lbl_numfp->setText(QApplication::translate("PRISMMainWindow", "# of FP", Q_NULLPTR));
        label_sliceThickness->setText(QApplication::translate("PRISMMainWindow", "Slice Thickness (A)", Q_NULLPTR));
        lineEdit_sliceThickness->setText(QApplication::translate("PRISMMainWindow", "2", Q_NULLPTR));
        label->setText(QApplication::translate("PRISMMainWindow", "PRISM Interpolation factors", Q_NULLPTR));
        label_13->setText(QApplication::translate("PRISMMainWindow", "X", Q_NULLPTR));
        label_14->setText(QApplication::translate("PRISMMainWindow", "Y", Q_NULLPTR));
        box_calculationSettings->setTitle(QApplication::translate("PRISMMainWindow", "Calculation Settings", Q_NULLPTR));
        lbl_numgpus->setText(QApplication::translate("PRISMMainWindow", "Num GPUs", Q_NULLPTR));
        lbl_numthreads->setText(QApplication::translate("PRISMMainWindow", "Num Threads", Q_NULLPTR));
        lbl_algo->setText(QApplication::translate("PRISMMainWindow", "Algorithm", Q_NULLPTR));
        radBtn_PRISM->setText(QApplication::translate("PRISMMainWindow", "PRISM", Q_NULLPTR));
        radBtn_Multislice->setText(QApplication::translate("PRISMMainWindow", "Multislice", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PRISMMainWindow: public Ui_PRISMMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRISMMAINWINDOW_H
