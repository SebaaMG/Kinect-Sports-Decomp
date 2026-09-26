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
extern unsigned int *auStack_50;
extern int fn_82230300();
extern int fn_82240378();
extern int fn_8286B448();


void fn_8286B5F8(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_50 [80];
  
  uVar1 = (param_2 - (int)param_1) / 0x1c;
  lVar3 = (longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0);
  if (0 < lVar3) {
    lVar2 = lVar3 * 0x1c + param_1;
    do {
      lVar2 = lVar2 + -0x1c;
      lVar3 = lVar3 + -1;
      fn_82240378(auStack_50,lVar2);
      fn_8286B448(param_1,lVar3,uVar1,auStack_50);
      fn_82230300(auStack_50,1,0);
    } while (0 < (int)lVar3);
  }
  return;
}

