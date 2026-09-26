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
extern int fn_822315A0();
extern int fn_82349DE8();
extern int fn_82365BD8();
extern int fn_8265C9E0();
extern unsigned int lbl_821917B0;
extern unsigned int lbl_82195614;
extern unsigned int lbl_82195618;
extern unsigned int lbl_821B1A70;


undefined4 * fn_82344C28(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  fn_82349DE8();
  *param_1 = &lbl_821B1A70;
  fn_82365BD8(param_1 + 5,param_4);
  puVar3 = (undefined4 *)fn_8265C9E0(0xc);
  uVar2 = lbl_82195618;
  uVar1 = lbl_821917B0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = lbl_82195614;
    puVar3[1] = uVar1;
    puVar3[2] = uVar2;
  }
  param_1[7] = puVar3;
  if (*(int *)(param_4 + 4) != 0) {
    fn_822315A0();
  }
  return param_1;
}

