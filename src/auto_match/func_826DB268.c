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
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_826DABA8();
extern int fn_826DAEE0();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_826DB268(longlong param_1,undefined4 param_2,ulonglong param_3)

{
  undefined4 uStack0000001c;
  undefined4 auStack_30 [12];
  
  uStack0000001c = param_2;
  RtlEnterCriticalSection(param_1 + 0x14);
  if ((param_3 & 0xffffffff) == 0) {
    fn_826DABA8(param_1 + 0x10,&stack0x0000001c);
  }
  else {
    fn_8267C4C8(param_3);
    auStack_30[0] = (undefined4)param_3;
    fn_826DAEE0(param_1 + 0x10,param_1 + 0x10,auStack_30);
    fn_8267C4F0(param_3);
  }
  RtlLeaveCriticalSection(param_1 + 0x14);
  return;
}

