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
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int iRam83219598;


longlong fn_82A38678(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [40];
  
  iVar1 = iRam83219598;
  lVar2 = (**(code **)(iRam83219598 + 0x28))(auStack_30,0xffffffff80120089,param_1,auStack_28,7,0);
  if (-1 < lVar2) {
    lVar2 = (**(code **)(iVar1 + 0x20))(auStack_30[0],auStack_28,param_2,0x38,0x22);
    (**(code **)(iVar1 + 4))(auStack_30[0]);
  }
  return lVar2;
}

