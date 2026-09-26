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
extern unsigned int lbl_82090FB8;
extern unsigned int lbl_82090FC0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong fn_82A70D38(int param_1,int param_2)

{
  longlong lVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  double *pdVar5;
  
  iVar4 = 0;
  pdVar5 = *(double **)(param_1 + 0x30);
  lVar1 = (ulonglong)*(uint *)(param_1 + 0x34) - 1;
  pdVar3 = pdVar5 + 1;
  pdVar2 = pdVar5 + 2;
  if (0 < lVar1) {
    do {
      if (((int)(*pdVar5 * lbl_82090FC0) <= param_2) &&
         (param_2 <= (int)(pdVar5[3] * lbl_82090FC0))) {
        return (longlong)
               (int)((longlong)(int)(*pdVar2 * lbl_82090FC0) *
                     (longlong)(param_2 - (int)(*pdVar5 * lbl_82090FC0)) >> 0x14) -
               (ulonglong)(uint)(int)(*pdVar3 * lbl_82090FB8);
      }
      iVar4 = iVar4 + 1;
      pdVar5 = pdVar5 + 3;
      pdVar3 = pdVar3 + 3;
      pdVar2 = pdVar2 + 3;
    } while (iVar4 < (int)lVar1);
  }
  return 0;
}

