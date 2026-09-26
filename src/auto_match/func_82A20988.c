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
extern int fn_82A208A8();
extern int fn_82F63CA0();


undefined8 fn_82A20988(int param_1,uint param_2)

{
  short sVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  fn_82A208A8();
  uVar5 = (uint)*(ushort *)(param_1 + 0xe);
  if ((uVar5 - (uint)*(ushort *)(param_1 + 6) * (uint)*(ushort *)(param_1 + 10)) - 0x10 <
      param_2 * 4) {
    uVar2 = 0;
  }
  else {
    fn_82F63CA0(uVar5 + param_1 + (param_2 & 0x3fffffff) * -4,uVar5 + param_1,
                 ((uint)*(ushort *)(param_1 + 4) + (uint)*(ushort *)(param_1 + 0xc) * -4) - uVar5);
    sVar1 = (short)(param_2 * 4);
    *(short *)(param_1 + 0xe) = (short)*(undefined4 *)(param_1 + 0xc) - sVar1;
    iVar3 = (uint)*(ushort *)(param_1 + 4) + (uint)*(ushort *)(param_1 + 0xc) * -4 + param_1;
    fn_82F63CA0(iVar3 + (param_2 & 0x3fffffff) * -4,iVar3,(ulonglong)*(ushort *)(param_1 + 8) << 2)
    ;
    uVar5 = 0;
    *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + (short)param_2;
    if (*(short *)(param_1 + 8) != 0) {
      do {
        iVar3 = uVar5 - *(ushort *)(param_1 + 0xc);
        uVar5 = uVar5 + 1;
        puVar4 = (undefined4 *)(iVar3 * 4 + (uint)*(ushort *)(param_1 + 4) + param_1);
        *(short *)((int)puVar4 + 2) = (short)*puVar4 - sVar1;
      } while (uVar5 < *(ushort *)(param_1 + 8));
    }
    uVar2 = 1;
  }
  return uVar2;
}

