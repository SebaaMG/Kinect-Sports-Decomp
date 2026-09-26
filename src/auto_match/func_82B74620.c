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
extern int fn_82AB15D0();


uint * fn_82B74620(int param_1,ushort *param_2,uint *param_3)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar1 = *param_2;
  *(undefined2 *)((int)param_3 + 2) = 0x71;
  *param_3 = *param_3 & 0xe000ffff;
  uVar1 = uVar1 & 7;
  *(short *)((int)param_3 + 6) = (short)*(undefined4 *)(iVar2 + 0x5b40);
  param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
  *(short *)((int)param_3 + 10) = (short)*(undefined4 *)(iVar2 + 0x5b44);
  param_3[2] = param_3[2] & 0xff00ffff | 0x440000;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      uVar3 = 1;
      goto LAB_82b746d4;
    }
    if (uVar1 == 3) {
      uVar3 = 2;
      goto LAB_82b746d4;
    }
    if (uVar1 == 4) {
      uVar3 = 3;
      goto LAB_82b746d4;
    }
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x20b6);
  }
  uVar3 = 0;
LAB_82b746d4:
  param_3[3] = (uint)(uVar3 << 0xc) |
               (uint)((uVar3 << 4 | uVar3) << 4) | param_3[3] & 0xffff8888 | (uint)uVar3;
  return param_3 + 4;
}

