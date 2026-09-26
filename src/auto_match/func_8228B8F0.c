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
extern int fn_82289408();


void fn_8228B8F0(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  lVar4 = 0;
  piVar3 = (int *)(iVar1 + 0x6a8);
  do {
    if (((*piVar3 == 0) || (*piVar3 == 1)) && (piVar3[1] == param_2)) {
      if ((*(int *)(*(int *)(iVar1 + 0x11f0) + 0x18b8) != 2) ||
         (uVar2 = 1, *(int *)(iVar1 + 0x7c0) != 0)) {
        uVar2 = 0;
      }
      fn_82289408(iVar1,lVar4,uVar2,0);
    }
    lVar4 = lVar4 + 1;
    piVar3 = piVar3 + 0x10;
  } while ((int)lVar4 < 4);
  return;
}

