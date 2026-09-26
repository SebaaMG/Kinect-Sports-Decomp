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
extern unsigned int *auStack_140;
extern unsigned int *auStack_250;
extern unsigned int *auStack_270;
extern unsigned int *auStack_2b0;
extern unsigned int *auStack_2b8;
extern int fn_822315A0();
extern int fn_82526C70();
extern int fn_82558B08();
extern int fn_8256CA60();
extern int fn_8256D3A8();
extern int fn_8256D798();
extern int fn_8265BF48();
extern int fn_827D5070();
extern int fn_827D50B8();
extern int fn_827D9EA8();
extern int fn_827D9FB0();
extern int fn_827DB6D0();
extern int fn_827DBA00();
extern int fn_827DBD80();
extern int fn_827DC520();
extern int fn_827DC748();
extern int fn_82811400();
extern unsigned int iStack_2c4;
extern unsigned int iStack_2d4;
extern unsigned int iStack_2dc;
extern unsigned int lbl_83156AA0;
extern unsigned int lbl_8326B7C8;
extern unsigned int uStack_2bc;
extern unsigned int uStack_2c0;
extern unsigned int uStack_2c8;
extern unsigned int uStack_2cc;
extern unsigned int uStack_2d0;
extern unsigned int uStack_2d8;
extern unsigned int uStack_2e0;


void fn_8256C7E8(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar4;
  undefined8 uVar3;
  undefined4 uStack_2e0;
  int iStack_2dc;
  undefined4 uStack_2d8;
  int iStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  int iStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 auStack_2b8 [2];
  undefined1 auStack_2b0 [64];
  undefined1 auStack_270 [32];
  undefined1 auStack_250 [272];
  undefined1 auStack_140 [320];
  
  uStack_2d0 = 0;
  RtlEnterCriticalSection(param_1 + 0x2c);
  uStack_2c8 = 0;
  iStack_2c4 = 0;
  uStack_2d8 = 0;
  iStack_2d4 = 0;
  uStack_2e0 = 0;
  iStack_2dc = 0;
  uVar1 = fn_8265BF48(0xffffffff821c532c,0);
  fn_82526C70(auStack_250,0x104,0xffffffff821b0c70,0xffffffff831c0ee8,0xffffffff821c84f8);
  fn_82526C70(auStack_140,0x104,0xffffffff821c5380,auStack_250,0xffffffff821c5368,uVar1);
  iVar4 = *(int *)lbl_83156AA0;
  uVar1 = fn_82811400(auStack_270,4);
  lVar2 = (**(code **)(iVar4 + 0xc))(lbl_83156AA0,0x68,uVar1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    auStack_2b8[0] = 0;
    uStack_2cc = 0;
    uStack_2c0 = 0xffffffff;
    uStack_2bc = 0;
    uStack_2d0 = 0;
    fn_8256D3A8(auStack_2b0,auStack_140);
    uVar1 = fn_827D9FB0(lVar2,auStack_2b0,&uStack_2d0,&uStack_2bc,&uStack_2c0,&uStack_2cc,
                              auStack_2b8);
    fn_8256D798(auStack_2b0,1,0);
  }
  uVar1 = fn_827DC748(lbl_8326B7C8,uVar1);
  iVar4 = fn_827DB6D0(lbl_8326B7C8,uVar1,1,0,0,&uStack_2c8);
  if (iVar4 == 0) {
    uVar3 = fn_827D9EA8(uVar1);
    fn_827DBA00(lbl_8326B7C8,uVar1,uVar3,0,0,0,0,0);
    iVar4 = fn_827DBD80(lbl_8326B7C8,uVar1,1,0,0,&uStack_2e0);
    if (iVar4 == 0) {
      while ((iVar4 = fn_827D50B8(uStack_2e0), iVar4 == 0x3e5 || (iVar4 == 0x3e4))) {
        fn_82558B08();
      }
      iVar4 = fn_827D50B8(uStack_2d8);
      if (iVar4 == 0) {
        uVar3 = fn_827D5070(uStack_2d8);
        fn_8256CA60(param_1,uVar3);
      }
    }
  }
  fn_827DC520(lbl_8326B7C8,uVar1);
  RtlLeaveCriticalSection(param_1 + 0x2c);
  if (iStack_2dc != 0) {
    fn_822315A0();
  }
  if (iStack_2d4 != 0) {
    fn_822315A0();
  }
  if (iStack_2c4 != 0) {
    fn_822315A0();
  }
  return;
}

