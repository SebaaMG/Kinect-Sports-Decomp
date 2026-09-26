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
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82FF4BB8(int param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar3 = param_1 + 0x88;
  RtlEnterCriticalSection(iVar3);
  iVar2 = fn_82FF5200(param_1 + 4,param_2);
  if (((iVar2 == 0) || ((*(uint *)(iVar2 + 0x28) & 0x80) == 0)) ||
     (pcVar1 = *(code **)(iVar2 + 0x20), pcVar1 == (code *)0x0)) {
    RtlLeaveCriticalSection(iVar3);
  }
  else {
    uStack_40 = *(undefined4 *)(iVar2 + 0x24);
    uStack_3c = *(undefined4 *)(iVar2 + 0xc);
    uStack_34 = *(undefined4 *)(iVar2 + 8);
    uStack_38 = (undefined4)param_2;
    fn_82A1E7D8(*(undefined4 *)(param_1 + 0xa4));
    RtlLeaveCriticalSection(iVar3);
    (*pcVar1)(0x80,&uStack_40);
    fn_82A1E810(*(undefined4 *)(param_1 + 0xa4));
  }
  return;
}

