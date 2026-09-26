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
extern int fn_829F5548();
extern int fn_82A0D6C0();
extern unsigned int *lbl_83218C34;


void fn_829F5E70(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_r10;
  undefined4 *puVar1;
  
  puVar1 = param_1 + 0x41a7;
  param_1[2] = 3;
  *puVar1 = (int)param_2;
  if (lbl_83218C34 != (int *)0x0) {
    (**(code **)*lbl_83218C34)(lbl_83218C34,param_1[1],param_2,0x280,0x1e0,param_3);
    if (lbl_83218C34 != (int *)0x0) {
      (**(code **)(*lbl_83218C34 + 8))(lbl_83218C34,param_1[2]);
      (**(code **)(*lbl_83218C34 + 4))(lbl_83218C34,0);
    }
  }
  param_1[2] = 0;
  fn_829F5548(param_1 + 4,*puVar1,param_3,*param_1,param_4,param_1 + 0x4198,param_1[0x419e],
                  param_1 + 0x419f);
  param_1[0x419e] = 0;
  param_1[0x41a5] = 0;
  if (lbl_83218C34 != (int *)0x0) {
    (**(code **)(*lbl_83218C34 + 8))(lbl_83218C34,param_1[2]);
    (**(code **)(*lbl_83218C34 + 4))(lbl_83218C34,1);
  }
  param_1[2] = 1;
  fn_82A0D6C0(param_1 + 0x2c,in_r10);
  if (lbl_83218C34 != (int *)0x0) {
    (**(code **)(*lbl_83218C34 + 8))(lbl_83218C34,param_1[2]);
  }
  *puVar1 = 0;
  return;
}

