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
extern int fn_82FFFB48();
extern int fn_83038550();
extern unsigned int lbl_831BC768;


undefined8
fn_8302C858(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (*param_4 == 1) {
    uVar1 = fn_82FA5060(lbl_831BC768,0x1e8);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_83038550(uVar1,param_2,param_3,param_4[2],param_4[0x1e],param_4 + 4,
                                param_4 + 10,*(undefined1 *)((int)param_4 + 0x81));
    }
  }
  else {
    uVar2 = fn_82FFFB48(param_1,param_2,param_3,param_4,param_5);
  }
  return uVar2;
}

