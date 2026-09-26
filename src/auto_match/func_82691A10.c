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
extern int fn_826914F8();
extern int fn_8270BE60();
extern unsigned int lbl_831E7E60;


longlong fn_82691A10(int param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = (ulonglong)lbl_831E7E60;
  RtlEnterCriticalSection(uVar2 + 0x2c4);
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x10) + 1;
  if ((uVar3 & 0xffffffff) < (param_3 & 0xffffffff)) {
    uVar3 = param_3;
  }
  trapWord(6,param_4,0);
  lVar1 = (longlong)
          (int)((((((-(ulonglong)(0x1000 < uVar3) & uVar3) + uVar3 + param_2) - 1 & ~(uVar3 - 1)) +
                 param_4) - 1 & 0xffffffff) / (param_4 & 0xffffffff)) * (longlong)(int)param_4;
  lVar1 = fn_826914F8(param_1,10,lVar1,0x1000,
                        ((ulonglong)
                         (((1 << (*(uint *)(param_1 + 0x14) & 0x3f)) + (int)lVar1) - 1U >>
                         (*(uint *)(param_1 + 0x14) & 0x3f)) + 0xf & 0xffffffff) >> 2 & 0x3ffffffc,
                        param_5);
  if (lVar1 != 0) {
    fn_8270BE60(param_1 + 0x14,lVar1);
  }
  RtlLeaveCriticalSection(uVar2 + 0x2c4);
  return lVar1;
}

