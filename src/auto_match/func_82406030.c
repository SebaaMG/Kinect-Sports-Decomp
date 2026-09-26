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
extern int fn_82359108();
extern int fn_82359200();
extern unsigned int lbl_82193D10;


void fn_82406030(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar3;
  undefined8 uVar2;
  
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0xa0);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x40) != 1)) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 4))();
    if (*(int *)(iVar3 + 0x24) == 0) {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x14) + 8);
    }
    else {
      pcVar1 = *(code **)(**(int **)(param_1 + 0x14) + 4);
    }
    uVar2 = (*pcVar1)();
    fn_82359108((double)lbl_82193D10,*(undefined4 *)(param_1 + 8),uVar2,0,param_4,0);
  }
  else {
    fn_82359200((double)lbl_82193D10,*(int *)(param_1 + 8),param_2,0);
  }
  return;
}

