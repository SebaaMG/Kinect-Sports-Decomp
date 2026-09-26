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
extern int fn_826944C8();
extern int fn_826BF638();
extern int fn_82711420();
extern unsigned int lbl_8200E898;
extern unsigned int lbl_8200E89C;
extern unsigned int lbl_8200E980;


undefined4 * fn_82711638(undefined4 *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_30 [48];
  
  fn_82711420();
  *param_1 = &lbl_8200E89C;
  param_1[4] = &lbl_8200E980;
  param_1[0xd] = &lbl_8200E898;
  iVar1 = *(int *)(*param_2 + 0x14c);
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  lVar2 = (ulonglong)*(uint *)(param_1[0xc] + 8) - 1;
  *(int *)(param_1[0xc] + 8) = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8();
  }
  param_1[0xc] = iVar1;
  auStack_30[0] = 1;
  fn_826BF638(param_1 + 0xd,param_1,param_2,0xffffffff831562c0,auStack_30);
  return param_1;
}

