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
extern int fn_82321D30();


void fn_82404590(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_30 [32];
  
  iVar4 = (**(code **)(**(int **)(*(int *)(param_1 + 0x80) + 0x3ec) + 0xc))();
  if (param_2 == 0) {
    pcVar1 = *(code **)(**(int **)(iVar4 + 0x24) + 4);
  }
  else {
    if (param_2 != 1) {
      return;
    }
    pcVar1 = *(code **)(**(int **)(iVar4 + 0x24) + 8);
  }
  iVar4 = (*pcVar1)();
  iVar5 = fn_82321D30(auStack_30,*(undefined4 *)(iVar4 + 0x5b0),iVar4);
  puVar2 = (undefined4 *)(in_r0 + iVar5 & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (undefined4 *)(iVar4 + 0x730U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  return;
}

