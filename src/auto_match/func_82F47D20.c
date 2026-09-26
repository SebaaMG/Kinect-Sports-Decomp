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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_82E57738();
extern int fn_82E57820();
extern int fn_82E59EC8();
extern int fn_82EE5CC8();


undefined8 fn_82F47D20(int *param_1,int *param_2,ulonglong param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong *puVar8;
  ulonglong uVar7;
  ulonglong uVar9;
  int *piVar10;
  uint auStack_50 [2];
  ulonglong auStack_48 [9];
  
  if (param_1[4] == 0) {
    return 0xffffffffc00d36b6;
  }
  if ((param_2 != (int *)0x0) && (param_4 != (int *)0x0)) {
    *param_4 = 0;
    auStack_50[0] = 0;
    uVar3 = (**(code **)(*param_2 + 0x14))(param_2,0,auStack_50);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    if ((param_3 & 0xffffffff) < (ulonglong)auStack_50[0]) {
      piVar10 = param_1 + 0xc;
      uVar9 = auStack_50[0] - param_3;
      uVar3 = fn_82EE5CC8(piVar10,param_2,param_3,0);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      if ((*(ulonglong *)(param_1 + 0x14) < (ulonglong)(uint)param_1[0x17]) &&
         ((ulonglong)(uint)param_1[0x17] <= (ulonglong)(uint)param_1[0x12])) {
        uVar3 = fn_82E59EC8(param_1 + 9,piVar10);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        iVar4 = (**(code **)(*param_1 + 0x50))(param_1);
        if (iVar4 != 0) {
          fn_82E57738(param_1 + 0x16,piVar10);
        }
        uVar3 = fn_82E57820(param_1[0xb],piVar10,(ulonglong)*(ushort *)(param_1 + 6) << 3);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        uVar6 = 0;
        if (*(short *)(param_1 + 6) != 0) {
          puVar8 = (ulonglong *)(param_1[0xb] + -8);
          do {
            uVar1 = *(uint *)(puVar8 + 1);
            uVar6 = uVar6 + 1;
            uVar2 = *(uint *)((int)puVar8 + 0xc);
            puVar8 = puVar8 + 1;
            *puVar8 = (((ulonglong)uVar2 & 0xff) << 0x18 |
                      ((ulonglong)uVar2 & 0xff00) << 8 |
                      (ulonglong)(uVar2 >> 8) & 0xff00 | (ulonglong)(uVar2 >> 0x18)) << 0x20 |
                      ((ulonglong)uVar1 & 0xff) << 0x18 |
                      ((ulonglong)uVar1 & 0xff00) << 8 |
                      (ulonglong)(uVar1 >> 8) & 0xff00 | (ulonglong)(uVar1 >> 0x18);
          } while (uVar6 < *(ushort *)(param_1 + 6));
        }
        param_1[3] = 1;
      }
      iVar4 = 0;
      auStack_48[0] = 0;
      uVar5 = 0;
      if (param_1[3] != 0) {
        uVar3 = (**(code **)(*param_1 + 0x18))(param_1,auStack_48);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        if (auStack_48[0] <= *(ulonglong *)(param_1 + 0x14)) {
          return 0xffffffffc00d36b5;
        }
        iVar4 = (int)auStack_48[0] - (int)*(ulonglong *)(param_1 + 0x14);
        uVar5 = auStack_48[0];
      }
      uVar7 = (uVar9 & 0xffffffff) + *(longlong *)(param_1 + 0x14);
      *(ulonglong *)(param_1 + 0x14) = uVar7;
      if ((param_1[3] == 0) || (uVar7 < uVar5)) {
        iVar4 = (int)uVar9;
        uVar3 = 0x400d3a98;
      }
      else {
        uVar3 = 0;
      }
      *param_4 = iVar4;
      return uVar3;
    }
  }
  return 0xffffffff80070057;
}

