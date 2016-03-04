// Copyright (c) 2015 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.


#ifndef _StdPersistent_HArray1_HeaderFile
#define _StdPersistent_HArray1_HeaderFile

#include <StdLPersistent_HArray1.hxx>
#include <StdPersistent_HArray1OfShape1.hxx>


class StdPersistent_HArray1 : private StdLPersistent_HArray1
{
public:
  class Shape1 : public StdLPersistent_HArray1::base<StdPersistent_HArray1OfShape1>
  {
    virtual void readValue (StdObjMgt_ReadData& theReadData,
                            const Standard_Integer theIndex);
  };
};

#endif
