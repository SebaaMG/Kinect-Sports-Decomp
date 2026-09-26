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
extern int fn_82D80C48();
extern int fn_82D89BD8();
extern unsigned int iStack_2c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;


void fn_82D8BF28(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x94) == 0)) {
    fn_82D89BD8(param_1);
    (**(code **)(*(int *)(param_1 + 0xe0) + 0x4c))(param_1 + 0xe0,param_2);
  }
  else {
    uStack_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    auStack_30[0] = 0x1b;
    iStack_2c = param_1;
    fn_82D80C48(iVar1,auStack_30);
  }
  return;
}

