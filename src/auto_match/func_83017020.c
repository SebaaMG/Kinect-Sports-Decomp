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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_83016E90();
extern int fn_83016EF8();


undefined8 fn_83017020(int param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  RtlEnterCriticalSection(param_1 + 0x720);
  uVar3 = CONCAT44((int)param_2,(int)param_4);
  lVar2 = param_2 + param_4 + ((param_2 + param_4 & 0xffffffff) / 0xc1) * -0xc1;
  puVar1 = (undefined4 *)fn_83016E90(param_1 + 0x310,uVar3,lVar2);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)fn_83016EF8(param_1 + 0x310,uVar3,lVar2);
    if (puVar1 == (undefined4 *)0x0) {
      uVar3 = 2;
      goto LAB_830170b4;
    }
  }
  *puVar1 = (int)param_3;
  uVar3 = 1;
LAB_830170b4:
  for (puVar1 = *(undefined4 **)(param_1 + 0x6c0); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    if ((ulonglong)(uint)puVar1[2] == (param_2 & 0xffffffff)) {
      (**(code **)(*(int *)puVar1[1] + 4))((int *)puVar1[1],param_3,param_4);
    }
  }
  RtlLeaveCriticalSection(param_1 + 0x720);
  return uVar3;
}

