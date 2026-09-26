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
extern int fn_82BC0088();
extern int fn_82BD3260();


void fn_82BB62E0(int *param_1,int param_2)

{
  int iVar1;
  char cVar4;
  int *piVar2;
  undefined4 *puVar3;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  cVar4 = (**(code **)(**(int **)(param_2 + 0x28) + 0x38))();
  if (cVar4 != '\0') {
    param_1[2] = *(int *)(param_2 + 0x1c);
  }
  cVar4 = (**(code **)(**(int **)(param_2 + 0x28) + 0x18))();
  if (cVar4 != '\0') {
    if (param_1[1] == 1) {
      *(uint *)(*(int *)(param_2 + 0x28) + 0xe4) =
           *(uint *)(*(int *)(param_2 + 0x28) + 0xe4) | 0x1000;
      param_1[2] = *(int *)(param_2 + 0x1c);
    }
    else if (param_1[1] == 3) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e00b8,0xffffffff820e0168,0x15e);
    }
    cVar4 = fn_82BD3260(*(undefined4 *)(param_2 + 0x28));
    if (cVar4 != '\0') {
      param_1[3] = *(int *)(param_2 + 0x1c);
    }
  }
  uVar7 = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 0x34) + 4);
  if (0 < iVar1) {
    iVar6 = 0;
    do {
      iVar5 = *(int *)(param_2 + 0x34);
      if ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(iVar5 + 4)) {
        piVar2 = (int *)(*(int *)(iVar5 + 8) + iVar6);
      }
      else {
        piVar2 = (int *)fn_82BC0088(iVar5,uVar7);
      }
      if (*(char *)(*piVar2 + 0x10) == '\x01') {
        iVar5 = *(int *)(param_2 + 0x34);
        if ((uVar7 & 0xffffffff) < (ulonglong)*(uint *)(iVar5 + 4)) {
          puVar3 = (undefined4 *)(*(int *)(iVar5 + 8) + iVar6);
        }
        else {
          puVar3 = (undefined4 *)fn_82BC0088(iVar5,uVar7);
        }
        iVar5 = *(int *)*puVar3;
        if (param_1[2] <= *(int *)(iVar5 + 0x1c)) {
          if ((param_1[1] == 3) || (param_1[1] == 2)) {
            if (*param_1 == 0) {
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0158,0xffffffff820e0168,0x16b);
            }
            if (*(int *)(*param_1 + 0x1c) <= *(int *)(iVar5 + 0x1c)) {
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e03fc,0xffffffff820e0168,0x16c);
            }
            if (*(int *)(*param_1 + 0x1c) <= param_1[2]) {
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e042c,0xffffffff820e0168,0x16d);
            }
            *(uint *)(*(int *)(*param_1 + 0x28) + 0xe4) =
                 *(uint *)(*(int *)(*param_1 + 0x28) + 0xe4) | 0x1000;
            iVar5 = *(int *)(*param_1 + 0x1c);
          }
          else {
            *(uint *)(*(int *)(param_2 + 0x28) + 0xe4) =
                 *(uint *)(*(int *)(param_2 + 0x28) + 0xe4) | 0x1000;
            iVar5 = *(int *)(param_2 + 0x1c);
          }
          param_1[2] = iVar5;
        }
      }
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + 4;
    } while ((int)uVar7 < iVar1);
  }
  return;
}

