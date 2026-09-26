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
extern int fn_82299948();
extern int fn_8229A7B8();
extern int fn_8229F4F8();
extern int fn_8265C9E0();
extern unsigned int lbl_821AAF44;


undefined4 * fn_8229AFA8(undefined4 *param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  
  fn_8229A7B8();
  param_1[0xb] = 0;
  *param_1 = &lbl_821AAF44;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82299948(uVar1,7,0);
  }
  param_1[0xe] = uVar2;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82299948(uVar1,5,0);
  }
  param_1[0xf] = uVar2;
  fn_8229F4F8(param_1[3],0);
  return param_1;
}

