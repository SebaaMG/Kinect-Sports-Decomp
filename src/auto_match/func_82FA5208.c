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
extern unsigned int lbl_83264208;
extern unsigned int lbl_83264210;


undefined8 fn_82FA5208(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 < lbl_83264208) {
    iVar4 = param_1 * 0x50 + lbl_83264210;
    iVar3 = iVar4 + 0x24;
    RtlEnterCriticalSection(iVar3);
    uVar1 = *(undefined4 *)(iVar4 + 0x4c);
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = uVar1;
    RtlLeaveCriticalSection(iVar3);
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

