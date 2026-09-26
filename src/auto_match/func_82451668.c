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
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_8229CFB8();
extern int fn_82338F98();
extern int fn_8242C1B8();
extern int fn_82434960();
extern int fn_82522588();
extern int fn_82529320();
extern unsigned int iStack_2c;


void fn_82451668(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  iVar2 = fn_8242C1B8(**(undefined4 **)(param_1 + 0x40));
  fn_82338F98();
  lVar5 = 2;
  piVar3 = (int *)(*(int *)(iVar2 + 0x11c) + 0x10);
  iVar2 = **(int **)(*(int *)(param_1 + 0x44) + 4);
  do {
    if (*piVar3 == iVar2) {
      *piVar3 = 0;
      *(undefined1 *)(piVar3 + 0xc) = 0;
      *(undefined1 *)((int)piVar3 + 0x31) = 0;
      piVar3[1] = -1;
      *(undefined2 *)(piVar3 + 2) = 0x5b;
      puVar1 = (undefined4 *)((uint)(piVar3 + 8) & 0xfffffff0);
      *puVar1 = in_register_000104d0;
      puVar1[1] = in_register_000104d4;
      puVar1[2] = in_register_000104d8;
      puVar1[3] = in_vr77;
      *(undefined1 *)((int)piVar3 + 0x32) = 0;
      piVar3[0xd] = 0;
      piVar3[0xe] = 0;
    }
    piVar3 = piVar3 + 0x10;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  piVar3 = *(int **)(param_1 + 0x44);
  (**(code **)(*piVar3 + 8))(piVar3);
  if (*(int *)piVar3[1] != 0) {
    fn_82529320(*(int *)piVar3[1],0);
    *(undefined4 *)piVar3[1] = 0;
  }
  iVar2 = **(int **)(param_1 + 0x40);
  for (uVar4 = (ulonglong)*(uint *)(iVar2 + 0x30);
      (uVar4 & 0xffffffff) != (ulonglong)*(uint *)(iVar2 + 0x34); uVar4 = uVar4 + 8) {
    piVar3 = (int *)fn_82522588(auStack_30,uVar4);
    *(undefined4 *)(*(int *)(*piVar3 + 0x244) + 0x38) = 0;
    if (iStack_2c != 0) {
      fn_822315A0();
    }
  }
  fn_8229CFB8(*(undefined4 *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0x78),0,0);
  fn_82434960(param_1);
  return;
}

