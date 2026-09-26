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
extern unsigned int *auStack_18;
extern unsigned int *auStack_1c;
extern unsigned int *auStack_c;
extern int fn_8265CA20();
extern int fn_826638B0();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82668E70();
extern int fn_82668EA0();
extern int fn_8266A420();
extern unsigned int uStack00000014;
extern unsigned int uStack_10;
extern unsigned int uStack_14;
extern unsigned int uStack_20;


void fn_8265D948(uint param_1,char param_2)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  char cVar3;
  uint uStack00000014;
  char cStack0000001f;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [12];
  
  uStack00000014 = param_1;
  cStack0000001f = param_2;
  fn_82668E70(&uStack_20);
  puVar2 = (undefined4 *)fn_82668D40(auStack_1c,(ulonglong)uStack00000014 + 4);
  uStack_20 = *puVar2;
  while( true ) {
    uVar1 = fn_82668D80(auStack_18,(ulonglong)uStack00000014 + 4);
    cVar3 = fn_82668EA0(&uStack_20,uVar1);
    if (cVar3 == '\0') break;
    if (cStack0000001f != '\0') {
      puVar2 = (undefined4 *)fn_826638B0(&uStack_20,0);
      uStack_14 = *puVar2;
      fn_8265CA20(uStack_14);
    }
    uStack_10 = uStack_20;
    puVar2 = (undefined4 *)fn_8266A420(auStack_c,(ulonglong)uStack00000014 + 4,uStack_20);
    uStack_20 = *puVar2;
  }
  return;
}

