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
extern int fn_8288C2E0();
extern int fn_828B22F0();
extern int fn_828C91C0();
extern int fn_828CA3C8();
extern unsigned int lbl_82026438;


undefined4 * fn_828CAB48(undefined4 *param_1)

{
  undefined1 auStack_30 [48];
  
  *param_1 = &lbl_82026438;
  fn_828C91C0(param_1 + 2,auStack_30,auStack_30);
  fn_8288C2E0(param_1 + 6,auStack_30);
  param_1[0xe] = 0;
  fn_828CA3C8(param_1 + 2,*(undefined4 *)(param_1[3] + 4));
  *(undefined4 *)(param_1[3] + 4) = param_1[3];
  *(undefined4 *)param_1[3] = param_1[3];
  *(undefined4 *)(param_1[3] + 8) = param_1[3];
  param_1[4] = 0;
  fn_828B22F0(param_1 + 6);
  return param_1;
}

