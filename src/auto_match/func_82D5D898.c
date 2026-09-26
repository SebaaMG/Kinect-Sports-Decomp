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
extern int fn_82D71488();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


void fn_82D5D898(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar1 = (int *)*param_4;
  puStack_40 = param_3;
  puStack_3c = param_4;
  uStack_30 = param_5;
  uStack_2c = param_6;
  uStack_28 = param_7;
  uStack_38 = (**(code **)(*(int *)*param_3 + 0x10))();
  uStack_34 = (**(code **)(*piVar1 + 0x10))(piVar1);
  fn_82D71488(param_2,&puStack_40);
  return;
}

