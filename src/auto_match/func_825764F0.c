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
extern int fn_82F6B0C0();


undefined4 fn_825764F0(int param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  bVar3 = false;
  uVar4 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 8) + iVar5) != 0) {
        piVar1 = *(int **)(*(int *)(param_1 + 8) + iVar5);
        if (bVar3) {
          iVar2 = fn_82F6B0C0(piVar1 + 0x44,param_2,0x80);
          if (iVar2 == 0) {
            return *(undefined4 *)(uVar4 * 4 + *(int *)(param_1 + 8));
          }
        }
        else if (*piVar1 == *param_3) {
          bVar3 = true;
        }
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar4 < *(uint *)(param_1 + 0x10));
  }
  return 0;
}

