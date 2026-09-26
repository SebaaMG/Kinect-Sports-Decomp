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
extern int fn_82F640F0();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int iStack00000024;
extern unsigned int uStack0000002f;
extern unsigned int uStack00000037;
extern unsigned int uStack0000003f;


int fn_82F902F0(int param_1,int param_2,int param_3,undefined1 param_4,undefined1 param_5,
                 undefined1 param_6)

{
  int iVar1;
  int iVar2;
  int iStack00000014;
  int iStack0000001c;
  int iStack00000024;
  undefined1 uStack0000002f;
  undefined1 uStack00000037;
  undefined1 uStack0000003f;
  
  iVar1 = param_2 - param_1 >> 2;
  iVar2 = param_3 + iVar1 * -4;
  if (0 < iVar1) {
    iStack00000014 = param_1;
    iStack0000001c = param_2;
    iStack00000024 = param_3;
    uStack0000002f = param_4;
    uStack00000037 = param_5;
    uStack0000003f = param_6;
    fn_82F640F0(iVar2,iVar1 << 2,param_1,iVar1 << 2);
  }
  return iVar2;
}

