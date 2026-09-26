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
extern int fn_82FE41A0();
extern int fn_82FE4B20();
extern int fn_82FE4C08();


undefined8
fn_82FE4D80(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = fn_82FE4C08(param_4[3],param_3,param_4,param_7);
  uVar1 = fn_82FE41A0(param_2,param_3,*param_4);
  if (((((int)uVar1 == 1) &&
       (uVar1 = fn_82FE41A0(param_2 + 0xc,param_3,param_4[1]), (int)uVar1 == 1)) &&
      (uVar1 = fn_82FE41A0(param_2 + 0x18,param_3,param_4[2]), (int)uVar1 == 1)) &&
     (uVar1 = fn_82FE41A0(param_2 + 0x24,param_3,param_4[3]), (int)uVar1 == 1)) {
    fn_82FE4B20(param_1,uVar2,param_2 + 0x30);
    fn_82FE4B20(param_1,uVar2,param_2 + 0x3c);
    fn_82FE4B20(param_1,uVar2,param_2 + 0x48);
    fn_82FE4B20(param_1,uVar2,param_2 + 0x54);
    uVar1 = 1;
  }
  return uVar1;
}

