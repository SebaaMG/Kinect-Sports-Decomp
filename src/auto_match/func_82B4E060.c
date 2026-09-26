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
extern int fn_82AA6648();


undefined4 fn_82B4E060(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  char *pcVar6;
  
  puVar1 = *(uint **)(param_1 + 0x248);
  if ((puVar1[1] & 1) == 0) {
    iVar5 = (*puVar1 & 0xfffffffe) - 4;
  }
  else {
    iVar5 = 0;
  }
  pcVar6 = (char *)(*(int *)(iVar5 + 8) * 0x20 + iVar5);
  if (*pcVar6 != '\0') {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -2;
  }
  uVar2 = *(undefined4 *)(pcVar6 + -4);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(pcVar6 + 4);
  if ((puVar1[1] & 1) == 0) {
    puVar4 = (uint *)((*puVar1 & 0xfffffffe) - 4);
  }
  else {
    puVar4 = (uint *)0x0;
  }
  uVar3 = puVar4[2];
  puVar4[2] = (uint)((ulonglong)uVar3 - 1);
  if ((ulonglong)uVar3 - 1 == 0) {
    *(uint *)(puVar4[1] & 0xfffffffe) = *puVar4;
    *(uint *)(*puVar4 & 0xfffffffe) = puVar4[1];
    fn_82AA6648(puVar1,puVar4,puVar4[3] * 0x20 + 0x10);
  }
  return uVar2;
}

