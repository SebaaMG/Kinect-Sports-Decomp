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
extern int fn_82A1E7D8();
extern int fn_82A1E810();
extern int fn_82FF5200();


void fn_82FF4D30(int param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x88;
  RtlEnterCriticalSection(iVar3);
  iVar2 = fn_82FF5200(param_1 + 4,param_2);
  if ((iVar2 == 0) || ((*(uint *)(iVar2 + 0x28) & 0x10) == 0)) {
    RtlLeaveCriticalSection(iVar3);
  }
  else {
    *param_3 = *(undefined4 *)(iVar2 + 0x24);
    param_3[1] = *(undefined4 *)(iVar2 + 0xc);
    param_3[2] = (int)param_2;
    param_3[3] = *(undefined4 *)(iVar2 + 8);
    pcVar1 = *(code **)(iVar2 + 0x20);
    fn_82A1E7D8(*(undefined4 *)(param_1 + 0xa4));
    RtlLeaveCriticalSection(iVar3);
    (*pcVar1)(0x10,param_3);
    fn_82A1E810(*(undefined4 *)(param_1 + 0xa4));
  }
  return;
}

