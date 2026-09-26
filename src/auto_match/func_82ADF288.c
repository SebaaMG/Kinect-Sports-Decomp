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
extern unsigned int *auStack_70;
extern int fn_82AC8ED0();
extern int fn_82AD00E0();
extern int fn_82ADEED8();


ulonglong fn_82ADF288(undefined8 param_1,int param_2,int param_3,undefined8 param_4,
                       longlong param_5,undefined8 param_6,undefined8 param_7,ulonglong *param_8)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong *puVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint *in_stack_00000054;
  uint auStack_70 [28];
  
  if ((*(uint *)(param_2 + 0xc0) & 0x40000000) == 0) {
    param_8[1] = 0;
    param_8[2] = 0;
    param_8[3] = 0;
    param_8[4] = 0;
  }
  else {
    uVar4 = 1;
    param_8[1] = *(ulonglong *)(param_2 + 0x28);
    param_8[2] = *(ulonglong *)(param_2 + 0x30);
    param_8[3] = *(ulonglong *)(param_2 + 0x38);
    param_8[4] = *(ulonglong *)(param_2 + 0x40);
    if (1 < (*(uint *)(param_2 + 0xc0) & 7)) {
      iVar3 = 10;
      do {
        iVar7 = 0;
        lVar9 = 4;
        puVar6 = param_8;
        do {
          iVar5 = iVar3 + iVar7;
          puVar1 = puVar6 + 1;
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 1;
          *puVar6 = *(ulonglong *)(iVar5 * 8 + param_2) & *puVar1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 5;
      } while (uVar4 < (*(uint *)(param_2 + 0xc0) & 7));
    }
    if ((param_3 != 0) && (uVar4 = 0, (*(uint *)(param_3 + 0xc0) & 7) != 0)) {
      iVar3 = 5;
      do {
        iVar7 = 0;
        lVar9 = 4;
        puVar6 = param_8;
        do {
          iVar5 = iVar3 + iVar7;
          puVar1 = puVar6 + 1;
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 1;
          *puVar6 = *(ulonglong *)(iVar5 * 8 + param_3) & *puVar1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 5;
      } while (uVar4 < (*(uint *)(param_3 + 0xc0) & 7));
    }
  }
  uVar8 = 0;
  lVar9 = 0;
LAB_82adf43c:
  uVar2 = fn_82AD00E0(param_8,uVar8,param_5,4);
  if ((int)uVar2 != -1) {
    fn_82ADEED8(auStack_70,param_2,param_3,param_4,param_5,param_6,param_7,uVar2);
    if ((auStack_70[0] & 0x300) == 0) {
      if ((*(uint *)(param_2 + 0xc0) & 0x40000000) != 0) goto code_r0x82adf40c;
      goto LAB_82adf434;
    }
    uVar2 = (ulonglong)(auStack_70[0] >> 10) & 0xf | uVar2 & 0xfffffffffffffff0;
    *in_stack_00000054 = auStack_70[0];
  }
  return uVar2;
code_r0x82adf40c:
  fn_82AC8ED0(param_8,(uVar8 & 0xfffffff) << 4 |
                          (ulonglong)(uint)(1 << ((uint)lVar9 & 0x3f)) & 0xffffffff0000000f);
  lVar9 = lVar9 + 1;
  if (4 < (lVar9 + param_5 & 0xffffffffU)) {
    lVar9 = 0;
LAB_82adf434:
    uVar8 = uVar8 + 1;
  }
  goto LAB_82adf43c;
}

