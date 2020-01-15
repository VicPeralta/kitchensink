/**********************************************************************
*
* Copyright (c) 2012-2020 Barbara Geller
* Copyright (c) 2015 The Qt Company Ltd.
*
* You may use this file under the terms of the 2-Clause BSD license
* provided with KitchenSink or available at:
*
* https://opensource.org/licenses/BSD-2-Clause
*
* KitchenSink is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*
***********************************************************************/

#include "colorpicker.h"
#include "util.h"

#include <QColorDialog>
#include <QPalette>

ColorPicker::ColorPicker(QWidget *parent)
   : QWidget(parent), ui(new Ui::ColorPicker)
{
   ui->setupUi(this);
   setWindowTitle("Color Selector");

   ui->colorEdit->setText("A wacky fox and sizeable pig jumped halfway over a blue moon.");
   ui->native_checkBox->setChecked(true);

   //
   QPalette temp = ui->colorEdit->palette();
   QString colorname = temp.color(QPalette::Base).name();
   ui->label->setText("Sample Text Background in " + colorname.toUpper() );

   connect(ui->selectColor_PB, &QPushButton::clicked, this, &ColorPicker::setColor);
   connect(ui->closePB,        &QPushButton::clicked, this, &ColorPicker::actionClose);
}

ColorPicker::~ColorPicker()
{
   delete ui;
}

void ColorPicker::setColor()
{
   QColor color;

   if (ui->native_checkBox->isChecked())  {
     color = QColorDialog::getColor(Qt::green, this);

   } else  {
     color = QColorDialog::getColor(Qt::green, this, "Select Color", QColorDialog::DontUseNativeDialog);

   }

   if (color.isValid()) {
      ui->label->setText("Sample Text Background in " + color.name().toUpper() );

      QPalette temp = ui->colorEdit->palette();
      temp.setColor(QPalette::Base, color);
      ui->colorEdit->setPalette(temp);
   }
}

void ColorPicker::actionClose() {
   this->parentWidget()->close();
}
