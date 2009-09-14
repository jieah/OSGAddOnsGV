/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

#ifndef _OSGTEXTLABEL_H_
#define _OSGTEXTLABEL_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGContribLabelingDef.h"
#include "OSGTextureObjChunk.h"
#include "OSGTextLabelBase.h"

OSG_BEGIN_NAMESPACE

class TextTXFFace;
class TextLayoutParam;
class TextLayoutResult;

/*! \brief TextLabel provides the projection of text (labels) onto the viewport.
    \ingroup GrpSystemNodeCoresMisc
*/

class OSG_CONTRIBLABELING_DLLMAPPING TextLabel : public TextLabelBase
{
    /*==========================  PUBLIC  =================================*/

  public:

    /*---------------------------------------------------------------------*/
    /*! \name                     Modes                                    */
    /*! \{                                                                 */

    enum { Left=0, Center, Right } HorizontalAlignE;
    enum { Top=0,  Middle, Bottom } VerticalAlignE;


    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField,
                         UInt32            origin,
                         BitVector         detail);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                        Dump                                  */
    /*! \{                                                                 */

    virtual void dump(      UInt32    uiIndent = 0,
                      const BitVector bvFlags  = 0) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name           satisfying label rendering interface               */
    /*! \{                                                                 */

    virtual void onPreLabelRendering(void);
    virtual void onLabelRendering(DrawEnv *drawEnv);
    virtual void onPostLabelRendering(void);
    virtual Vec2f screenRect(void);

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    typedef TextLabelBase Inherited;

    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TextLabel(void);
    TextLabel(const TextLabel &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TextLabel(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Init                                       */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name              Intersect & Render                              */
    /*! \{                                                                 */

#ifndef OSG_WINCE
    ActionBase::ResultE     intersect(Action    *action);
#endif

    ActionBase::ResultE     renderEnter   (Action    *action);
    ActionBase::ResultE     renderLeave   (Action    *action);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name           label rendering helper functions                   */
    /*! \{                                                                 */

    void updateFaceAndTexture(void);
    void drawCharacters(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    TextTXFFace*       _face;

    // recreate for every render cycle...
    TextLayoutParam*   _cachedTextLayoutParam;
    TextLayoutResult*  _cachedTextLayoutResult;

    friend class FieldContainer;
    friend class TextLabelBase;

    /*---------------------------------------------------------------------*/

    /*!\brief prohibit default function (move to 'public' if needed) */
    void operator =(const TextLabel &source);
};

typedef TextLabel *TextLabelP;

OSG_END_NAMESPACE

#include "OSGTextLabelBase.inl"
#include "OSGTextLabel.inl"

#endif /* _OSGTEXTLABEL_H_ */
