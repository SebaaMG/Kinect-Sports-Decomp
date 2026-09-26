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
extern unsigned int lbl_8208E054;


uint fn_82A49AC8(ushort *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ushort *puVar4;
  
  if (*param_1 != 0xfffe) {
    return (uint)*param_1;
  }
  puVar4 = param_1 + 0xe;
  pbVar3 = (byte *)&lbl_8208E054;
  do {
    bVar1 = *(byte *)puVar4;
    bVar2 = *pbVar3;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    puVar4 = (ushort *)((int)puVar4 + 1);
    pbVar3 = pbVar3 + 1;
  } while (puVar4 != param_1 + 0x14);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    return *(uint *)(param_1 + 0xc) & 0xffff;
  }
  return 0;
}

