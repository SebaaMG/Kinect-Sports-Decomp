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
extern unsigned int lbl_8315D3D8;


ulonglong fn_82A364F0(uint param_1,byte *param_2,longlong param_3,byte *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar4;
  ulonglong uVar3;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = 0;
  if ((((param_2 == (byte *)0x0) || (param_4 == (byte *)0x0)) || (iVar5 = (int)param_3, iVar5 < -1))
     || (param_5 < -1)) {
    thunk_FUN_82a2b748(0x57);
    uVar3 = 0;
  }
  else {
    while (iVar5 != 0) {
      if (param_5 == 0) {
        if ((int)param_3 != 0) goto LAB_82a3669c;
        break;
      }
      bVar1 = *param_2;
      if ((bVar1 == 0) && (*param_4 == 0)) goto LAB_82a36668;
      if (bVar1 == 0) {
        return 1;
      }
      bVar2 = *param_4;
      if (bVar2 == 0) {
        return 3;
      }
      uVar6 = *(uint *)(&lbl_8315D3D8 + (uint)bVar1 * 4);
      uVar7 = *(uint *)(&lbl_8315D3D8 + (uint)bVar2 * 4);
      if ((~param_1 >> 0xc & 1) == 0) {
LAB_82a365f4:
        if ((param_1 & 4) == 0) {
LAB_82a36618:
          if ((param_1 & 1) != 0) {
            if ((uVar6 & 0x100000) != 0) {
              uVar6 = bVar1 + 0x20 | 0x80000;
            }
            if ((uVar7 & 0x100000) != 0) {
              uVar7 = bVar2 + 0x20 | 0x80000;
            }
          }
          if (uVar6 < uVar7) {
            return 1;
          }
          if (uVar7 < uVar6) {
            return 3;
          }
LAB_82a3664c:
          param_5 = param_5 + -1;
          param_4 = param_4 + 1;
        }
        else if ((uVar6 & 0x20000) == 0) {
          if ((uVar7 & 0x20000) != 0) goto LAB_82a3660c;
          goto LAB_82a36618;
        }
LAB_82a36654:
        param_3 = param_3 + -1;
        param_2 = param_2 + 1;
      }
      else {
        if ((uVar6 & 0x10000) != 0) {
          if ((uVar7 & 0x10000) == 0) {
            if (uVar4 == 0) {
              uVar4 = 4;
            }
            uVar4 = uVar4 | 1;
            goto LAB_82a36654;
          }
          if (uVar6 < uVar7) {
            uVar4 = 7;
          }
          else if (uVar7 < uVar6) {
            uVar4 = 0xb;
          }
          goto LAB_82a3664c;
        }
        if ((uVar7 & 0x10000) == 0) goto LAB_82a365f4;
        if (uVar4 == 0) {
          uVar4 = 8;
        }
        uVar4 = uVar4 | 2;
LAB_82a3660c:
        param_4 = param_4 + 1;
        param_5 = param_5 + -1;
      }
      iVar5 = (int)param_3;
    }
    if (param_5 == 0) {
LAB_82a36668:
      uVar3 = (ulonglong)*(uint *)(uVar4 * 4 + -0x7cea2828);
    }
    else {
LAB_82a3669c:
      uVar3 = (-(ulonglong)(param_3 != 0) & 0xfffffffe) + 3;
    }
  }
  return uVar3;
}

