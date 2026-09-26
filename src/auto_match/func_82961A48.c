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
extern int fn_8294B7A8();
extern int fn_8294B970();
extern int fn_8294C648();
extern int fn_8294C7E0();
extern int fn_8294C890();
extern int fn_8294CF28();
extern int fn_8294D3A8();
extern int fn_8294D7B0();
extern int fn_8294DE58();
extern int fn_8294DF88();
extern int fn_8294E128();
extern int fn_8294E2C8();
extern int fn_8294E558();
extern int fn_8294EA10();
extern int fn_8294F070();
extern int fn_8294FA78();
extern int fn_8294FC18();
extern int fn_8294FDB8();
extern int fn_82950048();
extern int fn_829501E8();
extern int fn_829504D0();
extern int fn_82950808();
extern int fn_82950C78();
extern int fn_82950DB8();
extern int fn_82950E98();
extern int fn_82951540();
extern int fn_82956318();
extern int fn_82957130();
extern int fn_82957790();
extern int fn_829597C8();
extern int fn_82959828();
extern int fn_829616A8();
extern int fn_82968960();
extern int fn_82969030();
extern int fn_8296D7F0();
extern int fn_8296E438();
extern int fn_8296EB38();
extern int fn_82971580();


longlong fn_82961A48(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = 0;
  if (((*(uint *)(param_1 + 0x70) & 0x1000000) != 0) || (lVar6 = fn_829616A8(), -1 < lVar6)) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar2 = 0;
      do {
        *(uint *)(param_1 + 0x100) = uVar4;
        puVar1 = *(uint **)(iVar2 + *(int *)(param_1 + 0x18));
        *(uint **)(param_1 + 0x104) = puVar1;
        if ((*puVar1 & 0xfff00000) == 0x11400000) {
          lVar6 = fn_8294E558(param_1);
          if (lVar6 < 0) {
            return lVar6;
          }
        }
        else {
          lVar6 = 1;
        }
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (uVar4 < *(uint *)(param_1 + 0xc));
    }
    if ((*(uint *)(param_1 + 0xcc) & 4) != 0) {
      fn_82968960(param_1);
      uVar4 = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        iVar2 = 0;
        do {
          *(uint *)(param_1 + 0x100) = uVar4;
          puVar1 = *(uint **)(iVar2 + *(int *)(param_1 + 0x18));
          *(uint **)(param_1 + 0x104) = puVar1;
          if ((*puVar1 & 0xfff00000) == 0x10000000) {
            fn_8294C7E0(param_1);
          }
          uVar4 = uVar4 + 1;
          iVar2 = iVar2 + 4;
        } while (uVar4 < *(uint *)(param_1 + 0xc));
      }
      fn_8296D7F0(param_1);
    }
    if ((*(uint *)(param_1 + 0xcc) & 4) == 0) {
      uVar4 = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        iVar2 = 0;
        do {
          *(uint *)(param_1 + 0x100) = uVar4;
          puVar1 = *(uint **)(iVar2 + *(int *)(param_1 + 0x18));
          *(uint **)(param_1 + 0x104) = puVar1;
          uVar3 = *puVar1 & 0xfff00000;
          if (uVar3 == 0x10100000) {
            lVar6 = fn_829597C8(param_1,1);
LAB_82961bfc:
            if ((int)lVar6 < 0) {
              return lVar6;
            }
          }
          else {
            if (((uVar3 == 0x20000000) || (uVar3 == 0x20100000)) || (uVar3 == 0x30000000)) {
              lVar6 = fn_82956318(param_1);
              fn_8294B7A8(param_1);
              goto LAB_82961bfc;
            }
            lVar6 = 1;
          }
          uVar4 = uVar4 + 1;
          iVar2 = iVar2 + 4;
        } while (uVar4 < *(uint *)(param_1 + 0xc));
      }
      if (((*(uint *)(param_1 + 0x6c) & 0x800000) != 0) &&
         ((*(uint *)(param_1 + 0x70) & 0x400000) != 0)) {
        uVar4 = 0;
        if (*(int *)(param_1 + 0xc) != 0) {
          iVar2 = 0;
          do {
            *(uint *)(param_1 + 0x100) = uVar4;
            puVar1 = *(uint **)(iVar2 + *(int *)(param_1 + 0x18));
            *(uint **)(param_1 + 0x104) = puVar1;
            if ((*puVar1 & 0xfff00000) == 0x30000000) {
              if ((int)lVar6 < 0) {
                return lVar6;
              }
              lVar6 = fn_8294C890(param_1,0,0,0);
              if (lVar6 < 0) {
                return lVar6;
              }
              lVar6 = fn_8294CF28(param_1,0,0,0);
              if (lVar6 < 0) {
                return lVar6;
              }
            }
            else {
              lVar6 = 1;
            }
            uVar4 = uVar4 + 1;
            iVar2 = iVar2 + 4;
          } while (uVar4 < *(uint *)(param_1 + 0xc));
        }
        lVar6 = fn_8296E438(param_1);
        if (lVar6 < 0) {
          return lVar6;
        }
        fn_8294B7A8(param_1);
        uVar4 = 0;
        if (*(int *)(param_1 + 0xc) != 0) {
          iVar2 = 0;
          do {
            *(uint *)(param_1 + 0x100) = uVar4;
            puVar1 = *(uint **)(iVar2 + *(int *)(param_1 + 0x18));
            *(uint **)(param_1 + 0x104) = puVar1;
            uVar3 = *puVar1 & 0xfff00000;
            if (uVar3 == 0x20000000) {
LAB_82961d48:
              lVar6 = fn_82956318(param_1);
              fn_8294B7A8(param_1);
LAB_82961d5c:
              if ((int)lVar6 < 0) {
                return lVar6;
              }
            }
            else {
              if (uVar3 == 0x30000000) {
                lVar6 = fn_82950DB8(param_1);
                if (lVar6 < 0) {
                  return lVar6;
                }
                lVar6 = fn_82950E98(param_1);
                goto LAB_82961d5c;
              }
              if (uVar3 == 0x70b00000) goto LAB_82961d48;
              lVar6 = 1;
            }
            uVar4 = uVar4 + 1;
            iVar2 = iVar2 + 4;
          } while (uVar4 < *(uint *)(param_1 + 0xc));
        }
      }
      uVar4 = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        iVar2 = 0;
        do {
          *(uint *)(param_1 + 0x100) = uVar4;
          puVar1 = *(uint **)(iVar2 + *(int *)(param_1 + 0x18));
          *(uint **)(param_1 + 0x104) = puVar1;
          uVar3 = *puVar1 & 0xfff00000;
          if (uVar3 == 0x10500000) {
            if (*(ushort *)(param_1 + 0xca) < 0x200) {
LAB_82961e70:
              lVar6 = 1;
            }
            else {
              lVar6 = fn_8294C648(param_1);
            }
LAB_82961e74:
            if ((int)lVar6 < 0) {
              return lVar6;
            }
          }
          else {
            if (uVar3 == 0x10f00000) {
              lVar6 = fn_8294D7B0(param_1);
              goto LAB_82961e74;
            }
            if (uVar3 == 0x11400000) {
              lVar6 = fn_8294E558(param_1);
              goto LAB_82961e74;
            }
            if (uVar3 == 0x20100000) {
              if (*(ushort *)(param_1 + 0xca) < 0x200) goto LAB_82961e70;
              lVar6 = fn_82950C78(param_1);
              goto LAB_82961e74;
            }
            if (uVar3 == 0x20400000) {
              if ((*(uint *)(param_1 + 0x6c) & 0x2000000) != 0) {
                lVar6 = fn_829504D0(param_1);
              }
              if ((int)lVar6 == 1) {
                lVar6 = fn_82957130(param_1,1);
              }
              goto LAB_82961e74;
            }
            if (uVar3 == 0x20500000) {
              lVar6 = fn_82950048(param_1);
              goto LAB_82961e74;
            }
            lVar6 = 1;
          }
          uVar3 = 0;
          if (*(int *)(param_1 + 0xc) != 0) {
            lVar6 = 1;
            iVar5 = 0;
            do {
              *(uint *)(param_1 + 0x100) = uVar3;
              puVar1 = *(uint **)(iVar5 + *(int *)(param_1 + 0x18));
              *(uint **)(param_1 + 0x104) = puVar1;
              if ((*puVar1 & 0xfff00000) == 0x70000000) {
                fn_82959828(param_1);
              }
              uVar3 = uVar3 + 1;
              iVar5 = iVar5 + 4;
            } while (uVar3 < *(uint *)(param_1 + 0xc));
          }
          uVar4 = uVar4 + 1;
          iVar2 = iVar2 + 4;
        } while (uVar4 < *(uint *)(param_1 + 0xc));
      }
      lVar6 = fn_8296E438(param_1);
      if (lVar6 < 0) {
        return lVar6;
      }
      fn_8294B7A8(param_1);
      uVar4 = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        iVar2 = 0;
        do {
          *(uint *)(param_1 + 0x100) = uVar4;
          puVar1 = *(uint **)(iVar2 + *(int *)(param_1 + 0x18));
          *(uint **)(param_1 + 0x104) = puVar1;
          uVar3 = *puVar1 & 0xfff00000;
          if (uVar3 == 0x20500000) {
            lVar6 = fn_829501E8(param_1);
LAB_82961fe0:
            if ((int)lVar6 < 0) {
              return lVar6;
            }
          }
          else {
            if (uVar3 == 0x50000000) {
              if ((*(uint *)(param_1 + 0x6c) & 0x2000000) != 0) {
                lVar6 = fn_82950808(param_1);
              }
              goto LAB_82961fe0;
            }
            if (uVar3 == 0x70300000) {
              lVar6 = fn_82951540(param_1,1);
              goto LAB_82961fe0;
            }
            if ((uVar3 == 0x73500000) || (uVar3 == 0x73600000)) {
              lVar6 = fn_8294DF88(param_1);
              if (lVar6 < 0) {
                return lVar6;
              }
              lVar6 = fn_8294E128(param_1);
              goto LAB_82961fe0;
            }
            if ((uVar3 == 0x74600000) || (uVar3 == 0x74700000)) {
              lVar6 = fn_8294FA78(param_1);
              if (lVar6 < 0) {
                return lVar6;
              }
              lVar6 = fn_8294FC18(param_1);
              goto LAB_82961fe0;
            }
            lVar6 = 1;
          }
          uVar4 = uVar4 + 1;
          iVar2 = iVar2 + 4;
        } while (uVar4 < *(uint *)(param_1 + 0xc));
      }
      uVar4 = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        iVar2 = 0;
        do {
          *(uint *)(param_1 + 0x100) = uVar4;
          puVar1 = *(uint **)(iVar2 + *(int *)(param_1 + 0x18));
          *(uint **)(param_1 + 0x104) = puVar1;
          uVar3 = *puVar1 & 0xfff00000;
          if (uVar3 < 0x74400001) {
            if (uVar3 == 0x74400000) {
LAB_82962080:
              lVar6 = fn_8294FDB8(param_1);
            }
            else {
              if (((uVar3 != 0x73500000) && (uVar3 != 0x73600000)) &&
                 ((uVar3 != 0x73700000 && (uVar3 != 0x73800000)))) goto LAB_82962094;
              lVar6 = fn_8294E2C8(param_1);
            }
            if ((int)lVar6 < 0) {
              return lVar6;
            }
          }
          else if (((uVar3 == 0x74500000) || (uVar3 == 0x74600000)) || (uVar3 == 0x74700000))
          goto LAB_82962080;
LAB_82962094:
          uVar4 = uVar4 + 1;
          iVar2 = iVar2 + 4;
        } while (uVar4 < *(uint *)(param_1 + 0xc));
      }
      uVar4 = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        iVar2 = 0;
        do {
          *(uint *)(param_1 + 0x100) = uVar4;
          puVar1 = *(uint **)(iVar2 + *(int *)(param_1 + 0x18));
          *(uint **)(param_1 + 0x104) = puVar1;
          if (((*puVar1 & 0xfff00000) == 0x73700000) &&
             (lVar6 = fn_8294DE58(param_1), lVar6 < 0)) {
            return lVar6;
          }
          uVar4 = uVar4 + 1;
          iVar2 = iVar2 + 4;
        } while (uVar4 < *(uint *)(param_1 + 0xc));
      }
    }
    fn_8294B7A8(param_1);
    uVar4 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar2 = 0;
      do {
        *(uint *)(param_1 + 0x100) = uVar4;
        puVar1 = *(uint **)(iVar2 + *(int *)(param_1 + 0x18));
        *(uint **)(param_1 + 0x104) = puVar1;
        uVar3 = *puVar1 & 0xfff00000;
        if ((uVar3 == 0x74600000) || (uVar3 == 0x74700000)) {
          lVar6 = fn_8294FA78(param_1);
          if (lVar6 < 0) {
            return lVar6;
          }
          lVar6 = fn_8294FC18(param_1);
          if (lVar6 < 0) {
            return lVar6;
          }
        }
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (uVar4 < *(uint *)(param_1 + 0xc));
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar2 = 0;
      do {
        *(uint *)(param_1 + 0x100) = uVar4;
        puVar1 = *(uint **)(iVar2 + *(int *)(param_1 + 0x18));
        *(uint **)(param_1 + 0x104) = puVar1;
        uVar3 = *puVar1 & 0xfff00000;
        if ((((uVar3 == 0x74400000) || (uVar3 == 0x74500000)) || (uVar3 == 0x74600000)) ||
           (uVar3 == 0x74700000)) {
          fn_8294FDB8(param_1);
        }
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (uVar4 < *(uint *)(param_1 + 0xc));
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar2 = 0;
      do {
        *(uint *)(param_1 + 0x100) = uVar4;
        puVar1 = *(uint **)(iVar2 + *(int *)(param_1 + 0x18));
        *(uint **)(param_1 + 0x104) = puVar1;
        if (((*puVar1 & 0xfff00000) == 0x20900000) &&
           (lVar6 = fn_8294F070(param_1), lVar6 < 0)) {
          return lVar6;
        }
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (uVar4 < *(uint *)(param_1 + 0xc));
    }
    fn_8294B7A8(param_1);
    uVar4 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar2 = 0;
      do {
        *(uint *)(param_1 + 0x100) = uVar4;
        puVar1 = *(uint **)(iVar2 + *(int *)(param_1 + 0x18));
        *(uint **)(param_1 + 0x104) = puVar1;
        if (((*puVar1 & 0xfff00000) == 0x20900000) && (lVar6 = fn_8294EA10(param_1), lVar6 < 0))
        {
          return lVar6;
        }
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (uVar4 < *(uint *)(param_1 + 0xc));
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar2 = 0;
      do {
        *(uint *)(param_1 + 0x100) = uVar4;
        puVar1 = *(uint **)(iVar2 + *(int *)(param_1 + 0x18));
        *(uint **)(param_1 + 0x104) = puVar1;
        if (((*puVar1 & 0xfff00000) == 0x11400000) && (lVar6 = fn_8294B970(param_1), lVar6 < 0))
        {
          return lVar6;
        }
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (uVar4 < *(uint *)(param_1 + 0xc));
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar2 = 0;
      do {
        *(uint *)(param_1 + 0x100) = uVar4;
        puVar1 = *(uint **)(iVar2 + *(int *)(param_1 + 0x18));
        *(uint **)(param_1 + 0x104) = puVar1;
        if (((*puVar1 & 0xfff00000) == 0x70300000) &&
           (lVar6 = fn_82951540(param_1,0), lVar6 < 0)) {
          return lVar6;
        }
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (uVar4 < *(uint *)(param_1 + 0xc));
    }
    fn_8294B7A8(param_1);
    uVar4 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar2 = 0;
      do {
        *(uint *)(param_1 + 0x100) = uVar4;
        puVar1 = *(uint **)(iVar2 + *(int *)(param_1 + 0x18));
        *(uint **)(param_1 + 0x104) = puVar1;
        uVar3 = *puVar1 & 0xfff00000;
        if ((((uVar3 == 0x10300000) || (uVar3 == 0x10500000)) || (uVar3 == 0x10600000)) ||
           ((uVar3 == 0x10700000 || (uVar3 == 0x50000000)))) {
          lVar6 = fn_8294D3A8(param_1);
LAB_829623d4:
          if ((int)lVar6 < 0) {
            return lVar6;
          }
        }
        else if (uVar3 == 0x70300000) {
          lVar6 = fn_82957790(param_1);
          goto LAB_829623d4;
        }
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (uVar4 < *(uint *)(param_1 + 0xc));
    }
    fn_8294B7A8(param_1);
    lVar6 = fn_8296E438(param_1);
    if (((-1 < lVar6) && (lVar6 = fn_8296EB38(param_1), -1 < lVar6)) &&
       ((lVar6 = fn_82969030(param_1), -1 < lVar6 &&
        (lVar6 = fn_82971580(param_1), -1 < lVar6)))) {
      fn_8294B7A8(param_1);
      lVar6 = 0;
    }
  }
  return lVar6;
}

