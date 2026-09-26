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
extern int fn_82D07768();


void fn_82D070C8(int param_1,int param_2,ulonglong param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_2 * 0x20 + *(int *)(param_1 + 8));
  *param_4 = *(undefined1 *)(puVar2 + 2);
  *(undefined4 *)(param_4 + 4) = puVar2[3];
  uVar1 = fn_82D07768(*(undefined1 *)(puVar2 + 2),puVar2[3]);
  *(undefined4 *)(param_4 + 8) = uVar1;
  *(undefined4 *)(param_4 + 0xc) = puVar2[6];
  param_4[0x14] = *(undefined1 *)(puVar2 + 4);
  *(undefined4 *)(param_4 + 0x10) = puVar2[7];
  if ((param_3 & 2) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar2;
  }
  *(undefined4 *)(param_4 + 0x1c) = uVar1;
  *(undefined4 *)(param_4 + 0x18) = 0;
  if (((param_3 & 1) != 0) && (*(char *)(puVar2 + 4) != '\0')) {
    *(undefined4 *)(param_4 + 0x18) = puVar2[5];
  }
  uVar1 = puVar2[1];
  *(int *)(param_4 + 0x24) = param_2;
  *(undefined4 *)(param_4 + 0x20) = uVar1;
  return;
}

