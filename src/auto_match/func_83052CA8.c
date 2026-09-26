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
extern int fn_830525B0();
extern int fn_83055CF0();
extern int fn_83055EE8();


undefined8 fn_83052CA8(int param_1,int *param_2,undefined4 *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1 + -0x40;
  *param_2 = 0;
  *param_3 = 0;
  RtlEnterCriticalSection(iVar2);
  iVar3 = param_1 + -0x78;
  iVar1 = fn_830525B0(iVar3,param_3);
  *param_2 = iVar1;
  RtlLeaveCriticalSection(iVar2);
  if (((param_4 != '\0') && (*param_2 == 0)) && ((*(byte *)(param_1 + 0x31) & 0x40) == 0)) {
    if ((*(byte *)(param_1 + 0x31) & 0x80) == 0) {
      return 2;
    }
    RtlEnterCriticalSection(iVar2);
    iVar1 = fn_830525B0(iVar3,param_3);
    *param_2 = iVar1;
    while (((iVar1 == 0 && ((*(byte *)(param_1 + 0x31) & 0x40) == 0)) &&
           ((*(uint *)(param_1 + -4) & 0x10000000) == 0))) {
      fn_83055CF0(iVar3);
      RtlLeaveCriticalSection(iVar2);
      fn_83055EE8(*(undefined4 *)(param_1 + -0x18),iVar3);
      RtlEnterCriticalSection(iVar2);
      iVar1 = fn_830525B0(iVar3,param_3);
      *param_2 = iVar1;
    }
    RtlLeaveCriticalSection(iVar2);
  }
  if ((*(byte *)(param_1 + 0x31) & 0x40) != 0) {
    return 2;
  }
  if (*param_2 != 0) {
    if (((*(uint *)(param_1 + -4) & 0x10000000) != 0) &&
       (((longlong)*(int *)(param_1 + -0xc) * (longlong)*(int *)(param_1 + -0x58) & 0xffffffffU) +
        *(longlong *)(param_1 + -0x60) <= *(ulonglong *)(param_1 + 8))) {
      return 0x11;
    }
    return 0x2d;
  }
  if (((*(uint *)(param_1 + -4) & 0x10000000) != 0) &&
     (((longlong)*(int *)(param_1 + -0xc) * (longlong)*(int *)(param_1 + -0x58) & 0xffffffffU) +
      *(longlong *)(param_1 + -0x60) <= *(ulonglong *)(param_1 + 8))) {
    return 0x11;
  }
  return 0x2e;
}

