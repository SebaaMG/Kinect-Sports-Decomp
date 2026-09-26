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
extern unsigned int *auStack_30;


undefined1 * fn_82D03028(undefined1 *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 auStack_30 [4];
  int aiStack_2c [11];
  
  iVar1 = *(int *)(param_2 + 0xa8);
  pcVar7 = (char *)(**(code **)(**(int **)(param_2 + 0x98) + 0x14))
                             (auStack_30,*(int **)(param_2 + 0x98),iVar1,
                              *(undefined4 *)(iVar1 + 0xc),param_3,aiStack_2c);
  if (*pcVar7 == '\0') {
    *param_1 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0xc);
    iVar3 = *(int *)(param_2 + 0x14);
    iVar4 = *(int *)(param_2 + 0x10);
    *param_1 = 1;
    uVar6 = aiStack_2c[0] - iVar2 & 0xfffffff0;
    uVar5 = *(uint *)(iVar3 + iVar4 + 4);
    *(uint *)(param_2 + 0x14) = iVar3 + uVar6;
    *(int *)(iVar1 + 0xc) = aiStack_2c[0];
    *(uint *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + uVar6;
    *(uint *)(*(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x10) + 4) =
         (uVar5 & 0xfffffffc) - uVar6 | 2;
  }
  return param_1;
}

