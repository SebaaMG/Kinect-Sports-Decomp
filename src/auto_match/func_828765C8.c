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
extern unsigned int *auStack_20;
extern int fn_82A2A108();
extern unsigned int uStack_10;
extern unsigned int uStack_14;
extern unsigned int uStack_18;


char fn_828765C8(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = 0;
  uStack_18 = (undefined4)*param_5;
  uStack_14 = (undefined4)((ulonglong)*param_5 >> 0x20);
  iVar1 = fn_82A2A108(*(undefined4 *)(param_2 + 0x14),param_4,*(undefined4 *)(param_5 + 1),
                            (int)param_5 + 0xc,auStack_20);
  return (iVar1 == 0) + '\x01';
}

