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
extern unsigned int *auStack_90;
extern unsigned int *auStack_cc;
extern int fn_8275E130();
extern int fn_8275E498();
extern int fn_8275FD58();
extern int fn_82760648();
extern unsigned int iStack_a0;
extern unsigned int iStack_d8;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


ulonglong fn_82762080(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong lVar6;
  byte bStack_e1;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  byte abStack_d1 [5];
  undefined1 auStack_cc [3];
  byte bStack_c9;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  byte abStack_b0 [16];
  int iStack_a0;
  undefined1 auStack_90 [20];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char cStack_70;
  
  piVar2 = (int *)(param_1 + 0x10);
  uStack_dc = 0;
  uStack_e0 = 0;
  (**(code **)(*piVar2 + 0x44))(piVar2,&uStack_dc,&uStack_e0);
  uVar4 = 0x1505;
  lVar6 = 4;
  iVar3 = 4;
  do {
    uVar4 = (ulonglong)*(byte *)((int)&uStack_e0 + iVar3 + 3) ^ uVar4 * 0x21;
    lVar6 = lVar6 + -1;
    iVar3 = iVar3 + -1;
  } while (lVar6 != 0);
  lVar6 = 4;
  iVar3 = 4;
  do {
    uVar4 = (ulonglong)(&bStack_e1)[iVar3] ^ uVar4 * 0x21;
    lVar6 = lVar6 + -1;
    iVar3 = iVar3 + -1;
  } while (lVar6 != 0);
  fn_82760648(auStack_90,piVar2);
  while (cStack_70 != '\x01') {
    uStack_c8 = uStack_7c;
    lVar6 = 0xc;
    uStack_c4 = uStack_78;
    uStack_c0 = uStack_74;
    iVar3 = 0xc;
    do {
      uVar4 = (ulonglong)(&bStack_c9)[iVar3] ^ uVar4 * 0x21;
      lVar6 = lVar6 + -1;
      iVar3 = iVar3 + -1;
    } while (lVar6 != 0);
    fn_8275FD58(&iStack_d8,auStack_90);
    fn_8275E130(&iStack_d8,abStack_d1 + 1,auStack_cc);
    lVar6 = 8;
    iVar3 = 8;
    do {
      uVar4 = (ulonglong)abStack_d1[iVar3] ^ uVar4 * 0x21;
      lVar6 = lVar6 + -1;
      iVar3 = iVar3 + -1;
    } while (lVar6 != 0);
    while( true ) {
      if ((*(byte *)(iStack_d8 + 0x20) == 1) ||
         (bVar1 = false, (*(byte *)(iStack_d8 + 0x20) & 0x80) == 0)) {
        bVar1 = true;
      }
      if (bVar1) break;
      fn_8275E498(&iStack_d8,abStack_b0);
      iVar3 = iStack_a0 * 4;
      if (iVar3 != 0) {
        pbVar5 = abStack_b0 + iVar3;
        do {
          pbVar5 = pbVar5 + -1;
          uVar4 = uVar4 * 0x21 ^ (ulonglong)*pbVar5;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  return uVar4;
}

