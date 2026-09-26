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
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_8268BA10();
extern int fn_826C6368();


int fn_82726AB8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  
  fn_8268BA10(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  fn_8268BA10(param_1 + 0x10,param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    fn_8267C498();
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  piVar2 = *(int **)(param_2 + 0x1c);
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar3 = *(uint **)(param_1 + 0x1c);
  if (puVar3 != (uint *)0x0) {
    uVar4 = *puVar3;
    *puVar3 = (uint)((ulonglong)uVar4 - 1);
    if ((ulonglong)uVar4 - 1 == 0) {
      fn_826C6368(puVar3);
      fn_8267BE38(puVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_2 + 0x24);
  *(undefined2 *)(param_1 + 0x26) = *(undefined2 *)(param_2 + 0x26);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  *(undefined2 *)(param_1 + 0x2a) = *(undefined2 *)(param_2 + 0x2a);
  return param_1;
}

