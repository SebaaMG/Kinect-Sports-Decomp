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
extern int fn_82A3F7B8();


longlong fn_82A3F8D0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  iVar1 = fn_8265C940(4,0x24970000);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    lVar3 = -0x7ff8fff2;
  }
  else {
    uVar2 = fn_8265C940(0xc,0x24970000);
    *(undefined4 *)*param_1 = uVar2;
    if (*(int *)*param_1 == 0) {
      lVar3 = -0x7ff8fff2;
    }
    else {
      lVar3 = fn_82A3F7B8(*(int *)*param_1,param_2,param_3,2);
      if (lVar3 < 0) {
        fn_8265C990(*(undefined4 *)*param_1,0x24970000);
      }
      else {
        param_1[1] = 1;
        param_1[2] = 4;
      }
      if (-1 < (int)lVar3) {
        return lVar3;
      }
    }
    fn_8265C990(*param_1,0x24970000);
    if (-1 < (int)lVar3) {
      return lVar3;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return lVar3;
}

