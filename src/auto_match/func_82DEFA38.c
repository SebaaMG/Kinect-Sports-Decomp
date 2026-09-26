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
extern int fn_82CE4040();
extern int fn_82D41870();
extern unsigned int lbl_8214227C;
extern unsigned int lbl_821432BC;
extern unsigned int lbl_821432D8;
extern unsigned int lbl_821432E4;
extern unsigned int lbl_821432F8;
extern unsigned int lbl_82143304;
extern unsigned int lbl_82143314;


undefined4 * fn_82DEFA38(undefined4 *param_1,ulonglong param_2)

{
  fn_82D41870();
  param_1[0xc] = &lbl_8214227C;
  param_1[0xd] = (int)param_2;
  *param_1 = &lbl_82143304;
  param_1[2] = &lbl_821432F8;
  param_1[3] = &lbl_821432E4;
  param_1[4] = &lbl_821432D8;
  param_1[5] = &lbl_82143314;
  param_1[0xc] = &lbl_821432BC;
  if ((param_2 & 0xffffffff) != 0) {
    fn_82CE4040(param_2);
  }
  return param_1;
}

