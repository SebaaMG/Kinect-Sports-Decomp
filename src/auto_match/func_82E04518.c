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
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CED5B8();
extern int fn_82F68B70();


void fn_82E04518(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  
  iVar2 = fn_82F68B70();
  iVar3 = fn_82CE5410();
  uVar4 = (ulonglong)*(uint *)(iVar2 + 8);
  piVar1 = *(int **)(iVar3 + 0x10);
  if (0 < (int)*(uint *)(iVar2 + 8)) {
    piVar5 = (int *)(*(int *)(iVar2 + 4) + 4);
    do {
      if (*piVar5 != 0) {
        fn_82CE4118();
      }
      *piVar5 = 0;
      fn_82CED5B8(piVar5 + -1);
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  *(undefined4 *)(iVar2 + 8) = 0;
  if ((*(uint *)(iVar2 + 0xc) & 0x80000000) == 0) {
    (**(code **)(*piVar1 + 0x10))
              (piVar1,*(undefined4 *)(iVar2 + 4),*(uint *)(iVar2 + 0xc) & 0x3fffffff,8);
  }
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0x80000000;
  fn_82CED5B8(iVar2);
  return;
}

