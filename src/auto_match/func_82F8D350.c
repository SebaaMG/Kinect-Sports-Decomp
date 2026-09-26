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


void fn_82F8D350(int param_1,int param_2,ulonglong param_3,uint param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 0x16bc);
  if ((int)uVar2 < 0xe) {
    iVar3 = uVar2 + 3;
    *(ushort *)(param_1 + 0x16b8) =
         (ushort)(param_4 << (uVar2 & 0x3f)) | *(ushort *)(param_1 + 0x16b8);
  }
  else {
    uVar2 = param_4 << (uVar2 & 0x3f) | (uint)*(ushort *)(param_1 + 0x16b8);
    *(short *)(param_1 + 0x16b8) = (short)uVar2;
    *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)uVar2;
    iVar3 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar3;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16b8);
    iVar3 = *(int *)(param_1 + 0x16bc) + -0xd;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(short *)(param_1 + 0x16b8) =
         (short)((param_4 & 0xffff) >> (0x10U - *(int *)(param_1 + 0x16bc) & 0x3f));
  }
  *(int *)(param_1 + 0x16bc) = iVar3;
  if (iVar3 < 9) {
    if (iVar3 < 1) goto code_r0x82f8d430;
    *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         (char)*(undefined2 *)(param_1 + 0x16b8);
  }
  else {
    *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         (char)*(undefined2 *)(param_1 + 0x16b8);
    iVar3 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar3;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16b8);
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
code_r0x82f8d430:
  *(undefined2 *)(param_1 + 0x16b8) = 0;
  *(undefined4 *)(param_1 + 0x16bc) = 0;
  *(undefined4 *)(param_1 + 0x16b4) = 8;
  *(char *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) = (char)param_3;
  iVar3 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar3;
  *(char *)(*(int *)(param_1 + 8) + iVar3) = (char)(param_3 >> 8);
  iVar3 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar3;
  *(char *)(*(int *)(param_1 + 8) + iVar3) = (char)~param_3;
  iVar3 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar3;
  *(char *)(*(int *)(param_1 + 8) + iVar3) = (char)(~param_3 >> 8);
  iVar3 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar3;
  if ((int)param_3 == 0) {
    return;
  }
  puVar1 = (undefined1 *)(param_2 + -1);
  do {
    puVar1 = puVar1 + 1;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *puVar1;
    iVar3 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar3;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return;
}

