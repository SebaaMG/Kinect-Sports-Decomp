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
extern int fn_8223C478();
extern int fn_8288A398();
extern int fn_828AC880();
extern int fn_828BB820();
extern int fn_828E9DB8();
extern int fn_828E9F18();
extern int fn_828EA2D8();


void fn_828DE2E8(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  
  iVar3 = fn_8288A398();
  uVar1 = *(undefined4 *)(iVar3 + 0x38);
  fn_8223C478(param_2,0x20,0);
  fn_828E9DB8(param_2,uVar1,0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  fn_8223C478(param_2,0x40,0);
  fn_828E9F18(param_2,uVar4,0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x88);
  fn_8223C478(param_2,8,0);
  fn_828E9DB8(param_2,uVar1,8);
  uVar1 = *(undefined4 *)(param_1 + 0x8c);
  fn_8223C478(param_2,8,0);
  fn_828E9DB8(param_2,uVar1,8);
  fn_8223C478(param_2,0x40,0);
  fn_828EA2D8(param_2,param_1 + 0x90,8);
  fn_8223C478(param_2,0x80,0);
  fn_828EA2D8(param_2,param_1 + 0x98,0x10);
  fn_8223C478(param_2,0x120,0);
  fn_828EA2D8(param_2,param_1 + 0xa8,0x24);
  iVar3 = *(int *)(param_1 + 0xd4);
  iVar2 = *(int *)(param_1 + 0xd0);
  fn_8223C478(param_2,0x20,0);
  fn_828E9DB8(param_2,iVar3 - iVar2 >> 4,0x20);
  piVar5 = *(int **)(param_1 + 0xd0);
  if (piVar5 != *(int **)(param_1 + 0xd4)) {
    do {
      uVar1 = *(undefined4 *)(*piVar5 + 8);
      fn_8223C478(param_2,0x20,0);
      fn_828E9DB8(param_2,uVar1,0x20);
      uVar1 = *(undefined4 *)(piVar5[2] + 4);
      fn_8223C478(param_2,0x20,0);
      fn_828E9DB8(param_2,uVar1,0x20);
      piVar5 = piVar5 + 4;
    } while (piVar5 != *(int **)(param_1 + 0xd4));
  }
  iVar3 = *(int *)(param_1 + 0xe4);
  iVar2 = *(int *)(param_1 + 0xe0);
  fn_8223C478(param_2,0x20,0);
  fn_828E9DB8(param_2,iVar3 - iVar2 >> 4,0x20);
  piVar5 = *(int **)(param_1 + 0xe0);
  if (piVar5 != *(int **)(param_1 + 0xe4)) {
    do {
      uVar1 = *(undefined4 *)(*piVar5 + 8);
      fn_8223C478(param_2,0x20,0);
      fn_828E9DB8(param_2,uVar1,0x20);
      fn_828BB820(piVar5[2],param_2);
      piVar5 = piVar5 + 4;
    } while (piVar5 != *(int **)(param_1 + 0xe4));
  }
  fn_828AC880(param_1 + 0xf0,param_2);
  return;
}

