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
extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_824C0998();
extern unsigned int iStack_2c;
extern unsigned int iStack_34;
extern unsigned int iStack_3c;


void fn_824C0570(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  if ((int)param_2 != 0) {
    puVar1 = (undefined4 *)fn_824C0998(auStack_40,param_1,param_2);
    (**(code **)(*(int *)*puVar1 + 0x14))();
    if (iStack_3c != 0) {
      fn_822315A0();
    }
  }
  if ((int)param_3 != 0) {
    if (*(int *)(param_1 + 0x40) == 0) {
      puVar1 = (undefined4 *)fn_824C0998(auStack_38,param_1,param_3);
      (**(code **)(*(int *)*puVar1 + 0xc))();
    }
    else {
      puVar1 = (undefined4 *)fn_824C0998(auStack_30,param_1,param_3);
      (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,param_1 + 0x40);
      iStack_34 = iStack_2c;
    }
    if (iStack_34 != 0) {
      fn_822315A0();
    }
  }
  return;
}

