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
extern int fn_8294BDC8();
extern int fn_8294C648();
extern int fn_8294D3A8();
extern int fn_8294D7B0();
extern int fn_8294DE58();
extern int fn_8294DF88();
extern int fn_8294E128();
extern int fn_8294E2C8();
extern int fn_8294E558();
extern int fn_8294F070();
extern int fn_8294FA78();
extern int fn_8294FC18();
extern int fn_8294FDB8();
extern int fn_82950048();
extern int fn_829501E8();
extern int fn_82950C78();
extern int fn_82951540();
extern int fn_82957130();
extern int fn_82957790();
extern int fn_829597C8();
extern int fn_82969030();
extern int fn_8296E438();
extern int fn_8296EB38();
extern int fn_82971580();


undefined8 fn_829A68C8(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar4 = 0;
    do {
      *(uint *)(param_1 + 0x100) = uVar5;
      puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + iVar4);
      *(uint **)(param_1 + 0x104) = puVar1;
      if ((*puVar1 & 0xfff00000) == 0x10400000) {
        if ((*(uint *)(param_1 + 0x70) & 0x20000) != 0) {
          *puVar1 = puVar1[3] & 0xfffff | 0x71000000;
        }
        uVar3 = 0;
LAB_829a6948:
        if ((int)uVar3 < 0) {
          return uVar3;
        }
      }
      else if ((*puVar1 & 0xfff00000) == 0x11400000) {
        uVar3 = fn_8294E558(param_1);
        goto LAB_829a6948;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < *(uint *)(param_1 + 0xc));
  }
  if ((*(uint *)(param_1 + 0xcc) & 4) == 0) {
    uVar5 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = 0;
      do {
        *(uint *)(param_1 + 0x100) = uVar5;
        puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + iVar4);
        *(uint **)(param_1 + 0x104) = puVar1;
        uVar2 = *puVar1 & 0xfff00000;
        if (uVar2 == 0x10100000) {
          uVar3 = fn_829597C8(param_1,1);
LAB_829a6a78:
          if ((int)uVar3 < 0) {
            return uVar3;
          }
        }
        else {
          if (uVar2 == 0x10500000) {
            if (*(ushort *)(param_1 + 0xca) < 0x200) {
LAB_829a6a64:
              uVar3 = 1;
            }
            else {
              uVar3 = fn_8294C648(param_1);
            }
            goto LAB_829a6a78;
          }
          if (uVar2 == 0x10f00000) {
            uVar3 = fn_8294D7B0(param_1);
            goto LAB_829a6a78;
          }
          if (uVar2 == 0x11400000) {
            uVar3 = fn_8294E558(param_1);
            goto LAB_829a6a78;
          }
          if (uVar2 == 0x20100000) {
            if (*(ushort *)(param_1 + 0xca) < 0x200) goto LAB_829a6a64;
            uVar3 = fn_82950C78(param_1);
            goto LAB_829a6a78;
          }
          if (uVar2 == 0x20400000) {
            uVar3 = fn_82957130(param_1,1);
            goto LAB_829a6a78;
          }
          if (uVar2 == 0x20500000) {
            uVar3 = fn_82950048(param_1);
            goto LAB_829a6a78;
          }
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar5 < *(uint *)(param_1 + 0xc));
    }
    uVar3 = fn_8296E438(param_1);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    fn_8294B7A8(param_1);
    uVar5 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = 0;
      do {
        *(uint *)(param_1 + 0x100) = uVar5;
        puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + iVar4);
        *(uint **)(param_1 + 0x104) = puVar1;
        uVar2 = *puVar1 & 0xfff00000;
        if (uVar2 == 0x20500000) {
          if (*(ushort *)(param_1 + 0xca) < 0x200) {
LAB_829a6b7c:
            uVar3 = 1;
          }
          else {
            uVar3 = fn_829501E8(param_1);
          }
LAB_829a6b80:
          if ((int)uVar3 < 0) {
            return uVar3;
          }
        }
        else {
          if (uVar2 == 0x70300000) {
            if (*(ushort *)(param_1 + 0xca) < 0x200) goto LAB_829a6b7c;
            uVar3 = fn_82951540(param_1,1);
            goto LAB_829a6b80;
          }
          if ((uVar2 == 0x73500000) || (uVar2 == 0x73600000)) {
            uVar3 = fn_8294DF88(param_1);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            uVar3 = fn_8294E128(param_1);
            goto LAB_829a6b80;
          }
          if ((uVar2 == 0x74600000) || (uVar2 == 0x74700000)) {
            uVar3 = fn_8294FA78(param_1);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            uVar3 = fn_8294FC18(param_1);
            goto LAB_829a6b80;
          }
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar5 < *(uint *)(param_1 + 0xc));
    }
    uVar5 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = 0;
      do {
        *(uint *)(param_1 + 0x100) = uVar5;
        puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + iVar4);
        *(uint **)(param_1 + 0x104) = puVar1;
        uVar2 = *puVar1 & 0xfff00000;
        if (uVar2 < 0x74400001) {
          if (uVar2 == 0x74400000) {
LAB_829a6c20:
            uVar3 = fn_8294FDB8(param_1);
          }
          else {
            if (((uVar2 != 0x73500000) && (uVar2 != 0x73600000)) &&
               ((uVar2 != 0x73700000 && (uVar2 != 0x73800000)))) goto LAB_829a6c30;
            uVar3 = fn_8294E2C8(param_1);
          }
          if ((int)uVar3 < 0) {
            return uVar3;
          }
        }
        else if (((uVar2 == 0x74500000) || (uVar2 == 0x74600000)) || (uVar2 == 0x74700000))
        goto LAB_829a6c20;
