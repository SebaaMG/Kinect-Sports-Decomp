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
extern unsigned int *auStack_12f;
extern unsigned int *auStack_150;
extern int fn_822315A0();
extern int fn_82273CD8();
extern int fn_822746B8();
extern int fn_82359C18();
extern int fn_824A7FF8();
extern int fn_8251FA58();
extern int fn_8266F600();
extern int fn_8266F6B8();
extern int fn_82672660();
extern int fn_82F691F0();
extern unsigned int lbl_821A82B8;
extern unsigned int uStack_130;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;


void fn_82279AF0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 *puStack_158;
  undefined1 auStack_150 [32];
  undefined1 uStack_130;
  undefined1 auStack_12f [303];
  
  *param_1 = &lbl_821A82B8;
  if (0 < (int)param_1[0x35]) {
    uVar2 = fn_8266F6B8();
    fn_8266F600(param_1[2],uVar2,auStack_150,0x20);
    uStack_160 = 0;
    uStack_15c = 0;
    fn_82273CD8(&uStack_160,4);
    puStack_158 = auStack_150;
    uStack_130 = 0;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_12f,0,0xff);
  }
  puVar3 = (undefined4 *)param_1[4];
  for (puVar1 = (undefined4 *)*puVar3; puVar1 != puVar3; puVar1 = (undefined4 *)*puVar1) {
    puVar3 = (undefined4 *)puVar1[2];
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    puVar3 = (undefined4 *)param_1[4];
  }
  fn_82672660(param_1[2],param_1);
  if (param_1[8] != 0) {
    fn_8251FA58();
    param_1[8] = 0;
  }
  param_1[9] = 0;
  if (param_1[0x27] != 0) {
    fn_822746B8(param_1[0x27],param_1[0x3b]);
    param_1[0x27] = 0;
  }
  fn_82359C18(param_1 + 0x44);
  fn_824A7FF8(param_1 + 4);
  if (param_1[3] != 0) {
    fn_822315A0();
  }
  return;
}

