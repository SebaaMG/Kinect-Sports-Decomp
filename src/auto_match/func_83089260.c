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


undefined8 fn_83089260(undefined8 param_1,undefined8 param_2,byte *param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  pbVar2 = param_3 + -4;
  puVar3 = (undefined4 *)(param_4 + 8);
  lVar4 = 8;
  do {
    puVar3[-2] = *(undefined4 *)(pbVar2 + 4);
    puVar3[-1] = *(undefined4 *)(pbVar2 + 8);
    *puVar3 = *(undefined4 *)(((int)param_3 - param_4) + (int)puVar3);
    pbVar2 = pbVar2 + 0x10;
    puVar3[1] = *(undefined4 *)pbVar2;
    puVar3 = puVar3 + 4;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  bVar1 = *param_3;
  if (bVar1 < 5) {
    if (bVar1 == 0) {
      if (*(int *)(param_3 + 0x34) < *(int *)(param_3 + 0x3c)) {
        *(int *)(param_4 + 0x3c) = *(int *)(param_3 + 0x34);
        *(int *)(param_3 + 0x3c) = *(int *)(param_3 + 0x3c) - *(int *)(param_3 + 0x34);
        *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x34) * 0x30 + *(int *)(param_3 + 0x38);
        return 1;
      }
    }
    else if (bVar1 == 1) {
      if (*(int *)(param_3 + 0x24) < *(int *)(param_3 + 0x2c)) {
        *(int *)(param_4 + 0x2c) = *(int *)(param_3 + 0x24);
        *(int *)(param_3 + 0x2c) = *(int *)(param_3 + 0x2c) - *(int *)(param_3 + 0x24);
        *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x24) * 0x20 + *(int *)(param_3 + 0x28);
        return 1;
      }
    }
    else if (bVar1 != 2) {
      if (bVar1 == 3) {
        if (*(int *)(param_3 + 0x30) < *(int *)(param_3 + 0x38)) {
          *(int *)(param_4 + 0x38) = *(int *)(param_3 + 0x30);
          *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) - *(int *)(param_3 + 0x30);
          *(int *)(param_3 + 0x34) = *(int *)(param_3 + 0x30) * 0x50 + *(int *)(param_3 + 0x34);
          return 1;
        }
      }
      else if (*(int *)(param_3 + 0x20) < *(int *)(param_3 + 0x28)) {
        *(int *)(param_4 + 0x28) = *(int *)(param_3 + 0x20);
        *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) - *(int *)(param_3 + 0x20);
        *(int *)(param_3 + 0x24) = *(int *)(param_3 + 0x20) * 0x30 + *(int *)(param_3 + 0x24);
        return 1;
      }
    }
  }
  return 0;
}

