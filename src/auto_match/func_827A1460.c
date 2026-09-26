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
extern int fn_827A0BD0();
extern int fn_827A8770();
extern int fn_827A9328();
extern unsigned int uStack_28;


ulonglong fn_827A1460(undefined8 param_1,double param_2,longlong param_3)

{
  bool bVar1;
  uint uVar3;
  ulonglong uVar2;
  int aiStack_30 [2];
  uint uStack_28;
  
  fn_827A0BD0();
  uVar3 = fn_827A8770(param_3 + 0x24);
  fn_827A9328((double)(float)((double)uVar3 + param_2),aiStack_30,param_3 + 0x24);
  uVar2 = (ulonglong)uStack_28;
  if (((aiStack_30[0] == 0) || (*(uint *)(aiStack_30[0] + 4) <= uVar2)) ||
     (bVar1 = false, (int)uStack_28 < 0)) {
    bVar1 = true;
  }
  if ((bVar1) || ((int)uStack_28 < 0)) {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}

