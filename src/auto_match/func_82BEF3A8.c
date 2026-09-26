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
extern int fn_82BE5378();


undefined8 fn_82BEF3A8(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if ((*(int *)(param_1 + 0x34) == 2) || (*(uint *)(param_1 + 0x58) < 2)) {
    fn_82BE5340(param_1 + 0x4c);
    if ((*(int *)(param_1 + 0x54) != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
      piVar3 = *(int **)(*(int *)(param_1 + 0x2c) + 0x34);
      if (piVar3 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (**(code **)(*piVar3 + 4))();
      }
      piVar3 = (int *)fn_82BE5378(param_1 + 0x4c);
      if (*piVar3 != iVar2) goto LAB_82bef3d0;
    }
    uVar4 = 2;
    uVar1 = 0x195;
  }
  else {
LAB_82bef3d0:
    uVar4 = 0x10;
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return uVar1;
}

