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
extern int fn_82BC0088();


void fn_82BC0DD8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)(param_1 + 0x24);
  uVar5 = 0;
  if (*(int *)(iVar1 + 4) != 0) {
    iVar4 = 0;
    do {
      if ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 4)) {
        piVar2 = (int *)(*(int *)(iVar1 + 8) + iVar4);
      }
      else {
        piVar2 = (int *)fn_82BC0088(iVar1,uVar5);
      }
      iVar1 = *(int *)(param_1 + 0x24);
      if (*piVar2 == param_2) {
        if ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 4)) {
          puVar3 = (undefined4 *)(*(int *)(iVar1 + 8) + (int)uVar5 * 4);
        }
        else {
          puVar3 = (undefined4 *)fn_82BC0088(iVar1,uVar5);
        }
        *puVar3 = param_3;
        return;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 4));
  }
  return;
}

