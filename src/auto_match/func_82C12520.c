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
extern int fn_82C106C8();
extern int fn_82C10AD0();
extern int fn_82C10B28();
extern int fn_82C10E58();
extern int fn_82F691F0();


undefined8
fn_82C12520(undefined4 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 *puStack_60;
  int aiStack_5c [23];
  
  aiStack_5c[0] = 0;
  puStack_60 = (undefined1 *)0x0;
  uVar3 = fn_82C10E58(param_1[0x12],*param_2,&puStack_60);
  if (-1 < (int)uVar3) {
    param_1[2] = *(undefined4 *)(param_2 + 4);
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    param_1[6] = param_5;
    param_1[3] = uVar2;
    *(undefined8 *)(param_1 + 0xe) = 0;
    uVar1 = *param_2;
    *(undefined1 *)(param_1 + 4) = uVar1;
    param_1[0xc] = 0;
    *puStack_60 = uVar1;
    *(undefined4 *)(puStack_60 + 0x28) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(puStack_60 + 0x24) = 1;
    *(undefined4 *)(puStack_60 + 0x20) = 0;
    *(undefined4 *)(puStack_60 + 0x18) = 0;
    *(undefined4 *)(puStack_60 + 0x1c) = 0;
    *(undefined4 *)(puStack_60 + 0x14) = 0;
    *(undefined4 *)(puStack_60 + 4) = 0;
    *(undefined4 *)(puStack_60 + 8) = 0;
    *(undefined4 *)(puStack_60 + 0xc) = 0;
    *(undefined4 *)(puStack_60 + 0x10) = 0;
    uVar3 = fn_82C10AD0(*param_1,0x20,0x2c,param_1 + 1);
    if (-1 < (int)uVar3) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(param_1[1],0,0x2c);
    }
  }
  if (param_1[0x19] != 0) {
    fn_82C106C8(param_6);
  }
  if (param_1[1] != 0) {
    fn_82C10B28(*param_1,0x20,param_1 + 1);
  }
  if (aiStack_5c[0] != 0) {
    fn_82C10B28(*param_1,0x20,aiStack_5c);
  }
  return uVar3;
}

