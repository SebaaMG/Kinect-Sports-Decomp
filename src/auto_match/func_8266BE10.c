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
extern int fn_8266BF60();
extern int fn_8266C340();
extern int fn_82F65AC0();
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;


bool fn_8266BE10(uint param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  uint uStack00000014;
  uint uStack0000001c;
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  if (param_2 == 0) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82002790,0x1a6,0xffffffff8200296c);
  }
  iVar1 = fn_8266BF60(uStack0000001c);
  if (iVar1 != 0) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82002790,0x1a7,0xffffffff82002930);
  }
  if (uStack0000001c == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = fn_8266BF60(uStack0000001c);
    if (iVar1 == 0) {
      bVar2 = false;
    }
    else {
      iVar1 = fn_82F65AC0((ulonglong)uStack00000014 + 0xc,(ulonglong)uStack0000001c + 0xc);
      bVar2 = iVar1 == 0;
    }
  }
  return bVar2;
}

