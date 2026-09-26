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
extern int fn_82637550();
extern int fn_82645110();
extern int fn_82F68CC0();
extern int iRam832823e8;
extern unsigned int iStack00000014;


void fn_826303C8(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  int iStack00000014;
  
  if (iRam832823e8 == 0) {
    uVar2 = *(uint *)(param_1 + 0x30);
    iStack00000014 = param_1;
    if (*(uint *)(param_1 + 0x38) < uVar2) {
      uVar2 = fn_82645110(param_1);
    }
    *(undefined4 *)(uVar2 + 4) = 0xc0003b00;
    *(undefined4 *)(uVar2 + 8) = 0x300;
    *(undefined4 *)(uVar2 + 0xc) = 0xc0192b00;
    *(undefined4 *)(uVar2 + 0x10) = 0;
    *(undefined4 *)(uVar2 + 0x14) = 0x18;
    fn_82F68CC0(uVar2 + 0x18,0xffffffff8218da28,0x60);
    uVar2 = uVar2 + 0x74;
    *(uint *)(param_1 + 0x30) = uVar2;
    if (*(uint *)(param_1 + 0x38) < uVar2) {
      uVar2 = fn_82645110(param_1);
    }
    *(undefined4 *)(uVar2 + 4) = 0xc00a2b00;
    *(undefined4 *)(uVar2 + 8) = 1;
    *(undefined4 *)(uVar2 + 0xc) = 9;
    fn_82F68CC0(uVar2 + 0x10,0xffffffff8218d8f4,0x24);
    uVar2 = uVar2 + 0x30;
    *(uint *)(param_1 + 0x30) = uVar2;
    if (*(uint *)(param_1 + 0x38) < uVar2) {
      uVar2 = fn_82645110(param_1);
    }
    iVar1 = iStack00000014;
    *(undefined4 *)(uVar2 + 4) = 0x12180;
    *(undefined4 *)(uVar2 + 8) = 0x10000001;
    *(undefined4 *)(uVar2 + 0xc) = 0;
    *(undefined4 *)(uVar2 + 0x10) = 0x22100;
    *(undefined4 *)(uVar2 + 0x14) = 0xffff;
    *(undefined4 *)(uVar2 + 0x18) = 0;
    *(undefined4 *)(uVar2 + 0x1c) = 0;
    *(undefined4 *)(uVar2 + 0x20) = 0x2293;
    *(undefined4 *)(uVar2 + 0x24) = 0;
    *(undefined4 *)(uVar2 + 0x28) = 0x22204;
    *(undefined4 *)(uVar2 + 0x2c) = 0x10000;
    *(undefined4 *)(uVar2 + 0x30) = 0x10000;
    *(undefined4 *)(uVar2 + 0x34) = 0x300;
    *(undefined4 *)(uVar2 + 0x38) = 0x2312;
    *(undefined4 *)(uVar2 + 0x3c) = 0xffff;
    *(undefined4 *)(uVar2 + 0x40) = 0x200d;
    *(undefined4 *)(uVar2 + 0x44) = 0;
    *(undefined4 *)(uVar2 + 0x48) = 0x2200;
    *(undefined4 *)(uVar2 + 0x4c) = 0;
    *(undefined4 *)(uVar2 + 0x50) = 0x2203;
    *(undefined4 *)(uVar2 + 0x54) = 0;
    *(undefined4 *)(uVar2 + 0x58) = 0x2208;
    *(undefined4 *)(uVar2 + 0x5c) = 4;
    *(undefined4 *)(uVar2 + 0x60) = 0x2104;
    *(undefined4 *)(uVar2 + 100) = 0;
    *(undefined4 *)(uVar2 + 0x68) = 0x2280;
    *(undefined4 *)(uVar2 + 0x6c) = 0x80008;
    *(undefined4 *)(uVar2 + 0x70) = 0x2302;
    *(undefined4 *)(uVar2 + 0x74) = 4;
    *(undefined4 *)(uVar2 + 0x78) = 0x22080;
    *(undefined4 *)(uVar2 + 0x7c) = 0;
    *(undefined4 *)(uVar2 + 0x80) = 0;
    puVar3 = (undefined4 *)(uVar2 + 0x84);
    *puVar3 = 0x100010;
    *(undefined4 **)(iStack00000014 + 0x30) = puVar3;
    if (*(undefined4 **)(iStack00000014 + 0x38) < puVar3) {
      puVar3 = (undefined4 *)fn_82645110(iStack00000014);
    }
    puVar3[1] = 0xc0003600;
    puVar3[2] = 0x2000081;
    *(undefined4 **)(iVar1 + 0x30) = puVar3 + 2;
    uVar4 = *(ulonglong *)(iVar1 + 0x10);
    *(ulonglong *)(iVar1 + 0x10) = uVar4 | 0x20000000000;
    *(ulonglong *)(iVar1 + 0x10) = uVar4 | 0x30000000000;
    *(ulonglong *)(iVar1 + 0x10) = uVar4 | 0x38000000000;
    *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x800000000;
    uVar4 = *(ulonglong *)(iVar1 + 0x10);
    *(ulonglong *)(iVar1 + 0x10) = uVar4 | 0x80;
    *(ulonglong *)(iVar1 + 0x10) = uVar4 | 0xc0;
    *(ulonglong *)(iVar1 + 0x10) = uVar4 | 0xe0;
    *(ulonglong *)(iVar1 + 0x20) = *(ulonglong *)(iVar1 + 0x20) | 0x80000;
    uVar4 = *(ulonglong *)(iVar1 + 0x10);
    *(ulonglong *)(iVar1 + 0x10) = uVar4 | 0x100000000000;
    *(ulonglong *)(iVar1 + 0x10) = uVar4 | 0x100000080000;
    *(ulonglong *)(iVar1 + 0x10) = uVar4 | 0x100000180000;
    *(ulonglong *)(iVar1 + 0x10) = uVar4 | 0x100000180800;
    *(ulonglong *)(iVar1 + 0x10) = uVar4 | 0x100000180900;
    *(ulonglong *)(iVar1 + 0x10) = uVar4 | 0x100000180908;
    *(ulonglong *)(iVar1 + 0x10) = uVar4 | 0x102000180908;
    *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x40000000000000;
    *(ulonglong *)(iVar1 + 0x20) = *(ulonglong *)(iVar1 + 0x20) | 0x800000000;
    uVar2 = *(uint *)(iVar1 + 0x28c4);
    fn_82637550(iVar1,(int)(uVar2 << 0x11 | uVar2 >> 0xf) >> 0x11,(int)(uVar2 << 1) >> 0x11,
                      (*(int *)(iVar1 + 0x28c8) << 0x11) >> 0x11,
                      (*(int *)(iVar1 + 0x28c8) << 1) >> 0x11);
  }
  return;
}

