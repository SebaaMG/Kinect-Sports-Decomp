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
extern int fn_8265CF50();
extern int fn_8265CF70();
extern int fn_82665A98();
extern int fn_82666718();
extern int fn_82666768();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82668EA0();
extern int fn_8266C340();
extern unsigned int iStack0000001c;
extern unsigned int iStack_2c;
extern unsigned int uStack00000014;
extern unsigned int uStack_30;


undefined4 fn_82665B90(uint param_1,int param_2)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  char cVar6;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uStack00000014;
  int iStack0000001c;
  undefined4 uStack_30;
  int iStack_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [16];
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  if (param_1 == 0) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x3ca,0xffffffff820022c8);
  }
  if (iStack0000001c == 0) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x3cb,0xffffffff8200251c);
  }
  iStack_2c = fn_82665A98(iStack0000001c);
  puVar2 = (undefined4 *)fn_82668D40(auStack_28,(ulonglong)uStack00000014 + 0x38);
  uStack_30 = *puVar2;
  while( true ) {
    uVar1 = fn_82668D80(auStack_20,(ulonglong)uStack00000014 + 0x38);
    cVar6 = fn_82668EA0(&uStack_30,uVar1);
    if (cVar6 == '\0') {
      return 0;
    }
    piVar3 = (int *)fn_82666768(&uStack_30,0);
    if (*piVar3 == iStack_2c) break;
    fn_82666718(auStack_24,&uStack_30,0);
  }
  iVar4 = fn_8265CF70(0xffffffff831e7a60);
  iVar5 = fn_82666768(&uStack_30,0);
  if (iVar4 <= *(int *)(iVar5 + 4)) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x3d4,0xffffffff82002538);
  }
  iVar4 = fn_82666768(&uStack_30,0);
  puVar2 = (undefined4 *)fn_8265CF50(0xffffffff831e7a60,*(undefined4 *)(iVar4 + 4));
  return *puVar2;
}

