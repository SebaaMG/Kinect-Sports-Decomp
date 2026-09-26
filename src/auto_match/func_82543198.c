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
extern int fn_82543308();
extern int fn_82543440();
extern int fn_82543628();
extern int fn_82543940();
extern int fn_8262FE50();
extern int fn_8262FEC8();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637FF0();
extern int fn_82639F78();


void fn_82543198(uint *param_1,undefined8 param_2,int *param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = (ulonglong)*param_1;
  uVar3 = (ulonglong)*(uint *)(*param_1 + 0x3244);
  uVar1 = (ulonglong)*(uint *)param_3[3];
  if (uVar3 != 0) {
    fn_8262FE50(uVar3);
  }
  if (uVar3 != (uVar1 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82631578(uVar2);
  }
  if (uVar3 != 0) {
    fn_8262FEC8(uVar3);
  }
  if (param_1[0xb] != param_3[6]) {
    fn_82543440(param_1,param_2);
    param_1[0xb] = param_3[6];
  }
  if ((undefined4 *)param_1[9] != (undefined4 *)param_3[4]) {
    if (param_4 == 3) {
      fn_82637FF0(*param_1,*(undefined4 *)param_3[4]);
    }
    param_1[9] = param_3[4];
  }
  if (param_1[10] != param_3[5]) {
    fn_82543628(param_1,param_2);
    param_1[10] = param_3[5];
  }
  uVar2 = (ulonglong)*param_1;
  uVar3 = (ulonglong)*(uint *)(*param_1 + 0x3248);
  uVar1 = (ulonglong)*(uint *)param_3[2];
  if (uVar3 != 0) {
    fn_8262FE50(uVar3);
  }
  if (uVar3 != (uVar1 & 0xffffffff)) {
    fn_82631920(uVar2);
  }
  if (uVar3 != 0) {
    fn_8262FEC8(uVar3);
  }
  if (param_1[5] != param_3[1]) {
    fn_82543308(param_1,param_2);
    param_1[5] = param_3[1];
  }
  param_1[6] = 0xffffffff;
  fn_82639F78(*param_1,0,*(undefined4 *)*param_3,0,((undefined4 *)*param_3)[1],1);
  fn_82543940(param_1,param_3[7]);
  return;
}

