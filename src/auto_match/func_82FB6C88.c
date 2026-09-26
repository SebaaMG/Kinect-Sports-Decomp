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
extern int fn_82F68CC0();
extern int fn_82FA5060();
extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


ulonglong fn_82FB6C88(uint *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar2 = param_1[2];
  uVar3 = fn_82FA5060(lbl_831BC768,(param_2 + (ulonglong)uVar2) * 0x34);
  if ((uVar3 & 0xffffffff) != 0) {
    iVar1 = (int)(param_1[1] - *param_1) / 0x34;
    lVar4 = (longlong)iVar1;
    if (*param_1 != 0) {
      if (iVar1 != 0) {
        lVar6 = 0;
        do {
          fn_82F68CC0(lVar6 + uVar3,lVar6 + (ulonglong)*param_1,0x34);
          lVar4 = lVar4 + -1;
          lVar6 = lVar6 + 0x34;
        } while (lVar4 != 0);
      }
      fn_82FA5190(lbl_831BC768,*param_1);
    }
    uVar5 = (uint)uVar3;
    *param_1 = uVar5;
    param_1[2] = (uint)(param_2 + (ulonglong)uVar2);
    uVar3 = 1;
    param_1[1] = iVar1 * 0x34 + uVar5;
  }
  return uVar3;
}

