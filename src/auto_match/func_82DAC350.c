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
extern int fn_82D958D8();
extern int fn_82D96358();
extern int fn_82DC7F58();
extern unsigned int lbl_82141C64;


undefined4 * fn_82DAC350(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = &lbl_82141C64;
  puVar1 = param_1 + 0x11;
  param_1[2] = 0;
  fn_82DC7F58(param_1 + 5,puVar1);
  fn_82D96358(puVar1,1);
  param_1[0x14] = param_1 + 5;
  param_1[0x1e] = 0xffffffff;
  param_1[0x16] = param_3;
  param_1[0x17] = param_4;
  param_1[3] = param_2;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  fn_82D958D8(puVar1,*(undefined2 *)
                          (*(char *)(*(char *)(param_3 + 0x2a) * 10 + (int)*(char *)(param_4 + 0x2a)
                                     + *(int *)(param_2 + 0x80) + 0x1bb0) * 0x40 +
                           *(int *)(param_2 + 0x80) + 0x1c5c));
  return param_1;
}

