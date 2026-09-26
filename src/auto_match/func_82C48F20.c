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
extern int fn_82F68CC0();
extern unsigned int lbl_820FBA20;


void fn_82C48F20(undefined4 *param_1,int param_2,ulonglong param_3,undefined8 param_4)

{
  if ((*(int *)(param_2 + 0x50c8) == 0) || (*(int *)(param_2 + 0x50cc) == 0)) {
    *param_1 = *(undefined4 *)(param_2 + 0x120);
  }
  else {
    *param_1 = *(undefined4 *)
                (&lbl_820FBA20 + (*(int *)(param_2 + 0x5514) * 6 + *(int *)(param_2 + 0x5510)) * 4);
  }
  param_1[1] = *(undefined4 *)(param_2 + 0x5568);
  param_1[2] = *(undefined4 *)(param_2 + 0x5424);
  param_1[3] = *(undefined4 *)(param_2 + 0x5428);
  param_1[4] = *(undefined4 *)(param_2 + 0x556c);
  param_1[5] = (int)param_3;
  fn_82F68CC0(param_1 + 6,param_4,(param_3 & 0xfffffff) << 4);
  param_1[0x16] = *(undefined4 *)(param_2 + 0x54b0);
  param_1[0x17] = *(undefined4 *)(param_2 + 0xd9c);
  param_1[0x18] = *(undefined4 *)(param_2 + 0xda0);
  param_1[0x19] = *(undefined4 *)(param_2 + 0x5444);
  param_1[0x1a] = *(undefined4 *)(param_2 + 0x5448);
  param_1[0x1b] = *(undefined4 *)(param_2 + 0x567c);
  return;
}

