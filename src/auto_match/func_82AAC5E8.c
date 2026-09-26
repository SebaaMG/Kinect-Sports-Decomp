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
extern int fn_82AAC0E0();
extern int fn_82AAC198();
extern int fn_82AAC290();
extern int fn_82AAC328();
extern int fn_82AAC3E8();
extern int fn_82AAC488();
extern int fn_82AAC550();
extern unsigned int iStack_14;
extern unsigned int iStack_18;
extern unsigned int iStack_1c;
extern unsigned int iStack_20;


undefined8 fn_82AAC5E8(int *param_1,int *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  short *psVar5;
  short *psVar6;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  sVar1 = *(short *)(param_1 + 4);
  sVar2 = *(short *)(param_1 + 5);
  uVar4 = (ulonglong)(uint)param_1[2];
  if ((param_3 < 0) || (param_1[3] <= param_3)) {
    uVar3 = 0xffffffffffffffd9;
  }
  else {
    if (sVar1 == 1) {
      iStack_20 = *param_2;
      if (sVar2 < 9) {
        fn_82AAC0E0(&iStack_20);
      }
      else if (0 < param_1[2]) {
        psVar6 = (short *)(iStack_20 + -2);
        psVar5 = (short *)(param_1[1] * param_3 + *param_1 + -2);
        do {
          psVar6 = psVar6 + 1;
          psVar5 = psVar5 + 1;
          *psVar5 = *psVar6 + -0x8000;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    else if (sVar1 == 2) {
      iStack_20 = param_2[1];
      iStack_1c = *param_2;
      if (sVar2 < 9) {
        fn_82AAC198();
      }
      else {
        fn_82AAC290();
      }
    }
    else if (sVar1 == 3) {
      iStack_20 = param_2[2];
      iStack_1c = param_2[1];
      iStack_18 = *param_2;
      if (sVar2 < 9) {
        fn_82AAC328();
      }
      else {
        fn_82AAC3E8();
      }
    }
    else {
      iStack_20 = param_2[3];
      iStack_1c = param_2[2];
      iStack_18 = param_2[1];
      iStack_14 = *param_2;
      if (sVar2 < 9) {
        fn_82AAC488();
      }
      else {
        fn_82AAC550(&iStack_20);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

