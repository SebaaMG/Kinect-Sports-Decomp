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
extern int fn_82299AC8();
extern int fn_82299D40();
extern int fn_82299E90();
extern int fn_82F64988();
extern unsigned int lbl_821CC160;


void fn_82293E20(double param_1,double param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  ulonglong param_6,ulonglong param_7)

{
  int iVar1;
  
  *(float *)(param_3 + 0x1830) = (float)param_2;
  iVar1 = param_3 + 0x2c;
  *(float *)(param_3 + 0x182c) = (float)param_1;
  fn_82F64988(iVar1,0x400);
  *(uint *)(param_3 + 0x1834) = (uint)(param_6 != 0);
  if ((param_6 & 0xffffffff) != 0) {
    fn_82F64988(param_3 + 0x82c,0x400,param_6);
  }
  *(uint *)(param_3 + 0x1838) = (uint)(param_7 != 0);
  if ((param_7 & 0xffffffff) != 0) {
    fn_82F64988(param_3 + 0x102c,0x400,param_7);
  }
  if (*(float *)(param_3 + 0x182c) == lbl_821CC160) {
    if (*(int *)(param_3 + 0x1834) == 0) {
      fn_82299AC8(*(undefined4 *)(param_3 + 0x1848),iVar1);
    }
    else if (*(int *)(param_3 + 0x1838) == 0) {
      fn_82299D40(*(undefined4 *)(param_3 + 0x184c),iVar1,param_3 + 0x82c);
    }
    else {
      fn_82299E90(*(undefined4 *)(param_3 + 0x184c),param_3 + 0x102c,iVar1,param_3 + 0x82c);
    }
  }
  return;
}

