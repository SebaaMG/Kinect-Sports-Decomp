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
extern unsigned int fStack_3c;
extern int fn_825315E0();
extern int fn_82544918();
extern int fn_82639EA8();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263DE70();
extern int fn_82645110();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B37C;
extern unsigned int lbl_8326B390;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int lbl_8326B474;
extern unsigned int lbl_83296BB8;
extern unsigned int uRam8326af54;
extern unsigned int uRam8326b428;
extern unsigned int uRam8326b470;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82545E20(ulonglong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  double dVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  
  lbl_83296BB8 = 1;
  fn_825315E0(lbl_8320A898);
  *(undefined4 *)(lbl_8320A898 + 0x2ab0) = *(undefined4 *)(lbl_8320A898 + 0x2a9c);
  fn_82645110();
  uRam8326af54 = 1;
  fn_8263A1B8(lbl_8320A898,0,lbl_8326B37C);
  fn_8263A508(lbl_8320A898,lbl_8326B390);
  dVar4 = (double)lbl_821CC160;
  if ((param_1 & 0xffffffff) != 0) {
    uVar2 = uRam8326b428 >> 8 & 0xff;
    fn_8263DE70(dVar4,lbl_8320A898,0,0,param_1,
                      uRam8326b428 >> 8 & 0xffff00 | uRam8326b428 << 0x18 | uVar2,uVar2,0,0);
  }
  uRam8326b470 = 0;
  lbl_8326B474 = 1;
  fn_82544918(1,lbl_8320A898);
  fStack_3c = (float)dVar4;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = lbl_8326B430;
  uStack_40 = lbl_821CA460;
  uStack_44 = lbl_8326B434;
  fn_82639EA8(lbl_8320A898,&uStack_50);
  iVar1 = lbl_8320A898;
  *(uint *)(lbl_8320A898 + 0x2934) = *(uint *)(lbl_8320A898 + 0x2934) & 0xffffff8f | 0x60;
  uVar3 = *(ulonglong *)(iVar1 + 0x10);
  *(ulonglong *)(iVar1 + 0x10) = uVar3 | 0x800;
  *(ulonglong *)(iVar1 + 0x10) = uVar3 | 0x20800;
  return;
}

