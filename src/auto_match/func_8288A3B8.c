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
extern int fn_828800C8();
extern int fn_82880108();
extern int fn_82880120();
extern int fn_82880130();
extern int fn_82880140();
extern int fn_82880150();
extern int fn_82880160();
extern int fn_82880170();
extern int fn_82880180();
extern int fn_82880190();
extern int fn_828801A0();
extern int fn_828BFDF8();
extern int fn_828EFF10();
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8288A3B8(int param_1,char param_2)

{
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  fn_828BFDF8(*(undefined4 *)(param_1 + 0x134));
  if (param_2 != '\0') {
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_30 = 0xd000000;
    uStack_2c = *(uint *)(param_1 + 0x30) & 0xff;
    fn_828800C8(&uStack_30);
  }
  fn_828801A0();
  if (param_2 != '\0') {
    fn_828EFF10();
  }
  fn_82880108(*(undefined4 *)(param_1 + 0x30),4);
  fn_82880120(0xffffffff828a5468);
  fn_82880130(0xffffffff828a5518);
  fn_82880140(0xffffffff828a1168);
  fn_82880150(0xffffffff828a11d8);
  fn_82880160(0xffffffff828a2010);
  fn_82880170(0xffffffff828bee88);
  fn_82880180(0xffffffff828a1248);
  fn_82880190(0xffffffff828a1298);
  return;
}

