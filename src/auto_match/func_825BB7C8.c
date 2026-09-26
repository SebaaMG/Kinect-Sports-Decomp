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
extern int fn_8255CB48();
extern int fn_82586B60();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern V16 loadVectorLeftIndexed128();
extern V16 loadVectorRightIndexed128();


void fn_825BB7C8(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 in_r0;
  longlong lVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint in_register_00010000;
  uint in_ACC;
  uint in_register_00010008;
  uint in_vr0;
  uint in_register_000100d0;
  uint in_register_000100d4;
  uint in_register_000100d8;
  uint in_vr13;
  uint in_register_00010430;
  uint in_register_00010434;
  uint in_register_00010438;
  uint in_vr67;
  uint in_register_000104d0;
  uint in_register_000104d4;
  uint in_register_000104d8;
  uint in_vr77;
  
  lVar2 = fn_82F6A548();
  iVar3 = (int)lVar2;
  if (*(int *)(iVar3 + 0xc) == 0) {
    fn_82586B60(lVar2 + 0x44);
    loadVectorLeftIndexed128(in_r0,lVar2 + 0x14);
    loadVectorRightIndexed128(0xc,lVar2 + 0x14);
    dVar7 = (double)*(float *)(iVar3 + 0x24);
    dVar6 = (double)*(float *)(iVar3 + 0x40);
    dVar5 = (double)*(float *)(iVar3 + 0x3c);
    dVar4 = (double)*(float *)(iVar3 + 0x38);
    in_vr0 = in_vr0 | in_vr13;
    in_register_00010008 = in_register_00010008 | in_register_000100d8;
    in_ACC = in_ACC | in_register_000100d4;
    in_register_00010000 = in_register_00010000 | in_register_000100d0;
    iVar3 = fn_8255CB48(param_2 + 0x774,1,*(undefined1 *)(iVar3 + 0x84),
                              *(undefined4 *)(iVar3 + 0x34),*(undefined2 *)(iVar3 + 6),
                              *(undefined1 *)(iVar3 + 0x85),*(undefined1 *)(iVar3 + 0x86),
                              *(undefined1 *)(iVar3 + 0x87));
    *(float *)(iVar3 + 0x30) = (float)dVar4;
    *(float *)(iVar3 + 0x34) = (float)dVar5;
    *(float *)(iVar3 + 0x38) = (float)dVar6;
    *(float *)(iVar3 + 0x3c) = (float)dVar7;
    puVar1 = (uint *)(iVar3 + 0x20U & 0xfffffff0);
    *puVar1 = in_register_00010000 & ~in_register_00010430 |
              in_register_000104d0 & in_register_00010430;
    puVar1[1] = in_ACC & ~in_register_00010434 | in_register_000104d4 & in_register_00010434;
    puVar1[2] = in_register_00010008 & ~in_register_00010438 |
                in_register_000104d8 & in_register_00010438;
    puVar1[3] = in_vr0 & ~in_vr67 | in_vr77 & in_vr67;
  }
  fn_82F6A594();
  return;
}

