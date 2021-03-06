/////////////////////////////////////////////////////////////////////////////
//
// Copyright 1997-1999 Pandemic Studios, Dark Reign II
//
// Strategic Placement
//


/////////////////////////////////////////////////////////////////////////////
//
// Includes
//
#include "strategic_placement_locator.h"


/////////////////////////////////////////////////////////////////////////////
//
// NameSpace Strategic
//
namespace Strategic
{

  /////////////////////////////////////////////////////////////////////////////
  //
  // Class Placement::Locator
  //


  //
  // Constructor
  //
  Placement::Locator::Locator(Base::Token &token, ClusterSet &clusterSet)
  : token(token),
    clusterSet(clusterSet)
  {
  }


  //
  // Destructor
  //
  Placement::Locator::~Locator()
  {
  }

}
