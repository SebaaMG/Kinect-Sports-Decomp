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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_83032BB0();
extern int fn_83032BE0();
extern int fn_83032C58();
extern unsigned int lbl_831BC768;


ulonglong fn_8302EA88(uint *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar3 = param_2 + (ulonglong)param_1[2];
  uVar2 = fn_82FA5060(lbl_831BC768,(uVar3 + (uVar3 & 0x3fffffff) * 4 & 0x3fffffff) << 2);
  if ((uVar2 & 0xffffffff) != 0) {
    uVar1 = (int)(param_1[1] - *param_1) / 0x14;
    if (*param_1 != 0) {
      if (uVar1 != 0) {
        lVar7 = 0;
        lVar5 = (longlong)(int)uVar1;
        uVar6 = uVar2;
        do {
          if ((uVar6 & 0xffffffff) != 0) {
            fn_83032BB0(uVar6);
          }
          fn_83032C58(uVar6,lVar7 + (ulonglong)*param_1);
          fn_83032BE0(lVar7 + (ulonglong)*param_1);
          lVar5 = lVar5 + -1;
          lVar7 = lVar7 + 0x14;
          uVar6 = uVar6 + 0x14;
        } while (lVar5 != 0);
      }
      fn_82FA5190(lbl_831BC768,*param_1);
    }
    uVar4 = (uint)uVar2;
    *param_1 = uVar4;
    param_1[2] = (uint)uVar3;
    uVar2 = 1;
    param_1[1] = (int)(((longlong)(int)uVar1 + ((ulonglong)uVar1 & 0x3fffffff) * 4 & 0xffffffff) <<
                      2) + uVar4;
  }
  return uVar2;
}

