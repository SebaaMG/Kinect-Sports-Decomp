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
extern int fn_8267C488();
extern int fn_826DAE08();
extern int fn_826FB150();
extern int fn_826FDF58();
extern unsigned int lbl_8200DE24;


void fn_82704CB0(undefined4 *param_1)

{
  *param_1 = &lbl_8200DE24;
  fn_826FDF58(param_1 + 8);
  fn_826FB150(param_1 + 3);
  fn_826DAE08(param_1 + 2);
  fn_8267C488(param_1);
  return;
}

