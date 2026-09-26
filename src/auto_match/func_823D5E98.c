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
extern int fn_82359C18();
extern int fn_823D5E08();
extern int fn_823D6298();
extern int fn_8265CA20();


void fn_823D5E98(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  fn_82359C18(param_1 + 0x318);
  fn_82359C18(param_1 + 0x300);
  fn_82359C18(param_1 + 0x2e8);
  fn_82359C18(param_1 + 0x2d0);
  fn_82359C18(param_1 + 0x2b8);
  fn_82359C18(param_1 + 0x2a0);
  fn_82359C18(param_1 + 0x288);
  fn_82359C18(param_1 + 0x270);
  fn_82359C18(param_1 + 600);
  fn_82359C18(param_1 + 0x240);
  fn_82359C18(param_1 + 0x228);
  fn_82359C18(param_1 + 0x210);
  fn_82359C18(param_1 + 0x1f8);
  fn_82359C18(param_1 + 0x1e0);
  fn_82359C18(param_1 + 0x1c8);
  fn_82359C18(param_1 + 0x1b0);
  fn_82359C18(param_1 + 0x198);
  fn_82359C18(param_1 + 0x180);
  fn_82359C18(param_1 + 0x168);
  fn_82359C18(param_1 + 0x150);
  fn_82359C18(param_1 + 0x138);
  fn_82359C18(param_1 + 0x120);
  fn_82359C18(param_1 + 0x108);
  fn_82359C18(param_1 + 0xf0);
  fn_82359C18(param_1 + 0xd8);
  fn_82359C18(param_1 + 0xc0);
  fn_82359C18(param_1 + 0xa8);
  fn_82359C18(param_1 + 0x90);
  piVar2 = *(int **)(*(int *)(param_1 + 0x84) + 4);
  cVar1 = *(char *)((int)piVar2 + 0x49);
  while (cVar1 == '\0') {
    fn_823D6298(param_1 + 0x80,piVar2[2]);
    piVar3 = (int *)*piVar2;
    fn_82359C18(piVar2 + 0xc);
    fn_82359C18(piVar2 + 6);
    fn_8265CA20(piVar2);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x49);
  }
  *(int *)(*(int *)(param_1 + 0x84) + 4) = *(int *)(param_1 + 0x84);
  *(undefined4 *)*(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(int *)(*(int *)(param_1 + 0x84) + 8) = *(int *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = 0;
  fn_8265CA20(*(undefined4 *)(param_1 + 0x84));
  fn_823D5E08(param_1 + 0x70);
  fn_823D5E08(param_1 + 0x60);
  fn_823D5E08(param_1 + 0x50);
  fn_823D5E08(param_1 + 0x40);
  fn_823D5E08(param_1 + 0x30);
  fn_823D5E08(param_1 + 0x20);
  fn_823D5E08(param_1 + 0x10);
  fn_823D5E08(param_1);
  return;
}

