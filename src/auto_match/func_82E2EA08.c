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


undefined8 fn_82E2EA08(undefined4 *param_1,int param_2,undefined2 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)*param_1;
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if (puVar2 == (undefined2 *)0x0) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      puVar2 = *(undefined2 **)(puVar2 + 4);
    } while (iVar1 < param_2);
  }
  if (puVar2 == (undefined2 *)0x0) {
    return 0;
  }
  if ((undefined2 *)param_1[2] == puVar2) {
    param_1[2] = 0;
  }
  *param_3 = *puVar2;
  *param_4 = *(undefined4 *)(puVar2 + 2);
  if (puVar2 == (undefined2 *)param_1[1]) {
    param_1[1] = *(undefined4 *)(puVar2 + 6);
  }
  if (puVar2 == (undefined2 *)*param_1) {
    *param_1 = *(undefined4 *)(puVar2 + 4);
  }
  if (*(int *)(puVar2 + 4) != 0) {
    *(undefined4 *)(*(int *)(puVar2 + 4) + 0xc) = *(undefined4 *)(puVar2 + 6);
  }
  if (*(int *)(puVar2 + 6) != 0) {
    *(undefined4 *)(*(int *)(puVar2 + 6) + 8) = *(undefined4 *)(puVar2 + 4);
  }
  *(undefined4 *)(puVar2 + 4) = param_1[4];
  param_1[4] = puVar2;
  param_1[3] = param_1[3] + -1;
  return 1;
}

