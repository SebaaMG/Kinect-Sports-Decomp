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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_822B7068();
extern int fn_822EFBF0();
extern int fn_8234C320();
extern int fn_823A8498();
extern int fn_823B3FE0();
extern int fn_825354B8();
extern int fn_82536288();
extern int fn_8288B760();
extern unsigned int iStack_64;
extern unsigned int lbl_831CD020;
extern unsigned int lbl_832975B0;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorConditionalSelect();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


undefined8 fn_822F20C0(double param_1,int param_2,int param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 in_r0;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined1 in_vs32 [16];
  undefined1 auVar8 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 in_vr0 [16];
  undefined4 uVar11;
  undefined1 in_vr9 [16];
  undefined1 auVar12 [16];
  undefined1 in_vr10 [16];
  undefined1 in_vr11 [16];
  undefined4 in_register_00010430;
  undefined4 in_register_00010434;
  undefined4 in_register_00010438;
  undefined4 in_vr67;
  int iStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];

  uVar3 = ZEXT48(&stack0x00000000);
  iVar4 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar4 = fn_82250A18();
  }
  if (*(char *)(iVar4 + 4) != '\0') {
    iVar4 = *(int *)(*(int *)(param_2 + 0x10) + 0x84);
    if (*(int *)(*(int *)(param_2 + 0xc) + 0x168) == 0) {
      uVar5 = *(uint *)(*(int *)(param_2 + 0xc) + 0x16c);
    }
    else {
      uVar5 = fn_8288B760();
      uVar5 = uVar5 & 0xff;
    }
    if ((uVar5 != 0) && (iVar4 != 0)) {
      uVar9 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x2c);
      uVar10 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x28);
      puVar6 = (undefined4 *)fn_822EFBF0(uVar3 - 0x68,iVar4);
      fn_823A8498(param_1,(ulonglong)*(uint *)*puVar6 + 0x108,uVar10,uVar9);
      if (iStack_64 != 0) {
        fn_822315A0();
      }
    }
  }
  iVar4 = *(int *)(param_2 + 0xc);
  if ((*(int *)(iVar4 + 0x24) != 0) &&
     (*(int *)((uint)(*(int *)(iVar4 + 0x214) != 0) * 0x2c + *(int *)(iVar4 + 0x118) + 0x280) != 0))
  {
    fn_8234C320(0);
  }
  if (param_5 == 0) {
    if (lbl_831CD020 != 0) {
      iVar4 = *(int *)(*(int *)(param_2 + 0xc) + 0x210);
      if (iVar4 == 0) {
        iVar4 = *(int *)(*(int *)(param_2 + 0xc) + 0x20c);
      }
      memcpy((void *)(in_vr0), (const void *)(param_3 + 0x10U & 0xfffffff0), 16);
      puVar6 = (undefined4 *)(iVar4 + 0x30U & 0xfffffff0);
      uVar9 = puVar6[1];
      uVar10 = puVar6[2];
      uVar11 = puVar6[3];
      puVar2 = (undefined4 *)((uint)(auStack_60 + (int)in_r0) & 0xfffffff0);
      *puVar2 = *puVar6;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      memcpy((void *)((const void *)((uint)(auStack_50 + (int)in_r0) & 0xfffffff0)), in_vr0, 16);
    }
    *(float *)(*(int *)(param_2 + 0xc) + 0x240) = (float)param_1;
    *(undefined4 *)(param_3 + 0x150) = 1;
    loadVectorLeftIndexed128(in_r0,uVar3 - 0x6c);{ V16 _vt0 = loadVectorLeftIndexed128(in_r0,uVar3 - 0x70); memcpy(auVar8, &_vt0, 16); }
    loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
    vectorRotateLeftImmediateMaskInsert128(in_vr11,in_vr0,4,3);{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr9,in_vr10,4,3); memcpy(auVar12, &_vt1, 16); }
    vectorRotateLeftImmediateMaskInsert128(in_vr0,auVar12,3,2);
    vectorConditionalSelect(auVar8,in_vs45,in_vs44);
    puVar6 = (undefined4 *)(param_3 + 0x20U & 0xfffffff0);
    *puVar6 = in_register_00010430;
    puVar6[1] = in_register_00010434;
    puVar6[2] = in_register_00010438;
    puVar6[3] = in_vr67;
  }
  else {
    *(undefined4 *)(param_3 + 0x150) = 1;
    vectorConditionalSelect(in_vs32,in_vs45,in_vs44);
    puVar6 = (undefined4 *)(param_3 + 0x20U & 0xfffffff0);
    *puVar6 = in_register_00010430;
    puVar6[1] = in_register_00010434;
    puVar6[2] = in_register_00010438;
    puVar6[3] = in_vr67;
  }
  if (*(int *)(*(int *)(param_2 + 0xc) + 0x24) != 0) {
    iVar4 = *(int *)(*(int *)(param_2 + 0x10) + 0x1e4);
    fn_822B7068(*(int *)(param_2 + 0xc),*(undefined4 *)(iVar4 + 0xa8));
    *(undefined4 *)(iVar4 + 0xb4) = 0;
  }
  iVar4 = (int)in_r0;
  if (*(int *)(param_3 + 0x1e4) != 0) {
    fn_823B3FE0(*(int *)(param_3 + 0x1e4),uVar3 - 0x6c);
  }
  piVar7 = (int *)(*(int *)(param_2 + 0x10) + 0x828);
  if (((piVar7 != (int *)0x0) && (*piVar7 != 0)) && (*(int *)(*(int *)(param_2 + 0xc) + 0x24) != 0))
  {
    puVar6 = (undefined4 *)(param_3 + 0x10U & 0xfffffff0);
    uVar9 = puVar6[1];
    uVar10 = puVar6[2];
    uVar11 = puVar6[3];
    iVar1 = *(int *)(*(int *)(param_2 + 0x10) + 0x174);
    puVar2 = (undefined4 *)((uint)(auStack_50 + iVar4) & 0xfffffff0);
    *puVar2 = *puVar6;
    puVar2[1] = uVar9;
    puVar2[2] = uVar10;
    puVar2[3] = uVar11;
    fn_825354B8(uVar3 - 0x6c,uVar3 - 0x50,0,*(undefined4 *)(iVar1 + 0x84c),0xffffffff83296bc0,
                      0xffffffff83296bd0);
    fn_82536288(uVar3 - 0x6c);
  }
  return 1;
}
