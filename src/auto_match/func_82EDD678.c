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
extern int fn_82EDBD48();
extern int fn_82EDC238();
extern int fn_82EDD0B8();
extern int fn_82EDD170();
extern unsigned int iStack0000003c;
extern unsigned int iStack00000044;
extern unsigned int iStack0000004c;


ulonglong fn_82EDD678(int param_1,int *param_2,undefined8 param_3,ulonglong param_4,
                       undefined8 param_5,int param_6,int param_7,int param_8)

{
  bool bVar1;
  short sVar2;
  int iVar4;
  longlong lVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iStack0000003c;
  int iStack00000044;
  int iStack0000004c;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  undefined4 in_stack_00000074;
  undefined4 in_stack_0000007c;
  
  uVar11 = *(uint *)(param_1 + 0x10);
  uVar5 = (ulonglong)uVar11;
  if (3 < uVar5) {
    uVar6 = (ulonglong)((int)param_4 >> 0x1f);
    param_4 = (param_4 ^ uVar6) - uVar6;
  }
  if (((((uVar11 != 0) && (uVar11 != 3)) && (uVar5 != 0x41595556)) &&
      (((uVar11 != 0x59565955 && (uVar11 != 0x32595559)) &&
       ((uVar11 != 0x56323136 && ((uVar11 != 0x56555949 && (uVar11 != 0x30323449)))))))) &&
     ((uVar11 != 0x32315659 && (uVar11 != 0x50343232)))) {
LAB_82edd9d8:
    *param_2 = 0;
    return 1;
  }
  if (param_2 == (int *)0x0) {
    return 1;
  }
  uVar11 = (uint)param_3;
  if ((((((((int)uVar11 < 0) || ((int)param_5 < 0)) || (param_6 < 0)) ||
        ((param_7 < 1 || (param_8 < 1)))) || (in_stack_00000054 < 0)) ||
      ((in_stack_0000005c < 0 || (in_stack_00000064 < 1)))) || (in_stack_0000006c < 1))
  goto LAB_82edd9d8;
  iVar4 = *(int *)(param_1 + 4);
  iVar7 = iVar4;
  if (iVar4 < 1) {
    iVar7 = -iVar4;
  }
  if (iVar7 < (int)param_5 + param_7) goto LAB_82edd9d8;
  iVar7 = *(int *)(param_1 + 8);
  iVar8 = iVar7;
  if (iVar7 < 1) {
    iVar8 = -iVar7;
  }
  if (((iVar8 < param_6 + param_8) || ((int)uVar11 < in_stack_00000054 + in_stack_00000064)) ||
     (uVar10 = (uint)param_4,
     (int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) <
     in_stack_0000005c + in_stack_0000006c)) goto LAB_82edd9d8;
  sVar2 = *(short *)(param_1 + 0xe);
  iStack0000003c = param_6;
  iStack00000044 = param_7;
  iStack0000004c = param_8;
  iVar4 = fn_82EDBD48(uVar5,iVar4,iVar7,in_stack_0000007c);
  if ((((iVar4 != 0) || (iVar4 = fn_82EDBD48(uVar5,param_3,param_4), iVar4 != 0)) ||
      ((iVar4 = fn_82EDBD48(uVar5,iStack00000044,iStack0000004c), iVar4 != 0 ||
       ((iVar4 = fn_82EDBD48(uVar5,in_stack_00000064,in_stack_0000006c), iVar4 != 0 ||
        (iVar4 = fn_82EDBD48(uVar5,param_5,iStack0000003c), iVar4 != 0)))))) ||
     (iVar4 = fn_82EDBD48(uVar5,in_stack_00000054,in_stack_0000005c), iVar4 != 0))
  goto LAB_82edd9d8;
  iVar4 = (int)uVar5;
  if (iVar4 == 0x31313450) {
    uVar12 = 1;
    goto LAB_82edd90c;
  }
  if (((iVar4 != 0x56555949) && (iVar4 != 0x30323449)) && (iVar4 != 0x32315659)) {
    if (iVar4 == 0) {
      bVar1 = sVar2 == 0x20;
    }
    else {
      if (((iVar4 == 0x59565955) || (iVar4 == 0x32595559)) || ((uVar5 & 0xffffffff) == 0x41595556))
      goto LAB_82edd908;
      bVar1 = (uVar5 & 0xffffffff) == 0x50343232;
    }
    uVar12 = 0;
    if (!bVar1) goto LAB_82edd90c;
  }
LAB_82edd908:
  uVar12 = in_stack_00000074;
LAB_82edd90c:
  uVar5 = fn_82EDC238(param_1,param_2,param_3,param_4,uVar12,0);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  iVar4 = *param_2;
  uVar9 = (int)*(uint *)(param_1 + 4) >> 0x1f;
  *(uint *)(iVar4 + 0x28) = (*(uint *)(param_1 + 4) ^ uVar9) - uVar9;
  uVar9 = *(uint *)(param_1 + 8);
  if (3 < *(uint *)(param_1 + 0x10)) {
    uVar9 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f);
  }
  *(uint *)(iVar4 + 0x2c) = uVar9;
  *(uint *)(iVar4 + 0x34) = uVar10;
  *(undefined4 *)(iVar4 + 0x154) = uVar12;
  *(undefined4 *)(iVar4 + 0x158) = in_stack_0000007c;
  *(uint *)(iVar4 + 0x30) = (uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f);
  iVar4 = fn_82EDD0B8();
  if (iVar4 != 0) {
    lVar3 = fn_82EDD170(param_2,param_5,iStack0000003c,iStack00000044,iStack0000004c,
                          in_stack_00000054,in_stack_0000005c,in_stack_00000064);
    return (ulonglong)(lVar3 != 0);
  }
  return 0xffffffff80004005;
}

