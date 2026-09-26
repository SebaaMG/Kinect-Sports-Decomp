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
extern int fn_822315A0();
extern int fn_822F9168();
extern int fn_82365BD8();
extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821AE748;


undefined4 *
fn_822FA348(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar1;
  undefined4 *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [72];
  
  puVar2 = (undefined4 *)fn_8265C9E0(0x24);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar2 + 3;
    puVar2[1] = 1;
    *puVar2 = &lbl_821AD588;
    puVar2[2] = 1;
    if (puVar4 != (undefined4 *)0x0) {
      iVar3 = fn_82365BD8(auStack_50,param_5);
      uVar1 = fn_82365BD8(auStack_48,iVar3);
      fn_822F9168(puVar4,param_2,param_3,param_4,uVar1);
      *puVar4 = &lbl_821AE748;
      if (*(int *)(iVar3 + 4) != 0) {
        fn_822315A0();
      }
    }
  }
  param_1[1] = puVar2;
  *param_1 = puVar2 + 3;
  return param_1;
}

