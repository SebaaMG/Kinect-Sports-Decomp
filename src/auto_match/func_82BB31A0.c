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
extern int fn_82AB15D0();


void fn_82BB31A0(int *param_1)

{
  uint uVar1;
  char cVar3;
  int iVar2;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  
  piVar7 = *(int **)(*(int *)(*(int *)(param_1[4] + 0x1c) + 0x2c) + 4);
  if (piVar7 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar7;
  }
  lVar6 = 0;
  iVar5 = 0;
  piVar7 = param_1;
  do {
    uVar1 = (**(code **)(*(int *)param_1[4] + 0x50))((int *)param_1[4],0,lVar6);
    if (uVar1 == 0) {
LAB_82bb323c:
      cVar3 = (**(code **)(*(int *)param_1[4] + 0x4c))();
      if (cVar3 == '\0') {
        iVar2 = *(int *)(param_1[0x41] + 0x5f8) + 1;
        *(int *)(param_1[0x41] + 0x5f8) = iVar2;
      }
      else {
        iVar2 = (**(code **)(*(int *)param_1[4] + 0x50))((int *)param_1[4],1,lVar6);
        iVar2 = *(int *)(**(int **)(*(int *)(*(int *)(param_1[4] + 0x20) + 0x2c) + 4) + iVar2 * 4);
      }
LAB_82bb3334:
      *piVar7 = iVar2;
    }
    else {
      if (uVar1 == 1) {
        iVar2 = param_1[4];
        if ((*(uint *)(iVar2 + 0xe4) >> 9 & 1) == 0) {
          if ((iVar4 == 0) || (*(int *)(iVar2 + 0x18) == 0x89)) {
            if (*(int *)(iVar2 + 0x18) != 0x89) {
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dfeb8,0xffffffff820dfe60,0x367);
            }
            iVar2 = 3;
          }
          else {
            iVar2 = *(int *)((iVar4 - (int)param_1) + (int)piVar7);
          }
        }
        else {
          iVar2 = *(int *)(**(int **)(*(int *)(*(int *)((*(int *)(iVar2 + 0x14) + 7) * 4 + iVar2) +
                                              0x2c) + 4) + iVar5);
        }
        goto LAB_82bb3334;
      }
      if (uVar1 < 3) {
        iVar2 = 2;
        goto LAB_82bb3334;
      }
      if (uVar1 == 3) {
        iVar2 = 1;
        goto LAB_82bb3334;
      }
      if (uVar1 < 8) goto LAB_82bb323c;
    }
    iVar5 = iVar5 + 4;
    lVar6 = lVar6 + 1;
    piVar7 = piVar7 + 1;
    if (0xf < iVar5) {
      return;
    }
  } while( true );
}

