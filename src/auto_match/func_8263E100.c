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
extern unsigned int lbl_82195914;
extern unsigned int lbl_82195920;
extern unsigned int lbl_821CBFB0;
extern unsigned int uStack_c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8263E100(double param_1,int param_2,int param_3,undefined8 param_4,ulonglong param_5)

{
  float fVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uStack_c;
  
  if (param_3 == 0) {
    if ((*(ushort *)(param_2 + 0x2888) & 1) != 0) {
code_r0x8263e1a0:
      fVar1 = (float)param_1;
      if (((uint)fVar1 & 0x80000000) == 0) {
        if ((uint)fVar1 >> 0x17 < 0x71) {
          iVar2 = -((uint)fVar1 >> 0x17 & 0xff);
          uVar3 = (ulonglong)
                  (((1 << (iVar2 + 0x70U & 0x3f)) + ((uint)fVar1 & 0x7fffff) | 0x800000) >>
                  (iVar2 + 0x71U & 0x3f));
        }
        else {
          uVar3 = ((ulonglong)(uint)fVar1 & 0x7800000 | (ulonglong)(uint)fVar1 + 4 & 0xffffffff) >>
                  3;
        }
      }
      else {
        uVar3 = 0;
      }
      uStack_c = (uint)(uVar3 << 8);
      uVar4 = uStack_c | (uint)param_5 & 0xff;
      uStack_c = uStack_c >> 0x15;
      goto code_r0x8263e208;
    }
    uStack_c = (uint)(longlong)(param_1 * (double)lbl_82195914);
    uVar4 = uStack_c;
    uStack_c = (uint)(longlong)(param_1 * (double)lbl_82195920);
  }
  else {
    if ((*(ushort *)(&lbl_821CBFB0 + (*(uint *)(param_3 + 8) & 0x3f) * 2) & 0xf00) != 0)
    goto code_r0x8263e1a0;
    uStack_c = (uint)(longlong)(param_1 * (double)lbl_82195914);
    uVar4 = uStack_c;
    uStack_c = (uint)(longlong)(param_1 * (double)lbl_82195920);
  }
  uVar4 = uVar4 << 8 | (uint)param_5;
code_r0x8263e208:
  *(uint *)(param_2 + 0x2a2c) = uVar4;
  *(uint *)(param_2 + 0x2a28) =
       (uint)(param_5 != *(byte *)(param_2 + 0x2942)) << 0xb ^
       (~*(uint *)(param_2 + 0x2940) & 0x20) << 6 | uStack_c;
  *(ulonglong *)(param_2 + 0x20) = *(ulonglong *)(param_2 + 0x20) | 0x300;
  return;
}

