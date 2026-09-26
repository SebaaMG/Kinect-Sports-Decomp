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
#define _iStack00000018 ((*(U64*)&iStack00000018))
extern int fn_82ABDD90();
extern unsigned int iStack00000018;
extern unsigned int iStack_30;
extern unsigned int uStack0000001c;
extern unsigned int uStack_2c;


undefined8 fn_82B41F20(int param_1,ulonglong param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iStack00000018;
  uint uStack0000001c;
  int iStack_30;
  uint uStack_2c;
  
  iStack00000018 = (int)(param_2 >> 0x20);
  iVar1 = iStack00000018;
  if ((iStack00000018 == 0) ||
     (iVar3 = param_3 * 0x28 + *(int *)(param_1 + 0xc), *(int *)(iVar3 + 0x10) == 0))
  goto LAB_82b41f44;
  if ((*(uint *)(param_1 + 0x28) & 0x50000) == 0) {
LAB_82b41fb0:
    uStack0000001c = (uint)param_2;
    if ((param_2 & 3) == 0) {
      if ((uStack0000001c >> 0x11 == param_3) && ((uStack0000001c >> 2 & 0x3fff) == param_4))
      goto LAB_82b41f44;
LAB_82b4203c:
      if (((uStack0000001c & 3) == 1) && ((*(uint *)(iStack00000018 + 8) & 0x3f80) == 0x3800)) {
        _iStack00000018 = param_2;
        iVar3 = fn_82ABDD90(param_1,0x70,0,1);
        uVar4 = *(uint *)(iVar3 + iVar1 + -8);
        if ((param_3 == (uVar4 & 0x7fff)) && (param_4 == (uVar4 >> 0xf & 0x3fff))) {
          return 0;
        }
      }
    }
    else if ((uStack0000001c & 3) == 1) {
      iVar3 = *(int *)(iVar3 + 0x18);
      if ((iVar3 != 0) &&
         (param_5 != (-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4)))) {
        uVar2 = *(undefined8 *)(param_4 * 8 + iVar3);
        uStack_2c = (uint)uVar2;
        if (((uStack_2c & 3) == 1) &&
           ((iStack_30 = (int)((ulonglong)uVar2 >> 0x20), iStack00000018 == iStack_30 &&
            (((uStack0000001c ^ uStack_2c) & 0xfffc) == 0)))) goto LAB_82b41f44;
      }
      goto LAB_82b4203c;
    }
    uVar2 = 1;
  }
  else {
    if ((*(uint *)(param_1 + 0x28) & 0x10000) == 0) {
      if ((param_3 < *(uint *)(param_1 + 600)) || (*(uint *)(param_1 + 600) + 0xc <= param_3))
      goto LAB_82b41fb0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x318);
      if (uVar4 == 0) {
        uVar4 = 0x20;
      }
      if (param_3 < uVar4) goto LAB_82b41fb0;
    }
LAB_82b41f44:
    uVar2 = 0;
  }
  return uVar2;
}

