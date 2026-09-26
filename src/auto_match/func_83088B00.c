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


undefined8 fn_83088B00(undefined8 param_1,undefined8 param_2,char *param_3,int param_4)

{
  char *pcVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  pcVar1 = param_3 + -4;
  puVar2 = (undefined4 *)(param_4 + 8);
  lVar3 = 8;
  do {
    puVar2[-2] = *(undefined4 *)(pcVar1 + 4);
    puVar2[-1] = *(undefined4 *)(pcVar1 + 8);
    *puVar2 = *(undefined4 *)(((int)param_3 - param_4) + (int)puVar2);
    pcVar1 = pcVar1 + 0x10;
    puVar2[1] = *(undefined4 *)pcVar1;
    puVar2 = puVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*param_3 == '\0') {
    if (*(int *)(param_3 + 0x20) < *(int *)(param_3 + 0x28)) {
      *(int *)(param_4 + 0x28) = *(int *)(param_3 + 0x20);
      *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) - *(int *)(param_3 + 0x20);
      *(int *)(param_3 + 0x24) = *(int *)(param_3 + 0x20) * 0x50 + *(int *)(param_3 + 0x24);
      return 1;
    }
  }
  else if ((*param_3 == '\x01') && (*(int *)(param_3 + 0x20) < *(int *)(param_3 + 0x28))) {
    *(int *)(param_4 + 0x28) = *(int *)(param_3 + 0x20);
    param_3[0x30] = '\0';
    param_3[0x31] = '\0';
    param_3[0x32] = '\0';
    param_3[0x33] = '\0';
    *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) - *(int *)(param_3 + 0x20);
    *(int *)(param_3 + 0x24) = *(int *)(param_3 + 0x20) * 0x40 + *(int *)(param_3 + 0x24);
    return 1;
  }
  return 0;
}

