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


void fn_82450F64(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,int param_5
                  ,undefined8 param_6,undefined8 param_7,int param_8)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_r11;
  int iVar3;
  undefined4 *puVar4;
  byte in_cr6;
  
  while ((iVar3 = in_r11, (bool)(in_cr6 >> 3 & 1) &&
         (puVar4 = (undefined4 *)(iVar3 * 8 + param_1), (int)puVar4[1] < (int)param_4[1]))) {
    uVar1 = iVar3 - 1;
    puVar2 = (undefined4 *)(param_8 * 8 + param_1);
    in_cr6 = (param_5 < iVar3) << 3;
    *puVar2 = *puVar4;
    puVar2[1] = puVar4[1];
    in_r11 = ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0);
    param_8 = iVar3;
  }
  puVar4 = (undefined4 *)(param_8 * 8 + param_1);
  *puVar4 = *param_4;
  puVar4[1] = param_4[1];
  return;
}

