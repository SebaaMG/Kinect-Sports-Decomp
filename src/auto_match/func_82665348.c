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
extern unsigned int *auStack_14;
extern int fn_8265CF50();
extern int fn_8265CF70();
extern int fn_8265DED8();
extern int fn_8265F570();
extern int fn_8265FA58();
extern int fn_82668D40();
extern int fn_8266C340();
extern int fn_82F664B0();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int iStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


longlong fn_82665348(int param_1,int param_2)

{
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar1;
  longlong lVar2;
  int iStack00000014;
  int iStack0000001c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined1 auStack_14 [20];
  
  iStack00000014 = param_1;
  iStack0000001c = param_2;
  iVar3 = fn_8265CF70(0xffffffff831e7a74);
  if (iVar3 == 0) {
    thunk_FUN_82a2b748(0x15);
    return -1;
  }
  puVar4 = (undefined4 *)fn_82668D40(auStack_14,0xffffffff831e7b08);
  uStack_20 = *puVar4;
  puVar4 = (undefined4 *)fn_8265FA58(&uStack_20,0);
  puVar4 = (undefined4 *)fn_8265CF50(0xffffffff831e7a74,*puVar4);
  uStack_1c = *puVar4;
  if (iStack00000014 != 0) {
    iVar3 = fn_8265DED8(uStack_1c);
    if (iStack0000001c <= iVar3) {
      thunk_FUN_82a2b748(0x7a);
      return -1;
    }
    uVar1 = fn_8265F570(uStack_1c);
    iStack_18 = fn_82F664B0(iStack00000014,iStack0000001c,uVar1);
    if (iStack_18 != 0) {
      if (iStack_18 != 0) {
        fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x30e,0xffffffff82002420);
      }
      thunk_FUN_82a2b748(0x54f);
      return -1;
    }
  }
  lVar2 = fn_8265DED8(uStack_1c);
  return lVar2 + 1;
}

