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
extern int fn_82645110();
extern int fn_82F68CC0();
extern int iRam832823e4;


void fn_82630270(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (iRam832823e4 == 0) {
    uVar1 = *(uint *)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x38) < uVar1) {
      uVar1 = fn_82645110(param_1);
    }
    *(undefined4 *)(uVar1 + 4) = 0x22100;
    *(undefined4 *)(uVar1 + 8) = 0xf;
    *(undefined4 *)(uVar1 + 0xc) = 0xe;
    *(undefined4 *)(uVar1 + 0x10) = 0x10;
    *(undefined4 *)(uVar1 + 0x14) = 0xc0003b00;
    *(undefined4 *)(uVar1 + 0x18) = 0x100;
    *(undefined4 *)(uVar1 + 0x1c) = 0xc0102b00;
    *(undefined4 *)(uVar1 + 0x20) = 0;
    *(undefined4 *)(uVar1 + 0x24) = 0xf;
    fn_82F68CC0(uVar1 + 0x28,0xffffffff8218da88,0x3c);
    *(undefined4 *)(uVar1 + 100) = 0x12180;
    *(undefined4 *)(uVar1 + 0x68) = 0x7000000;
    *(undefined4 *)(uVar1 + 0x6c) = 0;
    *(undefined4 *)(uVar1 + 0x70) = 0x2208;
    *(undefined4 *)(uVar1 + 0x74) = 4;
    *(undefined4 *)(uVar1 + 0x78) = 0xc0003600;
    *(undefined4 *)(uVar1 + 0x7c) = 0x10081;
    uVar2 = *(ulonglong *)(param_1 + 0x10);
    *(ulonglong *)(param_1 + 0x10) = uVar2 | 0x80000;
    *(ulonglong *)(param_1 + 0x10) = uVar2 | 0x20000080000;
    *(ulonglong *)(param_1 + 0x10) = uVar2 | 0x30000080000;
    *(ulonglong *)(param_1 + 0x10) = uVar2 | 0x38000080000;
    *(ulonglong *)(param_1 + 0x10) = uVar2 | 0x38000080008;
    *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(uVar1 + 0x7c);
  }
  return;
}

