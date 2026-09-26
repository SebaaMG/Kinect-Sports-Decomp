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
extern int fn_8251F718();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_8268AB00();
extern unsigned int lbl_82002AE0;


byte fn_82674108(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  double dVar6;
  
  lVar1 = fn_8251F718(param_2);
  uVar2 = fn_8251FBA8();
  uVar2 = (uVar2 & 0xffffffff) >> 8;
  bVar4 = 1;
  if (uVar2 != 0) {
    dVar6 = (double)lbl_82002AE0;
    lVar5 = lVar1;
    do {
      cVar3 = fn_8268AB00(dVar6,param_1,lVar5,lVar5 + 0x80,0x10);
      lVar5 = lVar5 + 0x100;
      uVar2 = uVar2 - 1;
      bVar4 = -(cVar3 != '\0') & bVar4;
    } while (uVar2 != 0);
  }
  fn_8251FA58(lVar1);
  return bVar4;
}

