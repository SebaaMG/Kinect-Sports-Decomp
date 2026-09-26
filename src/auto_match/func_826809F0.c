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
extern int fn_8267BED0();
extern int fn_8267FD48();
extern int fn_82680500();
extern int fn_8273D528();
extern int fn_82F691F0();
extern unsigned int lbl_82002BE8;


undefined4 *
fn_826809F0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar3;
  undefined8 uVar1;
  ulonglong uVar2;
  
  param_1[1] = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &lbl_82002BE8;
  uVar3 = fn_8267FD48(param_2,param_3);
  param_1[5] = uVar3;
  uVar1 = fn_82680500(param_2);
  param_1[7] = (int)uVar1;
  uVar2 = fn_8267BED0(param_1,uVar1,0);
  param_1[6] = (int)uVar2;
  if ((uVar2 & 0xffffffff) != 0) {
    param_1[3] = (int)param_3;
    param_1[4] = param_4;
    param_1[2] = (int)param_2;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar2,0,param_1[7]);
  }
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 1;
  fn_8273D528(param_1 + 9,0);
  param_1[8] = 1;
  return param_1;
}

