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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern int fn_826367A8();


undefined8
fn_82636938(int param_1,undefined8 param_2,int param_3,uint param_4,int param_5,int param_6,
             ulonglong param_7,code *param_8)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 in_stack_00000054;
  uint auStack_e0 [4];
  uint auStack_d0 [8];
  uint auStack_b0 [44];
  
  auStack_e0[0] = (uint)param_2;
  uVar6 = 0;
  uVar16 = 0;
  uVar14 = 0;
  bVar4 = false;
  iVar9 = -1;
  iVar8 = -1;
  puVar10 = auStack_b0;
  puVar12 = auStack_d0 + 3;
  do {
    uVar7 = (uVar16 % 0xc) / 6;
    iVar5 = param_1;
    uVar1 = auStack_e0[0];
    if (uVar14 != 0) {
      iVar5 = param_3;
      uVar1 = param_4;
    }
    if (uVar1 <= uVar16) {
      return 0xffffffff80004005;
    }
    puVar13 = (uint *)((uVar16 / 0xc) * 0xc + iVar5);
    auStack_d0[0] = *puVar13;
    puVar15 = auStack_d0 + uVar7 * 2;
    auStack_d0[1] = (uint)*(ushort *)((int)puVar13 + 6);
    auStack_d0[2] = puVar13[2] << 0x10 | (uint)*(ushort *)(puVar13 + 1);
    auStack_d0[3] = (uint)*(ushort *)(puVar13 + 2);
    if (((param_7 & 1) != 0) &&
       (uVar6 = (*param_8)(1,uVar16 / 6,puVar15,in_stack_00000054), (int)uVar6 < 0)) {
      return uVar6;
    }
    uVar1 = auStack_d0[uVar7 * 2 + 1];
    bVar3 = false;
    puVar11 = puVar10;
    switch(uVar1 >> 0xc & 0xf) {
    case 0:
    case 0xc:
    case 0xf:
      break;
    case 1:
    case 5:
code_r0x82636a6c:
      bVar3 = true;
      break;
    case 2:
    case 6:
code_r0x82636c04:
      bVar3 = true;
      bVar4 = true;
      break;
    case 3:
    case 0xd:
      if ((uint)((1 << (uVar1 >> 2 & 0x1f) & *(uint *)((uVar1 >> 5 & 0x1c) + param_5)) != 0) ==
          (uVar1 >> 10 & 1)) goto code_r0x82636a6c;
      break;
    case 4:
    case 0xe:
      if ((uint)((1 << (uVar1 >> 2 & 0x1f) & *(uint *)((uVar1 >> 5 & 0x1c) + param_5)) != 0) ==
          (uVar1 >> 10 & 1)) goto code_r0x82636c04;
      break;
    case 7:
      uVar7 = *puVar15;
      if ((*(uint *)((uVar7 >> 0xe & 0x7c) + param_6) & 0xff) != 0) {
        iVar8 = iVar8 + 1;
        puVar12 = puVar12 + 1;
        if (3 < iVar8) goto code_r0x82636ac4;
        *puVar12 = 0;
        break;
      }
code_r0x82636b74:
      uVar14 = uVar1 >> 0xb & 1;
      uVar16 = (uVar7 & 0x1fff) * 6;
      goto LAB_82636c10;
    case 8:
      if (-1 < iVar8) {
        uVar7 = *puVar15;
        uVar2 = *puVar12;
        *puVar12 = uVar2 + 1;
        if (uVar2 + 1 < (*(uint *)((uVar7 >> 0xe & 0x7c) + param_6) & 0xff)) goto code_r0x82636b74;
        iVar8 = iVar8 + -1;
        puVar12 = puVar12 + -1;
        break;
      }
code_r0x82636ac4:
      bVar4 = true;
      puVar10 = puVar11;
      goto LAB_82636c10;
    case 9:
      uVar7 = *puVar15;
      if ((((uVar7 & 0x2000) != 0) || ((uVar7 & 0x4000) != 0)) ||
         ((uint)((1 << (uVar1 >> 2 & 0x1f) & *(uint *)((uVar1 >> 5 & 0x1c) + param_5)) != 0) ==
          (uVar1 >> 10 & 1))) {
        iVar9 = iVar9 + 1;
        puVar11 = puVar10 + 1;
        if (3 < iVar9) goto code_r0x82636ac4;
        *puVar10 = uVar14 << 0x10 | uVar16 + 6;
        puVar10 = puVar10 + 1;
        goto code_r0x82636b74;
      }
      break;
    case 10:
      if (iVar9 < 0) goto code_r0x82636ac4;
      uVar14 = puVar10[-1];
      iVar9 = iVar9 + -1;
      uVar16 = uVar14 & 0xffff;
      uVar14 = uVar14 >> 0x10;
      puVar10 = puVar10 + -1;
      goto LAB_82636c10;
    case 0xb:
      uVar7 = *puVar15;
      if (((uVar7 & 0x2000) != 0) ||
         (((uVar7 & 0x4000) == 0 &&
          ((uint)((1 << (uVar1 >> 2 & 0x1f) & *(uint *)((uVar1 >> 5 & 0x1c) + param_5)) != 0) ==
           (uVar1 >> 10 & 1))))) goto code_r0x82636b74;
      break;
    default:
      goto LAB_82636c10;
    }
    uVar16 = uVar16 + 6;
LAB_82636c10:
    if ((bVar3) &&
       (uVar6 = fn_826367A8(puVar15,auStack_e0,param_1,param_2,param_3,param_4,param_7,param_8),
       (int)uVar6 < 0)) {
      return uVar6;
    }
    *puVar13 = auStack_d0[0];
    puVar13[1] = auStack_d0[2] << 0x10 | auStack_d0[1] & 0xffff;
    puVar13[2] = auStack_d0[3] << 0x10 | auStack_d0[2] >> 0x10;
    if (bVar4) {
      return uVar6;
    }
  } while( true );
}

