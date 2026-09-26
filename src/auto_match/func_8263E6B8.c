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
extern unsigned int *auStack_2c;
extern int fn_8263E248();
extern unsigned int lbl_821CBFB0;
extern unsigned int lbl_821CBFB1;
extern unsigned int lbl_821CC0E0;
extern unsigned int uStack_30;


void fn_8263E6B8(int param_1,uint *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uStack_30;
  undefined4 auStack_2c [11];
  
  if (param_3 == 0) {
    puVar4 = (uint *)(param_1 + 0x2884);
  }
  else {
    puVar4 = (uint *)((param_3 + 0xa22) * 4 + param_1);
  }
  uVar3 = *puVar4 >> 0x10 & 0xf;
  if (param_2 == (uint *)0x0) {
    fn_8263E248(uVar3,*puVar4 >> 0x14 & 0x3f,&uStack_30,auStack_2c);
  }
  else {
    uVar5 = *param_2 & 0x3f;
    bVar1 = (&lbl_821CBFB1)[(uint)(byte)(&lbl_821CC0E0)[uVar3] * 2];
    if (uVar5 == 0x36) {
      uVar5 = 7;
    }
    uVar2 = *(ushort *)(&lbl_821CBFB0 + uVar5 * 2);
    fn_8263E248(uVar2 >> 8 & 0xf,param_2[1],&uStack_30,auStack_2c);
    if ((uVar2 & 0xff) < (ushort)bVar1) {
      auStack_2c[0] = uStack_30;
    }
  }
  *(undefined4 *)(param_1 + 0x2a30) = uStack_30;
  *(undefined4 *)(param_1 + 0x2a34) = auStack_2c[0];
  *(ulonglong *)(param_1 + 0x20) = *(ulonglong *)(param_1 + 0x20) | 0xc0;
  return;
}

