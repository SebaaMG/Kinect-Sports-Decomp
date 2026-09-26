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
extern int fn_82C51858();
extern int fn_82C53980();
extern int fn_82C562F0();


undefined8 fn_82C53AE8(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar2;
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x3a04) = 1;
  if ((*(int *)(param_1 + 0xd64) != 0) &&
     ((*(int *)(param_1 + 0x5630) == 0 || (*(int *)(param_1 + 0x5634) != 0)))) {
    *(undefined4 *)(param_1 + 0xd58) = 0;
    *(undefined4 *)(param_1 + 0xd68) = 0;
    *(undefined4 *)(param_1 + 0xd54) = 0xfffffffd;
    *(undefined4 *)(param_1 + 0xd5c) = 0;
    *(undefined4 *)(param_1 + 0xd6c) = 0;
  }
  *(undefined4 *)(param_1 + 0xd44) = 0;
  if (*(int *)(param_1 + 0x754) == 0) {
    iVar2 = fn_82C562F0((ulonglong)*(uint *)(param_1 + 0x6070) + 8,0x340,0xffffffff82196582);
    *(int *)(param_1 + 0x754) = iVar2;
    if (iVar2 == 0) {
      return 0xfffffffffffffff7;
    }
    *(uint *)(param_1 + 0x758) = iVar2 + 0x3cU & 0xfffffff0;
  }
  if (*(int *)(param_1 + 0x5580) != 0) {
    uVar1 = fn_82C53980(param_1,param_2,param_3);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    fn_82C51858(param_1);
  }
  return 0;
}

