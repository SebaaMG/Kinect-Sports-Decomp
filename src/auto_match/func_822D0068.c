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
extern int fn_8223AAC0();
extern int fn_82A1EFC0();
extern unsigned int lbl_821AE598;


undefined4 * fn_822D0068(undefined4 *param_1,int param_2)

{
  param_1[1] = 1;
  *param_1 = &lbl_821AE598;
  param_1[2] = 1;
  if (param_1 + 3 == (undefined4 *)0x0) {
    return param_1;
  }
  if (*(int *)(param_2 + 4) != 0) {
    fn_8223AAC0(*(int *)(param_2 + 4));
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 3,0,0x5c);
}

