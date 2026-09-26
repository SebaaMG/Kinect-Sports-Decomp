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
extern int fn_83038550();
extern unsigned int lbl_8217D264;
extern unsigned int lbl_8217D2B0;
extern unsigned int lbl_8217D2B8;


undefined4 * fn_830394E8(undefined4 *param_1)

{
  undefined4 in_stack_0000006c;
  
  fn_83038550();
  param_1[0x7b] = in_stack_0000006c;
  param_1[3] = &lbl_8217D264;
  *param_1 = &lbl_8217D2B8;
  param_1[1] = &lbl_8217D2B0;
  *(undefined1 *)(param_1 + 0x7a) = 1;
  param_1[0x7c] = *(undefined4 *)(param_1[0x75] + 0x6c);
  param_1[0x7d] = *(undefined4 *)(param_1[0x75] + 0x74);
  return param_1;
}

