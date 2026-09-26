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


undefined8 fn_82C2A470(int param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)((int)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  puVar2 = *(ulonglong **)(iVar1 + 4);
  if (puVar2 == (ulonglong *)0x0) {
    *(ulonglong **)(iVar1 + 8) = param_2;
  }
  else {
    while (*param_2 < *puVar2) {
      if (*(int *)((int)puVar2 + 0x24) == 0) {
        *(ulonglong **)(param_2 + 5) = puVar2;
        *(undefined4 *)((int)param_2 + 0x24) = 0;
        *(ulonglong **)((int)puVar2 + 0x24) = param_2;
        if (puVar2 == *(ulonglong **)(iVar1 + 4)) {
          *(ulonglong **)(iVar1 + 4) = param_2;
        }
        *(ulonglong **)(iVar1 + 8) = param_2;
      }
      puVar2 = *(ulonglong **)((int)puVar2 + 0x24);
      if (puVar2 == (ulonglong *)0x0) {
        *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
        return 0;
      }
    }
    *(ulonglong **)((int)param_2 + 0x24) = puVar2;
    *(undefined4 *)(param_2 + 5) = *(undefined4 *)(puVar2 + 5);
    if (*(int *)(puVar2 + 5) != 0) {
      *(ulonglong **)(*(int *)(puVar2 + 5) + 0x24) = param_2;
    }
    *(ulonglong **)(puVar2 + 5) = param_2;
    if (puVar2 != *(ulonglong **)(iVar1 + 4)) goto LAB_82c2a520;
  }
  *(ulonglong **)(iVar1 + 4) = param_2;
LAB_82c2a520:
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  return 0;
}

