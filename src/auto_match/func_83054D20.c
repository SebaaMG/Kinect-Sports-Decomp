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
extern int fn_830503D0();
extern int fn_83050E80();
extern int fn_830547B8();
extern int fn_83054AB0();
extern int fn_83056268();
extern unsigned int stack0x00000020;


void fn_83054D20(int param_1,ulonglong *param_2,longlong param_3,undefined8 param_4,
                  ulonglong param_5,undefined8 param_6)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lStack00000020;
  
  iVar5 = param_1 + 0x38;
  lStack00000020 = param_3;
  RtlEnterCriticalSection(iVar5);
  if ((int)param_6 == 1) {
    if (((param_2[6] & 0xe000000000000000) == 0x4000000000000000) ||
       (bVar1 = true, (param_5 & 0xffffffff) + lStack00000020 < *param_2)) {
      bVar1 = false;
    }
    lVar4 = 1;
    if (bVar1) goto LAB_83054da0;
  }
  lVar4 = 0;
LAB_83054da0:
  if ((lVar4 == 0) || (*(ulonglong **)(param_1 + 0xa0) == param_2)) {
    uVar3 = fn_830503D0(param_1,&stack0x00000020,param_4,param_5,lVar4);
    if ((param_2 != (ulonglong *)0x0) &&
       (uVar2 = param_2[6],
       fn_830547B8(param_1,param_2,(uVar3 & 0xffffffff) + lStack00000020,lVar4),
       (uVar2 & 0xe000000000000000) != 0x4000000000000000)) {
      fn_83054AB0(param_1);
    }
    fn_83050E80(param_1,param_6);
    fn_83056268(*(undefined4 *)(param_1 + 0x60));
    RtlLeaveCriticalSection(iVar5);
  }
  else {
    *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) & 0x1fffffff | 0x20000000;
    RtlLeaveCriticalSection(iVar5);
  }
  return;
}

