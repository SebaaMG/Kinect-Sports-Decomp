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
extern int fn_82CEAC28();
extern int fn_82CEAF18();
extern unsigned int lbl_8323AB38;


undefined1 * fn_82CEE9F8(undefined1 *param_1,undefined *param_2)

{
  int iVar1;
  
  for (; (param_2 != (undefined *)0x0 && (param_2 != &lbl_8323AB38));
      param_2 = (undefined *)fn_82CEAC28(param_2)) {
    iVar1 = fn_82CEAF18(param_2);
    if (0 < iVar1) {
      *param_1 = 1;
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}

