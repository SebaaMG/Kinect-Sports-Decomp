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
extern int fn_82268638();
extern int fn_82538DC0();
extern int fn_82538E40();
extern int fn_82539150();
extern int fn_828EDC38();


ulonglong fn_82538AB8(ulonglong param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
                       int param_5)

{
  uint uVar1;
  char cVar5;
  int iVar4;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  iVar6 = (int)param_4;
  if (iVar6 != 0) {
    if (iVar6 != 1) {
      iVar4 = fn_82538E40(param_5);
      if (iVar6 <= iVar4) {
        (*(undefined4 **)(param_5 + 0x10))[1] = **(undefined4 **)(param_5 + 0x10);
        for (uVar8 = param_1; (uVar8 & 0xffffffff) != (param_2 & 0xffffffff); uVar8 = uVar8 + 0x38)
        {
          cVar5 = fn_828EDC38(uVar8 + 0x28);
          if (cVar5 == '\0') {
            fn_82538DC0(param_5,uVar8);
          }
          else {
            fn_82268638(param_1);
            param_1 = param_1 + 0x38;
          }
        }
        uVar1 = (*(uint **)(param_5 + 0x10))[1];
        uVar8 = param_1;
        for (uVar9 = (ulonglong)**(uint **)(param_5 + 0x10);
            (uVar9 & 0xffffffff) != (ulonglong)uVar1; uVar9 = uVar9 + 0x38) {
          fn_82268638(uVar8,uVar9);
          uVar8 = uVar8 + 0x38;
        }
        return param_1;
      }
      lVar7 = (longlong)(iVar6 >> 1) + (ulonglong)(iVar6 < 0 && (param_4 & 1) != 0);
      lVar10 = lVar7 * 0x38 + param_1;
      uVar2 = fn_82538AB8(param_1,lVar10,param_3,lVar7,param_5);
      uVar3 = fn_82538AB8(lVar10,param_2,param_3,param_4 - lVar7,param_5);
      uVar8 = fn_82539150(uVar2,lVar10,uVar3,((int)lVar10 - (int)uVar2) / 0x38,
                                ((int)uVar3 - (int)lVar10) / 0x38,param_5);
      return uVar8;
    }
    cVar5 = fn_828EDC38(param_1 + 0x28);
    if (cVar5 != '\0') {
      return param_2;
    }
  }
  return param_1;
}

