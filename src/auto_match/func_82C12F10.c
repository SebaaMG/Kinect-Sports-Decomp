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
extern int fn_82C038C8();


byte fn_82C12F10(longlong *param_1,int *param_2,uint *param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte *apbStack_30 [12];
  
  apbStack_30[0] = (byte *)0x0;
  if (param_1 == (longlong *)0x0) {
    bVar2 = 2;
  }
  else {
    iVar1 = fn_82C038C8(param_1,*param_1,0x18,apbStack_30);
    if (iVar1 == 0x18) {
      *param_1 = *param_1 + 0x18;
      *param_2 = (((uint)apbStack_30[0][3] * 0x100 + (uint)apbStack_30[0][2]) * 0x100 +
                 (uint)apbStack_30[0][1]) * 0x100 + (uint)*apbStack_30[0];
      *(ushort *)(param_2 + 1) = (ushort)apbStack_30[0][5] * 0x100 + (ushort)apbStack_30[0][4];
      *(ushort *)((int)param_2 + 6) = (ushort)apbStack_30[0][7] * 0x100 + (ushort)apbStack_30[0][6];
      *(byte *)(param_2 + 2) = apbStack_30[0][8];
      *(byte *)((int)param_2 + 9) = apbStack_30[0][9];
      *(byte *)((int)param_2 + 10) = apbStack_30[0][10];
      *(byte *)((int)param_2 + 0xb) = apbStack_30[0][0xb];
      *(byte *)(param_2 + 3) = apbStack_30[0][0xc];
      *(byte *)((int)param_2 + 0xd) = apbStack_30[0][0xd];
      *(byte *)((int)param_2 + 0xe) = apbStack_30[0][0xe];
      *(byte *)((int)param_2 + 0xf) = apbStack_30[0][0xf];
      uVar3 = (((uint)apbStack_30[0][0x13] * 0x100 + (uint)apbStack_30[0][0x12]) * 0x100 +
              (uint)apbStack_30[0][0x11]) * 0x100 + (uint)apbStack_30[0][0x10];
      *param_3 = uVar3;
      bVar2 = -(uVar3 < 0x18) & 4;
      param_3[1] = (((uint)apbStack_30[0][0x17] * 0x100 + (uint)apbStack_30[0][0x16]) * 0x100 +
                   (uint)apbStack_30[0][0x15]) * 0x100 + (uint)apbStack_30[0][0x14];
    }
    else {
      bVar2 = 3;
    }
  }
  return bVar2;
}

