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
extern int fn_82A751F8();


ulonglong fn_82A58520(ulonglong param_1,int param_2,ulonglong param_3,int param_4,
                       ulonglong param_5,undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if ((param_3 & 0xffffffff) == 0x80) {
    uVar3 = 1;
  }
  else {
    iVar4 = fn_82A751F8(param_1,param_3,param_5,param_6);
    uVar2 = (longlong)iVar4 * (longlong)param_4 & 0xffffffff;
    uVar3 = (((longlong)((param_3 & 0xffffffff) * uVar2 + (param_1 & 0xffffffff) + -1) /
              (longlong)(param_1 & 0xffffffff) & 0xffffffffU) + 7 & 0xffffffff) >> 3;
    if (((((param_5 & 0xffffffff) == 2) && ((param_1 & 0xffffffff) == 0xac44)) && (param_2 == 2)) &&
       ((param_3 & 0xffffffff) == 32000)) {
      uVar5 = uVar3 * 8;
      lVar1 = uVar3 * 0x56220;
      while (31999 < (((longlong)(lVar1 + uVar2 + -1) / (longlong)uVar2 & 0xffffffffU) + 7 &
                     0xfffffff8)) {
        uVar5 = uVar5 - 8;
        uVar3 = uVar3 - 1;
        lVar1 = (uVar5 & 0xffffffff) * 0xac44;
      }
    }
    uVar3 = uVar3 & 0xffff;
  }
  return uVar3;
}

