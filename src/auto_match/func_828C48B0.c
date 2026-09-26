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
extern unsigned int iStack00000014;
extern unsigned int uStack_20;


void fn_828C48B0(undefined8 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iStack00000014;
  undefined4 uStack_20;
  
  uVar6 = param_2 - 1;
  iStack00000014 = (int)param_1;
  uStack_20 = (int)((ulonglong)param_1 >> 0x20);
  iVar2 = ((int)uVar6 >> 1) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0);
  while (iVar1 = iVar2, param_3 < param_2) {
    uVar3 = iStack00000014 + iVar1;
    uVar6 = uVar3 >> 2;
    if (*(uint *)(uStack_20 + 8) <= uVar6) {
      uVar6 = uVar6 - *(uint *)(uStack_20 + 8);
    }
    if (*(uint *)(*param_4 + 8) <=
        *(uint *)(*(int *)(*(int *)(*(int *)(uStack_20 + 4) + uVar6 * 4) + (uVar3 & 3) * 4) + 8))
    break;
    uVar6 = uVar3 >> 2;
    if (*(uint *)(uStack_20 + 8) <= uVar6) {
      uVar6 = uVar6 - *(uint *)(uStack_20 + 8);
    }
    uVar4 = (uint)(iStack00000014 + param_2) >> 2;
    if (*(uint *)(uStack_20 + 8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(uStack_20 + 8);
    }
    uVar5 = iVar1 - 1;
    *(undefined4 *)
     (*(int *)(*(int *)(uStack_20 + 4) + uVar4 * 4) + (iStack00000014 + param_2 & 3U) * 4) =
         *(undefined4 *)(*(int *)(*(int *)(uStack_20 + 4) + uVar6 * 4) + (uVar3 & 3) * 4);
    iVar2 = ((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0);
    param_2 = iVar1;
  }
  uVar6 = (uint)(iStack00000014 + param_2) >> 2;
  if (*(uint *)(uStack_20 + 8) <= uVar6) {
    uVar6 = uVar6 - *(uint *)(uStack_20 + 8);
  }
  *(int *)(*(int *)(*(int *)(uStack_20 + 4) + uVar6 * 4) + (iStack00000014 + param_2 & 3U) * 4) =
       *param_4;
  return;
}

