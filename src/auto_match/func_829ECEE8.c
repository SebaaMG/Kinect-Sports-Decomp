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
extern unsigned int lbl_82079AE8;
extern unsigned int lbl_82079AEC;


void fn_829ECEE8(undefined8 param_1,uint *param_2,longlong param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (0 < (int)param_3) {
    do {
      iVar3 = (int)*param_2 / (int)(param_4 & 0xffff);
      bVar1 = -1 < iVar3;
      if (!bVar1) {
        iVar3 = -iVar3;
      }
      if (iVar3 < 0x90000) {
        iVar3 = (iVar3 << 8) / 9;
        iVar2 = (iVar3 >> 0x10) * 4;
        uVar4 = iVar3 >> 8 & 0xff;
        uVar4 = (int)(*(int *)(&lbl_82079AE8 + iVar2) * (0x100 - uVar4) +
                     *(int *)(&lbl_82079AEC + iVar2) * uVar4) >> 8;
        if (!bVar1) {
          uVar4 = 0x10000 - uVar4;
        }
      }
      else {
        uVar4 = -(uint)bVar1 & 0x10000;
      }
      *param_2 = uVar4;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

