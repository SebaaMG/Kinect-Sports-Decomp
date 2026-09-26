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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_82790678();
extern int fn_82792F70();
extern int fn_82794EE8();
extern int fn_82795918();
extern int fn_82F68CC0();
extern unsigned int iStack_40;


void fn_82795E00(int param_1,undefined8 param_2,short *param_3,undefined8 param_4,
                  ulonglong param_5,ulonglong param_6)

{
  short *psVar1;
  short sVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 auStack_50 [2];
  undefined1 auStack_48 [8];
  int iStack_40;
  
  if ((int)param_5 != 0) {
    if ((int)param_5 == -1) {
      param_5 = 0;
      sVar2 = *param_3;
      psVar1 = param_3;
      while (sVar2 != 0) {
        psVar1 = psVar1 + 1;
        param_5 = param_5 + 1;
        sVar2 = *psVar1;
      }
    }
    uVar3 = fn_82792F70(param_1,param_2,param_4,param_5);
    if ((uVar3 & 0xffffffff) != 0) {
      fn_82F68CC0(uVar3,param_3,(param_5 & 0x7fffffff) << 1);
      if ((param_6 & 0xffffffff) != 0) {
        fn_8267C4C8(param_6);
        auStack_50[0] = (undefined4)param_6;
        uVar4 = fn_82790678(auStack_48,param_4,param_5,auStack_50);
        fn_82794EE8(param_1 + 0x10,uVar4);
        if (iStack_40 != 0) {
          fn_8267C4F0();
        }
        fn_8267C4F0(param_6);
      }
      fn_82795918(param_1);
      *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
    }
  }
  return;
}

