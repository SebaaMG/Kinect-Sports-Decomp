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
extern int fn_82F63BA0();
extern int fn_82F68240();


ulonglong fn_82F6DDE0(undefined8 param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
                       code *param_5)

{
  undefined4 *puVar2;
  longlong lVar1;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar4 = (int)param_4;
  uVar6 = (longlong)((int)param_3 + -1) * (longlong)iVar4 + param_2;
  if (((((param_2 & 0xffffffff) == 0) && ((param_3 & 0xffffffff) != 0)) || (iVar4 == 0)) ||
     (param_5 == (code *)0x0)) {
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
  }
  else if ((param_2 & 0xffffffff) <= (uVar6 & 0xffffffff)) {
    do {
      uVar3 = (param_3 & 0xffffffff) >> 1;
      if (uVar3 == 0) {
        if ((param_3 & 0xffffffff) == 0) {
          return 0;
        }
        lVar1 = (*param_5)(param_1,param_2);
        return -(ulonglong)(lVar1 == 0) & param_2;
      }
      iVar5 = (int)uVar3;
      if ((param_3 & 1) == 0) {
        iVar5 = iVar5 + -1;
      }
      uVar7 = (longlong)iVar5 * (longlong)iVar4 + param_2;
      iVar5 = (*param_5)(param_1,uVar7);
      if (iVar5 == 0) {
        return uVar7;
      }
      if (iVar5 < 0) {
        uVar6 = uVar7 - param_4;
        if ((param_3 & 1) == 0) {
          uVar3 = uVar3 - 1;
        }
      }
      else {
        param_2 = uVar7 + param_4;
      }
      param_3 = uVar3;
    } while ((param_2 & 0xffffffff) <= (uVar6 & 0xffffffff));
  }
  return 0;
}

