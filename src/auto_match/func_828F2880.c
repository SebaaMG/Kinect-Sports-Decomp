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
extern unsigned int *auStack_100;
extern unsigned int *auStack_90;
extern int fn_828F1B70();
extern int fn_82923B38();
extern int fn_82923D40();
extern int fn_829242C8();
extern int fn_82A94368();
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


undefined8
fn_828F2880(int param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_90 [144];
  
  fn_82923B38(auStack_100);
  if (param_1 == 0) {
    fn_82923D40(auStack_100);
    uVar1 = 0xffffffff8876086c;
  }
  else {
    if (param_4 == 0) {
      uVar1 = 0xffffffff8876086c;
    }
    else {
      uVar1 = 1;
      if (param_1 == param_4) {
        uVar1 = 0x10001;
      }
      uVar1 = fn_829242C8(auStack_100,&uStack_f0,param_4,param_5,param_6,0,uVar1);
      if (-1 < (int)uVar1) {
        fn_82A94368(*(undefined4 *)(param_4 + 0x18),0,auStack_90);
        uVar1 = fn_828F1B70(param_1,param_2,param_3,uStack_f0,uStack_ec,uStack_e8,uStack_e4,
                              param_5);
        if (-1 < (int)uVar1) {
          uVar1 = 0;
        }
      }
    }
    fn_82923D40(auStack_100);
  }
  return uVar1;
}

