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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822D01E8();
extern int fn_82365BD8();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821ADB98;
extern unsigned int lbl_821CC160;


undefined4 *
fn_822D1CC8(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [72];
  
  param_1[1] = 1;
  *param_1 = &lbl_821A8D8C;
  param_1[2] = 1;
  puVar4 = param_1 + 4;
  if (puVar4 != (undefined4 *)0x0) {
    iVar3 = fn_82365BD8(auStack_50,param_4);
    uVar2 = fn_82365BD8(auStack_48,iVar3);
    fn_822D01E8(puVar4,param_2,param_3,1,uVar2,param_5);
    *puVar4 = &lbl_821ADB98;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    fn_82230300(param_1 + 0x1a,0,0);
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    uVar1 = lbl_821CC160;
    param_1[0x39] = 0;
    param_1[0x3a] = uVar1;
    if (*(int *)(iVar3 + 4) != 0) {
      fn_822315A0();
    }
  }
  return param_1;
}

