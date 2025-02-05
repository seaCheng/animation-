﻿#include "emptyAreaView.h"
#include "dpi.h"

#include<QDebug>
#include<QToolButton>
#include <QHBoxLayout>

EmptyAreaView::EmptyAreaView(QWidget *parent)
    : QWidget(parent)
{

    QToolButton *toolPicWid =  new QToolButton();
    connect(toolPicWid, &QToolButton::clicked, this, [=](){
        emit s_clicked(type_import::import_pic);
    });
    toolPicWid->setObjectName("toolPicWid");
    toolPicWid->setText(tr("Picture add"));
    toolPicWid->setFixedSize(DPI::getScaleUI(125),DPI::getScaleUI(125));

    QToolButton *toolGifWid =  new QToolButton();
    connect(toolGifWid, &QToolButton::clicked, this, [=](){
        emit s_clicked(type_import::import_gif);
    });

    toolGifWid->setObjectName("toolGifWid");
    toolGifWid->setText(tr("Gif load"));
    toolGifWid->setFixedSize(DPI::getScaleUI(125),DPI::getScaleUI(125));

    QToolButton *toolVideoWid =  new QToolButton();
    connect(toolVideoWid, &QToolButton::clicked, this, [=](){
        emit s_clicked(type_import::import_video);
    });

    toolVideoWid->setObjectName("toolVideoWid");
    toolVideoWid->setText(tr("Video load"));
    toolVideoWid->setFixedSize(DPI::getScaleUI(125),DPI::getScaleUI(125));

    QHBoxLayout *layout = new QHBoxLayout;
    layout->setContentsMargins(DPI::getScaleUI(10),DPI::getScaleUI(10),DPI::getScaleUI(10),DPI::getScaleUI(10));
    layout->addStretch();
    layout->setSpacing(DPI::getScaleUI(10));
    layout->addWidget(toolPicWid);
    layout->addWidget(toolGifWid);
    layout->addWidget(toolVideoWid);
    layout->addStretch();

    setLayout(layout);
}

