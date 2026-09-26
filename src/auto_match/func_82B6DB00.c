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
extern int fn_82AB68E0();
extern int fn_82B69A00();
extern int fn_82B6B008();
extern int fn_82B6D848();
extern int fn_82B6D938();
extern int fn_82B6E5C0();


undefined4 *
fn_82B6DB00(ulonglong param_1,code *param_2,ulonglong param_3,undefined4 param_4,
             undefined4 param_5,int param_6,ulonglong param_7,ulonglong param_8)

{
  undefined4 *puVar2;
  ulonglong uVar1;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int *piVar8;
  int in_stack_00000054;
  int in_stack_0000005c;
  uint *in_stack_0000006c;
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d77bc,0xffffffff820d9f48,0x9d);
  }
  if (param_2 == (code *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69d8,0xffffffff820d9f48,0x9e);
  }
  if ((param_3 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69cc,0xffffffff820d9f48,0x9f);
  }
  if (param_6 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7790,0xffffffff820d9f48,0xa0);
  }
  if ((param_7 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6bdc,0xffffffff820d9f48,0xa1);
  }
  if ((param_8 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6bcc,0xffffffff820d9f48,0xa2);
  }
  if (in_stack_00000054 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6bbc,0xffffffff820d9f48,0xa3);
  }
  if (in_stack_0000005c == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6bac,0xffffffff820d9f48,0xa4);
  }
  puVar2 = (undefined4 *)(*param_2)(param_1,0x14c);
  if (puVar2 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d77ac,0xffffffff820d9f48,0xa9);
  }
  else {
    puVar2[6] = param_6;
    puVar2[0x51] = in_stack_00000054;
    puVar2[0x52] = in_stack_0000005c;
    *puVar2 = (int)param_1;
    puVar7 = puVar2 + 7;
    puVar2[1] = param_2;
    lVar6 = 8;
    puVar2[2] = (int)param_3;
    puVar2[3] = param_4;
    puVar2[4] = param_5;
    puVar2[5] = (int)param_7;
    puVar2[0x50] = (int)param_8;
    do {
      if (puVar7[0x40] != 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da100,0xffffffff820d9f48,0xc2);
      }
      uVar1 = fn_82B6E5C0(param_1,param_2,param_3,param_8,100);
      *puVar7 = (int)uVar1;
      if ((uVar1 & 0xffffffff) == 0) {
        fn_82AB15D0(uVar1,0xffffffff820d2ea4,0xffffffff820da130,0xffffffff820d9f48,200);
      }
      uVar1 = fn_82AB68E0(param_1,param_2,param_3,10);
      puVar7[8] = (int)uVar1;
      if ((uVar1 & 0xffffffff) == 0) {
        fn_82AB15D0(uVar1,0xffffffff820d2ea4,0xffffffff820da154,0xffffffff820d9f48,0xce);
      }
      lVar6 = lVar6 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar6 != 0);
    uVar3 = fn_82B6B008(100,0x24,param_2,param_3,param_1);
    puVar2[0x4f] = uVar3;
    iVar5 = 0;
    piVar8 = puVar2 + 0x47;
    puVar7 = puVar2 + 0x17;
    do {
      uVar1 = ((ulonglong)*in_stack_0000006c - ((ulonglong)*in_stack_0000006c & 7)) + 8;
      iVar4 = fn_82B6D848(puVar2,uVar1,puVar7);
      piVar8[-8] = 1;
      *piVar8 = (int)((uVar1 & 0xffffffff) << 2) + *piVar8;
      if (iVar4 != 0) goto LAB_82b6de7c;
      iVar5 = iVar5 + 1;
      in_stack_0000006c = in_stack_0000006c + 1;
      piVar8 = piVar8 + 1;
      puVar7 = puVar7 + 5;
    } while (iVar5 < 6);
    uVar1 = fn_82B69A00(param_7,6);
    uVar1 = (uVar1 & 0xffffffff) >> 2;
    iVar5 = fn_82B6D848(puVar2,uVar1,puVar2 + 0x35);
    puVar2[0x45] = 1;
    puVar2[0x4d] = (int)(uVar1 << 2) + puVar2[0x4d];
    if (iVar5 == 0) {
      uVar1 = fn_82B69A00(param_7,5);
      uVar1 = (uVar1 & 0xffffffff) >> 2;
      iVar5 = fn_82B6D848(puVar2,uVar1,puVar2 + 0x3a);
      puVar2[0x46] = 1;
      puVar2[0x4e] = (int)(uVar1 << 2) + puVar2[0x4e];
      if (iVar5 == 0) {
        return puVar2;
      }
    }
  }
LAB_82b6de7c:
  fn_82B6D938(puVar2);
  return (undefined4 *)0x0;
}

