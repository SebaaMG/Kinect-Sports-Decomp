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
extern float lbl_82005328;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642EC;


undefined8 fn_82FEB6C0(undefined8 param_1,int param_2,float *param_3,float *param_4)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 *puVar5;
  undefined8 uVar4;
  
  RtlEnterCriticalSection(0xffffffff8326434c);
  puVar5 = (undefined4 *)fn_8301A7B8(lbl_832642EC,param_1);
  fVar2 = lbl_82005328;
  if (puVar5 == (undefined4 *)0x0) {
    RtlLeaveCriticalSection(0xffffffff8326434c);
    uVar4 = 0xf;
  }
  else {
    *param_3 = (float)*(byte *)((int)puVar5 + param_2 + 0x40) * lbl_82005328;
    *param_4 = (float)*(byte *)((int)puVar5 + param_2 + 0x48) * fVar2;
    uVar1 = puVar5[0x17];
    puVar5[0x17] = (int)((ulonglong)uVar1 - 1);
    uVar3 = lbl_831BC768;
    if ((longlong)((ulonglong)uVar1 - 1) < 1) {
      (**(code **)*puVar5)(puVar5,0);
      fn_82FA5190(uVar3,puVar5);
    }
    RtlLeaveCriticalSection(0xffffffff8326434c);
    uVar4 = 1;
  }
  return uVar4;
}

