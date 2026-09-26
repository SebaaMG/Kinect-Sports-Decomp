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
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern int fn_82365BD8();
extern int fn_8248E2C0();
extern int fn_8248F288();


undefined4 *
fn_8248ECD0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [88];
  
  puVar5 = param_3 + -2;
  uVar7 = (int)param_3 - (int)param_2 >> 3;
  iVar1 = (int)puVar5 - (int)param_2 >> 3;
  puVar9 = param_2 + (((int)param_3 - (int)param_2 >> 4) +
                     (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0)) * 2;
  puVar13 = param_2;
  if (0x28 < iVar1) {
    uVar7 = iVar1 + 1;
    uVar7 = ((int)uVar7 >> 3) + (uint)((int)uVar7 < 0 && (uVar7 & 7) != 0);
    fn_8248F288(param_2,param_2 + uVar7 * 2,param_2 + uVar7 * 4);
    fn_8248F288(puVar9 + (uVar7 & 0x1fffffff) * -2,puVar9,puVar9 + uVar7 * 2,param_4);
    fn_8248F288(puVar5 + (uVar7 & 0xfffffff) * -4,puVar5 + (uVar7 & 0x1fffffff) * -2,puVar5,
                    param_4);
    puVar13 = param_2 + uVar7 * 2;
    puVar5 = puVar5 + (uVar7 & 0x1fffffff) * -2;
  }
  fn_8248F288(puVar13,puVar9,puVar5,param_4);
  puVar13 = puVar9 + 2;
  if (param_2 < puVar9) {
    while( true ) {
      puVar5 = puVar9 + -2;
      uVar2 = fn_82365BD8(auStack_90,puVar9);
      uVar3 = fn_82365BD8(auStack_88,puVar5);
      cVar4 = fn_8248E2C0(uVar3,uVar2);
      if (cVar4 != '\0') break;
      uVar2 = fn_82365BD8(auStack_80,puVar5);
      uVar3 = fn_82365BD8(auStack_78,puVar9);
      cVar4 = fn_8248E2C0(uVar3,uVar2);
      if ((cVar4 != '\0') || (puVar9 = puVar5, puVar5 <= param_2)) break;
    }
  }
  do {
    puVar5 = puVar9;
    puVar10 = puVar13;
    if (param_3 <= puVar13) break;
    uVar2 = fn_82365BD8(auStack_78,puVar9);
    uVar3 = fn_82365BD8(auStack_80,puVar13);
    cVar4 = fn_8248E2C0(uVar3,uVar2);
    if (cVar4 != '\0') break;
    uVar2 = fn_82365BD8(auStack_88,puVar13);
    uVar3 = fn_82365BD8(auStack_90,puVar9);
    cVar4 = fn_8248E2C0(uVar3,uVar2);
    if (cVar4 != '\0') break;
    puVar13 = puVar13 + 2;
  } while( true );
LAB_8248eef4:
  puVar11 = puVar9;
  if (puVar13 < param_3) {
    uVar2 = fn_82365BD8(auStack_78,puVar13);
    uVar3 = fn_82365BD8(auStack_80,puVar5);
    cVar4 = fn_8248E2C0(uVar3,uVar2);
    puVar8 = puVar10;
    if (cVar4 == '\0') {
      uVar2 = fn_82365BD8(auStack_88,puVar5);
      uVar3 = fn_82365BD8(auStack_90,puVar13);
      cVar4 = fn_8248E2C0(uVar3,uVar2);
      if (cVar4 != '\0') goto joined_r0x8248ef00;
      puVar8 = puVar10 + 2;
      uVar6 = puVar10[1];
      puVar10[1] = puVar13[1];
      puVar13[1] = uVar6;
      uVar6 = *puVar10;
      *puVar10 = *puVar13;
      *puVar13 = uVar6;
    }
  }
  else {
joined_r0x8248ef00:
    for (; param_2 < puVar11; puVar11 = puVar11 + -2) {
      puVar12 = puVar9 + -2;
      uVar2 = fn_82365BD8(auStack_70,puVar5);
      uVar3 = fn_82365BD8(auStack_68,puVar12);
      cVar4 = fn_8248E2C0(uVar3,uVar2);
      puVar8 = puVar5;
      if (cVar4 == '\0') {
        uVar2 = fn_82365BD8(auStack_60,puVar12);
        uVar3 = fn_82365BD8(auStack_58,puVar5);
        cVar4 = fn_8248E2C0(uVar3,uVar2);
        if (cVar4 != '\0') break;
        puVar8 = puVar5 + -2;
        uVar6 = puVar5[-1];
        puVar5[-1] = puVar9[-1];
        puVar9[-1] = uVar6;
        uVar6 = *puVar8;
        *puVar8 = *puVar12;
        *puVar12 = uVar6;
      }
      puVar9 = puVar12;
      puVar5 = puVar8;
    }
    if (puVar11 == param_2) {
      if (puVar13 == param_3) {
        *param_1 = puVar5;
        param_1[1] = puVar10;
        return param_1;
      }
      if (puVar10 != puVar13) {
        uVar6 = puVar5[1];
        puVar5[1] = puVar10[1];
        puVar10[1] = uVar6;
        uVar6 = *puVar5;
        *puVar5 = *puVar10;
        *puVar10 = uVar6;
      }
      puVar10 = puVar10 + 2;
      uVar6 = puVar5[1];
      puVar5[1] = puVar13[1];
      puVar13[1] = uVar6;
      uVar6 = *puVar5;
      *puVar5 = *puVar13;
      puVar8 = puVar13;
      puVar9 = puVar11;
      puVar5 = puVar5 + 2;
    }
    else {
      if (puVar13 == param_3) {
        puVar9 = puVar11 + -2;
        puVar8 = puVar5 + -2;
        if (puVar9 != puVar8) {
          uVar6 = puVar11[-1];
          puVar11[-1] = puVar5[-1];
          puVar5[-1] = uVar6;
          uVar6 = *puVar9;
          *puVar9 = *puVar8;
          *puVar8 = uVar6;
        }
        puVar11 = puVar10 + -2;
        uVar6 = puVar5[-1];
        puVar5[-1] = puVar10[-1];
        puVar10[-1] = uVar6;
        uVar6 = *puVar8;
        *puVar8 = *puVar11;
        *puVar11 = uVar6;
        puVar5 = puVar8;
        puVar10 = puVar11;
        goto LAB_8248eef4;
      }
      puVar8 = puVar11 + -2;
      uVar6 = puVar13[1];
      puVar13[1] = puVar11[-1];
      puVar11[-1] = uVar6;
      uVar6 = *puVar13;
      *puVar13 = *puVar8;
      puVar9 = puVar8;
    }
    *puVar8 = uVar6;
    puVar8 = puVar10;
  }
  puVar13 = puVar13 + 2;
  puVar10 = puVar8;
  goto LAB_8248eef4;
}

