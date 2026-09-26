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
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_822997C8();
extern int fn_82299948();
extern int fn_8229A7B8();
extern int fn_8229AE10();
extern int fn_8229CDE0();
extern int fn_8265C9E0();
extern int fn_8266F6A8();
extern unsigned int iStack_2c;
extern unsigned int lbl_821AA7BC;
extern unsigned int lbl_821CC160;


undefined4 *
fn_82293448(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  fn_8229A7B8(param_1,param_2,param_4);
  param_1[0x60d] = 0;
  uVar2 = lbl_821CC160;
  *param_1 = &lbl_821AA7BC;
  param_1[0x60b] = uVar2;
  param_1[0x60e] = 0;
  param_1[0x60c] = uVar2;
  param_1[0x60f] = 0;
  param_1[0x610] = 0;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82299948(uVar1,1,0);
  }
  param_1[0x611] = uVar2;
  uVar1 = fn_8265C9E0(0x1230);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82299948(uVar1,2,0);
  }
  param_1[0x612] = uVar2;
  iVar3 = fn_8265C9E0(0x1230);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_822997C8();
  }
  param_1[0x613] = uVar2;
  param_1[0x614] = 0;
  uVar1 = fn_8265C9E0(0x10);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_8229CDE0(uVar1,param_3,1);
  }
  param_1[0x615] = uVar2;
  puVar4 = (undefined4 *)fn_8229AE10(auStack_30,param_1);
  fn_8266F6A8(*puVar4,3);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  return param_1;
}

