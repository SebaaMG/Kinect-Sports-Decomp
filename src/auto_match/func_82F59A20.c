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
extern int fn_8234E338();
extern int fn_82F53528();
extern int fn_82F53548();
extern int fn_82F53608();
extern unsigned int lbl_8201F94C;
extern unsigned int lbl_82186E6C;


int fn_82F59A20(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  double dVar4;
  
  dVar4 = (double)fn_82F53608();
  if ((float)(dVar4 * (double)lbl_8201F94C) < lbl_82186E6C) {
    puVar1 = (undefined8 *)(param_1 + -8);
    puVar2 = (undefined8 *)0x83262818;
    lVar3 = 8;
    do {
      puVar2 = puVar2 + 1;
      puVar1 = puVar1 + 1;
      *puVar1 = *puVar2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  else {
    fn_82F53528();
    fn_82F53548();
    fn_8234E338(dVar4,param_1);
  }
  return param_1;
}

