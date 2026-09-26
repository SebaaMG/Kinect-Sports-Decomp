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
extern int fn_826BBF30();
extern int fn_82712390();
extern unsigned int lbl_82007BBC;
extern unsigned int lbl_8200DBF8;


undefined4 * fn_826BC870(undefined4 *param_1,int param_2)

{
  param_1[1] = 1;
  *param_1 = &lbl_8200DBF8;
  fn_82712390(param_1 + 2,*(undefined4 *)(param_2 + 0x14));
  *param_1 = &lbl_82007BBC;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa8] = 0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  param_1[0xaa] = 0;
  fn_826BBF30(param_1,param_2);
  return param_1;
}

