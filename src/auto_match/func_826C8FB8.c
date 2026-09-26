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
extern int fn_8268CC00();
extern int fn_8268D280();
extern int fn_826A1158();
extern int fn_826C8688();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int lbl_821AAD20;


undefined4 * fn_826C8FB8(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 auStack_50 [16];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  piVar2 = (int *)fn_826C8688(param_2);
  fn_8268CC00(&iStack_40);
  if (piVar2 == (int *)0x0) {
    fn_826A1158(param_1,param_2);
  }
  else {
    iStack_40 = piVar2[0x11];
    iStack_3c = piVar2[0x12];
    iStack_38 = piVar2[0x13];
    iStack_34 = piVar2[0x14];
    iStack_30 = piVar2[0x15];
    iStack_2c = piVar2[0x16];
    (**(code **)(*piVar2 + 0xd4))(auStack_50,piVar2);
    uVar1 = lbl_821AAD20;
    *param_1 = lbl_821AAD20;
    param_1[1] = uVar1;
    param_1[2] = uVar1;
    param_1[3] = uVar1;
    fn_8268D280(&iStack_40,param_1,auStack_50);
  }
  return param_1;
}

