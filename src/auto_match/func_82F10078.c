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
extern unsigned int *auStack_90;
extern int fn_8265C940();
extern int fn_82E871A0();
extern int fn_82F142B0();
extern int fn_82F143B0();
extern int fn_82F17EB8();
extern int fn_82F691F0();
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


/* WARNING: Removing unreachable block (ram,0x82f10238) */
/* WARNING: Removing unreachable block (ram,0x82f10300) */

ulonglong fn_82F10078(int param_1)

{
  undefined4 *puVar2;
  ulonglong uVar1;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint auStack_90 [4];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if (*(int *)(param_1 + 0x658) != 0) {
    piVar8 = (int *)(param_1 + 0x824);
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      trapWord(6,(ulonglong)*(uint *)(param_1 + 0x658),0);
      piVar8[0xeb] = (int)(((longlong)(int)uVar7 * (longlong)*(int *)(param_1 + 0x550) & 0xffffffffU
                           ) / (ulonglong)*(uint *)(param_1 + 0x658));
      trapWord(6,(ulonglong)*(uint *)(param_1 + 0x658),0);
      piVar8[0xec] = (int)(((longlong)(int)uVar5 * (longlong)*(int *)(param_1 + 0x550) & 0xffffffffU
                           ) / (ulonglong)*(uint *)(param_1 + 0x658));
      trapWord(6,(ulonglong)*(uint *)(param_1 + 0x658),0);
      piVar8[0xed] = (int)(((longlong)*(int *)(param_1 + 0x55c) * (longlong)(int)uVar7 & 0xffffffffU
                           ) / (ulonglong)*(uint *)(param_1 + 0x658));
      trapWord(6,(ulonglong)*(uint *)(param_1 + 0x658),0);
      piVar8[0xee] = (int)(((longlong)(int)uVar5 * (longlong)*(int *)(param_1 + 0x55c) & 0xffffffffU
                           ) / (ulonglong)*(uint *)(param_1 + 0x658));
      trapWord(6,(ulonglong)*(uint *)(param_1 + 0x658),0);
      piVar8[0xef] = (int)(((longlong)*(int *)(param_1 + 800) * (longlong)(int)uVar7 & 0xffffffffU)
                          / (ulonglong)*(uint *)(param_1 + 0x658));
      trapWord(6,(ulonglong)*(uint *)(param_1 + 0x658),0);
      piVar8[0xf0] = (int)(((longlong)(int)uVar5 * (longlong)*(int *)(param_1 + 800) & 0xffffffffU)
                          / (ulonglong)*(uint *)(param_1 + 0x658));
      trapWord(6,(ulonglong)*(uint *)(param_1 + 0x658),0);
      piVar8[0xf1] = (int)(((longlong)(int)(uVar7 * *(int *)(param_1 + 0x564)) *
                            (longlong)*(int *)(param_1 + 0x550) & 0xffffffffU) /
                          (ulonglong)*(uint *)(param_1 + 0x658)) + *(int *)(param_1 + 0x574);
      trapWord(6,(ulonglong)*(uint *)(param_1 + 0x658),0);
      piVar8 = piVar8 + 0xf2;
      *piVar8 = (int)(((longlong)(int)(*(int *)(param_1 + 0x55c) * uVar7) *
                       (longlong)*(int *)(param_1 + 0x568) & 0xffffffffU) /
                     (ulonglong)*(uint *)(param_1 + 0x658)) + *(int *)(param_1 + 0x578);
      uVar7 = uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0x658));
  }
  iVar3 = *(int *)(param_1 + 0x304);
  *(int *)(param_1 + 0x310) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x574);
  *(int *)(param_1 + 0x4a94) = *(int *)(iVar3 + 0x40) + *(int *)(param_1 + 0x574);
  *(int *)(param_1 + 0x4a98) = *(int *)(iVar3 + 0x58) + *(int *)(param_1 + 0x578);
  auStack_90[0] = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  *(int *)(param_1 + 0x4a9c) = *(int *)(iVar3 + 0x70) + *(int *)(param_1 + 0x578);
  uStack_68 = 0x10;
  uStack_64 = 0x10;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 8;
  uStack_74 = 8;
  if (*(int *)(param_1 + 0x658) == 0) {
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc28) = 0;
    *(undefined4 *)(param_1 + 0xc30) = 0;
    uVar7 = *(uint *)(param_1 + 0x658);
    if (((ulonglong)uVar7 - 1 & 0xffffffff) == 0) {
      *(undefined4 *)(param_1 + 0xc2c) = *(undefined4 *)(param_1 + 0x2d4);
      *(undefined4 *)(param_1 + 0xc34) = *(undefined4 *)(param_1 + 0x2d4);
      *(undefined4 *)(param_1 + 0xe2c) = *(undefined4 *)(param_1 + 0x2d0);
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x2d4) / uVar7;
      trapWord(6,(ulonglong)uVar7,0);
      *(uint *)(param_1 + 0xc2c) = uVar5;
      *(uint *)(param_1 + 0xc34) = uVar5 & 0xfffffffe;
      trapWord(6,(ulonglong)*(uint *)(param_1 + 0x658),0);
      *(uint *)(param_1 + 0xe2c) = *(uint *)(param_1 + 0x2d0) / *(uint *)(param_1 + 0x658);
    }
    iVar3 = *(int *)(param_1 + 0xc28);
    *(int *)(param_1 + 0xc38) = iVar3 << 4;
    *(int *)(param_1 + 0xc3c) = iVar3 * *(int *)(param_1 + 0x2d0);
    *(int *)(param_1 + 0xc40) = iVar3 * *(int *)(param_1 + 0x2d0);
    iVar6 = iVar3 * *(int *)(param_1 + 0x57c);
    *(int *)(param_1 + 0xd7c) = iVar6;
    *(int *)(param_1 + 0xd80) = iVar3 * *(int *)(param_1 + 0x580);
    *(int *)(param_1 + 0xd74) = iVar6 + *(int *)(param_1 + 0x310);
    puVar2 = (undefined4 *)fn_8265C940(0x94,0x248c8000);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0xffffffff;
      puVar2[2] = 0xffffffff;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[7] = 0xffffffff;
      puVar2[6] = 0xffffffff;
      puVar2[0x13] = 0;
      puVar2[0x12] = 0;
      puVar2[0x15] = 0xffffffff;
      puVar2[0x14] = 0xffffffff;
      puVar2[0x19] = 0;
      puVar2[0x18] = 0;
      puVar2[0x1b] = 0xffffffff;
      puVar2[0x1a] = 0xffffffff;
      puVar2[0x1f] = 0;
      puVar2[0x1e] = 0;
      puVar2[0x21] = 0xffffffff;
      puVar2[0x20] = 0xffffffff;
    }
    *(undefined4 **)(param_1 + 0xd84) = puVar2;
    if ((puVar2 != (undefined4 *)0x0) &&
       (fn_82F17EB8(puVar2,auStack_90,&uStack_70,&uStack_80,0,0,0), auStack_90[0] == 0)) {
      iVar3 = *(int *)(param_1 + 0xd84);
      *(undefined4 *)(param_1 + 0xd8c) = *(undefined4 *)(iVar3 + 0x40);
      *(undefined4 *)(param_1 + 0xd90) = *(undefined4 *)(iVar3 + 0x58);
      *(undefined4 *)(param_1 + 0xd94) = *(undefined4 *)(iVar3 + 0x70);
      uVar1 = fn_8265C940(0x44,0x248c8000);
      if ((uVar1 & 0xffffffff) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = fn_82F143B0(uVar1,auStack_90,&uStack_70,&uStack_80);
      }
      *(int *)(param_1 + 0xd88) = (int)uVar1;
      if (((uVar1 & 0xffffffff) != 0) && (auStack_90[0] == 0)) {
        puVar2 = (undefined4 *)fn_82F142B0(uVar1,0);
        *(undefined4 *)(param_1 + 0xd98) = *puVar2;
        puVar2 = (undefined4 *)fn_82F142B0(*(undefined4 *)(param_1 + 0xd88),1);
        *(undefined4 *)(param_1 + 0xd9c) = *puVar2;
        puVar2 = (undefined4 *)fn_82F142B0(*(undefined4 *)(param_1 + 0xd88),2);
        *(undefined4 *)(param_1 + 0xda0) = *puVar2;
        puVar2 = (undefined4 *)fn_8265C940(0x94,0x248c8000);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          puVar2[1] = 0;
          *puVar2 = 0;
          puVar2[3] = 0xffffffff;
          puVar2[2] = 0xffffffff;
          puVar2[5] = 0;
          puVar2[4] = 0;
          puVar2[7] = 0xffffffff;
          puVar2[6] = 0xffffffff;
          puVar2[0x13] = 0;
          puVar2[0x12] = 0;
          puVar2[0x15] = 0xffffffff;
          puVar2[0x14] = 0xffffffff;
          puVar2[0x19] = 0;
          puVar2[0x18] = 0;
          puVar2[0x1b] = 0xffffffff;
          puVar2[0x1a] = 0xffffffff;
          puVar2[0x1f] = 0;
          puVar2[0x1e] = 0;
          puVar2[0x21] = 0xffffffff;
          puVar2[0x20] = 0xffffffff;
        }
        *(undefined4 **)(param_1 + 0xda4) = puVar2;
        if ((puVar2 != (undefined4 *)0x0) &&
           (fn_82F17EB8(puVar2,auStack_90,&uStack_70,&uStack_80,0,0,0), auStack_90[0] == 0)) {
          iVar3 = *(int *)(param_1 + 0xda4);
          *(undefined4 *)(param_1 + 0xda8) = *(undefined4 *)(iVar3 + 0x40);
          *(undefined4 *)(param_1 + 0xdac) = *(undefined4 *)(iVar3 + 0x58);
          *(undefined4 *)(param_1 + 0xdb0) = *(undefined4 *)(iVar3 + 0x70);
          iVar3 = fn_8265C940(0x4f4,0x248c8000);
          *(int *)(param_1 + 0xbcc) = iVar3;
          if (iVar3 != 0) {
            uVar4 = fn_8265C940(0x80,0x248c8000);
            *(undefined4 *)(param_1 + 0xe08) = uVar4;
            iVar3 = fn_8265C940(0x80,0x248c8000);
            *(int *)(param_1 + 0xe0c) = iVar3;
            if ((*(int *)(param_1 + 0xe08) != 0) && (iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(*(int *)(param_1 + 0xe08),0,0x80);
            }
          }
        }
      }
    }
    fn_82E871A0(param_1);
    uVar1 = (ulonglong)auStack_90[0];
    if (auStack_90[0] == 0) {
      uVar1 = 0xfffffffffffffffd;
    }
  }
  return uVar1;
}

