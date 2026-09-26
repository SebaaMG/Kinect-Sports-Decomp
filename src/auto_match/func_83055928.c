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
extern int fn_830508A0();
extern int fn_83051330();
extern int fn_83051C68();
extern unsigned int stack0x00000020;


void fn_83055928(int param_1,int param_2,longlong param_3,undefined8 param_4,ulonglong param_5,
                  undefined8 param_6)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lStack00000020;
  
  lStack00000020 = param_3;
  RtlEnterCriticalSection(param_1 + 0x38);
  if ((((int)param_6 != 1) || ((*(byte *)(param_1 + 0xb8) & 0x80) == 0)) ||
     (uVar2 = 1, (param_5 & 0xffffffff) + lStack00000020 < *(ulonglong *)(param_1 + 0xb0))) {
    uVar2 = 0;
  }
  uVar1 = fn_83051330(param_1,&stack0x00000020,param_4,param_5,uVar2);
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) & 0x7f;
  if (param_2 != 0) {
    fn_830508A0(param_1,*(undefined8 *)(param_1 + 0xb0),(uVar1 & 0xffffffff) + lStack00000020);
  }
  fn_83051C68(param_1,param_6);
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) & 0xbf;
  RtlLeaveCriticalSection(param_1 + 0x38);
  return;
}

