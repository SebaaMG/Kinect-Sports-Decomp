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
extern int fn_828AC5E0();
extern int fn_828ED218();
extern int fn_828ED288();
extern int fn_828ED2F8();
extern int fn_828ED350();


void fn_828A94B0(int param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x8c);
  if (*(char *)((int)param_2 + 0xd) == '\0') {
    if (*(char *)((int)param_2 + 0xc) == '\0') {
      fn_828ED350(uVar1,*param_2);
    }
    else {
      fn_828ED2F8(uVar1,*(undefined4 *)(param_2 + 1));
    }
  }
  else if (*(char *)((int)param_2 + 0xc) == '\0') {
    fn_828ED288(uVar1,*param_2,*(undefined1 *)((int)param_2 + 0xe));
  }
  else {
    fn_828ED218(uVar1,*(undefined4 *)(param_2 + 1));
  }
  fn_828AC5E0(param_1 + 0x60,*(undefined1 *)((int)param_2 + 0xd),
               *(undefined1 *)((int)param_2 + 0xc),*(undefined1 *)((int)param_2 + 0xe));
  return;
}

