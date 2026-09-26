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
extern int fn_8265D3D0();
extern int fn_8265FA58();
extern int fn_82666560();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82668EA0();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;
extern unsigned int uStack00000014;
extern unsigned int uStack_20;


void fn_8266AC20(undefined4 param_1,int param_2)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  char cVar4;
  int *piVar3;
  undefined4 uStack00000014;
  int iStack0000001c;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [24];
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  puVar2 = (undefined4 *)fn_82668D40(auStack_1c,param_1);
  uStack_20 = *puVar2;
  while( true ) {
    uVar1 = fn_82668D80(auStack_18,uStack00000014);
    cVar4 = fn_82668EA0(&uStack_20,uVar1);
    if (cVar4 == '\0') {
      fn_82666560(uStack00000014,&stack0x0000001c);
      return;
    }
    piVar3 = (int *)fn_8265FA58(&uStack_20,0);
    if (*piVar3 == iStack0000001c) break;
    fn_8265D3D0(&uStack_20);
  }
  return;
}

