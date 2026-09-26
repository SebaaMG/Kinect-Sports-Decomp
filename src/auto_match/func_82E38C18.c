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
extern int fn_82C3C340();


ulonglong fn_82E38C18(ulonglong param_1,int param_2,ulonglong param_3,int param_4,
                       ulonglong param_5,undefined8 param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((param_3 & 0xffffffff) == 0x80) {
    uVar2 = 1;
  }
  else {
    iVar3 = fn_82C3C340(param_1,param_3,param_5,param_6);
    uVar1 = (longlong)iVar3 * (longlong)param_4 & 0xffffffff;
    uVar5 = param_1 & 0xffffffff;
    uVar4 = ((param_3 & 0xffffffff) * uVar1 + uVar5) - 1;
    trapDoubleWordImmediate(6,uVar5,0);
    uVar2 = (((longlong)uVar4 / (longlong)uVar5 & 0xffffffffU) + 7 & 0xffffffff) >> 3;
    trapDoubleWordImmediate(5,uVar5 & ~((uVar4 * 2 | uVar4 >> 0x3f) - 1),0xffff);
    if (((((param_5 & 0xffffffff) == 2) && ((param_1 & 0xffffffff) == 0xac44)) && (param_2 == 2)) &&
       ((param_3 & 0xffffffff) == 32000)) {
      uVar5 = uVar2 * 8;
      trapDoubleWordImmediate(6,uVar1,0);
      uVar4 = (uVar2 * 0x56220 + uVar1) - 1;
      trapDoubleWordImmediate(5,uVar1 & ~((uVar4 * 2 | uVar4 >> 0x3f) - 1),0xffff);
      while (31999 < (((longlong)uVar4 / (longlong)uVar1 & 0xffffffffU) + 7 & 0xfffffff8)) {
        uVar5 = uVar5 - 8;
        uVar2 = uVar2 - 1;
        trapDoubleWordImmediate(6,uVar1,0);
        uVar4 = ((uVar5 & 0xffffffff) * 0xac44 + uVar1) - 1;
        trapDoubleWordImmediate(5,uVar1 & ~((uVar4 * 2 | uVar4 >> 0x3f) - 1),0xffff);
      }
    }
    uVar2 = uVar2 & 0xffff;
  }
  return uVar2;
}

