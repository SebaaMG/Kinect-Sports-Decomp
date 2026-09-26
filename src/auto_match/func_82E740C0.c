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


undefined8 fn_82E740C0(int *param_1,int param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if (puVar2 == (undefined8 *)0x0) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      puVar2 = *(undefined8 **)((int)puVar2 + 0xc);
    } while (iVar1 < param_2);
  }
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  if ((undefined8 *)param_1[2] == puVar2) {
    param_1[2] = 0;
  }
  *param_3 = *puVar2;
  *param_4 = *(undefined4 *)(puVar2 + 1);
  if (puVar2 == (undefined8 *)param_1[1]) {
    param_1[1] = *(int *)(puVar2 + 2);
  }
  if (puVar2 == (undefined8 *)*param_1) {
    *param_1 = *(int *)((int)puVar2 + 0xc);
  }
  if (*(int *)((int)puVar2 + 0xc) != 0) {
    *(undefined4 *)(*(int *)((int)puVar2 + 0xc) + 0x10) = *(undefined4 *)(puVar2 + 2);
  }
  if (*(int *)(puVar2 + 2) != 0) {
    *(undefined4 *)(*(int *)(puVar2 + 2) + 0xc) = *(undefined4 *)((int)puVar2 + 0xc);
  }
  *(int *)((int)puVar2 + 0xc) = param_1[4];
  param_1[4] = (int)puVar2;
  param_1[3] = param_1[3] + -1;
  return 1;
}

