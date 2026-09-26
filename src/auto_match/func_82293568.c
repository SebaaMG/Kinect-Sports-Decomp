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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82292450();
extern int fn_8229AA08();
extern int fn_8229AE10();
extern int fn_82526C70();
extern int fn_8265CA20();
extern int fn_8266F6B8();
extern int fn_826728E8();
extern unsigned int iStack_5c;
extern unsigned int lbl_821AA7BC;


undefined4 * fn_82293568(undefined4 *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar4;
  undefined8 uVar3;
  longlong lVar5;
  undefined1 auStack_60 [4];
  int iStack_5c;
  undefined1 auStack_50 [80];
  
  *param_1 = &lbl_821AA7BC;
  lVar5 = 0;
  do {
    fn_82526C70(auStack_50,0x20,0xffffffff821aa618,lVar5);
    puVar4 = (undefined4 *)fn_8229AE10(auStack_60,param_1);
    uVar1 = *puVar4;
    uVar3 = fn_8266F6B8();
    fn_826728E8(uVar1,auStack_50,uVar3);
    if (iStack_5c != 0) {
      fn_822315A0();
    }
    lVar5 = lVar5 + 1;
  } while ((int)lVar5 < 8);
  iVar2 = param_1[0x615];
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0xc) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(iVar2);
  }
  if (param_1[0x613] != 0) {
    fn_82292450(param_1[0x613],1);
  }
  if (param_1[0x612] != 0) {
    fn_82292450(param_1[0x612],1);
  }
  if (param_1[0x611] != 0) {
    fn_82292450(param_1[0x611],1);
  }
  fn_8229AA08(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

