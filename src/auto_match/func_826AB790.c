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
extern int fn_826824B0();
extern int fn_826C0910();
extern int fn_826C3378();
extern unsigned int lbl_82007318;
extern unsigned int lbl_82007340;


undefined4 * fn_826AB790(undefined4 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  fn_826C0910(param_1,*(undefined4 *)(param_2 + 4));
  param_1[4] = &lbl_82007340;
  *param_1 = &lbl_82007318;
  *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  param_1[0xc] = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = param_3;
  *(undefined1 *)(param_1 + 0x11) = 0;
  iVar1 = *param_4;
  param_1[0xf] = iVar1;
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
  }
  param_1[0x10] = 0;
  if (param_4[1] != 0) {
    fn_826C3378(param_1 + 0xf,param_4[1],*(byte *)(param_4 + 2) & 1);
  }
  *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  if (param_1[5] != 0) {
    fn_826824B0();
  }
  param_1[5] = param_2;
  return param_1;
}

