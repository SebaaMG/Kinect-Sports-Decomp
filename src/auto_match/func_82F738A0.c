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
extern unsigned int *auStack_20;
extern int fn_82F73228();
extern int fn_82F735D8();
extern int fn_82F73680();
extern int fn_82F76E68();
extern unsigned int *lbl_832635C0;


undefined4 * fn_82F738A0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_20 [16];
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  fn_82F73680(param_1,0xffffffff82169da4);
  uVar1 = fn_82F76E68(auStack_20);
  fn_82F73228(param_1,uVar1);
  fn_82F735D8(param_1,0x7d);
  if (*lbl_832635C0 == '@') {
    lbl_832635C0 = lbl_832635C0 + 1;
  }
  return param_1;
}

