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
extern int fn_82E67238();
extern int fn_82E67350();
extern int fn_82F68CC0();


undefined8
fn_82E67C80(int *param_1,undefined4 *param_2,longlong param_3,int param_4,int *param_5,
             int *param_6,ushort param_7,ushort *param_8)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int in_stack_00000054;
  
  iVar5 = *param_1;
  iVar4 = *(int *)(iVar5 + 0xc);
  uVar6 = 0;
  iVar2 = iVar4 >> 3;
  lVar7 = (longlong)iVar2;
  if ((param_1[10] == 1) || ((2 < *(int *)(iVar5 + 0x3c) && (*(int *)(iVar5 + 0x1b8) == 1)))) {
    if (in_stack_00000054 != 0) {
      *param_5 = 0;
      *param_8 = 0;
    }
  }
  else {
    if (in_stack_00000054 == 1) {
      *param_8 = 0;
      iVar5 = *param_1;
      iVar4 = *(int *)(iVar5 + 0xc);
      if (param_4 << 3 < iVar4) {
        *param_5 = 0;
        return 0xffffffff80040003;
      }
      if (((int)param_2[0x11] < 1) && ((int)param_2[0x12] < 1)) {
        *param_5 = 0;
        return 2;
      }
    }
    if ((*(int *)(iVar5 + 0x48) == 2) && ((int)param_2[0x11] < iVar2)) {
      if (in_stack_00000054 == 1) {
        fn_82F68CC0(param_3,param_2[6],lVar7);
        *param_5 = iVar2;
        iVar5 = *(int *)param_2[7];
        *param_6 = iVar5;
        if ((uint)param_2[0x32] <= (uint)(*(int *)param_2[8] + iVar5)) {
          *param_6 = (*(int *)param_2[8] - param_2[0x32]) + iVar5;
          param_2[0x32] = *(undefined4 *)param_2[8];
        }
        *param_8 = *param_8 + 1;
      }
      *(ulonglong *)(param_2 + 0x2e) =
           (ulonglong)*(uint *)param_2[7] + *(longlong *)(param_2 + 0x2e);
      if (param_1[6] == 0) {
        fn_82E67350(param_2,param_1);
      }
      param_2[0x11] = 0;
      param_2[7] = param_2[7] + 4;
      param_2[0x12] = 0;
      param_2[8] = param_2[8] + 4;
      param_2[6] = iVar2 + param_2[6];
      return 0;
    }
    if (param_2[0x11] * 8 + param_2[0x12] < iVar4) {
      if (in_stack_00000054 == 1) {
        *param_5 = 0;
        *param_6 = 0;
      }
      uVar6 = 2;
    }
    else {
      if (in_stack_00000054 != 0) {
        *param_5 = 0;
      }
      iVar5 = param_2[0x11];
      while ((iVar2 <= iVar5 &&
             ((in_stack_00000054 == 0 || ((*param_5 < param_4 && (*param_8 < param_7))))))) {
        if (in_stack_00000054 == 1) {
          fn_82F68CC0(param_3,param_2[6],lVar7);
          param_3 = lVar7 + param_3;
          *param_5 = *param_5 + iVar2;
          iVar5 = *(int *)param_2[7];
          *param_6 = iVar5;
          if ((uint)param_2[0x32] <= (uint)(*(int *)param_2[8] + iVar5)) {
            *param_6 = (*(int *)param_2[8] - param_2[0x32]) + iVar5;
            param_2[0x32] = *(undefined4 *)param_2[8];
          }
          param_6 = param_6 + 1;
          *param_8 = *param_8 + 1;
        }
        *(ulonglong *)(param_2 + 0x2e) =
             (ulonglong)*(uint *)param_2[7] + *(longlong *)(param_2 + 0x2e);
        if (param_1[6] == 0) {
          fn_82E67350(param_2,param_1);
        }
        uVar1 = param_2[6];
        param_2[7] = param_2[7] + 4;
        param_2[0x11] = param_2[0x11] - iVar2;
        param_2[8] = param_2[8] + 4;
        param_2[6] = (int)(lVar7 + (ulonglong)uVar1);
        if ((lVar7 + (ulonglong)uVar1 & 0xffffffff) == (ulonglong)(uint)param_2[3]) {
          param_2[6] = *param_2;
          param_2[7] = param_2[1];
          param_2[8] = param_2[2];
          uVar3 = fn_82E67238(param_1,param_2,in_stack_00000054);
          if ((int)uVar3 < 0) {
            return uVar3;
          }
        }
        iVar5 = param_2[0x11];
      }
    }
    if (param_2[6] == param_2[3]) {
      param_2[6] = *param_2;
      param_2[7] = param_2[1];
      param_2[8] = param_2[2];
      uVar3 = fn_82E67238(param_1,param_2,in_stack_00000054);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
    }
  }
  return uVar6;
}

