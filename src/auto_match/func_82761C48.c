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


ulonglong fn_82761C48(int *param_1)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
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
  
  uStack_dc = 0;
  uStack_e0 = 0;
  (**(code **)(*param_1 + 0x44))(param_1,&uStack_dc,&uStack_e0);
  uVar3 = 0x1505;
  lVar5 = 4;
  iVar2 = 4;
  do {
    uVar3 = (ulonglong)*(byte *)((int)&uStack_e0 + iVar2 + 3) ^ uVar3 * 0x21;
    lVar5 = lVar5 + -1;
    iVar2 = iVar2 + -1;
  } while (lVar5 != 0);
  lVar5 = 4;
  iVar2 = 4;
  do {
    uVar3 = (ulonglong)(&bStack_e1)[iVar2] ^ uVar3 * 0x21;
    lVar5 = lVar5 + -1;
    iVar2 = iVar2 + -1;
  } while (lVar5 != 0);
  fn_82760648(auStack_90,param_1);
  while (cStack_70 != '\x01') {
    uStack_c8 = uStack_7c;
    lVar5 = 0xc;
    uStack_c4 = uStack_78;
    uStack_c0 = uStack_74;
    iVar2 = 0xc;
    do {
      uVar3 = (ulonglong)(&bStack_c9)[iVar2] ^ uVar3 * 0x21;
      lVar5 = lVar5 + -1;
      iVar2 = iVar2 + -1;
    } while (lVar5 != 0);
    fn_8275FD58(&iStack_d8,auStack_90);
    fn_8275E130(&iStack_d8,abStack_d1 + 1,auStack_cc);
    lVar5 = 8;
    iVar2 = 8;
    do {
      uVar3 = (ulonglong)abStack_d1[iVar2] ^ uVar3 * 0x21;
      lVar5 = lVar5 + -1;
      iVar2 = iVar2 + -1;
    } while (lVar5 != 0);
    while( true ) {
      if ((*(byte *)(iStack_d8 + 0x20) == 1) ||
         (bVar1 = false, (*(byte *)(iStack_d8 + 0x20) & 0x80) == 0)) {
        bVar1 = true;
      }
      if (bVar1) break;
      fn_8275E498(&iStack_d8,abStack_b0);
      iVar2 = iStack_a0 * 4;
      if (iVar2 != 0) {
        pbVar4 = abStack_b0 + iVar2;
        do {
          pbVar4 = pbVar4 + -1;
          uVar3 = uVar3 * 0x21 ^ (ulonglong)*pbVar4;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  return uVar3;
}

