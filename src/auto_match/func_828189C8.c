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
extern int fn_8281C448();


longlong fn_828189C8(int param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int aiStack_30 [12];
  
  lVar1 = param_2;
  if ((*(uint *)(param_1 + 0xc) & 4) != 0) {
    lVar1 = param_2 - (ulonglong)*(uint *)(param_1 + 0x78);
  }
  (**(code **)(*(int *)(param_1 + 0x10) + 0x18))(param_1,lVar1,aiStack_30);
  if ((aiStack_30[0] != 0) && (*(int *)(aiStack_30[0] + 0x20) != 0)) {
    fn_8281C448(0xffffffff8201e6b0,*(undefined4 *)(aiStack_30[0] + 0x1c));
  }
  fn_8281C448(0xffffffff8201e6bc,param_2,param_1,param_3);
  if (aiStack_30[0] != 0) {
    fn_8281C448(0xffffffff8201e6d4,*(undefined4 *)(aiStack_30[0] + 0x14));
    fn_8281C448(0xffffffff8201e6d8,*(undefined4 *)(aiStack_30[0] + 0x18));
    fn_8281C448(0xffffffff8201e6dc,*(undefined1 *)(aiStack_30[0] + 0x10),
                      *(undefined1 *)(aiStack_30[0] + 0x11),*(undefined1 *)(aiStack_30[0] + 0x12),
                      *(undefined1 *)(aiStack_30[0] + 0x13));
    fn_8281C448(0xffffffff8201e6f0,*(undefined4 *)(aiStack_30[0] + 0x24));
  }
  fn_8281C448(0xffffffff8201e6f4);
  return param_2;
}

