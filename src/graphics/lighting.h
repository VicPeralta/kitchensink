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

#ifndef LIGHTING_H
#define LIGHTING_H

#include <QGraphicsScene>
#include <QGraphicsView>

class QResizeEvent;

class Lighting: public QGraphicsView
{
   CS_OBJECT(Lighting)

   public:
       Lighting(QWidget *parent = nullptr);
       QSize sizeHint() const;

   protected:
       void resizeEvent(QResizeEvent *event);

   private:
       void setupScene();

       CS_SLOT_1(Private, void animate())
       CS_SLOT_2(animate)

       qreal angle;
       QGraphicsScene m_scene;
       QGraphicsItem *m_lightSource;
       QList<QGraphicsItem*> m_items;
};

#endif
