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
extern unsigned int *auStack_40;
extern int fn_8227D9B0();
extern int fn_8227DA30();
extern int fn_824CCD80();
extern int fn_82F68CC0();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_823DB9B0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(int *)(*(int *)(param_1 + 0x44) + 0x30) == 0) {
    fn_8227D9B0();
  }
  fn_8227DA30((double)*(float *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x44));
  if (*(int *)(param_1 + 0x3c) == 0) {
    uStack_24 = 0xffffffff;
  }
  else {
    uStack_24 = fn_824CCD80(*(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x10));
  }
  puVar2 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  uStack_30 = *(undefined4 *)(param_1 + 0x10);
  uStack_2c = *(undefined4 *)(param_1 + 0x14);
  uStack_28 = *(undefined4 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  puVar3 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  uStack_20 = 0;
  uStack_1c = 3;
  fn_82F68CC0(uVar1,auStack_40,0x30);
  return;
}

