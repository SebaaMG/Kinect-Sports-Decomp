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
extern int fn_82526BD8();
extern unsigned int lbl_82165C3C;
extern unsigned int lbl_821AAD20;


undefined4 * fn_82F53A20(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = lbl_821AAD20;
  param_1[1] = 0;
  param_1[0xc] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0xd] = 0;
  *param_1 = &lbl_82165C3C;
  *(char *)(param_1 + 0xe) = '\x01' - (*(int *)(param_2 + 0x44) == 0);
  fn_82526BD8(param_1 + 4,0x20);
  *(bool *)(param_1 + 0xe) = *(int *)(param_2 + 0x44) == 1;
  return param_1;
}

