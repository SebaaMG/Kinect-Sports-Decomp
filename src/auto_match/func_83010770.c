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
extern int fn_82FAB9C0();
extern unsigned int lbl_832642E0;


longlong fn_83010770(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = 0;
  if ((param_2 != 0) && ((int)param_3 != 0)) {
    if (param_2 == (int)param_3) {
      lVar4 = 1;
    }
    else {
      piVar2 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,param_3);
      if (piVar2 != (int *)0x0) {
        iVar3 = piVar2[5];
        for (iVar1 = piVar2[4]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
          if (param_2 == *(int *)(iVar1 + 0xc)) {
            lVar4 = 1;
            break;
          }
          if (iVar3 == 0) {
            iVar3 = *(int *)(iVar1 + 0x14);
          }
        }
        if (lVar4 == 0) {
          for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x14)) {
            if (param_2 == *(int *)(iVar3 + 0xc)) {
              lVar4 = 1;
              break;
            }
          }
        }
        (**(code **)(*piVar2 + 8))();
      }
    }
  }
  return lVar4;
}

