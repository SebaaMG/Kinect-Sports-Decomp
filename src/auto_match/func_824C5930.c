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
extern unsigned int lbl_821C09C4;
extern unsigned int lbl_821CC160;


undefined4 *
fn_824C5930(double param_1,double param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  param_3[1] = param_4;
  puVar2 = param_3 + 2;
  *param_3 = &lbl_821C09C4;
  if (*(int *)(param_5 + 0x10) == 0) {
    param_3[6] = 0;
  }
  else {
    if (*(int *)(param_5 + 0x10) != param_5) {
      puVar2 = (undefined4 *)0x0;
    }
    uVar1 = (**(code **)**(undefined4 **)(param_5 + 0x10))(*(undefined4 **)(param_5 + 0x10),puVar2);
    param_3[6] = uVar1;
  }
  param_3[9] = (float)param_1;
  param_3[10] = (float)param_2;
  param_3[8] = lbl_821CC160;
  return param_3;
}

