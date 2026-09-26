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


ulonglong fn_82A33778(uint param_1,ushort *param_2,longlong param_3,ushort *param_4,int param_5)

{
  ushort uVar1;
  uint uVar3;
  ulonglong uVar2;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = 0;
  if ((((param_2 == (ushort *)0x0) || (param_4 == (ushort *)0x0)) ||
      (iVar4 = (int)param_3, iVar4 < -1)) || (param_5 < -1)) {
    thunk_FUN_82a2b748(0x57);
    uVar2 = 0;
  }
  else {
    while (iVar4 != 0) {
      if (param_5 == 0) {
        if ((int)param_3 != 0) goto LAB_82a33924;
        break;
      }
      uVar7 = (uint)*param_2;
      if ((uVar7 == 0) && (*param_4 == 0)) goto LAB_82a338f0;
      if (uVar7 == 0) {
        return 1;
      }
      uVar1 = *param_4;
      if (uVar1 == 0) {
        return 3;
      }
      uVar5 = *(uint *)(&lbl_8315D3D8 + (*param_2 & 0xff) * 4);
      uVar6 = *(uint *)(&lbl_8315D3D8 + (uVar1 & 0xff) * 4);
      if ((~param_1 >> 0xc & 1) == 0) {
LAB_82a3387c:
        if ((param_1 & 4) == 0) {
LAB_82a338a0:
          if ((param_1 & 1) != 0) {
            if ((uVar5 & 0x100000) != 0) {
              uVar5 = (uVar7 & 0xff) + 0x20 | 0x80000;
            }
            if ((uVar6 & 0x100000) != 0) {
              uVar6 = (uVar1 & 0xff) + 0x20 | 0x80000;
            }
          }
          if (uVar5 < uVar6) {
            return 1;
          }
          if (uVar6 < uVar5) {
            return 3;
          }
LAB_82a338d4:
          param_5 = param_5 + -1;
          param_4 = param_4 + 1;
        }
        else if ((uVar5 & 0x20000) == 0) {
          if ((uVar6 & 0x20000) != 0) goto LAB_82a33894;
          goto LAB_82a338a0;
        }
LAB_82a338dc:
        param_3 = param_3 + -1;
        param_2 = param_2 + 1;
      }
      else {
        if ((uVar5 & 0x10000) != 0) {
          if ((uVar6 & 0x10000) == 0) {
            if (uVar3 == 0) {
              uVar3 = 4;
            }
            uVar3 = uVar3 | 1;
            goto LAB_82a338dc;
          }
          if (uVar5 < uVar6) {
            uVar3 = 7;
          }
          else if (uVar6 < uVar5) {
            uVar3 = 0xb;
          }
          goto LAB_82a338d4;
        }
        if ((uVar6 & 0x10000) == 0) goto LAB_82a3387c;
        if (uVar3 == 0) {
          uVar3 = 8;
        }
        uVar3 = uVar3 | 2;
LAB_82a33894:
        param_4 = param_4 + 1;
        param_5 = param_5 + -1;
      }
      iVar4 = (int)param_3;
    }
    if (param_5 == 0) {
LAB_82a338f0:
      uVar2 = (ulonglong)*(uint *)(uVar3 * 4 + -0x7cea2c90);
    }
    else {
LAB_82a33924:
      uVar2 = (-(ulonglong)(param_3 != 0) & 0xfffffffe) + 3;
    }
  }
  return uVar2;
}

