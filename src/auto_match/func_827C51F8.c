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
extern int fn_827C5DD0();
extern int fn_827C7058();
extern int fn_827C7F50();
extern int fn_827C8DE8();
extern int fn_827CD968();
extern int fn_827CE1D0();
extern int fn_827CE8C8();
extern int fn_827CEFA0();
extern int fn_827CF990();
extern int fn_827D0070();


void fn_827C51F8(int *param_1)

{
  undefined8 uVar1;
  
  fn_827C8DE8(param_1,0);
  if (*(char *)(param_1 + 0x2c) == '\0') {
    fn_827D0070(param_1);
    fn_827CF990(param_1);
    fn_827CEFA0(param_1,0);
  }
  fn_827CE8C8(param_1);
  if (*(char *)((int)param_1 + 0xb1) == '\0') {
    if (*(char *)(param_1 + 0x35) == '\0') {
      fn_827C7058(param_1);
    }
    else {
      fn_827C7F50();
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 1;
    (**(code **)*param_1)(param_1);
  }
  if ((1 < param_1[0x2a]) || (uVar1 = 0, *(char *)((int)param_1 + 0xb2) != '\0')) {
    uVar1 = 1;
  }
  fn_827CE1D0(param_1,uVar1);
  fn_827CD968(param_1,0);
  fn_827C5DD0(param_1);
  (**(code **)(param_1[1] + 0x18))(param_1);
  (**(code **)param_1[0x53])(param_1);
  return;
}

