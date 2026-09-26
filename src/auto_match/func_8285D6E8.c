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
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_e0;
extern int fn_8305D5F0();
extern int fn_8305D660();
extern int fn_8305E0F8();
extern int fn_8305EB60();
extern int fn_8305F258();
extern int fn_8305F2E8();
extern int fn_8305F320();
extern int fn_83060570();
extern int fn_83061508();
extern int fn_83061F30();
extern int fn_83066690();
extern int fn_83066810();


undefined8
fn_8285D6E8(undefined8 param_1,int param_2,uint param_3,longlong param_4,ulonglong param_5)

{
  int iVar1;
  float *pfVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_e0 [80];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  uVar3 = 2;
  fn_83061508(auStack_70);
  fn_8305F2E8(auStack_e0);
  fn_8305D5F0(auStack_e0);
  fn_8305E0F8(auStack_e0,auStack_70);
  param_5 = param_5 & 0xffff;
  fn_8305EB60(auStack_e0,param_5);
  if (param_5 != 0) {
    uVar4 = 0;
    do {
      fn_83060570(auStack_70,uVar4 * 0xc + param_4);
      fn_8305D660(auStack_e0,uVar4,uVar4);
      uVar4 = uVar4 + 1 & 0xffff;
    } while (uVar4 < param_5);
  }
  param_3 = param_3 & 0xff;
  if (param_3 != 0) {
    uVar5 = 0;
    do {
      pfVar2 = (float *)(uVar5 * 0x10 + param_2);
      fn_83066690((double)*pfVar2,(double)pfVar2[1],(double)pfVar2[2],-(double)pfVar2[3],auStack_90
                  );
      iVar1 = fn_83066810(param_1,auStack_90,auStack_e0);
      if (iVar1 == 1) {
        uVar3 = 0;
        break;
      }
      if (iVar1 == 3) {
        if ((int)(param_3 - 1) <= (int)uVar5) {
          uVar3 = 1;
          break;
        }
        fn_8305F320(param_1,auStack_e0,auStack_90,auStack_e0,0);
        uVar3 = 1;
      }
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < param_3);
  }
  fn_8305F258(auStack_e0);
  fn_83061F30(auStack_70);
  return uVar3;
}

