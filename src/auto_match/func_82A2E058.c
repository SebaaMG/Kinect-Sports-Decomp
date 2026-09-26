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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82A2BAF0();
extern int fn_82A2D260();
extern int fn_82A2D960();
extern int fn_82A2DC18();
extern int fn_82F68CC0();
extern unsigned int uStack_2c;


undefined8 fn_82A2E058(int param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint auStack_50 [4];
  undefined1 auStack_40 [20];
  uint uStack_2c;
  
  uVar2 = 0;
  iVar1 = fn_82A2BAF0(param_1,param_2,0,param_3,auStack_50);
  if ((iVar1 == 0) && (uVar2 = fn_82A2DC18(param_1,param_2,0,auStack_50), -1 < (int)uVar2)) {
    fn_82F68CC0(auStack_40,
                 (param_2 + ((param_2 & 0xffffffff) / 0xaa) * -0xaa) * 0x18 +
                 (ulonglong)auStack_50[0],0x18);
    auStack_50[0] = auStack_50[0] - *(int *)(param_1 + 0x34);
    iVar1 = (((int)auStack_50[0] >> 0xc) +
            (uint)((int)auStack_50[0] < 0 && (auStack_50[0] & 0xfff) != 0)) * 8 +
            *(int *)(param_1 + 0x30);
    *(char *)(iVar1 + 4) = *(char *)(iVar1 + 4) + -1;
    if ((uStack_2c >> 0x1e == 2) || (uStack_2c >> 0x1e == 3)) {
      uVar2 = fn_82A2D960(param_1,param_2,0,auStack_40,param_3,auStack_50);
    }
    else {
      fn_82A2D260(param_1,0xffffffffc0000032);
      uVar2 = 0xffffffffc0000032;
    }
  }
  return uVar2;
}

