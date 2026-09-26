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
extern int fn_82274A80();
extern int fn_82275128();
extern int fn_8227D498();
extern int fn_8227D540();


void fn_82489170(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = fn_82275128();
  if (*(int *)(iVar1 + 0x1c) != 0) {
    for (piVar2 = *(int **)(iVar1 + 0x24); piVar2 != *(int **)(iVar1 + 0x28); piVar2 = piVar2 + 2) {
      for (piVar3 = *(int **)(*piVar2 + 0xc); piVar3 != *(int **)(*piVar2 + 0x10);
          piVar3 = piVar3 + 1) {
        if ((~*(uint *)(*piVar3 + 0x6c) & 1) != 0) goto LAB_8248922c;
      }
    }
  }
  if (*(int *)(iVar1 + 0x20) != 0) {
    for (piVar2 = *(int **)(iVar1 + 0x34); piVar2 != *(int **)(iVar1 + 0x38); piVar2 = piVar2 + 2) {
      for (piVar3 = *(int **)(*piVar2 + 0xc); piVar3 != *(int **)(*piVar2 + 0x10);
          piVar3 = piVar3 + 1) {
        if ((~*(uint *)(*piVar3 + 0x6c) & 1) != 0) goto LAB_8248922c;
      }
    }
  }
LAB_82489234:
  fn_82274A80();
  return;
LAB_8248922c:
  fn_8227D498();
  fn_8227D540();
  goto LAB_82489234;
}

