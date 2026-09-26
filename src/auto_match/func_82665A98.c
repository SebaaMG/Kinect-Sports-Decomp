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
extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern int fn_8265F598();
extern int fn_8265FA58();
extern int fn_826666C8();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82668EA0();
extern int fn_8266C340();
extern unsigned int iStack00000014;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


ulonglong fn_82665A98(int param_1)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  char cVar4;
  int iVar3;
  int iStack00000014;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [16];
  
  iStack00000014 = param_1;
  if (param_1 == 0) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x3b8,0xffffffff8200251c);
  }
  uStack_2c = 0;
  puVar2 = (undefined4 *)fn_82668D40(auStack_28,0xffffffff831e7a74);
  uStack_30 = *puVar2;
  while( true ) {
    uVar1 = fn_82668D80(auStack_20,0xffffffff831e7a74);
    cVar4 = fn_82668EA0(&uStack_30,uVar1);
    iVar3 = iStack00000014;
    if (cVar4 == '\0') {
      return 0xffffffffffffffff;
    }
    puVar2 = (undefined4 *)fn_8265FA58(&uStack_30,0);
    iVar3 = fn_8265F598(*puVar2,iVar3);
    if (iVar3 == 0) break;
    fn_826666C8(auStack_24,&uStack_30,0);
    uStack_2c = uStack_2c + 1;
  }
  return (ulonglong)uStack_2c;
}

