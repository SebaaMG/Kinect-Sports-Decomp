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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A34310();
extern int fn_82A35648();
extern int fn_82F68CC0();


longlong fn_82A35940(int param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int aiStack_50 [20];
  
  if ((param_2 & 0xffffffff) == 0) {
    aiStack_50[3] = 4;
    aiStack_50[1] = 0;
    aiStack_50[2] = 0;
    aiStack_50[4] = 0;
    aiStack_50[5] = 0x20000;
    aiStack_50[7] = 0x40;
    aiStack_50[6] = 0x10;
    aiStack_50[8] = 0x40000;
  }
  else {
    fn_82F68CC0(aiStack_50,param_2,0x24);
    if (aiStack_50[0] != 0) goto code_r0x82a359b4;
  }
  aiStack_50[0] = 1;
code_r0x82a359b4:
  uVar1 = fn_82A34310(param_1,aiStack_50);
  lVar2 = fn_8265C940(uVar1,0x24830000);
  if (lVar2 == 0) {
    lVar3 = -0x3fffffe9;
  }
  else {
    lVar3 = fn_82A35648(param_1,aiStack_50,lVar2,uVar1);
    if (lVar3 < 0) {
      fn_8265C990(lVar2,0x24830000);
    }
    else {
      *(undefined4 *)(param_1 + 0x1b4) = 1;
    }
  }
  return lVar3;
}

