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
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5478();
extern unsigned int lbl_821AAD20;


void fn_82BF8F68(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  uVar1 = lbl_821AAD20;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  *(undefined2 *)(param_1 + 0x78) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined2 *)(param_1 + 0xac) = 0;
  *(undefined2 *)(param_1 + 0xd8) = 0;
  *(undefined2 *)(param_1 + 0xa4) = 0;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  iVar3 = param_1 + 0xe4;
  fn_82BE5340(iVar3);
  while (*(int *)(param_1 + 0xec) != 0) {
    puVar2 = (undefined4 *)fn_82BE5378(iVar3);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    fn_82BE5350(iVar3);
  }
  fn_82BE5478();
  return;
}

