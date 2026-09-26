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
extern int fn_82366A98();
extern int fn_8251FA58();
extern int fn_825708F0();
extern int fn_8265CA20();
extern unsigned int lbl_821B6098;


undefined4 * fn_823C5510(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &lbl_821B6098;
  fn_825708F0(param_1[0x92],param_1[0x93]);
  fn_825708F0(param_1[0x92],param_1[0x94]);
  if (param_1[0x97] != 0) {
    fn_8251FA58();
  }
  fn_82366A98(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

