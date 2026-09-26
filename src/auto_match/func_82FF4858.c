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
extern int fn_82FF5268();


undefined8
fn_82FF4858(longlong param_1,undefined4 *param_2,int param_3,undefined4 param_4,uint param_5,
             undefined4 param_6)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  longlong lVar3;
  
  lVar3 = param_1 + 0x88;
  RtlEnterCriticalSection(lVar3);
  puVar2 = (undefined4 *)fn_82FF5268(param_1 + 4,param_2[1]);
  if (puVar2 == (undefined4 *)0x0) {
    RtlLeaveCriticalSection(lVar3);
    uVar1 = 2;
  }
  else {
    puVar2[2] = param_6;
    *puVar2 = 0;
    puVar2[1] = 1;
    puVar2[3] = *param_2;
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(param_2 + 4);
    puVar2[8] = param_3;
    puVar2[9] = param_4;
    if (param_3 == 0) {
      param_5 = param_5 & 0xffff0004;
    }
    puVar2[10] = param_5;
    RtlLeaveCriticalSection(lVar3);
    uVar1 = 1;
  }
  return uVar1;
}

