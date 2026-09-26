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
extern int fn_8265C9E0();
extern int fn_828DF3D0();
extern int fn_828E7140();
extern unsigned int lbl_82027474;


undefined8 fn_828E7B20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_8265C9E0(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    fn_828E7140(param_1,0);
  }
  else {
    fn_828DF3D0(puVar1,0xffffffff8315a35c,param_2,param_3);
    puVar1[4] = 0;
    puVar1[5] = 0;
    *puVar1 = &lbl_82027474;
    fn_828E7140(param_1,puVar1);
  }
  return param_1;
}

