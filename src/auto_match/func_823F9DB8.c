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
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern int fn_82F68CC0();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_823F9DB8(int param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 auStack_68 [2];
  undefined4 auStack_60 [8];
  undefined4 auStack_40 [16];
  
  puVar1 = auStack_60;
  auStack_60[0] = 0;
  lVar2 = 7;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0xffffffff;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  puVar1 = auStack_40;
  auStack_40[0] = 0;
  lVar2 = 7;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0xffffffff;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))(*(int **)(param_1 + 0x1c),param_2,auStack_60);
  (**(code **)(**(int **)(param_1 + 0x24) + 0x14))(*(int **)(param_1 + 0x24),param_2,auStack_40);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(*(int **)(param_1 + 0x2c),param_2,&uStack_70);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x14))(*(int **)(param_1 + 0x34),param_2,&uStack_6c);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x14))(*(int **)(param_1 + 0x3c),param_2,auStack_68);
  if (param_3 != 0) {
    fn_82F68CC0(*(int *)(param_1 + 8) + param_3,auStack_60,0x20);
    fn_82F68CC0(*(int *)(param_1 + 0xc) + param_3,auStack_40,0x20);
    *(undefined4 *)(*(int *)(param_1 + 0x10) + param_3) = uStack_70;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + param_3) = uStack_6c;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + param_3) = auStack_68[0];
  }
  return;
}

