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
extern int fn_82FA8E48();
extern unsigned int lbl_8216CC7C;
extern unsigned int lbl_8216CC80;
extern unsigned int lbl_8216CC88;
extern unsigned int lbl_8216CCA0;


undefined4 * fn_82FABD78(undefined4 *param_1)

{
  fn_82FA8E48();
  param_1[0xe] = 0;
  *param_1 = &lbl_8216CCA0;
  param_1[1] = &lbl_8216CC88;
  param_1[4] = &lbl_8216CC80;
  param_1[6] = &lbl_8216CC7C;
  return param_1;
}

