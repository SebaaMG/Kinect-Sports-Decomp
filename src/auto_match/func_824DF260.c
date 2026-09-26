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
extern int fn_82359C18();
extern unsigned int lbl_821CC160;


undefined4 * fn_824DF260(double param_1,undefined4 *param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  param_2[4] = (float)param_1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = lbl_821CC160;
  puVar2 = param_2 + 8;
  param_2[2] = 0;
  param_2[7] = uVar1;
  if (*(int *)(param_4 + 0x10) == 0) {
    param_2[0xc] = 0;
  }
  else {
    if (*(int *)(param_4 + 0x10) != param_4) {
      puVar2 = (undefined4 *)0x0;
    }
    uVar1 = (**(code **)**(undefined4 **)(param_4 + 0x10))(*(undefined4 **)(param_4 + 0x10),puVar2);
    param_2[0xc] = uVar1;
  }
  fn_82359C18(param_4);
  return param_2;
}

