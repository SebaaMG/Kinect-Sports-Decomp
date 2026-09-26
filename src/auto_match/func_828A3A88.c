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
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_82230360();
extern int fn_822315A0();
extern int fn_82240730();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_8288B300();
extern int fn_82897060();
extern int fn_828BAB20();
extern unsigned int iStack_74;
extern unsigned int iStack_7c;
extern unsigned int lbl_82196884;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_828A3A88(undefined8 param_1)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  int iVar3;
  undefined1 auStack_80 [4];
  int iStack_7c;
  undefined1 auStack_78 [4];
  int iStack_74;
  uint auStack_70 [4];
  undefined4 uStack_60;
  uint uStack_5c;
  uint auStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  
  puVar2 = (undefined4 *)fn_8265C9E0(0x34);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    fn_8288B300(puVar2,1);
    *puVar2 = &lbl_82196884;
  }
  uStack_60 = 0;
  auStack_70[0] = auStack_70[0] & 0xffffff;
  uStack_5c = 0xf;
  fn_82230360(auStack_70,0xffffffff82024298,0xc);
  uVar1 = fn_828BAB20(auStack_80,puVar2);
  fn_82897060(auStack_70,0,1,0xffffffff828a15a0,0xffffffff828a0eb0,0,uVar1,param_1);
  if (iStack_7c != 0) {
    fn_822315A0();
  }
  if (0xf < uStack_5c) {
    fn_8265CA20(auStack_70[0]);
  }
  uStack_5c = 0xf;
  uStack_60 = 0;
  auStack_70[0] = auStack_70[0] & 0xffffff;
  iVar3 = fn_8265C9E0(0x2fc);
  if (iVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82240730();
  }
  uStack_3c = 0xf;
  uStack_40 = 0;
  auStack_50[0] = auStack_50[0] & 0xffffff;
  fn_82230360(auStack_50,0xffffffff82024288,0xc);
  uVar1 = fn_828BAB20(auStack_78,uVar1);
  fn_82897060(auStack_50,1,0x100,0xffffffff828a1608,0xffffffff828a0f08,0,uVar1,param_1);
  if (iStack_74 != 0) {
    fn_822315A0();
  }
  if (0xf < uStack_3c) {
    fn_8265CA20(auStack_50[0]);
  }
  return;
}

