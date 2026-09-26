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
extern int fn_82A2B900();
extern int fn_82A2B9A0();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


longlong fn_82A2BAF0(int param_1,undefined8 param_2,undefined8 param_3,int *param_4,int *param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar2 = fn_82A2B9A0();
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x34);
    fn_82A2B900(param_1,uStack_30,1);
    *(char *)(uStack_2c + 4) = *(char *)(uStack_2c + 4) + '\x01';
    *param_4 = uStack_30 * 0x1000 + iVar1;
    *param_5 = uStack_2c;
  }
  return lVar2;
}

