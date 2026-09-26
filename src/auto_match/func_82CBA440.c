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


void fn_82CBA440(int param_1,int param_2,int param_3,undefined8 *param_4,int param_5,uint param_6,
                  uint param_7,int param_8)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)(((int)param_7 >> 2) * param_3 + ((int)param_6 >> 2) + param_2);
  if (((param_6 & 3) == 0) && ((param_7 & 3) == 0)) {
    puVar3 = (undefined8 *)((int)param_4 + param_5 * 2);
    *param_4 = *puVar2;
    puVar2 = (undefined8 *)((int)puVar2 + param_3);
    *(undefined8 *)((int)param_4 + param_5) = *puVar2;
    puVar2 = (undefined8 *)((int)puVar2 + param_3);
    *puVar3 = *puVar2;
    puVar2 = (undefined8 *)((int)puVar2 + param_3);
    puVar3 = (undefined8 *)((int)puVar3 + param_5);
    *puVar3 = *puVar2;
    puVar2 = (undefined8 *)((int)puVar2 + param_3);
    puVar3 = (undefined8 *)((int)puVar3 + param_5);
    *puVar3 = *puVar2;
    puVar2 = (undefined8 *)((int)puVar2 + param_3);
    puVar3 = (undefined8 *)((int)puVar3 + param_5);
    *puVar3 = *puVar2;
    puVar2 = (undefined8 *)((int)puVar2 + param_3);
    puVar3 = (undefined8 *)((int)puVar3 + param_5);
    *puVar3 = *puVar2;
    *(undefined8 *)((int)puVar3 + param_5) = *(undefined8 *)((int)puVar2 + param_3);
    return;
  }
  if (param_8 == 1) {
    pcVar1 = *(code **)(param_1 + 0xc68);
  }
  else {
    pcVar1 = *(code **)(param_1 + 0xc6c);
  }
  (*pcVar1)();
  return;
}

