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

#include <StdLObject_GUID.hxx>


//=======================================================================
//function : Read
//purpose  : Read persistent data from a file
//=======================================================================
void StdLObject_GUID::Read (StdObjMgt_ReadData& theReadData)
{
  Value<Standard_Integer>      a32b;
  Value<Standard_ExtCharacter> a16b[3];
  Value<Standard_Character>    a8b [6];

  theReadData >> a32b >> a16b[0] >> a16b[1] >> a16b[2];
  theReadData >> a8b[0] >> a8b[1] >> a8b[2] >> a8b[3] >> a8b[4] >> a8b[5];

  *static_cast<Standard_GUID*> (this) =
    Standard_GUID (a32b, a16b[0], a16b[1], a16b[2],
                   a8b[0], a8b[1], a8b[2], a8b[3], a8b[4], a8b[5]);
}
