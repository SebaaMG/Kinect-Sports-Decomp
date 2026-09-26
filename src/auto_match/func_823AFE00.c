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
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_823AFE00(int param_1)

{
  int iVar1;
  uint *puVar2;
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
  uint in_register_00010010;
  uint in_register_00010014;
  uint in_register_00010018;
  uint in_vr1;
  uint in_register_00010430;
  uint in_register_00010434;
  uint in_register_00010438;
  uint in_vr67;
  uint in_register_000104d0;
  uint in_register_000104d4;
  uint in_register_000104d8;
  uint in_vr77;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  uVar13 = in_vr1 & ~in_vr67 | in_vr77 & in_vr67;
  uVar12 = in_register_00010018 & ~in_register_00010438 |
           in_register_000104d8 & in_register_00010438;
  uVar11 = in_register_00010014 & ~in_register_00010434 |
           in_register_000104d4 & in_register_00010434;
  uVar10 = in_register_00010010 & ~in_register_00010430 |
           in_register_000104d0 & in_register_00010430;
  puVar2 = (uint *)(param_1 + 0x10U & 0xfffffff0);
  *puVar2 = uVar10;
  puVar2[1] = uVar11;
  puVar2[2] = uVar12;
  puVar2[3] = uVar13;
  if ((iVar1 != 0) &&
     (((*(int *)(param_1 + 0x154) != 0 || (*(int *)(param_1 + 0x15c) != 0)) &&
      (*(int *)(param_1 + 0xb4) == 0)))) {
    iVar4 = fn_825279F8(iVar1);
    if ((iVar4 == 0) || (iVar4 == 3)) {
      puVar2 = (uint *)(in_r0 + iVar1 + 0x70 & 0xfffffff0);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      puVar2[2] = uVar12;
      puVar2[3] = uVar13;
    }
    else {{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs38,in_vs45); memcpy(auVar5, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs39,in_vs42,auVar5); memcpy(auVar5, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs40,in_vs41,auVar5); memcpy(auVar5, &_vt2, 16); }
      vectorConditionalSelect(auVar5,in_vs32,in_vs44);
      puVar2 = (uint *)(in_r0 + iVar1 + 0x70 & 0xfffffff0);
      *puVar2 = in_register_00010430;
      puVar2[1] = in_register_00010434;
      puVar2[2] = in_register_00010438;
      puVar2[3] = in_vr67;
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
  }
  return;
}

