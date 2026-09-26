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
extern unsigned int *auStack_30;
extern int fn_82F68CC0();
extern U64 storeWordConditionalIndexed();


undefined8 fn_82A37680(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  char in_RESERVE;
  byte in_cr0;
  undefined8 auStack_30 [6];
  
  RtlEnterCriticalSection(param_1 + 0xc);
  piVar3 = (int *)param_1;
  uVar4 = piVar3[0xc];
  while( true ) {
    puVar5 = (uint *)(param_1 + 0x30);
    if (uVar4 != piVar3[0xb]) break;
    auStack_30[0] = 0xfffffffffffe7960;
    KeDelayExecutionThread(1,0,auStack_30);
    uVar4 = *puVar5;
  }
  fn_82F68CC0(piVar3[2],param_2,0x60);
  iVar1 = piVar3[2];
  piVar3[2] = iVar1 + 0x60;
  if (iVar1 + 0x60 == piVar3[0xb] * 0x60 + *piVar3) {
    piVar3[2] = *piVar3;
  }
  piVar3[0xe] = piVar3[0xe] + 1;
  do {
    uVar4 = *puVar5;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((ulonglong)uVar4 + 1,0,param_1 + 0x30);
      *puVar5 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if ((int)((ulonglong)uVar4 + 1) == 1) {
    NtSetEvent(piVar3[10],0);
  }
  RtlLeaveCriticalSection(param_1 + 0xc);
  return 1;
}

