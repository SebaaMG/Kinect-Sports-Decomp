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
extern int fn_82BEEEA0();


undefined8 fn_82BEF578(int param_1,ulonglong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  uint *puVar3;
  ushort uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x58) != 1) {
    iVar5 = param_1 + 0x4c;
    fn_82BE5340(iVar5);
    uVar4 = 0;
    while ((*(int *)(param_1 + 0x54) != 0 && (uVar4 < *(ushort *)(param_1 + 0x48)))) {
      if ((*(int *)(param_1 + 0x2c) == 0) ||
         (piVar1 = *(int **)(*(int *)(param_1 + 0x2c) + 0x34), piVar1 == (int *)0x0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = (**(code **)(*piVar1 + 4))();
      }
      if ((uVar2 & 0xffffffff) == (param_2 & 0xffffffff)) {
        return 0;
      }
      puVar3 = (uint *)fn_82BE5378(iVar5);
      if ((ulonglong)*puVar3 == (param_2 & 0xffffffff)) {
        fn_82BEEEA0(param_1,param_2);
        return 1;
      }
      fn_82BE5350(iVar5);
      uVar4 = uVar4 + 1;
    }
  }
  return 0;
}

