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
extern int fn_82834458();
extern int fn_82834820();


undefined4 * fn_82834E48(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 auStack_30 [12];
  
  iVar1 = fn_82834458(param_2);
  if ((undefined4 *)(iVar1 + 0xc) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 0xc) = *param_3;
  }
  fn_82834820(auStack_30,param_2,iVar1,0);
  *param_1 = auStack_30[0];
  return param_1;
}

