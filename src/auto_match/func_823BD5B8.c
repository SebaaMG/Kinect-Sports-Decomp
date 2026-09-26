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
extern int fn_823BDE88();
extern int fn_828E5660();
extern int fn_828E9DB8();


/* WARNING: Removing unreachable block (ram,0x823bd900) */

void fn_823BD5B8(int param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  fn_823BDE88(param_2,param_3 + 0x10);
  fn_828E5660((double)*(float *)(param_3 + 0x1c),param_2);
  fn_823BDE88(param_2,param_3 + 0x20);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3 + 0x30);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3 + 0x40);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3 + 0x50);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3 + 0x60);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3 + 0x70);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3 + 0x80);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3 + 0x90);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3 + 0xa0);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3 + 0xb0);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3 + 0xc0);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3 + 0xd0);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3 + 0xe0);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3 + 0xf0);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3 + 0x100);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3 + 0x110);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3 + 0x120);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3 + 0x130);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3 + 0x140);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3 + 0x150);
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3 + 0x160);
  cVar1 = *(char *)(param_3 + 0x170);
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,cVar1 != '\0',1);
  (**(code **)(**(int **)(param_1 + 0xc) + 0x10))(*(int **)(param_1 + 0xc),param_2,param_3 + 0x180);
  (**(code **)(**(int **)(param_1 + 0x10) + 0x10))(*(int **)(param_1 + 0x10),param_2,param_3 + 400);
  uVar3 = 0;
  do {
    uVar2 = *(uint *)(((uVar3 >> 5) + 0x65) * 4 + param_3);
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,(1 << (uVar3 & 0x1f) & uVar2) != 0,1);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x14);
  return;
}

