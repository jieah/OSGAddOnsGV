/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2003 by the OpenSG Forum                   *
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

#ifndef _OSGRTHITSTORE_H_
#define _OSGRTHITSTORE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGRTStore.h"

#include "OSGCondVar.h"
#include "OSGLock.h"

OSG_BEGIN_NAMESPACE

class RTTarget;

/*! Memory, simple reference counted memory object. Parent of
    everything that should be shared, but must not be thread safe.
    \ingroup GrpBaseBase
 */

template<typename DescT>
class RTHitStore : public RTStore
{

    /*==========================  PUBLIC  =================================*/

  public:

    static const UInt32 Empty   = UINT_MAX;
    static const UInt32 Waiting = UINT_MAX - 1;

    typedef          DescT                 Desc;
    typedef typename Desc::SingleHitPacket SingleHitPacket;

    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */
 
    RTHitStore(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                 Reference Counting                           */
    /*! \{                                                                 */

    void wait     (void);
    void signal   (void);
    void broadcast(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                 Reference Counting                           */
    /*! \{                                                                 */

    void startFrame(RTTarget &pTarget, 
                    UInt32    uiNumRayPackets);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    UInt32     getWriteIndex (void          );
    UInt32     getReadIndex  (void          );
 
    void       pushWriteIndex(UInt32 uiIndex);

    SingleHitPacket &getPacket     (UInt32 uiIndex);

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    typedef RTStore                       Inherited;

    typedef std::vector<SingleHitPacket>  HitStore;
    typedef std::vector<UInt32         >  HitIndexStore;

    /*---------------------------------------------------------------------*/
    /*! \name                 Reference Counting                           */
    /*! \{                                                                 */

    UInt32         _uiNumHits;
    UInt32         _uiCurrentHit;
    UInt32         _uiAvailableHits;
    UInt32         _uiServedHits;
    UInt32         _uiExpectedHits;

    HitStore       _vHits;
    HitIndexStore  _vAvailableHits;
 
    Lock          *_pStoreLock;
    CondVar       *_pCond;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructor                                 */
    /*! \{                                                                 */

    virtual ~RTHitStore(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructor                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    /*! \}                                                                 */
   /*==========================  PRIVATE  ================================*/

  private:

    /*!\brief prohibit default function (move to 'public' if needed) */
    RTHitStore(const RTHitStore &source);
    void operator =(const RTHitStore &source);
};

OSG_END_NAMESPACE

#include "OSGRTHitStore.inl"

#endif /* _OSGRTHITSTORE_H_ */
