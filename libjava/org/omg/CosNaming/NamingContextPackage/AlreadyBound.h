
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CosNaming_NamingContextPackage_AlreadyBound__
#define __org_omg_CosNaming_NamingContextPackage_AlreadyBound__

#pragma interface

#include <org/omg/CORBA/UserException.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CosNaming
      {
        namespace NamingContextPackage
        {
            class AlreadyBound;
        }
      }
    }
  }
}

class org::omg::CosNaming::NamingContextPackage::AlreadyBound : public ::org::omg::CORBA::UserException
{

public:
  AlreadyBound();
  AlreadyBound(::java::lang::String *);
private:
  static const jlong serialVersionUID = -5456929050527586560LL;
public:
  static ::java::lang::Class class$;
};

#endif // __org_omg_CosNaming_NamingContextPackage_AlreadyBound__