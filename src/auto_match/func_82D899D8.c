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
extern int fn_82D40590();
extern int fn_82D40610();
extern int fn_82D89930();


void fn_82D899D8(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int *piVar5;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    fn_82D40590(param_1 + 0x30);
  }
  if ((param_2 != 0) && (param_3 != (int *)0x0)) {
    bVar2 = false;
    uVar1 = *(uint *)((param_3[3] + 0x44) * 4 + *(int *)(param_2 + 0x80));
    if ((uVar1 & 0x80) == 0) {
      if ((uVar1 & 0x100) == 0) {
        return;
      }
      piVar5 = (int *)(**(code **)(*param_3 + 0x10))(param_3);
      bVar2 = true;
    }
    else {
      piVar5 = (int *)(**(code **)(*param_3 + 0x10))(param_3);
    }
    if ((*(char *)(param_1 + 0xe8) == '\x05') ||
       (bVar3 = false, *(char *)(param_1 + 0xe8) == '\x04')) {
      bVar3 = true;
    }
    if ((!bVar3) || (!bVar2)) {
      uVar4 = (**(code **)(*piVar5 + 4))();
      fn_82D40610(param_1 + 0x30,uVar4);
      *(undefined4 *)(param_1 + 0x30) = 1;
      *(undefined4 *)(param_1 + 0x40) = 0;
      if (*(char *)(param_1 + 0xe8) == '\x05') {
        fn_82D89930(param_1);
      }
    }
  }
  return;
}

