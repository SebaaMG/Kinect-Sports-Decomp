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
extern int fn_826C0B08();
extern int fn_8270F960();
extern unsigned int lbl_8200E8C0;
extern unsigned int lbl_8200E914;


undefined4 * fn_827108A8(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  fn_826C0B08();
  *param_1 = &lbl_8200E914;
  param_1[4] = &lbl_8200E8C0;
  iVar1 = *(int *)(*(int *)(param_2 + 0x78) + 8);
  param_1[0xc] = iVar1;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  fn_8270F960(param_1,param_2);
  return param_1;
}

