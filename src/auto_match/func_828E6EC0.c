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
extern int fn_823AA970();
extern int fn_8240D928();
extern int fn_828CCCC0();
extern int fn_828DF3D0();
extern int fn_828DF8D0();
extern unsigned int lbl_82027454;


undefined4 * fn_828E6EC0(undefined4 *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = *param_3;
  uVar2 = *(undefined4 *)(iVar1 + 4);
  uVar3 = fn_8240D928(iVar1);
  uVar4 = fn_823AA970(iVar1);
  uVar3 = fn_828DF8D0(uVar4,uVar3);
  fn_828DF3D0(param_1,param_2,uVar3,uVar2);
  *param_1 = &lbl_82027454;
  param_1[4] = 0;
  param_1[5] = 0;
  fn_828CCCC0(param_1 + 4,*param_3,param_3[1],0);
  return param_1;
}

