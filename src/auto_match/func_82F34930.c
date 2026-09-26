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
extern int fn_82E50BE8();


undefined8 fn_82F34930(int param_1,ulonglong param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  lVar2 = (param_2 & 0x3fffffff) << 2;
  if (0x3fffffff < (param_2 & 0xffffffff)) {
    lVar2 = -1;
  }
  iVar3 = fn_82E50BE8(lVar2,0,0,0,0);
  *(int *)(param_1 + 0xc) = iVar3;
  if (iVar3 == 0) {
    uVar4 = 0xffffffff8007000e;
  }
  else {
    if ((param_2 & 0xffffffff) != 0) {
      iVar3 = 0;
      uVar5 = param_2;
      do {
        *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3) = *(undefined4 *)(iVar3 + param_3);
        piVar1 = *(int **)(*(int *)(param_1 + 0xc) + iVar3);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))();
        }
        uVar5 = uVar5 - 1;
        iVar3 = iVar3 + 4;
      } while (uVar5 != 0);
    }
    *(int *)(param_1 + 8) = (int)param_2;
  }
  return uVar4;
}

