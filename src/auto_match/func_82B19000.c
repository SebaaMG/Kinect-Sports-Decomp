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


void fn_82B19000(int param_1,int param_2,char param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  
  do {
    bVar5 = false;
    for (uVar1 = *(uint *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
        uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4)) {
      if (*(int *)(uVar1 + 0x2c) == param_2) {
        for (piVar2 = *(int **)(uVar1 + 0xc); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
          iVar3 = *piVar2;
          if ((*(int *)(iVar3 + 0x2c) != param_2) &&
             ((param_3 == '\0' ||
              (uVar4 = (ulonglong)*(uint *)(iVar3 + 0x30) & 0x7ffff,
              (*(uint *)(((int)(uVar4 >> 5) + 1) * 4 + *(int *)(uVar1 + 0x28)) &
              1 << ((uint)uVar4 & 0x1f)) == 0)))) {
            *(int *)(iVar3 + 0x2c) = param_2;
            bVar5 = true;
          }
        }
      }
    }
  } while (bVar5);
  return;
}

