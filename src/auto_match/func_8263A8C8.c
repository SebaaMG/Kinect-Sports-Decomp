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
extern int fn_8264DA70();
extern int fn_82A1DDC0();
extern int fn_82F68CC0();


void fn_8263A8C8(int param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte abStack_620 [1536];
  byte abStack_20 [8];
  
  fn_8264DA70(abStack_620,param_2,0);
  pbVar6 = (byte *)(param_1 + 0x3b70);
  pbVar5 = abStack_620;
  pbVar4 = pbVar6;
  do {
    bVar1 = *pbVar5;
    bVar2 = *pbVar4;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar5 = pbVar5 + 1;
    pbVar4 = pbVar4 + 1;
  } while (pbVar5 != abStack_20);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
    iVar3 = KeGetCurrentProcessType();
    if (iVar3 != 2) {
      if ((*(int *)(param_1 + 0x5e6c) != 0) && ((*(uint *)(param_1 + 0x5e70) & 0x80000000) == 0)) {
        fn_82A1DDC0(*(int *)(param_1 + 0x5e6c),pbVar6,0x600);
      }
      *(uint *)(param_1 + 0x5e70) = *(uint *)(param_1 + 0x5e70) | 0x80000000;
    }
    fn_82F68CC0(pbVar6,abStack_620,0x600);
    *(uint *)(param_1 + 0x421c) = *(uint *)(param_1 + 0x421c) | 2;
  }
  return;
}