LAB_829a6c30:
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar5 < *(uint *)(param_1 + 0xc));
    }
    uVar5 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = 0;
      do {
        *(uint *)(param_1 + 0x100) = uVar5;
        puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + iVar4);
        *(uint **)(param_1 + 0x104) = puVar1;
        if (((*puVar1 & 0xfff00000) == 0x73700000) &&
           (uVar3 = fn_8294DE58(param_1), (int)uVar3 < 0)) {
          return uVar3;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar5 < *(uint *)(param_1 + 0xc));
    }
  }
  fn_8294B7A8(param_1);
  uVar5 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar4 = 0;
    do {
      *(uint *)(param_1 + 0x100) = uVar5;
      puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + iVar4);
      *(uint **)(param_1 + 0x104) = puVar1;
      uVar2 = *puVar1 & 0xfff00000;
      if ((uVar2 == 0x74600000) || (uVar2 == 0x74700000)) {
        uVar3 = fn_8294FA78(param_1);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        uVar3 = fn_8294FC18(param_1);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < *(uint *)(param_1 + 0xc));
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar4 = 0;
    do {
      *(uint *)(param_1 + 0x100) = uVar5;
      puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + iVar4);
      *(uint **)(param_1 + 0x104) = puVar1;
      uVar2 = *puVar1 & 0xfff00000;
      if ((((uVar2 == 0x74400000) || (uVar2 == 0x74500000)) || (uVar2 == 0x74600000)) ||
         (uVar2 == 0x74700000)) {
        fn_8294FDB8(param_1);
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < *(uint *)(param_1 + 0xc));
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar4 = 0;
    do {
      *(uint *)(param_1 + 0x100) = uVar5;
      puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + iVar4);
      *(uint **)(param_1 + 0x104) = puVar1;
      if (((*puVar1 & 0xfff00000) == 0x20900000) &&
         (uVar3 = fn_8294F070(param_1), (int)uVar3 < 0)) {
        return uVar3;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < *(uint *)(param_1 + 0xc));
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar4 = 0;
    do {
      *(uint *)(param_1 + 0x100) = uVar5;
      puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + iVar4);
      *(uint **)(param_1 + 0x104) = puVar1;
      if (((*puVar1 & 0xfff00000) == 0x11400000) &&
         (uVar3 = fn_8294B970(param_1), (int)uVar3 < 0)) {
        return uVar3;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < *(uint *)(param_1 + 0xc));
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar4 = 0;
    do {
      *(uint *)(param_1 + 0x100) = uVar5;
      puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + iVar4);
      *(uint **)(param_1 + 0x104) = puVar1;
      if ((*puVar1 & 0xfff00000) == 0x70300000) {
        if (*(ushort *)(param_1 + 0xca) < 0x200) {
          uVar3 = 1;
        }
        else {
          uVar3 = fn_82951540(param_1,0);
        }
        if ((int)uVar3 < 0) {
          return uVar3;
        }
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < *(uint *)(param_1 + 0xc));
  }
  fn_8294B7A8(param_1);
  uVar5 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar4 = 0;
    do {
      *(uint *)(param_1 + 0x100) = uVar5;
      puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + iVar4);
      *(uint **)(param_1 + 0x104) = puVar1;
      uVar2 = *puVar1 & 0xfff00000;
      if ((((uVar2 == 0x10300000) || (uVar2 == 0x10500000)) || (uVar2 == 0x10600000)) ||
         ((uVar2 == 0x10700000 || (uVar2 == 0x50000000)))) {
        uVar3 = fn_8294D3A8(param_1);
LAB_829a6f3c:
        if ((int)uVar3 < 0) {
          return uVar3;
        }
      }
      else if (uVar2 == 0x70300000) {
        if (*(ushort *)(param_1 + 0xca) < 0x200) {
          uVar3 = 1;
        }
        else {
          uVar3 = fn_82957790(param_1);
        }
        goto LAB_829a6f3c;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < *(uint *)(param_1 + 0xc));
  }
  fn_8294B7A8(param_1);
  uVar5 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar4 = 0;
    do {
      *(uint *)(param_1 + 0x100) = uVar5;
      puVar1 = *(uint **)(*(int *)(param_1 + 0x18) + iVar4);
      *(uint **)(param_1 + 0x104) = puVar1;
      if (((*puVar1 & 0xfff00000) == 0x50300000) &&
         (uVar3 = fn_8294BDC8(param_1), (int)uVar3 < 0)) {
        return uVar3;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < *(uint *)(param_1 + 0xc));
  }
  uVar3 = fn_8296E438(param_1);
  if ((((-1 < (int)uVar3) && (uVar3 = fn_8296EB38(param_1), -1 < (int)uVar3)) &&
      (uVar3 = fn_82969030(param_1), -1 < (int)uVar3)) &&
     (uVar3 = fn_82971580(param_1), -1 < (int)uVar3)) {
    fn_8294B7A8(param_1);
    uVar3 = 0;
  }
  return uVar3;
}

