extern unsigned int *puRam83264404;
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
extern int fn_82A1E658();
extern int fn_82FA4EB8();
extern int fn_82FA5190();
extern int fn_82FA57F0();
extern int fn_82FB38A8();
extern int fn_82FEC9F0();
extern int fn_82FED190();
extern int fn_82FEF398();
extern int fn_8300E0C8();
extern int fn_83013538();
extern int fn_8301D0D8();
extern int fn_8301EC08();
extern int fn_83021E70();
extern int fn_830224E8();
extern int fn_83023908();
extern int fn_83023C30();
extern int iRam83264408;
extern unsigned int lbl_8217D040;
extern unsigned int lbl_831BC770;
extern unsigned int lbl_832643AC;
extern unsigned int *lbl_832643B0;
extern unsigned int lbl_832643D4;
extern unsigned int lbl_832643F0;
extern unsigned int lbl_832643F4;
extern unsigned int lbl_832643F8;
extern unsigned int lbl_83264400;
extern unsigned int lbl_83264428;
extern unsigned int uRam00000000;
extern unsigned int uRam832643fc;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82FED5B0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;

  fn_82FED190();
  fn_82FEC9F0();
  puVar6 = lbl_83264400;
  while (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar6;
    puVar3 = puVar1;
    if (puVar6 == lbl_83264400) {
      lbl_83264400 = puVar1;
      puVar3 = (undefined4 *)uRam00000000;
    }
    uRam00000000 = puVar3;
    if (puVar6 == puRam83264404) {
      puRam83264404 = (undefined4 *)0x0;
    }
    iRam83264408 = iRam83264408 + -1;
    fn_8301D0D8(puVar6 + 2);
    fn_83021E70(puVar6 + 0x6b);
    puVar6[0x68] = &lbl_8217D040;
    fn_82FA5190(lbl_831BC770,puVar6);
    puVar6 = puVar1;
  }
  lbl_83264400 = (undefined4 *)0x0;
  puRam83264404 = (undefined4 *)0x0;
  iRam83264408 = 0;
  if (lbl_832643F4 != 0) {
    lbl_832643F8 = lbl_832643F4;
    fn_82FA5190(lbl_831BC770);
    lbl_832643F4 = 0;
    lbl_832643F8 = 0;
    uRam832643fc = 0;
  }
  fn_82FEF398(0xffffffff831bc794);
  fn_82FB38A8(0xffffffff831bc774);
  if (lbl_83264428 != 0) {
    fn_82FA5190(lbl_831BC770);
    lbl_83264428 = 0;
  }
  if (lbl_832643D4 != 0) {
    fn_83023C30();
    fn_830224E8((ulonglong)lbl_832643D4 + 0x80);
    fn_82FA5190(lbl_831BC770,lbl_832643D4);
    lbl_832643D4 = 0;
  }
  iVar7 = 0;
  lVar5 = 0x18;
  puVar6 = (undefined4 *)0x8326442c;
  do {
    uVar2 = puVar6[3];
    uVar8 = 0;
    if (uVar2 != 0) {
      do {
        fn_82FA5190(lbl_831BC770,*(undefined4 *)((iVar7 + uVar8) * 4 + -0x7cd9bbc4));
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar2);
    }
    lVar5 = lVar5 + -1;
    puVar6 = puVar6 + 3;
    *puVar6 = 0;
    iVar7 = iVar7 + 3;
  } while (lVar5 != 0);
  fn_83013538();
  fn_8301EC08();
  if (lbl_832643B0 != (undefined4 *)0x0) {
    fn_83023908();
    puVar6 = lbl_832643B0;
    iVar7 = lbl_831BC770;
    if (lbl_832643B0 != (undefined4 *)0x0) {
      (**(code **)*lbl_832643B0)(lbl_832643B0,0);
      fn_82FA5190(iVar7,puVar6);
    }
    lbl_832643B0 = (undefined4 *)0x0;
  }
  if (lbl_832643F0 != 0) {
    fn_8300E0C8();
    lbl_832643F0 = 0;
  }
  if (lbl_832643AC != 0) {
    fn_82A1E658();
    lbl_832643AC = 0;
  }
  cVar4 = fn_82FA4EB8();
  if ((cVar4 != '\0') && (lbl_831BC770 != -1)) {
    fn_82FA57F0();
    lbl_831BC770 = -1;
  }
  return 1;
}
