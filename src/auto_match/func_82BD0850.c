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
extern int fn_82B7BD28();


void fn_82BD0850(int param_1,int *param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar3 = *param_2;
  *param_2 = iVar3 + 1;
  if (iVar3 + 1 == 7) {
    *param_2 = 0;
    if (*param_3 == 0) {
      uVar1 = *(undefined4 *)(param_4 + 0x5b0);
      puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x24);
      *puVar2 = uVar1;
      *(undefined4 **)(param_1 + 8) = puVar2 + 1;
      puVar2[8] = 0;
      iVar3 = *(int *)(param_1 + 8);
    }
    else {
      if (*(int *)(*param_3 + 0x1c) == 0) {
        uVar1 = *(undefined4 *)(param_4 + 0x5b0);
        puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x24);
        *puVar2 = uVar1;
        *(undefined4 **)(*param_3 + 0x1c) = puVar2 + 1;
        *(undefined4 *)(*(int *)(*param_3 + 0x1c) + 0x1c) = 0;
      }
      iVar3 = *(int *)(*param_3 + 0x1c);
    }
    *param_3 = iVar3;
  }
  return;
}

