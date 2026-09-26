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
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_82637398();
extern int fn_82637840();
extern int fn_82639DB0();
extern int fn_82639EA8();
extern int fn_8263DF30();
extern int fn_82643A48();
extern int fn_82643B08();
extern int fn_82645110();
extern int fn_82645D88();
extern int fn_8264EFE0();
extern int fn_82F68CC0();
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_82646018(double param_1,int param_2,uint param_3,ulonglong param_4,int param_5,
                  ulonglong param_6,undefined8 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  int in_r0;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  int *piVar11;
  byte bVar12;
  byte bVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  *(int *)(param_2 + 0x327c) = (int)param_4;
  uVar5 = 0;
  uVar3 = 0;
  if ((param_4 & 0xffffffff) != 0) {
    puVar6 = (uint *)(param_2 + 0x336c);
    puVar10 = (uint *)(param_5 + -0xc);
    puVar7 = (uint *)(param_2 + 0x327c);
    uVar14 = param_4;
    do {
      if (uVar5 <= puVar10[5]) {
        uVar5 = puVar10[5];
      }
      if (uVar3 <= puVar10[6]) {
        uVar3 = puVar10[6];
      }
      puVar7[1] = puVar10[3];
      puVar7[2] = puVar10[4];
      puVar7[3] = puVar10[5];
      puVar7 = puVar7 + 4;
      *puVar7 = puVar10[6];
      puVar6[1] = puVar10[3] & 0xffffffe0;
      puVar10 = puVar10 + 4;
      puVar6 = puVar6 + 2;
      *puVar6 = *puVar10 & 0xffffffe0;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if ((param_3 & 2) != 0) {
    fn_82645D88(param_2,param_3 >> 2 & 1);
  }
  *(uint *)(param_2 + 0x3434) = param_3;
  *(uint *)(param_2 + 0x342c) = uVar5;
  *(uint *)(param_2 + 0x3430) = uVar3;
  if (((param_3 & 1) == 0) && ((*(byte *)(param_2 + 0x2abf) & 0x20) == 0)) {
    uStack_78 = 0;
    uStack_74 = 0;
    if ((param_4 & 0xffffffff) != 0) {
      piVar8 = (int *)(param_2 + 0x328c);
      piVar11 = (int *)(param_2 + 0x3374);
      do {
        if (uStack_78 <= (uint)(piVar8[-1] - piVar11[-1])) {
          uStack_78 = piVar8[-1] - piVar11[-1];
        }
        if (uStack_74 <= (uint)(*piVar8 - *piVar11)) {
          uStack_74 = *piVar8 - *piVar11;
        }
        piVar11 = piVar11 + 2;
        piVar8 = piVar8 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    uStack_80 = 0;
    uStack_7c = 0;
    fn_82F68CC0(&fStack_60,param_2 + 0x3218,0x1c);
    uStack_70 = *(undefined4 *)(param_2 + 0x3234);
    uStack_6c = *(undefined4 *)(param_2 + 0x3238);
    uStack_68 = *(undefined4 *)(param_2 + 0x323c);
    uStack_64 = *(undefined4 *)(param_2 + 0x3240);
    fn_82639EA8(param_2,0xffffffff821cc030);
    fn_82639DB0(param_2,0xffffffff821cc048);
    fn_8263DF30(param_1,param_2,0x3f,&uStack_80,param_6);
    fn_82637840((double)fStack_60,(double)fStack_5c,(double)fStack_58,(double)fStack_54,
                      (double)fStack_50,(double)fStack_4c,param_2);
    fn_82639DB0(param_2,&uStack_70);
  }
  if ((param_6 & 0xffffffff) == 0) {
    *(undefined8 *)(param_2 + 0x3440) = 0;
    *(undefined8 *)(param_2 + 0x3448) = 0;
  }
  else {
    puVar2 = (undefined4 *)(in_r0 + (int)param_6 & 0xfffffff0);
    uVar15 = puVar2[1];
    uVar16 = puVar2[2];
    uVar17 = puVar2[3];
    puVar1 = (undefined4 *)(param_2 + 0x3440U & 0xfffffff0);
    *puVar1 = *puVar2;
    puVar1[1] = uVar15;
    puVar1[2] = uVar16;
    puVar1[3] = uVar17;
  }
  iVar4 = *(int *)(param_2 + 0x3148);
  *(float *)(param_2 + 0x3450) = (float)param_1;
  *(undefined4 *)(param_2 + 0x3454) = param_8;
  iVar9 = iVar4;
  if (iVar4 == 0) {
    iVar9 = *(int *)(param_2 + 0x3158);
  }
  bVar12 = *(byte *)(param_2 + 0x2abc);
  *(int *)(param_2 + 0x3264) = iVar9;
  *(int *)(param_2 + 0x3268) = iVar4;
  *(undefined4 *)(param_2 + 0x326c) = *(undefined4 *)(param_2 + 0x314c);
  *(undefined4 *)(param_2 + 0x3270) = *(undefined4 *)(param_2 + 0x3150);
  *(undefined4 *)(param_2 + 0x3274) = *(undefined4 *)(param_2 + 0x3154);
  *(undefined4 *)(param_2 + 0x3278) = *(undefined4 *)(param_2 + 0x3158);
  *(undefined4 *)(param_2 + 0x3260) = 2;
  *(byte *)(param_2 + 0x2abc) = bVar12 | 0x20;
  *(undefined4 *)(param_2 + 0x325c) = 0;
  if (((bVar12 & 8) == 0) && ((bVar12 & 4) == 0)) {
    if (*(char *)(param_2 + 0x304b) == '\0') {
      if ((bVar12 & 0x10) == 0) {
        bVar12 = *(byte *)(param_2 + 0x2abc) >> 5 & 1;
      }
      else {
        bVar12 = 1;
      }
      bVar13 = 1;
      if (bVar12 != 0) goto LAB_826462c8;
    }
  }
  bVar13 = 0;
LAB_826462c8:
  *(undefined4 *)(param_2 + 0x3258) = 0;
  *(undefined4 *)(param_2 + 0x3254) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x2ab4) = 0;
  *(undefined4 *)(param_2 + 0x2ab8) = 0;
  *(byte *)(param_2 + 0x2abc) = bVar13 | *(byte *)(param_2 + 0x2abc) & 0xfe;
  fn_8264EFE0(param_2);
  puVar2 = *(undefined4 **)(param_2 + 0x350c);
  if (*(undefined4 **)(param_2 + 0x3510) < puVar2 + 1) {
    puVar2 = (undefined4 *)fn_82643B08(param_2 + 0x3500);
  }
  *puVar2 = 0x86000000;
  *(undefined4 **)(param_2 + 0x350c) = puVar2 + 1;
  uVar3 = *(uint *)(param_2 + 0x30);
  if (*(uint *)(param_2 + 0x38) < uVar3) {
    uVar3 = fn_82645110(param_2);
  }
  *(undefined4 *)(uVar3 + 4) = 0xc0004600;
  *(undefined4 *)(uVar3 + 8) = 0x19;
  *(undefined4 **)(param_2 + 0x30) = (undefined4 *)(uVar3 + 8);
  iVar4 = fn_82643A48(param_2,0x46);
  if (iVar4 != 0) {
    *(int *)(param_2 + 0x30) = iVar4;
  }
  fn_82639EA8(param_2,0xffffffff821cc030);
  fn_82637398(param_2,1);
  return;
}

