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
extern int fn_82D11CD0();
extern int fn_82D11E18();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82D13560(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  iVar4 = *param_3;
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x40) != *(int *)(param_1 + 0x1ac))) {
    *(int *)(iVar4 + 0x40) = *(int *)(param_1 + 0x1ac);
    iVar4 = *param_3;
    if ((longlong)*(int *)(iVar4 + 0x28) * (longlong)*(int *)(param_2 + 0x28) +
        (longlong)*(int *)(iVar4 + 0x24) * (longlong)*(int *)(param_2 + 0x24) +
        (longlong)*(int *)(param_2 + 0x20) * (longlong)*(int *)(iVar4 + 0x20) +
        *(longlong *)(iVar4 + 0x30) < 0) {
      *param_4 = *param_3;
      param_4[1] = param_3[1];
    }
    else {
      uStack_50 = *(uint *)((param_3[1] + 5) * 4 + iVar4);
      uStack_4c = uStack_50 & 3;
      uStack_50 = uStack_50 & 0xfffffffc;
      fn_82D13560(param_1,param_2,&uStack_50,param_4);
      uStack_48 = *(uint *)(((-(uint)(param_3[1] != 2) & param_3[1] + 1U) + 5) * 4 + *param_3);
      uStack_44 = uStack_48 & 3;
      uStack_48 = uStack_48 & 0xfffffffc;
      fn_82D13560(param_1,param_2,&uStack_48,param_4);
      if (param_3[1] == 0) {
        iVar4 = 2;
      }
      else {
        iVar4 = param_3[1] + -1;
      }
      uStack_40 = *(uint *)((iVar4 + 5) * 4 + *param_3);
      uStack_3c = uStack_40 & 3;
      uStack_40 = uStack_40 & 0xfffffffc;
      fn_82D13560(param_1,param_2,&uStack_40,param_4);
      uVar3 = *(uint *)((param_3[1] + 5) * 4 + *param_3);
      if ((uVar3 & 0xfffffffc) != 0) {
        *(undefined4 *)(((uVar3 & 3) + 5) * 4 + (uVar3 & 0xfffffffc)) = 0;
      }
      *(undefined4 *)((param_3[1] + 5) * 4 + *param_3) = 0;
      iVar4 = *param_3;
      iVar1 = ((-(uint)(param_3[1] != 2) & param_3[1] + 1U) + 5) * 4;
      uVar3 = *(uint *)(iVar1 + iVar4);
      if ((uVar3 & 0xfffffffc) != 0) {
        *(undefined4 *)(((uVar3 & 3) + 5) * 4 + (uVar3 & 0xfffffffc)) = 0;
      }
      *(undefined4 *)(iVar1 + iVar4) = 0;
      if (param_3[1] == 0) {
        iVar4 = 2;
      }
      else {
        iVar4 = param_3[1] + -1;
      }
      iVar1 = *param_3;
      iVar4 = (iVar4 + 5) * 4;
      uVar3 = *(uint *)(iVar4 + iVar1);
      if ((uVar3 & 0xfffffffc) != 0) {
        *(undefined4 *)(((uVar3 & 3) + 5) * 4 + (uVar3 & 0xfffffffc)) = 0;
      }
      *(undefined4 *)(iVar4 + iVar1) = 0;
      lVar5 = 3;
      param_3 = (int *)*param_3;
      piVar6 = param_3 + 2;
      do {
        *(int *)(*piVar6 + 0x30) = *(int *)(*piVar6 + 0x30) + -1;
        piVar2 = (int *)*piVar6;
        if (piVar2[0xc] == 0) {
          iVar4 = *piVar2;
          piVar2 = (int *)piVar2[1];
          if (iVar4 != 0) {
            *(int **)(iVar4 + 4) = piVar2;
          }
          if (piVar2 == (int *)0x0) {
            *(int *)(param_1 + 0x24) = iVar4;
          }
          else {
            *piVar2 = iVar4;
          }
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
          fn_82D11CD0();
        }
        lVar5 = lVar5 + -1;
        piVar6 = piVar6 + 1;
      } while (lVar5 != 0);
      iVar4 = *param_3;
      piVar6 = (int *)param_3[1];
      if (iVar4 != 0) {
        *(int **)(iVar4 + 4) = piVar6;
      }
      if (piVar6 == (int *)0x0) {
        *(int *)(param_1 + 0x3c) = iVar4;
      }
      else {
        *piVar6 = iVar4;
      }
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
      fn_82D11E18(param_1 + 0x30,param_3);
    }
  }
  return;
}

