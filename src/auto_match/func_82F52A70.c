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
extern int fn_828DF3C8();
extern int fn_82F4DA20();


void fn_82F52A70(int param_1,int param_2)

{
  int iVar3;
  undefined8 uVar1;
  ulonglong uVar2;
  int *piVar4;
  int iVar5;
  ulonglong uVar6;
  
  if (*(int *)(param_2 + 4) != 0) {
    iVar3 = fn_82F4DA20(2);
    iVar5 = 0;
    piVar4 = (int *)(iVar3 + 0x34);
    do {
      if (*piVar4 == *(int *)(param_2 + 4)) {
        *(int *)(param_1 + 4) = iVar5;
        if (*(int **)(param_1 + 8) == (int *)0x0) {
          return;
        }
        uVar6 = 0;
        iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x20))();
        if (iVar3 == 0) {
          return;
        }
        do {
          uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x24))(*(int **)(param_1 + 8),uVar6);
          fn_828DF3C8(uVar1,*(undefined4 *)(param_1 + 4));
          uVar6 = uVar6 + 1;
          uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x20))();
        } while ((uVar6 & 0xffffffff) < (uVar2 & 0xffffffff));
        return;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 0x70;
    } while (iVar5 < 2);
  }
  return;
}

