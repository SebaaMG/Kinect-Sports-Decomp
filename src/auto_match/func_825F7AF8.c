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
extern unsigned int *auStack_1c;
extern unsigned int *auStack_20;
extern int fn_82520158();
extern int fn_825F7A58();
extern int fn_826249A8();


int fn_825F7AF8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  piVar2 = *(int **)(param_1 + 0x934);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)fn_825F7A58();
    *(int **)(param_1 + 0x934) = piVar2;
    fn_82520158(0xffffffff821ca51c,auStack_1c,0);
    fn_82520158(0xffffffff821ca540,auStack_20,0);
    iVar3 = fn_826249A8(1,1,auStack_1c,auStack_20,0,0);
    if (iVar3 == 0) {
      return 0;
    }
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      while (piVar2 = (int *)(iVar1 + 0x4c), *piVar2 != 0) {
        iVar1 = *piVar2;
      }
LAB_825f7c40:
      *piVar2 = iVar3;
      return iVar3;
    }
  }
  else {
    for (iVar3 = *piVar2; (iVar3 != 0 && (*(int *)(iVar3 + 0x44) != 1));
        iVar3 = *(int *)(iVar3 + 0x4c)) {
    }
    if (iVar3 != 0) {
      return iVar3;
    }
    fn_82520158(0xffffffff821ca51c,auStack_20,0);
    fn_82520158(0xffffffff821ca540,auStack_1c,0);
    iVar3 = fn_826249A8(1,1,auStack_20,auStack_1c,0,0);
    if (iVar3 == 0) {
      return 0;
    }
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      while (piVar2 = (int *)(iVar1 + 0x4c), *piVar2 != 0) {
        iVar1 = *piVar2;
      }
      goto LAB_825f7c40;
    }
  }
  *piVar2 = iVar3;
  return iVar3;
}

