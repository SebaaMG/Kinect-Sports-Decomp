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
extern int fn_8265CF50();
extern int fn_8265CF70();
extern int fn_8265D3F0();
extern int fn_8265ED50();
extern int fn_8265F608();
extern int fn_82665A98();
extern int fn_826660E8();
extern int fn_826686F8();
extern int fn_82668738();
extern int fn_8266C340();
extern int fn_8266C438();
extern unsigned int iStack00000014;
extern unsigned int iStack_18;
extern unsigned int uStack_14;
extern unsigned int uStack_1c;


ulonglong fn_82665960(int param_1)

{
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar1;
  uint uVar5;
  longlong lVar2;
  int iStack00000014;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  iStack00000014 = param_1;
  if (param_1 == 0) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x39d,0xffffffff8200251c);
  }
  iVar3 = fn_8265D3F0(0xffffffff831e7a74);
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)fn_8265CF50(0xffffffff831e7a1c,5);
    fn_826660E8(0xffffffff831e7a74,*puVar4);
  }
  iVar3 = fn_8265ED50(iStack00000014);
  if (iVar3 == 0) {
    fn_8266C438(0xffffffff820024c0,iStack00000014);
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar5 = fn_82665A98(iStack00000014);
    if ((int)uVar5 < 0) {
      iStack_18 = fn_82668738(0x2c);
      if (iStack_18 == 0) {
        uStack_14 = 0;
      }
      else {
        uStack_14 = fn_826686F8(iStack_18,iStack00000014);
      }
      uStack_1c = uStack_14;
      fn_8265F608(0xffffffff831e7a74,&uStack_1c);
      lVar2 = fn_8265CF70(0xffffffff831e7a74);
      uVar1 = lVar2 - 1;
    }
    else {
      uVar1 = (ulonglong)uVar5;
    }
  }
  return uVar1;
}

