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
extern unsigned int lbl_821A7F10;


ulonglong fn_82ABD078(ulonglong param_1,uint param_2,uint *param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if ((param_1 & 2) != 0) {
    if ((*param_3 & 0x1f) == 0) {
      if ((param_1 & 0x10) == 0) {
        *(undefined4 *)(param_4 + 0x448) = 2;
        if ((param_1 & 0x80) == 0) {
          iVar6 = *(int *)(param_4 + 0x454);
          *(int *)(param_4 + 0x434) = *(int *)(param_4 + 0x434) + 1;
          *(int *)(param_4 + 0x44c) = *(int *)(param_4 + 0x44c) + 1;
          *(int *)(param_4 + 0x454) = iVar6 + 1;
          if ((*(int *)(param_4 + 0x45c) != 0) && (*(int *)(param_4 + 0x460) != 0)) {
            *(int *)(param_4 + 0x454) = iVar6 + 2;
          }
        }
        iVar6 = *(int *)(param_4 + 0x458);
        *(int *)(param_4 + 0x430) = *(int *)(param_4 + 0x430) + 1;
        *(int *)(param_4 + 0x450) = *(int *)(param_4 + 0x450) + 1;
        *(int *)(param_4 + 0x458) = iVar6 + 1;
        if ((*(int *)(param_4 + 0x45c) != 0) && (*(int *)(param_4 + 0x460) != 0)) {
          *(int *)(param_4 + 0x458) = iVar6 + 2;
        }
        *(undefined4 *)(param_4 + 0x460) = 0;
        *(undefined4 *)(param_4 + 0x45c) = 1;
      }
      else {
        param_1 = param_1 & 0x80;
        *(undefined4 *)(param_4 + 0x460) = 0;
        *(undefined4 *)(param_4 + 0x448) = 1;
        if (param_1 == 0) {
          *(int *)(param_4 + 0x464) = *(int *)(param_4 + 0x464) + 1;
          *(int *)(param_4 + 0x46c) = *(int *)(param_4 + 0x46c) + 1;
        }
        *(int *)(param_4 + 0x468) = *(int *)(param_4 + 0x468) + 1;
        *(int *)(param_4 + 0x470) = *(int *)(param_4 + 0x470) + 1;
        if (((param_3[1] & 0x3f0000) == 0) && (*(int *)(param_4 + 0x3fc) != 0)) {
          bVar2 = false;
          uVar4 = 0;
          uVar3 = 0;
          iVar6 = 0;
          do {
            *(undefined4 *)(param_4 + 0x418) = 1;
            uVar1 = *(uint *)(iVar6 + *(int *)(param_4 + 0x400));
            uVar7 = uVar1 >> 0x14 & 3;
            if (uVar7 == 1) {
              bVar2 = true;
              uVar4 = 0;
            }
            if ((uVar1 & 0xfff) == param_2) {
              if ((!bVar2) || ((uVar4 & 3) == 0)) {
                if (param_1 == 0) {
                  *(int *)(param_4 + 0x424) = *(int *)(param_4 + 0x424) + 1;
                }
                *(int *)(param_4 + 0x420) = *(int *)(param_4 + 0x420) + 1;
              }
              break;
            }
            uVar4 = uVar4 + 1;
            if ((uVar7 == 2) || (uVar7 == 3)) {
              bVar2 = false;
            }
            uVar3 = uVar3 + 1;
            iVar6 = iVar6 + 4;
          } while (uVar3 < *(uint *)(param_4 + 0x3fc));
        }
        else {
          if ((param_3[1] & 0x40000000) == 0) {
            if (param_1 == 0) {
              *(int *)(param_4 + 0x424) = *(int *)(param_4 + 0x424) + 1;
            }
            *(int *)(param_4 + 0x420) = *(int *)(param_4 + 0x420) + 1;
          }
          if (param_1 == 0) {
            *(uint *)(param_4 + 0x42c) =
                 (uint)((byte)(&lbl_821A7F10)[*(ushort *)(param_3 + 1) & 0x3f] >> 3) +
                 *(int *)(param_4 + 0x42c);
          }
          *(uint *)(param_4 + 0x428) =
               (uint)((byte)(&lbl_821A7F10)[*(ushort *)(param_3 + 1) & 0x3f] >> 3) +
               *(int *)(param_4 + 0x428);
        }
      }
    }
    else {
      *(undefined4 *)(param_4 + 0x448) = 2;
      if ((param_1 & 0x80) == 0) {
        iVar6 = *(int *)(param_4 + 0x454);
        *(int *)(param_4 + 0x44c) = *(int *)(param_4 + 0x44c) + 1;
        *(int *)(param_4 + 0x454) = iVar6 + 1;
        if ((*(int *)(param_4 + 0x45c) != 0) && (*(int *)(param_4 + 0x460) != 0)) {
          *(int *)(param_4 + 0x454) = iVar6 + 2;
        }
      }
      *(int *)(param_4 + 0x450) = *(int *)(param_4 + 0x450) + 1;
      *(int *)(param_4 + 0x458) = *(int *)(param_4 + 0x458) + 1;
      if ((*(int *)(param_4 + 0x45c) != 0) && (*(int *)(param_4 + 0x460) != 0)) {
        *(int *)(param_4 + 0x454) = *(int *)(param_4 + 0x454) + 1;
      }
      *(undefined4 *)(param_4 + 0x460) = 0;
      *(undefined4 *)(param_4 + 0x45c) = 1;
      iVar6 = 1;
      iVar5 = (*param_3 >> 0x14 & 0x1f) * 0x18 + param_4;
      uVar3 = *(uint *)(iVar5 + 0xb4) & 0x3f;
      if (*(int *)(param_4 + 0x3d4) == 0) {
        *(undefined4 *)(param_4 + 0x414) = 1;
      }
      else {
        iVar6 = 1;
        switch(uVar3) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1b:
        case 0x1e:
        case 0x1f:
        case 0x21:
        case 0x24:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
          iVar6 = 1;
          break;
        case 0x15:
        case 0x1a:
        case 0x1c:
        case 0x20:
        case 0x22:
        case 0x25:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
          iVar6 = 2;
          break;
        case 0x1d:
        case 0x23:
        case 0x26:
          iVar6 = 4;
          break;
        case 0x39:
          iVar6 = 3;
        }
        uVar1 = param_3[1];
        uVar7 = uVar1 >> 0xe & 3;
        if (uVar7 == 3) {
          uVar7 = *(uint *)(iVar5 + 0xbc) >> 0x15 & 3;
        }
        uVar8 = uVar1 >> 0xc & 3;
        if (uVar8 == 3) {
          uVar8 = *(uint *)(iVar5 + 0xbc) >> 0x15 & 3;
        }
        if (((uVar7 == uVar8) && (uVar7 == 0)) && (uVar3 == 0x26)) {
          iVar6 = 2;
        }
        uVar3 = uVar1 >> 0x12 & 7;
        if (uVar3 == 7) {
          uVar3 = *(uint *)(iVar5 + 0xbc) >> 0x19 & 7;
        }
        if (uVar3 != 0) {
          iVar6 = ((uint)(1 << (uVar3 - 1 & 0x3f)) >> 1) * iVar6;
        }
        uVar3 = uVar1 >> 0x10 & 3;
        if (uVar3 == 3) {
          uVar3 = *(uint *)(iVar5 + 0xbc) >> 0x17 & 3;
        }
        if ((uVar3 == 1) && (((*(uint *)(iVar5 + 0xc0) >> 4 ^ *(uint *)(iVar5 + 0xc0)) & 0x3c) != 0)
           ) {
          iVar6 = iVar6 << 1;
        }
      }
      if ((param_1 & 0x80) == 0) {
        *(int *)(param_4 + 0x434) = iVar6 + *(int *)(param_4 + 0x434);
      }
      *(int *)(param_4 + 0x430) = iVar6 + *(int *)(param_4 + 0x430);
    }
    goto LAB_82abd604;
  }
  if ((param_1 & 4) != 0) {
    *(undefined4 *)(param_4 + 0x460) = 0;
    *(undefined4 *)(param_4 + 0x448) = 0;
    if ((param_1 & 0x80) == 0) {
      *(int *)(param_4 + 0x43c) = *(int *)(param_4 + 0x43c) + 1;
    }
    *(int *)(param_4 + 0x438) = *(int *)(param_4 + 0x438) + 1;
    goto LAB_82abd604;
  }
  if ((param_1 & 1) == 0) goto LAB_82abd604;
  if ((param_3[1] & 0xf000) == 0xc000) {
    *(undefined4 *)(param_4 + 0x448) = 0;
  }
  if (*(int *)(param_4 + 0x448) == 1) {
    *(int *)(param_4 + 0x46c) = *(int *)(param_4 + 0x46c) + 1;
    *(int *)(param_4 + 0x470) = *(int *)(param_4 + 0x470) + 1;
  }
  else if (*(int *)(param_4 + 0x448) == 2) {
    *(undefined4 *)(param_4 + 0x460) = 1;
  }
  uVar3 = param_3[1] >> 0xc & 0xf;
  if ((uVar3 == 3) || (uVar3 == 4)) {
LAB_82abd624:
    if ((uVar3 == 9) || (uVar3 == 0xb)) {
LAB_82abd634:
      if (((*param_3 & 0x2000) != 0) || ((*param_3 & 0x4000) != 0)) goto LAB_82abd5a8;
    }
    if ((1 << (param_3[1] >> 2 & 0x1f) & *(uint *)(((param_3[1] >> 7 & 7) + 0xec) * 4 + param_4)) ==
        0) {
      *(undefined4 *)(param_4 + 0x404) = 1;
    }
    if ((1 << (param_3[1] >> 2 & 0x1f) & *(uint *)(((param_3[1] >> 7 & 7) + 0xf6) * 4 + param_4)) !=
        0) {
      *(undefined4 *)(param_4 + 0x408) = 1;
    }
    iVar6 = *(int *)(param_4 + 0x440) + 2;
  }
  else {
    if (uVar3 == 9) goto LAB_82abd634;
    if (((uVar3 == 0xb) || (uVar3 == 0xd)) || (uVar3 == 0xe)) goto LAB_82abd624;
    if ((uVar3 == 7) || (uVar3 == 8)) {
      if ((1 << (*(ushort *)param_3 & 0x1f) & *(uint *)(param_4 + 0x3d0)) == 0) {
        *(undefined4 *)(param_4 + 0x404) = 1;
      }
      if ((1 << (*(ushort *)param_3 & 0x1f) & *(uint *)(param_4 + 0x3f8)) != 0) {
        *(undefined4 *)(param_4 + 0x408) = 1;
      }
    }
LAB_82abd5a8:
    iVar6 = *(int *)(param_4 + 0x440) + 1;
  }
  *(int *)(param_4 + 0x440) = iVar6;
  uVar3 = param_3[1] >> 0xc & 0xf;
  if ((((uVar3 == 9) || (uVar3 == 0xb)) && ((*param_3 & 0x2000) == 0)) && ((*param_3 & 0x4000) != 0)
     ) {
    *(undefined4 *)(param_4 + 0x40c) = 1;
  }
  if (((param_3[1] & 0xf000) == 0x8000) && ((*param_3 & 0x200000) != 0)) {
    *(undefined4 *)(param_4 + 0x410) = 1;
  }
LAB_82abd604:
  return -(ulonglong)(100000 < *(uint *)(param_4 + 0x440)) & 0xfffffffffffffc18;
}

