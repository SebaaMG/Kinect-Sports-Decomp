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
extern unsigned int *auStack_10;


void fn_82897C08(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  int *piVar4;
  uint auStack_10 [4];
  
  piVar4 = (int *)(param_2 + 0x28);
  iVar1 = *piVar4;
  while (iVar1 != 0) {
    param_2 = *piVar4;
    piVar4 = (int *)(param_2 + 0x28);
    iVar1 = *(int *)(param_2 + 0x28);
  }
  if ((*(char *)(param_2 + 0x30) != '\0') || (bVar2 = false, *(char *)(param_1 + 0x30) != '\0')) {
    bVar2 = true;
  }
  auStack_10[0] = *(uint *)(param_1 + 0x34);
  if ((bVar2) && (*(char *)(param_2 + 0x30) != '\0')) {
    if (auStack_10[0] == 0) {
      auStack_10[0] = *(uint *)(param_2 + 0x34);
    }
    else {
      puVar3 = (uint *)(param_2 + 0x34);
      if (auStack_10[0] <= *(uint *)(param_2 + 0x34)) {
        puVar3 = auStack_10;
      }
      auStack_10[0] = *puVar3;
    }
  }
  *piVar4 = param_1;
  *(int *)(param_1 + 0x24) = param_2;
  if (!bVar2) {
    return;
  }
  for (; param_2 != 0; param_2 = *(int *)(param_2 + 0x24)) {
    param_1 = param_2;
  }
  do {
    *(uint *)(param_1 + 0x34) = auStack_10[0];
    *(undefined1 *)(param_1 + 0x30) = 1;
    param_1 = *(int *)(param_1 + 0x28);
  } while (param_1 != 0);
  return;
}

