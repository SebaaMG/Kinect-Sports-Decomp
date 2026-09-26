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
extern int fn_82FA5190();
extern int fn_8301A7B8();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642EC;


undefined8 fn_82FEAF18(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar4;
  undefined8 uVar3;
  
  RtlEnterCriticalSection(0xffffffff8326434c);
  puVar4 = (undefined4 *)fn_8301A7B8(lbl_832642EC,param_1);
  if (puVar4 == (undefined4 *)0x0) {
    RtlLeaveCriticalSection(0xffffffff8326434c);
    uVar3 = 0xf;
  }
  else {
    *param_2 = (uint)*(byte *)((int)puVar4 + 0x12);
    uVar1 = puVar4[0x17];
    puVar4[0x17] = (int)((ulonglong)uVar1 - 1);
    uVar2 = lbl_831BC768;
    if ((longlong)((ulonglong)uVar1 - 1) < 1) {
      (**(code **)*puVar4)(puVar4,0);
      fn_82FA5190(uVar2,puVar4);
    }
    RtlLeaveCriticalSection(0xffffffff8326434c);
    uVar3 = 1;
  }
  return uVar3;
}

