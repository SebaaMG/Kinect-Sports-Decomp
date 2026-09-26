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
extern int fn_82CE5410();
extern int fn_82D81240();


void fn_82D9D100(int param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_40 [64];
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x4c) - 1;
  if (-1 < (longlong)uVar3) {
    lVar4 = (uVar3 & 0x3fffffff) << 2;
    do {
      cVar2 = *(char *)(*(int *)(*(int *)(param_1 + 0x48) + (int)lVar4) + 0xd0);
      if (cVar2 < param_2) {
        iVar1 = (int)cVar2;
        if ((int)cVar2 < *param_4) {
          iVar1 = *param_4;
        }
        *param_4 = iVar1;
      }
      else {
        fn_82D81240(auStack_40,*(undefined4 *)(param_1 + 0x18));
        iVar1 = fn_82CE5410();
        cVar2 = (**(code **)(**(int **)(iVar1 + 0x10) + 0x24))(*(int **)(iVar1 + 0x10),param_3);
        if (cVar2 == '\0') {
          return;
        }
      }
      uVar3 = uVar3 - 1;
      lVar4 = lVar4 + -4;
    } while (-1 < (longlong)uVar3);
  }
  return;
}

