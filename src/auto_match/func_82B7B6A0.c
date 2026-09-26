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
extern int fn_82B771B0();
extern int fn_82B77410();
extern int fn_82B79EE8();
extern int fn_82B7AC20();
extern int fn_82BA02A8();


int fn_82B7B6A0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    lVar4 = 0x5b54;
    puVar3 = (undefined1 *)(iVar1 + -1);
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *(undefined4 *)(iVar1 + 0x3360) = 0;
    *(undefined4 *)(iVar1 + 0x3364) = 0;
    *(undefined4 *)(iVar1 + 0x3368) = 0;
    *(int *)(iVar1 + 0x2a40) = iVar1 + 0x10;
    puVar2 = (undefined4 *)(iVar1 + 0x3074);
    *(int *)(iVar1 + 0x2ef8) = iVar1 + 0x2a48;
    lVar4 = 0x14;
    do {
      puVar2 = puVar2 + 7;
      *puVar2 = 0x19;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *(undefined4 *)(iVar1 + 0x3088) = param_3;
    fn_82B7AC20(param_1,param_2);
    *(int *)(param_1 + 0x18) = param_2 + 8;
    **(uint **)(param_1 + 0x1c) = (uint)*(byte *)(param_2 + 5);
    *(uint *)(*(int *)(param_1 + 0x1c) + 8) = *(byte *)(param_2 + 4) & 1;
    *(uint *)(*(int *)(param_1 + 0x1c) + 4) = (uint)*(byte *)(param_2 + 3);
    if (*(int *)(*(int *)(param_1 + 0x1c) + 8) == 0) {
      *(undefined4 *)(param_1 + 0x680) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x680) = 7;
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x5b48) = 1;
    }
    fn_82B77410(param_1);
    fn_82B79EE8(param_1);
    fn_82B771B0(param_1,*(undefined4 *)(param_1 + 0x10));
    fn_82BA02A8(param_1);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x308c) * 0xc;
  }
  return iVar1;
}

