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
extern unsigned int *auStack_40;
extern int fn_825279F8();
extern int fn_82528948();
extern int fn_8252AD10();
extern int fn_8252AEB8();
extern int fn_82535F50();
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_823209E8(int param_1)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  undefined1 in_vs32 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_vr1;
  undefined4 in_register_00010430;
  undefined4 in_register_00010434;
  undefined4 in_register_00010438;
  undefined4 in_vr67;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_40 [64];
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 2) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      fn_8252AD10(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30),iVar1);
    }
    else {
      fn_8252AEB8(*(undefined4 *)(param_1 + 0x20),iVar1,1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x20);
  pfVar2 = (float *)(param_1 + 0x10U & 0xfffffff0);
  fVar10 = in_register_00010010 + *pfVar2;
  fVar11 = in_register_00010014 + pfVar2[1];
  fVar12 = in_register_00010018 + pfVar2[2];
  fVar13 = in_vr1 + pfVar2[3];
  pfVar2 = (float *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *pfVar2 = fVar10;
  pfVar2[1] = fVar11;
  pfVar2[2] = fVar12;
  pfVar2[3] = fVar13;
  iVar4 = fn_825279F8(iVar1);
  if ((iVar4 == 0) || (iVar4 == 3)) {
    pfVar2 = (float *)(in_r0 + iVar1 + 0x70 & 0xfffffff0);
    *pfVar2 = fVar10;
    pfVar2[1] = fVar11;
    pfVar2[2] = fVar12;
    pfVar2[3] = fVar13;
  }
  else {{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs38,in_vs45); memcpy(auVar5, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs39,in_vs42,auVar5); memcpy(auVar5, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs40,in_vs41,auVar5); memcpy(auVar5, &_vt2, 16); }
    vectorConditionalSelect(auVar5,in_vs32,in_vs44);
    puVar3 = (undefined4 *)(in_r0 + iVar1 + 0x70 & 0xfffffff0);
    *puVar3 = in_register_00010430;
    puVar3[1] = in_register_00010434;
    puVar3[2] = in_register_00010438;
    puVar3[3] = in_vr67;
  }
  puVar3 = (undefined4 *)(in_r0 + iVar1 + 0x70 & 0xfffffff0);
  uVar6 = *puVar3;
  uVar7 = puVar3[1];
  uVar8 = puVar3[2];
  uVar9 = puVar3[3];
  *(undefined4 *)(iVar1 + 0x170) = 0;
  puVar3 = (undefined4 *)(iVar1 + 0x60U & 0xfffffff0);
  *puVar3 = uVar6;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  fn_82528948(iVar1);
  if (*(int *)(param_1 + 0x24) != 0) {
    fn_82535F50(*(int *)(param_1 + 0x24),auStack_40);
  }
  return;
}

