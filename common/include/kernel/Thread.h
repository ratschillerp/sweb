//----------------------------------------------------------------------
//  $Id: Thread.h,v 1.2 2005/04/24 10:06:09 nomenquis Exp $
//----------------------------------------------------------------------
//
//  $Log: Thread.h,v $
//  Revision 1.1  2005/04/23 21:27:12  nomenquis
//  commit for bernhard
//
//----------------------------------------------------------------------

#ifndef _THREAD_H_
#define _THREAD_H_

#include "types.h"

class Thread;
// thanx mona!
typedef struct ArchThreadInfo
{
  uint32  eip;       // 0
  uint32  cs;        // 4
  uint32  eflags;    // 8
  uint32  eax;       // 12
  uint32  ecx;       // 16
  uint32  edx;       // 20
  uint32  ebx;       // 24
  uint32  esp;       // 28
  uint32  ebp;       // 32
  uint32  esi;       // 36
  uint32  edi;       // 40
  uint32  ds;        // 44
  uint32  es;        // 48
  uint32  fs;        // 52
  uint32  gs;        // 56
  uint32  ss;        // 60
  uint32  dpl;       // 64
  uint32  esp0;      // 68
  uint32  ss0;       // 72
  uint32  cr3;       // 76
  uint32  fpu[27];   // 80
};

typedef struct ArchThread
{
  ArchThreadInfo *thread_info;
  Thread *thread;
  
};

class Thread
{
public:
  
  Thread();
  
  uint32 stack_[2048];

private:
  
  Thread(Thread const &);
  Thread &operator=(Thread const&);
};









#endif