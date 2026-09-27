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
extern int _invalid_parameter_noinfo();
extern int _errno();
extern int memset();


undefined4 fn_82F85880(undefined4 *param_1,undefined1 *param_2,uint param_3,ushort param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((param_2 == (undefined1 *)0x0) && (param_3 != 0)) {
    if (param_1 == (undefined4 *)0x0) {
      return 0;
    }
    uVar2 = 0;
  }
  else {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0xffffffff;
    }
    if (0x7fffffff < param_3) {
      puVar1 = (undefined4 *)_errno();
      *puVar1 = 0x16;
      _invalid_parameter_noinfo();
      return 0x16;
    }
    if (0xff < param_4) {
      if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
        memset(param_2,0);
      }
      puVar1 = (undefined4 *)_errno();
      *puVar1 = 0x2a;
      puVar1 = (undefined4 *)_errno();
      return *puVar1;
    }
    if (param_2 != (undefined1 *)0x0) {
      if (param_3 == 0) {
        puVar1 = (undefined4 *)_errno();
        *puVar1 = 0x22;
        _invalid_parameter_noinfo();
        return 0x22;
      }
      *param_2 = (char)param_4;
    }
    if (param_1 == (undefined4 *)0x0) {
      return 0;
    }
    uVar2 = 1;
  }
  *param_1 = uVar2;
  return 0;
}

