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


void fn_82E67B18(int *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *param_1;
  if ((*(int *)(iVar2 + 0xd4) == 1) && (param_4 != 0)) {
    if (*(int *)(iVar2 + 0x3c) < 3) {
      bVar1 = **(byte **)(param_2 + 0x74);
      **(byte **)(param_2 + 0x74) = bVar1 & 0xf0;
      **(byte **)(param_2 + 0x74) = **(byte **)(param_2 + 0x74) | (bVar1 & 0xf) + 1;
      *(char *)(param_2 + 0x81) = *(char *)(param_2 + 0x81) + '\x01';
      return;
    }
    if (*(char *)(param_2 + 0x81) == '\0') {
      uVar5 = 0x1a - *(int *)(iVar2 + 8);
      puVar3 = *(uint **)(param_2 + 0x74);
      uVar4 = ~(*(int *)(iVar2 + 0xc) << (uVar5 & 0x3f)) & *puVar3;
      *puVar3 = uVar4;
      *puVar3 = *(int *)(param_2 + 0x38) << (uVar5 & 0x3f) | uVar4;
      if (param_3 != 0) {
        **(byte **)(param_2 + 0x74) = **(byte **)(param_2 + 0x74) | 8;
      }
    }
    if (*(char *)(param_2 + 0x81) != '\0') {
      if (*(int *)(param_2 + 0x48) == 0) {
        *(byte *)(*(int *)(param_2 + 0x24) + -1) = *(byte *)(*(int *)(param_2 + 0x24) + -1) | 1;
        *(char *)(param_2 + 0x81) = *(char *)(param_2 + 0x81) + '\x01';
        return;
      }
      **(byte **)(param_2 + 0x24) =
           (byte)(1 << (8U - *(int *)(param_2 + 0x48) & 0x3f)) | **(byte **)(param_2 + 0x24);
    }
  }
  *(char *)(param_2 + 0x81) = *(char *)(param_2 + 0x81) + '\x01';
  return;
}

