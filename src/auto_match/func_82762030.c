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
extern unsigned int *auStack_70;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_ac;
extern unsigned int *auStack_b0;
extern unsigned int fStack_4c;
extern unsigned int fStack_b8;
extern int fn_8275E9C0();
extern int fn_8275EB28();
extern int fn_8275EB90();
extern int fn_8275FE18();
extern int fn_8275FFC0();
extern unsigned int iStack_20;
extern unsigned int iStack_60;
extern unsigned int iStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


ulonglong fn_82762030(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong lVar6;
  byte bStack_c1;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  uint uStack_88;
  uint uStack_84;
  undefined1 auStack_70 [4];
  uint uStack_6c;
  uint uStack_68;
  int iStack_64;
  int iStack_60;
  float fStack_4c;
  longlong lStack_48;
  longlong lStack_40;
  byte abStack_30 [16];
  int iStack_20;
  
  piVar2 = (int *)(param_1 + 0x10);
  uStack_c0 = 0;
  uStack_bc = 0;
  (**(code **)(*piVar2 + 0x44))(piVar2,&uStack_c0,&uStack_bc);
  uVar4 = 0x1505;
  lVar6 = 4;
  iVar3 = 4;
  do {
    uVar4 = (ulonglong)(&bStack_c1)[iVar3] ^ uVar4 * 0x21;
    lVar6 = lVar6 + -1;
    iVar3 = iVar3 + -1;
  } while (lVar6 != 0);
  lVar6 = 4;
  iVar3 = 4;
  do {
    uVar4 = (ulonglong)*(byte *)((int)&uStack_c0 + iVar3 + 3) ^ uVar4 * 0x21;
    lVar6 = lVar6 + -1;
    iVar3 = iVar3 + -1;
  } while (lVar6 != 0);
  fn_8275EB28(auStack_a0,piVar2);
  while (uVar1 = uStack_88, uStack_88 < uStack_84) {
    fn_8275FFC0(auStack_a0,auStack_b0,auStack_ac,auStack_a8);
    lVar6 = 0xc;
    iVar3 = 0xc;
    do {
      uVar4 = (ulonglong)(byte)auStack_b0[iVar3 + -1] ^ uVar4 * 0x21;
      lVar6 = lVar6 + -1;
      iVar3 = iVar3 + -1;
    } while (lVar6 != 0);
    fn_8275FE18(auStack_70,auStack_a0);
    lStack_48 = (longlong)iStack_64;
    lVar6 = 8;
    lStack_40 = (longlong)iStack_60;
    fStack_b8 = (float)lStack_48 * fStack_4c;
    uStack_b4 = (float)lStack_40 * fStack_4c;
    iVar3 = 8;
    do {
      uVar4 = (ulonglong)*(byte *)((int)&uStack_bc + iVar3 + 3) ^ uVar4 * 0x21;
      lVar6 = lVar6 + -1;
      iVar3 = iVar3 + -1;
    } while (lVar6 != 0);
    while (uStack_6c < uStack_68) {
      fn_8275E9C0(auStack_70,abStack_30);
      iVar3 = iStack_20 * 4;
      if (iVar3 != 0) {
        pbVar5 = abStack_30 + iVar3;
        do {
          pbVar5 = pbVar5 + -1;
          uVar4 = uVar4 * 0x21 ^ (ulonglong)*pbVar5;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    uStack_88 = uVar1 + 1;
    fn_8275EB90(auStack_a0);
  }
  return uVar4;
}

