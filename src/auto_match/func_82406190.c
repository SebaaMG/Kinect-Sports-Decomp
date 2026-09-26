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
extern unsigned int *auStack_70;
extern int fn_824060E8();
extern int fn_82406510();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;


undefined4 * fn_82406190(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar3;
  undefined8 uVar2;
  undefined1 auStack_70 [112];
  
  puVar3 = (undefined4 *)fn_8265C9E0(0x60);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 1;
    *puVar3 = &lbl_821A8D8C;
    puVar3[2] = 1;
    if (puVar3 + 4 != (undefined4 *)0x0) {
      uVar1 = *param_3;
      uVar2 = fn_824060E8(auStack_70,param_2);
      fn_82406510(puVar3 + 4,uVar2,uVar1);
    }
  }
  param_1[1] = puVar3;
  *param_1 = puVar3 + 4;
  return param_1;
}

