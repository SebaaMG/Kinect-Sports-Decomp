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
extern unsigned int *auStack_40;
extern int fn_8255ABF8();
extern int fn_8255E320();
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_825632C8(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 in_r0;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  undefined4 in_register_00010470;
  undefined4 in_register_00010474;
  undefined4 in_register_00010478;
  undefined4 in_vr71;
  undefined1 auStack_40 [64];
  
  uVar6 = ZEXT48(&stack0x00000000);
  iVar5 = *(int *)(param_2 * 0x18 + param_1 + 0xa40);
  if (iVar5 == -1) {
    puVar1 = (undefined4 *)(param_1 + 0x110U & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar9 = puVar1[2];
    uVar11 = puVar1[3];
    iVar5 = (int)in_r0;
    puVar2 = (undefined4 *)((uint)(auStack_40 + iVar5) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar9;
    puVar2[3] = uVar11;
    pfVar3 = (float *)((uint)(auStack_40 + iVar5) & 0xfffffff0);
    fVar8 = pfVar3[1];
    fVar10 = pfVar3[2];
    fVar12 = pfVar3[3];
    loadVectorLeftIndexed128(in_r0,uVar6 - 0x80);
    pfVar4 = (float *)(iVar5 + param_3 & 0xfffffff0);
    *pfVar4 = *pfVar3 * in_register_000100d0;
    pfVar4[1] = fVar8 * in_register_000100d4;
    pfVar4[2] = fVar10 * in_register_000100d8;
    pfVar4[3] = fVar12 * in_vr13;
  }
  else {
    fn_8255E320(param_1,iVar5,uVar6 - 0x78);
    iVar5 = (int)in_r0;
    fn_8255ABF8(uVar6 - 0x78);
    puVar1 = (undefined4 *)(iVar5 + param_3 & 0xfffffff0);
    *puVar1 = in_register_00010470;
    puVar1[1] = in_register_00010474;
    puVar1[2] = in_register_00010478;
    puVar1[3] = in_vr71;
  }
  return;
}

