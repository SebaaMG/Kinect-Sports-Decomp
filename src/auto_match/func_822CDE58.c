typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_822CF710();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821929B0;


bool fn_822CDE58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  int iVar3;
  longlong lVar2;
  bool bVar4;
  double dVar5;
  
  fVar1 = lbl_821929B0;
  if ((int)param_4 != 0) {
    fVar1 = lbl_821917C0;
  }
  dVar5 = (double)fVar1;
  iVar3 = fn_822CF710(param_1,dVar5,param_2,param_3,0xb,0xd,param_6,param_4);
  if (iVar3 == 0) {
    lVar2 = fn_822CF710(param_1,dVar5,param_2,param_3,10,0xc,param_6,param_4);
    bVar4 = lVar2 != 0;
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}

