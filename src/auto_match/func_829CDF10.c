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
extern int fn_8262FDE8();
extern int fn_82631C78();
extern int fn_82645708();
extern int fn_826458A0();
extern int fn_82647588();
extern int fn_8264CB18();
extern int fn_829C9438();
extern int fn_829F5000();
extern unsigned int lbl_83215008;
extern unsigned int lbl_8321501C;
extern unsigned int lbl_83215054;
extern unsigned int lbl_83217344;
extern unsigned int lbl_83217368;
extern unsigned int lbl_8321740C;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_a0;


void fn_829CDF10(void)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  ulonglong uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  iVar1 = lbl_8321740C * 0x28;
  puVar3 = &lbl_83217344 + iVar1;
  *(undefined4 *)(&lbl_83217368 + iVar1) = 0;
  sync(0);
  uStack_a0 = (ulonglong)lbl_8321501C;
  puStack_98 = puVar3;
  fn_829F5000(8,&uStack_a0,0xc);
  fn_8262FDE8(lbl_8321501C);
  fn_82647588(lbl_8321501C,1);
  fn_826458A0(lbl_8321501C,1,0xffffffff829cdc78,lbl_8321740C);
  fn_82631C78(lbl_8321501C,0,0x10,0x70);
  uStack_60 = 0xffffffffffffffff;
  uStack_58 = 0xffffffffffffffff;
  uStack_50 = 0xffffffffffffffff;
  uStack_48 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  uStack_90 = 0xffffffffffffffff;
  uStack_88 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffffffffff;
  uStack_78 = 0xffffffffffffffff;
  uStack_70 = 0xffffffffffffffff;
  fn_8264CB18(lbl_8321501C,&uStack_60,&uStack_90,0x60000000,puVar3);
  if (lbl_83215008 != 0) {
    fn_8264CB18(lbl_8321501C,&uStack_60,&uStack_90,0x60000000,iVar1 + -0x7cde8cb0);
    iVar1 = iVar1 + -0x7cde8cac;
    lVar2 = 3;
    do {
      fn_8264CB18(lbl_8321501C,&uStack_60,&uStack_90,0x60000000,iVar1);
      lVar2 = lVar2 + -1;
      iVar1 = iVar1 + 4;
    } while (lVar2 != 0);
  }
  fn_829C9438(puVar3);
  lbl_8321740C = (lbl_8321740C + 1) % 5;
  fn_82631C78(lbl_8321501C,0,0,0);
  fn_826458A0(lbl_8321501C,0,0xffffffff829c93e0,0);
  lbl_83215054 = fn_82645708(lbl_8321501C);
  uStack_a0 = (ulonglong)lbl_8321501C;
  puStack_98 = (undefined *)lbl_8321740C;
  fn_829F5000(9,&uStack_a0,0xc);
  return;
}

