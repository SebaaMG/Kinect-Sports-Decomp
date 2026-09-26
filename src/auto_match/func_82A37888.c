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


void fn_82A37888(uint *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 auStack_30 [6];
  
  RtlEnterCriticalSection(param_1 + 3);
  uVar6 = param_1[0xc];
  uVar4 = (ulonglong)param_1[2];
  iVar3 = 0;
  if (-1 < (int)uVar6) {
    uVar1 = param_1[0xb];
    uVar5 = (ulonglong)uVar1;
    do {
      trapWord(6,uVar5,0);
      uVar2 = ((longlong)((int)((int)uVar4 - *param_1) / 0x60) + uVar5) - 1;
      uVar4 = (uVar2 - (longlong)((int)uVar2 / (int)uVar1) * (longlong)(int)uVar1) * 0x60 +
              (ulonglong)*param_1;
      trapWord(5,uVar5 & ~(((uVar2 & 0x7fffffff) << 1 | (uVar2 & 0xffffffff) >> 0x1f) - 1),0xffff);
      if (*(int *)((int)uVar4 + 0x14) == param_2) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 <= (int)uVar6);
    if (iVar3 <= (int)uVar6) {
      uVar6 = param_1[0xe] - iVar3;
      goto LAB_82a37948;
    }
  }
  if (param_1[0xb] == uVar6) {
    uVar6 = param_1[0xe] - uVar6;
  }
  else {
    uVar6 = param_1[0x10];
  }
LAB_82a37948:
  RtlLeaveCriticalSection(param_1 + 3);
  while ((uVar6 - param_1[0x10]) - 1 <= param_1[0xb]) {
    auStack_30[0] = 0xfffffffffffe7960;
    KeDelayExecutionThread(1,0,auStack_30);
  }
  return;
}

