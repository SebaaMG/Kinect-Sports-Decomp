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
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_826EA040();
extern int fn_826EA050();
extern int fn_826EA110();
extern int fn_826EA1E8();
extern int fn_827BD550();


undefined4 * fn_826EA2B8(undefined4 *param_1,undefined8 param_2)

{
  param_1[7] = 0;
  if ((int)param_2 != 0) {
    fn_8267C4C8(param_2);
  }
  if (param_1[7] != 0) {
    fn_8267C4F0();
  }
  param_1[7] = (int)param_2;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = fn_826EA040;
  param_1[3] = fn_826EA110;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[4] = fn_826EA1E8;
  param_1[5] = fn_827BD550;
  param_1[6] = fn_826EA050;
  return param_1;
}

