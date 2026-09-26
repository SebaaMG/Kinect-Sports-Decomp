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
extern int fn_822315A0();
extern int fn_82555A88();
extern int fn_8266F6B8();
extern int fn_82671A40();
extern int fn_826728E8();
extern unsigned int lbl_821938C8;
extern unsigned int lbl_821AB494;
extern unsigned int lbl_8326B394;


void fn_8229D7E0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  undefined **ppuVar5;
  
  uVar1 = param_1[1];
  *param_1 = &lbl_821AB494;
  uVar2 = fn_8266F6B8();
  fn_826728E8(uVar1,0xffffffff821ab400,uVar2);
  lVar4 = 0x10;
  ppuVar5 = &lbl_821938C8;
  do {
    piVar3 = (int *)fn_82555A88((ulonglong)(uint)param_1[3] + 0x98,*ppuVar5);
    if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
      *(undefined4 *)(*piVar3 + 0x19c) = lbl_8326B394;
    }
    lVar4 = lVar4 + -1;
    ppuVar5 = ppuVar5 + 1;
  } while (lVar4 != 0);
  *(undefined4 *)(param_1[3] + 0x19c) = lbl_8326B394;
  fn_82671A40(param_1[1],param_1);
  if (param_1[2] != 0) {
    fn_822315A0();
  }
  return;
}

