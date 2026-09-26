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
extern int fn_824B4288();
extern int fn_82F50188();
extern int fn_82F53830();
extern int fn_82F539A8();
extern int fn_8307DA20();
extern unsigned int lbl_82021544;
extern unsigned int lbl_821657C0;
extern unsigned int lbl_821657D0;
extern unsigned int lbl_821657D4;
extern unsigned int lbl_821657D8;
extern unsigned int lbl_821657DC;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F50AB0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int in_r0;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_30 [48];
  
  fn_824B4288(param_1 + 0x20,0x1c0);
  fn_824B4288(param_1 + 0x1e0,0xab0);
  fn_82F53830((ulonglong)*(uint *)(param_1 + 0xcf0) + 0x60);
  fn_82F53830((ulonglong)*(uint *)(param_1 + 0xcf0) + 0x1040);
  *(undefined4 *)(*(int *)(param_1 + 0xcf0) + 0x1844) = 0;
  fn_824B4288((ulonglong)*(uint *)(param_1 + 0xcf0) + 0x1854,0x50);
  fn_824B4288((ulonglong)*(uint *)(param_1 + 0xcf0) + 0x18b8,0x50);
  puVar3 = (undefined4 *)((uint)(&lbl_821657C0 + in_r0) & 0xfffffff0);
  uVar6 = *puVar3;
  uVar7 = puVar3[1];
  uVar8 = puVar3[2];
  uVar9 = puVar3[3];
  puVar3 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  *puVar3 = uVar6;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  puVar3 = (undefined4 *)(param_1 + 0xcc0U & 0xfffffff0);
  *puVar3 = uVar6;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  puVar3 = (undefined4 *)fn_8307DA20(auStack_30);
  uVar1 = *(uint *)(param_1 + 0xcf0);
  *(undefined4 *)(param_1 + 0xce0) = *puVar3;
  *(undefined4 *)(param_1 + 0xce4) = puVar3[1];
  uVar2 = lbl_821657DC;
  uVar9 = lbl_821657D8;
  uVar8 = lbl_821657D4;
  uVar7 = lbl_821657D0;
  uVar6 = puVar3[2];
  *(undefined4 *)(param_1 + 0xc94) = lbl_82021544;
  *(undefined1 *)(param_1 + 0xcb1) = 0;
  puVar3 = (undefined4 *)(param_1 + 0xca0U & 0xfffffff0);
  *puVar3 = uVar7;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar2;
  *(undefined1 *)(param_1 + 0xcb0) = 1;
  *(undefined4 *)(param_1 + 0xce8) = uVar6;
  fn_82F50188(param_1,(ulonglong)uVar1 + 0x60);
  fn_82F539A8((ulonglong)*(uint *)(param_1 + 0xcf0) + 0x1040,
                    (ulonglong)*(uint *)(param_1 + 0xcf0) + 0x60);
  iVar4 = 0;
  lVar5 = 0x14;
  *(undefined4 *)(*(int *)(param_1 + 0xcf0) + 0x191c) = lbl_821AAD20;
  do {
    *(undefined4 *)(*(int *)(param_1 + 0xcf0) + iVar4) = 0;
    iVar4 = iVar4 + 4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

