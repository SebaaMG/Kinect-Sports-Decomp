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
extern int fn_82FF0838();
extern int fn_83032B08();
extern int fn_83038468();
extern int iRam831bc8e0;
extern unsigned int lbl_8217D264;
extern unsigned int lbl_8217D268;
extern unsigned int lbl_8217D270;
extern unsigned int lbl_821AAD20;


undefined4 * fn_83038550(undefined4 *param_1)

{
  int iVar1;
  undefined4 *in_r7;
  undefined8 in_r9;
  char in_r10;
  int *in_stack_0000005c;
  
  fn_82FF0838();
  *param_1 = &lbl_8217D270;
  param_1[1] = &lbl_8217D268;
  param_1[3] = &lbl_8217D264;
  iVar1 = in_r7[4];
  param_1[0x62] = iVar1;
  if (iVar1 != 0) {
    fn_83032B08();
  }
  param_1[0x74] = 0;
  param_1[0x76] = lbl_821AAD20;
  param_1[0x77] = 0;
  param_1[0x78] = param_1[0x78] & 0xfffffff;
  param_1[0x75] = in_stack_0000005c;
  *(byte *)(param_1 + 0x79) = in_r10 << 7 | *(byte *)(param_1 + 0x79) & 0x1f;
  (**(code **)(*in_stack_0000005c + 4))();
  if (param_1[0x19] == 0) {
    iVar1 = iRam831bc8e0 + 1;
    param_1[0x19] = iRam831bc8e0;
    iRam831bc8e0 = iVar1;
  }
  param_1[0x4c] = in_r7[5];
  if (param_1[0x16] == 0) {
    param_1[0x16] = *in_r7;
    *in_r7 = 0;
    *(byte *)(param_1 + 0x18) = *(char *)(in_r7 + 3) << 7 | *(byte *)(param_1 + 0x18) & 0x7f;
  }
  if (param_1[0x17] == 0) {
    param_1[0x17] = in_r7[1];
    in_r7[1] = 0;
    *(byte *)(param_1 + 0x18) =
         (*(byte *)((int)in_r7 + 0xd) & 1) << 6 | *(byte *)(param_1 + 0x18) & 0xbf;
  }
  param_1[99] = 0;
  fn_83038468(param_1,in_r9);
  return param_1;
}

