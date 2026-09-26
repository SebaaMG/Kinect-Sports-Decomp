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
extern int fn_830A5EA8();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int uStack_14;
extern unsigned int uStack_18;


void fn_82D9E7D0(undefined8 param_1,int *param_2,undefined4 *param_3,undefined8 param_4,
                  int param_5,int param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iStack_1c = *(int *)(param_6 + 0x4c);
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  puVar2 = (undefined4 *)*param_3;
  iVar1 = *(int *)(iVar1 + 4);
  *param_3 = puVar2 + 4;
  iStack_1c = *(int *)(param_5 + 0xb8) * 8 + iStack_1c;
  iStack_20 = (iVar1 + 5) * 0x10 + param_5;
  uStack_18 = *puVar2;
  uStack_14 = 1;
  fn_830A5EA8(&iStack_20,param_6,param_7);
  *(int *)(param_5 + 0xb8) = *(int *)(param_5 + 0xb8) + 1;
  return;
}

