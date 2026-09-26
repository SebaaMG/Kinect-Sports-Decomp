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
extern unsigned int *auStack_40;
extern int fn_8265C990();


void fn_82A37990(undefined4 *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined8 auStack_40 [8];
  
  uVar1 = *param_1;
  if (param_1[10] != 0) {
    RtlEnterCriticalSection(param_1 + 3);
    while (0 < (int)param_1[0xc]) {
      auStack_40[0] = 0xfffffffffff0bdc0;
      KeDelayExecutionThread(1,0,auStack_40);
    }
    NtSetEvent(param_1[10],0);
    if ((param_2 & 0xffffffff) != 0) {
      auStack_40[0] = 0xfffffffffa0a1f00;
      NtWaitForSingleObjectEx(param_2,1,0,auStack_40);
    }
    *param_1 = 0;
    param_1[0xb] = 0;
    RtlLeaveCriticalSection(param_1 + 3);
    NtClose(param_1[10]);
    param_1[10] = 0;
  }
  if (param_1[0x11] != 0) {
    fn_8265C990(uVar1,0x24830000);
    param_1[0x11] = 0;
  }
  return;
}

