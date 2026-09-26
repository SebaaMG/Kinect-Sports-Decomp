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
extern unsigned int *auStack_20;
extern int fn_8265F598();
extern int fn_82663BE8();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82668EA0();
extern int fn_8266AAC8();
extern int fn_8266C340();
extern unsigned int iStack00000014;


undefined8 fn_8266A628(int param_1)

{
  undefined8 uVar1;
  char cVar4;
  undefined4 *puVar2;
  int iVar3;
  int iStack00000014;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [8];
  
  iStack00000014 = param_1;
  if (param_1 == 0) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82002724,0x131,0xffffffff8200251c);
  }
  fn_82668D40(auStack_20,0xffffffff831e7af8);
  while( true ) {
    uVar1 = fn_82668D80(auStack_18,0xffffffff831e7af8);
    cVar4 = fn_82668EA0(auStack_20,uVar1);
    iVar3 = iStack00000014;
    if (cVar4 == '\0') {
      return 0;
    }
    puVar2 = (undefined4 *)fn_82663BE8(auStack_20);
    iVar3 = fn_8265F598(*puVar2,iVar3);
    if (iVar3 == 0) break;
    fn_8266AAC8(auStack_1c,auStack_20,0);
  }
  return 1;
}

