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
extern int fn_827589C0();
extern unsigned int uStack_2a;


void fn_82758AC8(double param_1,double param_2,int param_3,undefined8 param_4,undefined4 param_5,
                  char param_6,ushort param_7,ushort param_8,ushort param_9)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined2 uStack_2a;
  
  uStack_2a = (undefined2)(longlong)param_1;
  *(undefined2 *)(param_3 + 0x70) = uStack_2a;
  *(undefined4 *)(param_3 + 0x74) = param_5;
  uVar1 = *(ushort *)(param_3 + 0x7c) & 0xfffe;
  *(ushort *)(param_3 + 0x7c) = uVar1;
  if (param_6 != '\0') {
    *(ushort *)(param_3 + 0x7c) = uVar1 | 1;
  }
  uVar1 = *(ushort *)(param_3 + 0x7c);
  param_7 = param_7 & 6;
  *(ushort *)(param_3 + 0x7c) = param_7 | uVar1 & 0xfff9;
  uVar4 = (param_8 & 0xc0) << 2;
  *(ushort *)(param_3 + 0x7c) = uVar4 | param_7 | uVar1 & 0xfc39 | param_8 & 0xc0;
  *(ushort *)(param_3 + 0x7c) = param_9 & 0x30 | uVar4 | param_7 | uVar1 & 0xfc09 | param_8 & 0xc0;
  *(float *)(param_3 + 0x80) = (float)param_2;
  iVar2 = *(int *)(param_3 + 8);
  fn_827589C0(iVar2 + 0x5c);
  uVar3 = *(undefined4 *)(iVar2 + 0x60);
  *(undefined1 *)(param_3 + 0x85) = 1;
  *(undefined4 *)(param_3 + 0x14) = uVar3;
  return;
}

