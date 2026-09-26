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
extern int fn_82CE52E0();
extern int fn_82CE5410();
extern int fn_82CFC050();
extern unsigned int lbl_82132C9C;


undefined4 * fn_82CEBB90(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar2;
  undefined8 uVar1;
  
  param_1[4] = (int)param_3;
  param_1[6] = param_4;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = &lbl_82132C9C;
  param_1[3] = 0;
  param_1[5] = 0xffffffff;
  if (param_4 == 0) {
    iVar2 = fn_82CE5410();
    uVar1 = fn_82CE52E0(*(undefined4 *)(iVar2 + 0x10),param_3);
    param_1[2] = (int)uVar1;
    fn_82CFC050(uVar1,param_2,param_3);
  }
  else {
    param_1[2] = (int)param_2;
  }
  return param_1;
}

