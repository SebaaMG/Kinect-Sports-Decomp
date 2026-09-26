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
extern unsigned int *auStack_120;
extern unsigned int *auStack_220;
extern unsigned int *auStack_320;
extern unsigned int *auStack_420;
extern int fn_82F68CC0();
extern unsigned int uStack_428;
extern unsigned int uStack_42c;
extern unsigned int uStack_430;


void fn_8224A5E0(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined1 auStack_420 [256];
  undefined1 auStack_320 [256];
  undefined1 auStack_220 [256];
  undefined1 auStack_120 [288];
  
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))(*(int **)(param_1 + 0x1c),param_2,auStack_220);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x14))(*(int **)(param_1 + 0x24),param_2,auStack_420);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(*(int **)(param_1 + 0x2c),param_2,auStack_320);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x14))(*(int **)(param_1 + 0x34),param_2,auStack_120);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x14))(*(int **)(param_1 + 0x3c),param_2,&uStack_430);
  if (param_3 != 0) {
    fn_82F68CC0(*(int *)(param_1 + 8) + param_3,auStack_220,0x100);
    fn_82F68CC0(*(int *)(param_1 + 0xc) + param_3,auStack_420,0x100);
    fn_82F68CC0(*(int *)(param_1 + 0x10) + param_3,auStack_320,0x100);
    fn_82F68CC0(*(int *)(param_1 + 0x14) + param_3,auStack_120,0x100);
    iVar1 = *(int *)(param_1 + 0x18) + param_3;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + param_3) = uStack_430;
    *(undefined4 *)(iVar1 + 4) = uStack_42c;
    *(undefined4 *)(iVar1 + 8) = uStack_428;
  }
  return;
}

