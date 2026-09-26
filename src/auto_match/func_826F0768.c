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
#define CONCAT13(h,l) ((U32)((((U8)(h)) << 24) | ((U32)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int uStack_1c;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_826F0768(int param_1,int *param_2,undefined1 param_3)

{
  uint uVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 *puVar4;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_1c;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 < 0x10) {
    iVar3 = uVar1 * 0xc + param_1 + 0x24 + 0x10;
  }
  else {
    iVar3 = (uVar1 - 0x10) * 0xc + *(int *)(param_1 + 0x28);
  }
  uVar2 = *(undefined8 *)(iVar3 + 4);
  uStack_2c = CONCAT13(param_3,(((U64)(uStack_2c) >> 8) & 0xFFFFFF));
  if (uVar1 < 0x10) {
    puVar4 = (undefined4 *)(uVar1 * 0xc + param_1 + 0x24 + 0x10);
  }
  else {
    puVar4 = (undefined4 *)((uVar1 - 0x10) * 0xc + *(int *)(param_1 + 0x28));
  }
  uStack_1c = CONCAT44(param_2,uStack_2c);
  uStack_28 = ((((U64)(uStack_28)) & (~(((U64)0xFF) << 32))) | ((((U64)((byte)((ulonglong)uVar2 >> 0x18))) & ((U64)0xFF)) << 32));
  *puVar4 = 2;
  puVar4[1] = param_2;
  puVar4[2] = uStack_2c;
  if ((((U64)(uStack_28) >> 32) & 0xFF) != 0) {
    uStack_28 = ((((U64)(uStack_28)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((undefined4)((ulonglong)uVar2 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    uStack_2c = (uint)(((U64)(uStack_28) >> 32) & 0xFF);
    uStack_30 = (((U64)(uStack_28) >> 0) & 0xFFFFFFFF);
    uStack_28 = uVar2;
    (**(code **)(*param_2 + 8))(param_2,&uStack_30);
  }
  return;
}

