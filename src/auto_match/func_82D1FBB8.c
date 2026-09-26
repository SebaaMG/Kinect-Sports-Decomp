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
#define ZEXT48(x) ((U64)((U32)(x)))
#define _iStack00000010 ((*(U64*)&iStack00000010))
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int fStack_60;
extern int fn_82CEC350();
extern unsigned int iStack00000010;
extern unsigned int iStack00000014;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


double fn_82D1FBB8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int in_r0;
  ulonglong uVar3;
  undefined1 in_vs32 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs45 [16];
  undefined4 in_register_00010060;
  undefined4 in_register_00010064;
  undefined4 in_register_00010068;
  undefined4 in_vr6;
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  int iStack00000010;
  int iStack00000014;
  float fStack_60;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  uVar3 = ZEXT48(&stack0x00000000);
  iStack00000010 = (int)((ulonglong)param_1 >> 0x20);
  iStack00000014 = (int)param_1;
  if ((*(uint *)((iStack00000014 + 5) * 4 + iStack00000010) & 0xfffffffc) == 0) {
    return (double)lbl_821AAD20;
  }
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  puVar2 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000100c0;
  puVar2[1] = in_register_000100c4;
  puVar2[2] = in_register_000100c8;
  puVar2[3] = in_vr12;
  vectorSubtractFloatingPoint(in_vs42,in_vs43);
  puVar2 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010090;
  puVar2[1] = in_register_00010094;
  puVar2[2] = in_register_00010098;
  puVar2[3] = in_vr9;
  vectorSubtractFloatingPoint(in_vs39,in_vs40);
  puVar2 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010060;
  puVar2[1] = in_register_00010064;
  puVar2[2] = in_register_00010068;
  puVar2[3] = in_vr6;
  _iStack00000010 = param_1;
  fn_82CEC350(uVar3 - 0x50,uVar3 - 0x40);
  uVar1 = storeVectorElementWordIndexed(in_vs37,0,uVar3 - 0x60);
  *(undefined4 *)(uVar3 - 0x60) = uVar1;
  return (double)fStack_60;
}

