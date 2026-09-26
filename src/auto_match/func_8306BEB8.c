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
extern int fn_8306BD90();


void fn_8306BEB8(uint param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (*(char *)(param_2 + 0xfe) != '\0') {
    RtlEnterCriticalSection(0xffffffff83265098);
  }
  param_2[1] = param_1;
  param_2[2] = 0;
  lVar7 = 0xf9;
  param_2[3] = 0x67;
  puVar4 = param_2 + 0xfe;
  do {
    uVar3 = fn_8306BD90(param_2);
    lVar7 = lVar7 + -1;
    puVar4 = puVar4 + -1;
    *puVar4 = uVar3;
  } while (-1 < lVar7);
  uVar5 = 0xffffffffffffffff;
  uVar6 = 0xffffffff80000000;
  puVar4 = param_2;
  do {
    puVar1 = puVar4 + 7;
    uVar2 = (uint)uVar5;
    uVar5 = (uVar5 & 0xffffffff) >> 1;
    uVar3 = (uint)uVar6;
    uVar6 = (uVar6 & 0xffffffff) >> 1;
    puVar4 = puVar4 + 7;
    *puVar4 = *puVar1 & uVar2 | uVar3;
  } while (uVar6 != 0);
  if (*(char *)(param_2 + 0xfe) != '\0') {
    RtlLeaveCriticalSection(0xffffffff83265098);
  }
  return;
}

