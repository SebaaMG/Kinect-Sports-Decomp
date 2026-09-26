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
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5478();
extern int fn_82BE54C0();
extern int fn_82BE56B0();
extern int fn_82BE56C0();
extern int fn_82BE74D0();
extern int fn_82BE7E28();
extern int fn_82BE8020();
extern unsigned int lbl_83175240;
extern unsigned int lbl_83175244;
extern unsigned int *lbl_8322B1DC;
extern unsigned int lbl_8322B1E4;
extern unsigned int lbl_8322B1E8;
extern U64 storeWordConditionalIndexed();


undefined4 * fn_82BE8458(int param_1)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char in_RESERVE;
  byte bVar6;
  
  if (lbl_8322B1DC != (undefined4 *)0x0) {
    return lbl_8322B1DC;
  }
  if ((*(ushort *)(param_1 + 0x14) & 0x20) == 0) {
    if ((*(ushort *)(param_1 + 0x14) & 0x40) == 0) {
      lbl_83175244 = 0x2000;
      lbl_83175240 = 0x2000;
    }
    else {
      lbl_83175244 = 0x1000;
      lbl_83175240 = 0x1000;
    }
  }
  else {
    lbl_83175240 = 0x4000;
    lbl_83175244 = 0x4000;
  }
  uVar2 = fn_82BE56B0(200);
  bVar1 = (uVar2 & 0xffffffff) == 0;
  bVar6 = bVar1 << 1;
  if (bVar1) {
    lbl_8322B1DC = (undefined4 *)0x0;
  }
  else {
    lbl_8322B1DC = (undefined4 *)fn_82BE74D0(uVar2,lbl_83175240);
  }
  if (lbl_8322B1DC == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (lbl_8322B1DC[1] == 0) {
    do {
      if (in_RESERVE != '\0') {
        lbl_8322B1E8 = storeWordConditionalIndexed((ulonglong)lbl_8322B1E8 + 1,0,0xffffffff8322b1e8)
        ;
        bVar6 = 2;
      }
    } while (!(bool)(bVar6 >> 1 & 1));
    lbl_8322B1E4 = 0;
    iVar3 = fn_82BE7E28();
    if (iVar3 != 0) {
      iVar4 = fn_82BE8020(lbl_8322B1DC,iVar3);
      if (iVar4 == 0) {
        return lbl_8322B1DC;
      }
      fn_82BE5340(iVar3);
      while (*(int *)(iVar3 + 8) != 0) {
        puVar5 = (undefined4 *)fn_82BE5378(iVar3);
        if (puVar5 != (undefined4 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
        fn_82BE5350(iVar3);
      }
      fn_82BE5478();
      fn_82BE54C0(iVar3);
      fn_82BE56C0(iVar3);
    }
    if (lbl_8322B1DC == (undefined4 *)0x0) {
      lbl_8322B1DC = (undefined4 *)0x0;
      return (undefined4 *)0x0;
    }
  }
  (**(code **)*lbl_8322B1DC)(lbl_8322B1DC,1);
  lbl_8322B1DC = (undefined4 *)0x0;
  return (undefined4 *)0x0;
}

