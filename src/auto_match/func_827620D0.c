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
extern unsigned int *auStack_30;
extern int fn_8275E130();
extern int fn_8275FD58();
extern int fn_82760648();
extern unsigned int lbl_8201489C;


undefined4 * fn_827620D0(undefined4 *param_1)

{
  undefined8 auStack_30 [6];
  
  param_1[1] = 1;
  *param_1 = &lbl_8201489C;
  fn_82760648(param_1 + 2);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  if (*(char *)(param_1 + 10) == '\x01') {
    param_1[0x21] = 4;
  }
  else {
    param_1[0x21] = 0;
    param_1[0x24] = param_1[7];
    param_1[0x25] = param_1[8];
    param_1[0x26] = param_1[9];
    fn_8275FD58(auStack_30,param_1 + 2);
    *(undefined8 *)(param_1 + 0x1f) = auStack_30[0];
    fn_8275E130(param_1 + 0x1f,param_1 + 0x22,param_1 + 0x23);
  }
  return param_1;
}

