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
extern unsigned int *auStack_40;
extern int fn_829C7D00();
extern int fn_82F5D668();
extern unsigned int uStack_38;


undefined4 * fn_82F5D8C0(undefined4 *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined4 auStack_40 [2];
  undefined8 uStack_38;
  undefined1 auStack_30 [48];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 != (int *)0x0) && (*param_3 == 2)) {
    auStack_40[0] = 0;
    uStack_38 = 0;
    iVar1 = fn_829C7D00(auStack_30);
    if (-1 < iVar1) {
      fn_82F5D668(param_2,param_3,auStack_30,param_1,&uStack_38,auStack_40);
    }
  }
  return param_1;
}

