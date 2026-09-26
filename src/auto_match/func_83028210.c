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
extern int fn_83007F58();
extern int fn_830195D8();
extern int fn_8301E178();
extern int fn_83028018();
extern unsigned int lbl_82002C5C;


undefined8 fn_83028210(int param_1,int param_2)

{
  undefined1 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  float *pfVar14;
  ushort *puVar15;
  bool bVar16;
  double dVar17;
  double dVar18;
  
  bVar16 = *(char *)(param_2 + 4) != '\0';
  pfVar14 = (float *)(param_2 + 5);
  *(byte *)(param_1 + 0x61) = bVar16 << 7 | *(byte *)(param_1 + 0x61) & 0x7f;
  if (bVar16) {
    dVar17 = (double)fn_8301E178((double)*pfVar14);
    dVar18 = (double)lbl_82002C5C;
    *(float *)(param_1 + 0x10) = (float)(dVar17 * dVar18);
    dVar17 = (double)fn_8301E178((double)*(float *)(param_2 + 9));
    *(float *)(param_1 + 0x14) = (float)(dVar17 * dVar18);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xd);
    pfVar14 = (float *)(param_2 + 0x15);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x11);
  }
  uVar9 = 2;
  uVar12 = 0;
  *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)pfVar14;
  *(undefined1 *)(param_1 + 0x5d) = *(undefined1 *)((int)pfVar14 + 1);
  *(undefined1 *)(param_1 + 0x5e) = *(undefined1 *)((int)pfVar14 + 2);
  *(undefined1 *)(param_1 + 0x5f) = *(undefined1 *)((int)pfVar14 + 3);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(pfVar14 + 1);
  bVar2 = *(byte *)((int)pfVar14 + 5);
  puVar15 = (ushort *)((int)pfVar14 + 6);
  if (bVar2 != 0) {
    iVar13 = param_1 + 0x20;
    do {
      uVar1 = *(undefined1 *)puVar15;
      uVar3 = *(ushort *)((int)puVar15 + 1);
      puVar15 = (ushort *)((int)puVar15 + 3);
      uVar9 = fn_830195D8(iVar13,puVar15,(uint)uVar3,uVar1);
      if ((int)uVar9 != 1) break;
      uVar12 = uVar12 + 1;
      iVar13 = iVar13 + 0xc;
      puVar15 = puVar15 + (uint)uVar3 * 6;
    } while (uVar12 < bVar2);
  }
  uVar3 = *puVar15;
  puVar15 = puVar15 + 1;
  uVar12 = 0;
  if (uVar3 != 0) {
    do {
      uVar5 = *(undefined4 *)((int)puVar15 + 5);
      uVar9 = 1;
      uVar6 = *(undefined4 *)((int)puVar15 + 9);
      uVar7 = *(undefined4 *)((int)puVar15 + 0xd);
      uVar1 = *(undefined1 *)((int)puVar15 + 0x11);
      uVar11 = (uint)puVar15[9];
      puVar15 = puVar15 + 10;
      fn_83028018(param_1,uVar6,uVar7);
      uVar8 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 100) >> 5;
      if (((uVar8 < *(uint *)(param_1 + 0x6c)) ||
          (cVar10 = fn_83007F58((int *)(param_1 + 100),2), cVar10 != '\0')) &&
         (uVar8 < *(uint *)(param_1 + 0x6c))) {
        iVar13 = *(int *)(param_1 + 0x68);
        if (iVar13 != 0) {
          *(undefined4 *)(iVar13 + 0x14) = 0;
          *(undefined4 *)(iVar13 + 0x18) = 0;
          *(undefined4 *)(iVar13 + 0x1c) = 0;
        }
        puVar4 = *(undefined4 **)(param_1 + 0x68);
        *(undefined4 **)(param_1 + 0x68) = puVar4 + 8;
        if (puVar4 == (undefined4 *)0x0) goto LAB_83028428;
        puVar4[3] = uVar6;
        puVar4[4] = uVar7;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = uVar5;
        if ((puVar15 != (ushort *)0x0) && (uVar11 != 0)) {
          uVar9 = fn_830195D8(puVar4 + 5,puVar15,uVar11,uVar1);
        }
      }
      else {
LAB_83028428:
        uVar9 = 2;
      }
      if ((int)uVar9 != 1) {
        return uVar9;
      }
      uVar12 = uVar12 + 1;
      puVar15 = puVar15 + uVar11 * 6;
    } while (uVar12 < uVar3);
  }
  return uVar9;
}

