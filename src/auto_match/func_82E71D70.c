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
extern unsigned int *auStack_58;
extern int fn_82E6FC00();
extern int fn_82E6FDA0();
extern int fn_82E704F0();
extern int fn_82E70780();
extern int fn_82E71CC8();
extern unsigned int uStack_6c;


longlong fn_82E71D70(int *param_1,ulonglong param_2)

{
  int iVar3;
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  int *piStack_70;
  uint uStack_6c;
  longlong lStack_68;
  longlong lStack_60;
  ulonglong auStack_58 [11];
  
  piStack_70 = (int *)0x0;
  lStack_68 = 0;
  uStack_6c = 0xffffffff;
  iVar3 = fn_82E704F0(param_1,param_2,&piStack_70,&lStack_68);
  lVar4 = lStack_68;
  piVar6 = piStack_70;
  if (iVar3 < 0) {
    lVar1 = fn_82E71CC8(param_1,&piStack_70);
    piVar6 = piStack_70;
    if (lVar1 < 0) goto LAB_82e7200c;
    lStack_68 = 0;
    lVar1 = (**(code **)(*(int *)param_1[0x16] + 0x4c))((int *)param_1[0x16],piStack_70,&lStack_68);
    if (lVar1 < 0) goto LAB_82e7200c;
    uStack_6c = 0;
    lVar1 = (**(code **)(*(int *)param_1[0x16] + 0x44))((int *)param_1[0x16],&uStack_6c);
    if (((lVar1 < 0) || (lVar1 = fn_82E6FDA0(param_1,piVar6), lVar1 < 0)) ||
       (lVar1 = (**(code **)(*piVar6 + 0x40))(piVar6,param_2 >> 0x20 & 0xffff), lVar1 < 0))
    goto LAB_82e7200c;
    lVar4 = *(longlong *)(param_1 + 0xc) + (ulonglong)uStack_6c + lStack_68;
    uVar5 = 0;
LAB_82e71ea4:
    uStack_6c = 0;
    lVar1 = (**(code **)(*piVar6 + 0x1c))(piVar6,&uStack_6c);
    if ((lVar1 < 0) ||
       (lVar1 = fn_82E6FC00(param_1,((longlong)(int)uStack_6c * (longlong)(int)uVar5 & 0xffffffffU
                                      ) + lVar4,param_2 & 0xffffffff), lVar1 < 0))
    goto LAB_82e7200c;
    piStack_70 = (int *)0x0;
    lVar1 = (**(code **)(*piVar6 + 0x24))(piVar6,&piStack_70);
    if ((lVar1 < 0) ||
       (lVar1 = (**(code **)(*piVar6 + 0x38))(piVar6,(int)piStack_70 + 1), lVar1 < 0))
    goto LAB_82e7200c;
  }
  else {
    iVar3 = fn_82E70780(param_1,param_2,piStack_70,lStack_68,&uStack_6c);
    uVar5 = uStack_6c;
    if (iVar3 < 0) {
      if ((iVar3 != -0x3ff2c92b) || (uStack_6c == 0xffffffff)) {
        lVar1 = 1;
        goto LAB_82e7200c;
      }
      goto LAB_82e71ea4;
    }
  }
  lStack_60 = 0;
  iVar3 = *piVar6;
  uVar2 = (**(code **)(*param_1 + 0x34))(param_1);
  lVar1 = (**(code **)(iVar3 + 0x2c))(piVar6,uVar5,*(undefined2 *)(param_1 + 2),uVar2,&lStack_60);
  if (-1 < lVar1) {
    auStack_58[0] = 0;
    iVar3 = *piVar6;
    lVar4 = lStack_60 + lVar4;
    uVar2 = (**(code **)(*param_1 + 0x34))(param_1);
    lVar1 = (**(code **)(iVar3 + 0x20))(piVar6,*(undefined2 *)(param_1 + 2),uVar2,auStack_58);
    if (-1 < lVar1) {
      lVar1 = -1;
      if (*(ulonglong *)(param_1 + 0x10) - auStack_58[0] < 0x100000000) {
        lVar1 = (*(ulonglong *)(param_1 + 0x10) & 0xffffffff) - (auStack_58[0] & 0xffffffff);
      }
      lVar1 = fn_82E6FC00(param_1,lVar4,lVar1);
    }
  }
LAB_82e7200c:
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + 1;
  return lVar1;
}

