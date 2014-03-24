/**********************************************************************
*
* Copyright (c) 2012-2013 Barbara Geller
* Copyright (c) 2011-2012 Nokia Corporation and/or its subsidiary(-ies).
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are
* met:
*
* * Redistributions of source code must retain the above copyright notice,
*   this list of conditions and the following disclaimer.
*
* * Redistributions in binary form must reproduce the above copyright
*   notice, this list of conditions and the following disclaimer in the
*   documentation and/or other materials provided with the distribution.
*
* * Neither the name of the Nokia Corporation nor the names of its
*   contributors may be used to endorse or promote products derived from
*   this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
* A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
* HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
* THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
***********************************************************************/

#ifndef DRAW_H
#define DRAW_H

#include "draw_area.h"

#include <QWidget>
#include <QCheckBox>
#include <QComboBox>
#include <QLabel>
#include <QSpinBox>

class Draw : public QWidget
{
   CS_OBJECT(Draw)

   public:
      Draw();

   private :
      CS_SLOT_1(Private, void shapeChanged())
      CS_SLOT_2(shapeChanged) 
      CS_SLOT_1(Private, void penChanged())
      CS_SLOT_2(penChanged) 
      CS_SLOT_1(Private, void brushChanged())
      CS_SLOT_2(brushChanged) 

   private:
      DrawArea *m_renderArea;
      QLabel *shapeLabel;
      QLabel *penWidthLabel;
      QLabel *penStyleLabel;
      QLabel *penCapLabel;
      QLabel *penJoinLabel;
      QLabel *brushStyleLabel;
      QLabel *otherOptionsLabel;
      QComboBox *shapeComboBox;
      QSpinBox *penWidthSpinBox;
      QComboBox *penStyleComboBox;
      QComboBox *penCapComboBox;
      QComboBox *penJoinComboBox;
      QComboBox *brushStyleComboBox;
      QCheckBox *antialiasingCheckBox;
      QCheckBox *transformationsCheckBox;
};


#endif
