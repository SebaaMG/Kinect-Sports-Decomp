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
extern unsigned int *auStack_34;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_6c;
extern unsigned int *auStack_70;
extern int fn_82230218();
extern int fn_8260D428();
extern int fn_8265CA20();
extern int fn_828A2348();
extern int fn_828A61C8();
extern int fn_828A6F20();
extern int fn_828C2018();
extern int fn_828C2110();
extern int fn_828C2E18();
extern int fn_828C2E90();
extern int fn_828C32C0();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


int fn_828C35A0(int param_1,int param_2)

{
  uint uVar2;
  int iVar3;
  longlong lVar1;
  undefined4 *puVar4;
  undefined1 auStack_70 [4];
  uint auStack_6c [3];
  undefined1 auStack_60 [4];
  undefined4 *puStack_5c;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_34 [52];
  
  uVar2 = fn_828C2110();
  if (uVar2 != *(uint *)(param_1 + 4)) {
    puVar4 = (undefined4 *)(uVar2 + 0xc);
    if (0xf < *(uint *)(uVar2 + 0x20)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    iVar3 = fn_8260D428(param_2,0,*(undefined4 *)(param_2 + 0x10),puVar4,
                         *(undefined4 *)(uVar2 + 0x1c));
    if (-1 < iVar3) goto switchD_82dbea0c_default;
  }
  fn_828A2348(auStack_60,auStack_70,auStack_70);
  uStack_40 = 0;
  uStack_3c = 0xf;
  auStack_50[0] = 0;
  fn_82230218(auStack_50,param_2,0,0xffffffffffffffff);
  fn_828C2E18(auStack_34,auStack_60);
  lVar1 = fn_828C2018(param_1);
  if (lVar1 + 0xc != 0) {
    fn_828C2E90(lVar1 + 0xc,auStack_50);
  }
  fn_828C32C0(auStack_6c,param_1,uVar2,lVar1);
  fn_828A6F20(auStack_50);
  fn_828A61C8(auStack_6c,auStack_60,*puStack_5c);
  fn_8265CA20(puStack_5c);
  uVar2 = auStack_6c[0];
switchD_82dbea0c_default:
  return uVar2 + 0x28;
}

