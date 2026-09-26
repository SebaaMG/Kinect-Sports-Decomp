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


longlong fn_82F72318(undefined4 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = param_2 + 7U & 0xfffffff8;
  if (param_3 != 0) {
    lVar1 = (*(code *)*param_1)(uVar3);
    return lVar1;
  }
  if (uVar3 == 0) {
    uVar3 = 8;
  }
  if ((uint)param_1[4] < uVar3) {
    if (uVar3 < 0x1001) {
      puVar2 = (undefined4 *)fn_82F72318(0xffffffff832635a0,0x1004,1);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = 0;
      }
      if (puVar2 != (undefined4 *)0x0) {
        if ((undefined4 *)param_1[3] == (undefined4 *)0x0) {
          param_1[2] = puVar2;
        }
        else {
          *(undefined4 *)param_1[3] = puVar2;
        }
        param_1[3] = puVar2;
        uVar3 = 0x1000 - uVar3;
        goto LAB_82f723d8;
      }
    }
    lVar1 = 0;
  }
  else {
    uVar3 = param_1[4] - uVar3;
LAB_82f723d8:
    param_1[4] = uVar3;
    lVar1 = (ulonglong)(uint)param_1[3] + (ulonglong)uVar3 + 4;
  }
  return lVar1;
}

