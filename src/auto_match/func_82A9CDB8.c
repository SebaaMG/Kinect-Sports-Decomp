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
extern int fn_82A9A668();
extern int fn_82A9A780();
extern int fn_82A9CF38();
extern unsigned int lbl_820D2B34;


undefined4 * fn_82A9CDB8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &lbl_820D2B34;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar1 = param_1 + 0x24;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x22] = 1;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined2 *)(param_1 + 0x27) = 0;
  *(undefined2 *)((int)param_1 + 0x9e) = 0;
  param_1[9] = 0;
  if (param_1[10] == 0) {
    fn_82A9CF38(param_1 + 8,1,puVar1);
  }
  param_1[5] = 0;
  if (param_1[6] == 0) {
    fn_82A9A668(param_1 + 4,1,puVar1);
  }
  param_1[0xf] = 0;
  if ((uint)param_1[0x10] < 8) {
    fn_82A9A780(param_1 + 0xe,8,puVar1);
  }
  param_1[0x20] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  return param_1;
}

