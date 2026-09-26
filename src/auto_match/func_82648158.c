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
extern int fn_826453A0();
extern int fn_82645EA8();
extern int fn_826529C8();


void fn_82648158(int param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  fn_826529C8(param_1,1);
  fn_82645EA8(param_1,0);
  uVar2 = *(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x38) < uVar2) {
    uVar2 = fn_82645110(param_1);
  }
  *(undefined4 *)(uVar2 + 4) = 0x579;
  *(undefined4 *)(uVar2 + 8) = 1;
  *(undefined4 *)(uVar2 + 0xc) = 0xc0043c00;
  *(undefined4 *)(uVar2 + 0x10) = 0x13;
  uVar4 = *(int *)(param_1 + 0x2a94) + 4;
  *(uint *)(uVar2 + 0x14) = ((uVar4 >> 0x14) + 0x200 & 0x1000) + (uVar4 & 0x1fffffff) | 2;
  *(undefined4 *)(uVar2 + 0x18) = 1;
  *(undefined4 *)(uVar2 + 0x1c) = 0xffffffff;
  *(undefined4 *)(uVar2 + 0x20) = 0x100;
  *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(uVar2 + 0x20);
  iVar1 = *(int *)(param_1 + 0x35f0);
  if ((iVar1 == 0) || (iVar1 == 1)) {
    uVar2 = 1;
  }
  else if (iVar1 == 2) {
    uVar2 = 2;
  }
  else {
    uVar2 = -(uint)(iVar1 == 4) & 3;
  }
  uVar4 = *(uint *)(param_1 + 0x2efc);
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x38) < uVar3) {
    uVar3 = fn_82645110(param_1);
  }
  uVar2 = fn_826453A0(param_1,uVar3,0,0xffffffff82647a70,uVar4 >> 0x17 & 0x7f | uVar2 << 8);
  *(uint *)(param_1 + 0x30) = uVar2;
  if (*(uint *)(param_1 + 0x38) < uVar2) {
    uVar2 = fn_82645110(param_1);
  }
  *(undefined4 *)(uVar2 + 4) = 0xc0043c00;
  *(undefined4 *)(uVar2 + 8) = 0x13;
  uVar4 = *(int *)(param_1 + 0x2a94) + 4;
  *(uint *)(uVar2 + 0xc) = ((uVar4 >> 0x14) + 0x200 & 0x1000) + (uVar4 & 0x1fffffff) | 2;
  *(undefined4 *)(uVar2 + 0x10) = 0;
  *(undefined4 *)(uVar2 + 0x14) = 0xffffffff;
  *(undefined4 *)(uVar2 + 0x18) = 0x100;
  *(undefined4 **)(param_1 + 0x30) = (undefined4 *)(uVar2 + 0x18);
  fn_826529C8(param_1,0);
  *(byte *)(param_1 + 0x2abd) = *(byte *)(param_1 + 0x2abd) | 0x10;
  return;
}

