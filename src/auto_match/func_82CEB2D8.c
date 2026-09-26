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
extern unsigned int *auStack_2c;
extern int fn_82CEB1F0();
extern int fn_82CFD5F0();
extern unsigned int uStack_30;


undefined8 fn_82CEB2D8(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uStack_30;
  undefined4 auStack_2c [11];
  
  uVar2 = fn_82CEB1F0(param_1,param_2,auStack_2c,&uStack_30);
  if ((int)uVar2 == 0) {
    iVar1 = *param_3;
    uVar3 = fn_82CFD5F0(uStack_30);
    (**(code **)(iVar1 + 0x10))(param_3,auStack_2c[0],uVar3);
  }
  return uVar2;
}

