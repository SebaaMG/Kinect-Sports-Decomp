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
extern int fn_82F63C78();
extern int fn_82F82D58();
extern int fn_82F83058();
extern unsigned int lbl_831BC078;
extern unsigned int lbl_831BC07C;
extern unsigned int lbl_831BC080;
extern unsigned int lbl_831BC084;
extern unsigned int lbl_831BC088;
extern unsigned int lbl_831BC08C;
extern unsigned int lbl_8326366C;
extern unsigned int lbl_8326366E;
extern unsigned int lbl_83263670;
extern unsigned int lbl_83263672;
extern unsigned int lbl_83263674;
extern unsigned int lbl_832636C0;
extern unsigned int lbl_832636C2;
extern unsigned int lbl_832636C4;
extern unsigned int lbl_832636C6;
extern unsigned int lbl_832636C8;
extern unsigned int lbl_832636D4;


ulonglong fn_82F832D0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int aiStack_40 [16];
  
  aiStack_40[0] = 0;
  iVar2 = fn_82F82D58(aiStack_40);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63C78(0,0,0,0,0);
  }
  if (aiStack_40[0] != 0) {
    uVar1 = param_1[5];
    if ((uVar1 != lbl_831BC078) || (uVar1 != lbl_831BC084)) {
      if (lbl_832636D4 == 0) {
        uVar3 = 3;
        uVar4 = 2;
        uVar7 = 0xb;
        uVar6 = 1;
        if ((int)uVar1 < 0x6b) {
          uVar3 = 4;
          uVar4 = 1;
          uVar7 = 10;
          uVar6 = 5;
        }
        fn_82F83058(1,1,uVar1,uVar3,uVar4,0,0,2);
        fn_82F83058(0,1,param_1[5],uVar7,uVar6,0,0,2);
      }
      else {
        if (lbl_832636C0 == 0) {
          fn_82F83058(1,1,uVar1,lbl_832636C2,lbl_832636C6,lbl_832636C4,0,lbl_832636C8);
        }
        else {
          fn_82F83058(1,0,uVar1,lbl_832636C2,0,0,lbl_832636C6,lbl_832636C8);
        }
        if (lbl_8326366C == 0) {
          fn_82F83058(0,1,param_1[5],lbl_8326366E,lbl_83263672,lbl_83263670,0,lbl_83263674);
        }
        else {
          fn_82F83058(0,0,param_1[5],lbl_8326366E,0,0,lbl_83263672,lbl_83263674);
        }
      }
    }
    uVar1 = param_1[7];
    if ((int)lbl_831BC07C < lbl_831BC088) {
      if (((int)lbl_831BC07C <= (int)uVar1) && ((int)uVar1 <= lbl_831BC088)) {
        if (((int)lbl_831BC07C < (int)uVar1) && ((int)uVar1 < lbl_831BC088)) {
          return 1;
        }
LAB_82f83538:
        uVar5 = (((ulonglong)param_1[2] * 0x3c + (ulonglong)param_1[1]) * 0x3c + (ulonglong)*param_1
                ) * 1000;
        if (uVar1 != lbl_831BC07C) {
          return ((~(lbl_831BC08C ^ uVar5) & 0xffffffff) >> 0x1f) +
                 (ulonglong)(lbl_831BC08C <= uVar5) & 1;
        }
        return (ulonglong)(lbl_831BC080 >> 0x1f) + (longlong)((int)uVar5 >> 0x1f) +
               (ulonglong)(lbl_831BC080 <= uVar5);
      }
    }
    else {
      if ((int)uVar1 < lbl_831BC088) {
        return 1;
      }
      if ((int)lbl_831BC07C < (int)uVar1) {
        return 1;
      }
      if (((int)uVar1 <= lbl_831BC088) || ((int)lbl_831BC07C <= (int)uVar1)) goto LAB_82f83538;
    }
  }
  return 0;
}

