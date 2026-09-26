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
extern unsigned int *auStack_80;
extern int fn_82593FC8();
extern int fn_82594108();
extern int fn_825B6D50();
extern int fn_8260BA88();
extern int fn_82A1E850();
extern unsigned int lbl_8218EFD4;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8326B4BC;
extern unsigned int lbl_8326B4C8;
extern unsigned int uStack_3c;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82557FA8(void)

{
  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  longlong lVar4;
  uint *puVar5;
  int *piVar6;
  double dVar7;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float afStack_58 [7];
  undefined4 uStack_3c;
  
  puVar5 = (uint *)&lbl_8218EFD4;
  lbl_8326B4BC = 0;
  lVar4 = 0;
  do {
    iVar2 = fn_82A1E850(lVar4,auStack_70);
    if (iVar2 == 0) {
      lbl_8326B4BC = *puVar5 | lbl_8326B4BC;
    }
    puVar5 = puVar5 + 1;
    lVar4 = lVar4 + 1;
  } while ((int)puVar5 < -0x7de7101c);
  fn_82593FC8();
  piVar6 = &lbl_8326B4C8;
  dVar7 = (double)lbl_821CC160;
  do {
    puVar1 = (undefined4 *)*piVar6;
    iVar2 = fn_82A1E850(*puVar1,auStack_80);
    if (iVar2 == 0) {
      fn_825B6D50(puVar1,auStack_80);
    }
    else if (iVar2 == 0x48f) {
      afStack_58[1] = 0.0;
      uStack_60 = 0;
      pfVar3 = afStack_58;
      uStack_5c = 0;
      afStack_58[0] = 0.0;
      lVar4 = 2;
      do {
        pfVar3[3] = (float)dVar7;
        pfVar3 = pfVar3 + 2;
        *pfVar3 = (float)dVar7;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      uStack_3c = 0;
      fn_8260BA88(puVar1 + 0xd,&uStack_60);
    }
    fn_82594108(*(undefined4 *)*piVar6);
    piVar6 = piVar6 + 1;
  } while ((int)piVar6 < -0x7cd94b28);
  return;
}

