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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82B80CD0();
extern int fn_82B86C90();


undefined8 fn_82ABF768(double param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  double extraout_f1;
  uint auStack_60 [4];
  undefined8 auStack_50 [10];
  
  if ((*param_2 & 0xe000000) == 0) {
LAB_82abf78c:
    uVar4 = 0;
  }
  else {
    uVar5 = fn_82B86C90(param_2[3],auStack_50,auStack_60);
    uVar1 = *param_2;
    uVar8 = 0;
    if ((uVar1 & 0xe000000) != 0) {
      uVar9 = 0;
      uVar6 = uVar5;
      do {
        uVar2 = (uVar1 >> 5 & 0xff) >> (uVar9 & 0x3f);
        uVar3 = (ulonglong)uVar2;
        if ((((uint)(1 << (uVar2 & 3)) & uVar5) == 0) ||
           (iVar7 = (int)((uVar3 & 3) << 1),
           uVar6 = fn_82B80CD0(*(undefined8 *)((int)auStack_50 + (int)((uVar3 & 3) << 3)),
                                     uVar6,((2 << (int)((uVar3 & 3) << 1) + 1) - 1U & auStack_60[0]
                                           & -1 << iVar7) >> iVar7,uVar1 & 0x1f),
           extraout_f1 != param_1)) goto LAB_82abf78c;
        uVar1 = *param_2;
        uVar8 = uVar8 + 1;
        uVar9 = uVar9 + 2;
      } while (uVar8 < (uVar1 >> 0x19 & 7));
    }
    uVar4 = 1;
  }
  return uVar4;
}

