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
extern int fn_82292518();
extern int fn_822933E8();
extern int fn_8265CA20();
extern int fn_82864898();
extern int fn_82864E90();


/* WARNING: Removing unreachable block (ram,0x822926dc) */

void fn_82292670(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  fn_82292518();
  piVar3 = (int *)(param_1 + 0x44);
  if (*(int *)(param_1 + 0x44) != *(int *)(param_1 + 0x48)) {
    piVar2 = (int *)fn_82864E90();
    piVar2 = (int *)(**(code **)(*piVar2 + 0x18))();
    (**(code **)(*piVar2 + 0x10))(piVar2,piVar3);
  }
  iVar1 = *piVar3;
  if (iVar1 != *(int *)(param_1 + 0x48)) {
    fn_822933E8(iVar1,*(undefined4 *)(param_1 + 0x48));
    *(int *)(param_1 + 0x48) = iVar1;
  }
  if (*piVar3 != 0) {
    fn_822933E8(*piVar3,*(undefined4 *)(param_1 + 0x48));
    fn_8265CA20(*piVar3);
  }
  *piVar3 = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_8265CA20();
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    fn_8265CA20();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  fn_82864898(param_1);
  return;
}

