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
extern int fn_82A1E108();
extern int fn_82BE1A20();
extern int fn_82BE3A18();
extern int fn_82BE5240();
extern int fn_82BEA1F8();
extern int fn_82BEA230();
extern int fn_82BEB678();
extern unsigned int lbl_8322B130;
extern unsigned int lbl_8322B1C8;


undefined8 fn_82BE2D60(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar5;
  longlong lVar4;
  ulonglong uVar6;
  int iVar7;
  
  fn_82BEA1F8(0xffffffff8322b13c,0xffffffff820e8dc8);
  iVar1 = lbl_8322B130;
  if (lbl_8322B130 == 0) {
    fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8dc8);
    uVar2 = 0;
  }
  else {
    iVar7 = lbl_8322B130 + 0xe0;
    lVar3 = fn_82BEB678(iVar7);
    uVar6 = *(ulonglong *)(iVar1 + 0x188);
    do {
      if ((((lbl_8322B1C8 == 0) || (iVar5 = fn_82BE3A18(0,0), iVar5 != 0)) ||
          (*(int *)(iVar1 + 0x10) != 4)) || ((*(ushort *)(iVar1 + 0x11c) & 0x800) != 0))
      goto LAB_82be2e44;
      fn_82A1E108(0x14);
      lVar4 = fn_82BEB678(iVar7);
    } while (((uVar6 == 0) || ((ulonglong)(lVar4 - lVar3) <= uVar6)) &&
            ((ulonglong)(lVar4 - lVar3) < 0x2711));
    fn_82BE5240(iVar1,0xd6,0xffffffff820e8dac);
LAB_82be2e44:
    fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8dc8);
    uVar2 = fn_82BE1A20();
  }
  return uVar2;
}

