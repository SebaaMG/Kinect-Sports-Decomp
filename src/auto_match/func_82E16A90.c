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
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CEAB00();
extern int fn_82D00388();
extern unsigned int lbl_8214B440;
extern unsigned int *lbl_8323FD9C;


undefined4 * fn_82E16A90(undefined4 *param_1)

{
  int iVar1;
  
  param_1[2] = 0;
  *param_1 = &lbl_8214B440;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffff;
  iVar1 = fn_82CE5410();
  fn_82CEAB00(param_1 + 4,*(undefined4 *)(iVar1 + 0x10),0);
  fn_82D00388(param_1 + 7,0);
  param_1[0xb] = 0;
  param_1[0xc] = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x80000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x80000000;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x80000000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0x80000000;
  iVar1 = (**(code **)(*lbl_8323FD9C + 0x10))();
  if (iVar1 != 0) {
    fn_82CE4040();
  }
  if (param_1[0xb] != 0) {
    fn_82CE4118();
  }
  param_1[0xb] = iVar1;
  return param_1;
}

