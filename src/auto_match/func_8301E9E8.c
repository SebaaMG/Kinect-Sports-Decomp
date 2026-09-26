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
extern int fn_82FA5190();
extern int fn_82FFFA70();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E0;


longlong fn_8301E9E8(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar3 = (ulonglong)lbl_832642E0;
  RtlEnterCriticalSection(uVar3 + 0x1628);
  uVar1 = param_1[1];
  iVar5 = (int)((ulonglong)uVar1 - 1);
  param_1[1] = iVar5;
  if (iVar5 == 0) {
    uVar4 = (ulonglong)lbl_832642E0;
    uVar2 = param_1[3];
    lVar6 = uVar4 + 0x1628;
    RtlEnterCriticalSection(lVar6);
    fn_82FFFA70(uVar4 + 0x1644,uVar2);
    RtlLeaveCriticalSection(lVar6);
    uVar2 = lbl_831BC768;
    (**(code **)*param_1)(param_1,0);
    fn_82FA5190(uVar2,param_1);
  }
  RtlLeaveCriticalSection(uVar3 + 0x1628);
  return (ulonglong)uVar1 - 1;
}

