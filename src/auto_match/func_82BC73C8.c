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
extern int fn_82BBFDF0();


void fn_82BC73C8(int *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (*(int *)(param_2 + 0x578) == 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x5b0);
    puVar4 = (undefined4 *)fn_82B7BD28(uVar1,0x28);
    puVar6 = puVar4 + 1;
    *puVar4 = uVar1;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar4[2] = param_1;
      *puVar6 = 0;
      puVar4[3] = 0;
      fn_82BBFDF0(puVar4 + 4);
    }
    *(undefined4 **)(param_2 + 0x578) = puVar6;
  }
  iVar5 = *(int *)(param_2 + 0x578);
  if (iVar5 != 0) {
    do {
      piVar2 = *(int **)(iVar5 + 4);
      if (((*param_1 != *piVar2) || (param_1[1] != piVar2[1])) ||
         (bVar3 = true, param_1[2] != piVar2[2])) {
        bVar3 = false;
      }
      if (bVar3) {
        return;
      }
      iVar5 = *(int *)(iVar5 + 8);
    } while (iVar5 != 0);
  }
  uVar1 = *(undefined4 *)(param_2 + 0x5b0);
  puVar4 = (undefined4 *)fn_82B7BD28(uVar1,0x28);
  puVar6 = puVar4 + 1;
  *puVar4 = uVar1;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar4[2] = param_1;
    *puVar6 = 0;
    puVar4[3] = 0;
    fn_82BBFDF0(puVar4 + 4);
  }
  puVar6[2] = *(undefined4 *)(*(int *)(param_2 + 0x578) + 8);
  *(undefined4 **)(*(int *)(param_2 + 0x578) + 8) = puVar6;
  return;
}

