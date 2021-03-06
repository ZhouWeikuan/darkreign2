#if !defined(MMsgRoutingGroupChange_H)
#define MMsgRoutingGroupChange_H

// MMsgRoutingGroupChange.h

#include "MMsgRoutingClientChange.h"

namespace WONMsg {

//
// GroupChangeEx
//
class MMsgRoutingGroupChange : public MMsgRoutingClientChange {
public:
    // Default ctor
    MMsgRoutingGroupChange(void);

    // RoutingServerMessage ctor
    explicit MMsgRoutingGroupChange(const RoutingServerMessage& theMsgR, bool doUnpack =true);

    // Copy ctor
    MMsgRoutingGroupChange(const MMsgRoutingGroupChange& theMsgR);

    // Destructor
    virtual ~MMsgRoutingGroupChange(void);

    // Assignment
    MMsgRoutingGroupChange& operator=(const MMsgRoutingGroupChange& theMsgR);

    // Virtual Duplicate from RoutingServerMessage
    virtual TRawMsg* Duplicate(void) const { return new MMsgRoutingGroupChange(*this); }

	// Debug output
	virtual void Dump(std::ostream& os) const;

    // Pack and Unpack the message
    // Unpack will throw a BadMsgException is message is not of this type
    virtual void* Pack(void); 
    virtual void  Unpack(void);

    // Member access
	GroupId GetGroupId() const             { return mGroupId; }
	void    SetGroupId(GroupId theGroupId) { mGroupId = theGroupId; }
protected:
	GroupId mGroupId;
};


//
// GroupChangeEx
//
class MMsgRoutingGroupChangeEx : public MMsgRoutingGroupChange, public ChangeInfo {
public:
    // Default ctor
    MMsgRoutingGroupChangeEx(void);

    // RoutingServerMessage ctor
    explicit MMsgRoutingGroupChangeEx(const RoutingServerMessage& theMsgR);

    // Copy ctor
    MMsgRoutingGroupChangeEx(const MMsgRoutingGroupChangeEx& theMsgR);

    // Destructor
    virtual ~MMsgRoutingGroupChangeEx(void);

    // Assignment
    MMsgRoutingGroupChangeEx& operator=(const MMsgRoutingGroupChangeEx& theMsgR);

    // Virtual Duplicate from RoutingServerMessage
    virtual TRawMsg* Duplicate(void) const { return new MMsgRoutingGroupChangeEx(*this); }

	// Debug output
	virtual void Dump(std::ostream& os) const;

    // Pack and Unpack the message
    // Unpack will throw a BadMsgException is message is not of this type
    virtual void* Pack(void); 
    virtual void  Unpack(void);
};

};  // Namespace WONMsg

#endif // MMsgRoutingGroupChange_H