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
extern int fn_8265C9E0();
extern unsigned int lbl_82196C88;
extern unsigned int lbl_821AD588;


undefined4 *
fn_82391C08(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)fn_8265C9E0(0x2c);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7[1] = 1;
    *puVar7 = &lbl_821AD588;
    puVar7[2] = 1;
    if (puVar7 + 3 != (undefined4 *)0x0) {
      uVar1 = *param_7;
      uVar2 = *param_6;
      uVar3 = *param_5;
      uVar4 = *param_4;
      uVar5 = *param_3;
      uVar6 = *param_2;
      puVar7[4] = 0;
      puVar7[3] = &lbl_82196C88;
      puVar7[7] = uVar4;
      puVar7[6] = uVar5;
      puVar7[5] = uVar6;
      puVar7[8] = uVar3;
      puVar7[9] = uVar2;
      puVar7[10] = uVar1;
    }
  }
  param_1[1] = puVar7;
  *param_1 = puVar7 + 3;
  return param_1;
}

