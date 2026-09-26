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
extern int fn_82AB1538();
extern int fn_82BC0088();
extern unsigned int lbl_820E2FF8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BAC750(int param_1,char param_2,undefined8 param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  fn_82AB1538(uVar1,0x22,1,1);
  if (param_4 == '\0') {
    uVar3 = 0x2b;
  }
  else {
    uVar3 = 0xe;
  }
  fn_82AB1538(uVar1,uVar3,1,param_4 != '\0' || param_2 == '\x01');
  fn_82AB1538(uVar1,0x23,8,param_3);
  fn_82AB1538(uVar1,0x2d,4,lbl_820E2FF8);
  puVar2 = (undefined4 *)
           fn_82BC0088(*(int *)(param_1 + 0x78),*(undefined4 *)(*(int *)(param_1 + 0x78) + 4))
  ;
  *puVar2 = uVar1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 6;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return;
}

