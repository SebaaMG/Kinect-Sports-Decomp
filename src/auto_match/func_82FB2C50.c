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
extern int fn_82FB2A30();
extern int fn_82FB7748();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


undefined8 fn_82FB2C50(int param_1,int param_2)

{
  byte bVar1;
  int iVar3;
  undefined8 uVar2;
  int iStack0000001c;
  
  iStack0000001c = param_2 + 0x18;
  if ((((*(short *)(param_1 + 0xd4) == *(short *)(param_2 + 0x14)) &&
       ((uint)*(ushort *)(param_1 + 0xb8) == (int)*(short *)(param_2 + 0x10))) &&
      (*(short *)(param_1 + 0xba) == *(short *)(param_2 + 0x12))) &&
     (*(int *)(param_1 + 200) == *(int *)(param_2 + 0xc))) {
    iVar3 = fn_82FB7748(param_1 + 0xac);
    bVar1 = *(byte *)(param_2 + 0x17);
    if (((iVar3 == (uint)bVar1 + (-(uint)(bVar1 == 0) - (bVar1 - 1))) &&
        (*(int *)(param_1 + 0xb4) == *(int *)(param_2 + 4))) &&
       (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xbc) >> 2 == *(int *)(param_2 + 8))) {
      if (*(int *)(param_2 + 8) != 0) {
        uVar2 = fn_82FB2A30(param_1,param_1 + 0xac,&stack0x0000001c);
        return uVar2;
      }
      return 0;
    }
  }
  return 1;
}

