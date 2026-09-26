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
extern int fn_82CE2830();
extern int fn_82CE3440();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;
extern unsigned int uStack_40;


longlong fn_82CE2988(int param_1,int param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  uint uStack_3c;
  uint uStack_38;
  
  *(int *)(param_1 + 0x14) = param_2;
  lVar1 = fn_82CE2830(param_2,param_3,&uStack_40);
  if (-1 < lVar1) {
    if (param_4 != 0) {
      uStack_3e = uStack_40;
      uStack_38 = uStack_3c;
    }
    lVar1 = 0;
    fn_82CE3440(param_1,(ulonglong)*(uint *)(param_2 + 0x34) + (ulonglong)uStack_38,uStack_3e,
                 uStack_3e,1);
  }
  return lVar1;
}

