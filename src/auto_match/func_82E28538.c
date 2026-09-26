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
extern unsigned int *auStack_b0;
extern unsigned int *auStack_bc;
extern int fn_82E4FE08();
extern int fn_82F691F0();
extern unsigned int lbl_821537A8;
extern unsigned int uStack_c0;


longlong fn_82E28538(int *param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  longlong lVar7;
  uint uVar8;
  uint uStack_c0;
  uint auStack_bc [3];
  undefined1 auStack_b0 [16];
  byte abStack_a0 [16];
  byte abStack_90 [144];
  
  uStack_c0 = 0;
  lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0xffffffff82153478,abStack_a0);
  if (-1 < lVar3) {
    lVar3 = (**(code **)(*param_1 + 0x28))(param_1,0xffffffff82153488,auStack_b0);
    if (-1 < lVar3) {
      iVar4 = (**(code **)(*param_1 + 0x1c))(param_1,0xffffffff82153568,auStack_bc);
      if ((-(iVar4 >> 0x1f) - 1U & auStack_bc[0]) != 0) {
        (**(code **)(*param_1 + 0xc))(param_1,0xffffffff82153548,0);
      }
      pbVar6 = abStack_a0;
      pbVar5 = &lbl_821537A8;
      do {
        bVar1 = *pbVar6;
        bVar2 = *pbVar5;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar5 = pbVar5 + 1;
      } while (pbVar6 != abStack_90);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        (**(code **)(*param_1 + 0x38))(param_1,0xffffffff821536d8,&uStack_c0);
        lVar7 = -0x7ff8fdea;
        if (uStack_c0 < 0x10000) {
          uVar8 = uStack_c0 & 0xffff;
          lVar3 = 0;
        }
        else {
          uVar8 = 0xffff;
          lVar3 = lVar7;
        }
        if (-1 < (int)lVar3) {
          uVar8 = uVar8 + 0x28 & 0xffff;
          if (uVar8 < 0x28) {
            uVar8 = 0xffff;
          }
          else {
            lVar7 = 0;
          }
          lVar3 = lVar7;
          if (-1 < (int)lVar7) {
            lVar3 = fn_82E4FE08(uVar8);
            if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(lVar3,0,uVar8);
            }
            lVar3 = -0x7ff8fff2;
          }
        }
      }
      else {
        lVar3 = -0x7ff8ffa9;
      }
    }
  }
  return lVar3;
}

