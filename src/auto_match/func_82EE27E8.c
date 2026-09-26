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
extern int fn_82E4FE08();
extern int fn_82E50F00();
extern int fn_82E51028();
extern int fn_82E52428();
extern int fn_82F64CE0();
extern int fn_82F68CC0();


undefined8
fn_82EE27E8(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  short *psVar2;
  ulonglong uVar1;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  fn_82E50F00(param_1 + 4,1);
  psVar2 = (short *)fn_82E52428(param_1,param_2);
  if (psVar2 == (short *)0x0) {
    uVar3 = 0xffffffffc00d36e6;
  }
  else if (*psVar2 == 0x1f) {
    uVar1 = fn_82F64CE0(*(undefined4 *)(psVar2 + 4));
    if ((uVar1 & 0xffffffff) < 0x7ffffffe) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = (int)uVar1;
      }
      lVar4 = (uVar1 + 1 & 0x7fffffff) << 1;
      uVar1 = fn_82E4FE08(lVar4);
      *param_3 = (int)uVar1;
      if ((uVar1 & 0xffffffff) != 0) {
        fn_82F68CC0(uVar1,*(undefined4 *)(psVar2 + 4),lVar4);
        goto LAB_82ee28a8;
      }
    }
    uVar3 = 0xffffffff8007000e;
  }
  else {
    uVar3 = 0xffffffffc00d36bd;
  }
LAB_82ee28a8:
  fn_82E51028(param_1 + 4,1);
  return uVar3;
}

