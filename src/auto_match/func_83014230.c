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
extern int fn_82FA5060();
extern int fn_830394E8();
extern unsigned int lbl_831BC768;


undefined8 fn_83014230(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = fn_82FA5060(lbl_831BC768,0x1f8);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_830394E8(uVar1,param_2,param_3,*(undefined4 *)(param_4 + 8),
                              *(undefined4 *)(param_4 + 0x78),param_4 + 0x10,param_4 + 0x28,
                              *(undefined1 *)(param_4 + 0x81));
  }
  return uVar2;
}

