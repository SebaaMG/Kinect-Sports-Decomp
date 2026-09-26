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
extern int fn_82667870();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int iStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003f;


int fn_82668400(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined1 param_6)

{
  int iStack00000014;
  int iStack0000001c;
  int iStack00000024;
  undefined4 uStack0000002c;
  undefined4 uStack00000034;
  undefined1 uStack0000003f;
  
  iStack0000001c = param_2;
  iStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003f = param_6;
  for (iStack00000014 = param_1; iStack00000014 != iStack0000001c;
      iStack00000014 = iStack00000014 + 0xc) {
    fn_82667870(uStack0000002c,iStack00000024,iStack00000014);
    iStack00000024 = iStack00000024 + 0xc;
  }
  return iStack00000024;
}

