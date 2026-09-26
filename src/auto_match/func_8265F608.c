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
extern int fn_8265D468();
extern int fn_8265D5A8();
extern int fn_82666B78();
extern int fn_82666CE0();
extern int fn_8266B060();
extern unsigned int uStack0000001c;


void fn_8265F608(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar4;
  int iVar3;
  uint *puStack00000014;
  undefined4 uStack0000001c;
  
  puStack00000014 = param_1;
  uStack0000001c = param_2;
  uVar2 = fn_8265D5A8(param_2);
  cVar4 = fn_82666CE0(puStack00000014,uVar2);
  if (cVar4 == '\0') {
    if (puStack00000014[1] == puStack00000014[2]) {
      fn_82666B78(puStack00000014,1);
    }
    fn_8265D468(puStack00000014,puStack00000014[1],puStack00000014[1]);
    uVar2 = fn_8265D5A8(uStack0000001c);
    fn_8266B060(puStack00000014 + 3,puStack00000014[1],uVar2);
    puStack00000014[1] = puStack00000014[1] + 4;
  }
  else {
    iVar3 = fn_8265D5A8(uStack0000001c);
    uVar1 = *puStack00000014;
    if (puStack00000014[1] == puStack00000014[2]) {
      fn_82666B78(puStack00000014,1);
    }
    fn_8265D468(puStack00000014,puStack00000014[1],puStack00000014[1]);
    uVar2 = fn_8265D5A8((ulonglong)*puStack00000014 +
                         ((ulonglong)(uint)((int)(iVar3 - uVar1) >> 2) & 0x3fffffff) * 4);
    fn_8266B060(puStack00000014 + 3,puStack00000014[1],uVar2);
    puStack00000014[1] = puStack00000014[1] + 4;
  }
  return;
}

