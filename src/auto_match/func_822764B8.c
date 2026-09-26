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
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_82279AF0();
extern int fn_82279C58();
extern int fn_8251FA58();
extern int fn_8265CA20();
extern int fn_8266F6B8();
extern int fn_826728E8();
extern unsigned int iStack_24;
extern unsigned int iStack_2c;
extern unsigned int lbl_821A8118;
extern unsigned int lbl_821A89BC;


undefined4 * fn_822764B8(undefined4 *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 *puVar3;
  undefined8 uVar2;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined1 auStack_28 [4];
  int iStack_24;
  
  *param_1 = &lbl_821A8118;
  if (param_1[0x4d] == 0) {
    puVar3 = (undefined4 *)fn_82279C58(auStack_28,param_1);
    uVar1 = *puVar3;
    uVar2 = fn_8266F6B8();
    fn_826728E8(uVar1,0xffffffff821a807c,uVar2);
    iStack_2c = iStack_24;
  }
  else {
    puVar3 = (undefined4 *)fn_82279C58(auStack_30,param_1);
    uVar1 = *puVar3;
    uVar2 = fn_8266F6B8();
    fn_826728E8(uVar1,0xffffffff821a806c,uVar2);
  }
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  if (param_1[0x4c] != 0) {
    fn_8251FA58();
    param_1[0x4c] = 0;
  }
  *param_1 = &lbl_821A89BC;
  fn_82279AF0(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

