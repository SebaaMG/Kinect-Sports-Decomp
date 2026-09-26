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
extern unsigned int *auStack_30;
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined8 fn_8295E5E8(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 auStack_30 [12];
  
  if (param_1[0xd] == 0) {
    return 0xffffffff80004001;
  }
  lVar6 = 0;
  uVar1 = *(uint *)param_1[0x41];
  uVar3 = uVar1 & 0xfff00000;
  if (uVar3 != 0x10f00000) {
    if (uVar3 == 0x73500000) {
      lVar6 = 3;
      goto LAB_8295e67c;
    }
    if (uVar3 == 0x73600000) {
      lVar6 = 4;
      goto LAB_8295e67c;
    }
    if (uVar3 != 0x73700000) {
      if (uVar3 == 0x73800000) {
        lVar6 = 2;
      }
      goto LAB_8295e67c;
    }
  }
  lVar6 = 5;
LAB_8295e67c:
  uVar5 = fn_8295D0A8(param_1,lVar6 << 0x10 | 0x5e);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  uVar5 = (**(code **)(*param_1 + 0x140))
                    (param_1,*(undefined4 *)(**(int **)(param_1[0x41] + 0x10) * 4 + param_1[5]),
                     &uStack_40,0,auStack_30);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  uVar5 = (**(code **)(*param_1 + 0x144))
                    (param_1,*(undefined4 *)(param_1[0x41] + 0x10),
                     *(undefined4 *)(param_1[0x41] + 0xc),&uStack_34,auStack_30[0]);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  uVar5 = (**(code **)(*param_1 + 0x138))(param_1,uStack_40,uStack_34,0);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  uVar2 = *(undefined4 *)(*(int *)((uint *)param_1[0x41])[2] * 4 + param_1[5]);
  if ((*(uint *)param_1[0x41] & 0xfff00000) == 0x10f00000) {
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1,uVar2,&uStack_40,&uStack_3c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(code **)(*param_1 + 0x14c))
                      (param_1,*(undefined4 *)(param_1[0x41] + 8),
                       *(undefined4 *)(param_1[0x41] + 0xc),uStack_34,&uStack_38);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(code **)(*param_1 + 0x13c))(param_1,uStack_40,uStack_38,uStack_3c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uStack_38 = uStack_38 ^ 0x1000000;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1,uVar2,&uStack_40,&uStack_3c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(code **)(*param_1 + 0x14c))
                      (param_1,*(undefined4 *)(param_1[0x41] + 8),uVar1 & 0xfffff,uStack_34,
                       &uStack_38);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(code **)(*param_1 + 0x13c))(param_1,uStack_40,uStack_38,uStack_3c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    iVar4 = (uVar1 & 0xfffff) * 4;
    uVar5 = (**(code **)(*param_1 + 0x148))
                      (param_1,*(undefined4 *)
                                (*(int *)(*(int *)(param_1[0x41] + 8) + iVar4) * 4 + param_1[5]),
                       &uStack_40,&uStack_3c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = (**(code **)(*param_1 + 0x14c))
                      (param_1,*(int *)(param_1[0x41] + 8) + iVar4,uVar1 & 0xfffff,uStack_34,
                       &uStack_38);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
  }
  uVar5 = (**(code **)(*param_1 + 0x13c))(param_1,uStack_40,uStack_38,uStack_3c);
  if (((-1 < (int)uVar5) && (uVar5 = (**(code **)(*param_1 + 0x134))(param_1), -1 < (int)uVar5)) &&
     (uVar5 = fn_829548C8(param_1), -1 < (int)uVar5)) {
    uVar5 = 0;
  }
  return uVar5;
}

