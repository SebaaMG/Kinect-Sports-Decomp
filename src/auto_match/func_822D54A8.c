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
extern int fn_822315A0();
extern int fn_8223B688();
extern int fn_822C70F0();
extern int fn_82365BD8();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821ADA94;


undefined4 *
fn_822D54A8(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 param_5,undefined4 *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_50 [80];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  puVar3 = param_1 + 3;
  if (puVar3 != (undefined4 *)0x0) {
    iVar2 = fn_82365BD8(auStack_50,param_7);
    uVar1 = *param_6;
    fn_822C70F0(puVar3,param_2,param_3);
    param_1[0x18] = param_4;
    *puVar3 = &lbl_821ADA94;
    param_1[0x19] = *(undefined4 *)(param_4 + 0x118);
    param_1[0x1a] = *(int *)(param_4 + 0x118) + 0x24;
    fn_8223B688(param_1 + 0x1b,param_5);
    param_1[0x22] = uVar1;
    fn_82365BD8(param_1 + 0x23,iVar2);
    param_1[0x17] = (uint)LZCOUNT(uVar1) >> 5;
    if (*(int *)(iVar2 + 4) != 0) {
      fn_822315A0();
    }
  }
  return param_1;
}

