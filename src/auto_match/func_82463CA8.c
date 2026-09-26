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
extern int fn_825279F8();
extern int fn_82528948();
extern int fn_82528FA8();
extern unsigned int lbl_82005748;
extern unsigned int lbl_8218E178;
extern unsigned int lbl_821956BC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82463CA8(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 in_r7;
  int iVar6;
  double dVar7;
  undefined1 in_vs32 [16];
  undefined1 auVar8 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_register_00010430;
  undefined4 in_register_00010434;
  undefined4 in_register_00010438;
  undefined4 in_vr67;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  iVar6 = param_1 + 0x30;
  dVar7 = (double)lbl_821CA460;
  iVar3 = fn_82528FA8(dVar7,*(undefined4 *)(param_1 + 8),param_1 + 0x14,iVar6,
                            0xffffffff821ca1a0,in_r7,0);
  *(int *)(param_1 + 0x20) = iVar3;
  puVar1 = (undefined4 *)(in_r0 + iVar6 & 0xfffffff0);
  uVar5 = *puVar1;
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  iVar4 = fn_825279F8();
  if ((iVar4 == 0) || (iVar4 == 3)) {
    puVar1 = (undefined4 *)(in_r0 + iVar3 + 0x70 & 0xfffffff0);
    *puVar1 = uVar5;
    puVar1[1] = uVar9;
    puVar1[2] = uVar10;
    puVar1[3] = uVar11;
  }
  else {{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs40,in_vs32); memcpy(auVar8, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs39,in_vs42,auVar8); memcpy(auVar8, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs38,in_vs41,auVar8); memcpy(auVar8, &_vt2, 16); }
    vectorConditionalSelect(auVar8,in_vs45,in_vs44);
    puVar1 = (undefined4 *)(in_r0 + iVar3 + 0x70 & 0xfffffff0);
    *puVar1 = in_register_00010430;
    puVar1[1] = in_register_00010434;
    puVar1[2] = in_register_00010438;
    puVar1[3] = in_vr67;
  }
  puVar1 = (undefined4 *)(in_r0 + iVar3 + 0x70 & 0xfffffff0);
  uVar5 = *puVar1;
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  *(undefined4 *)(iVar3 + 0x170) = 0;
  puVar1 = (undefined4 *)(iVar3 + 0x60U & 0xfffffff0);
  *puVar1 = uVar5;
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  fn_82528948(iVar3);
  *(undefined4 *)(iVar3 + 0x2b0) = lbl_82005748;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar5 = fn_82528FA8(dVar7,*(undefined4 *)(param_1 + 8),param_1 + 0x10,iVar6,
                              0xffffffff821ca1a0);
    *(undefined4 *)(param_1 + 0x1c) = uVar5;
  }
  uStack_60 = lbl_821CC160;
  uStack_5c = lbl_821956BC;
  uStack_58 = lbl_821CC160;
  iVar3 = fn_82528FA8(dVar7,*(undefined4 *)(param_1 + 8),param_1 + 0x18,param_1 + 0x40,
                            &uStack_60);
  *(int *)(param_1 + 0x24) = iVar3;
  fVar2 = lbl_8218E178;
  if (((*(float *)(iVar3 + 0xa0) != lbl_8218E178) || (*(float *)(iVar3 + 0xa4) != lbl_8218E178)) ||
     (*(float *)(iVar3 + 0xa8) != lbl_8218E178)) {
    *(float *)(iVar3 + 0xa0) = lbl_8218E178;
    *(undefined4 *)(iVar3 + 0x170) = 0;
    *(float *)(iVar3 + 0xa4) = fVar2;
    *(float *)(iVar3 + 0xa8) = fVar2;
    fn_82528948();
  }
  return;
}

