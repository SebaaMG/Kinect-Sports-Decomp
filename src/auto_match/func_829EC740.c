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


int fn_829EC740(int param_1,int param_2,uint param_3,undefined2 *param_4,ushort param_5)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  
  puVar3 = (ushort *)((param_3 & 0xfffffffe) + param_2);
  if ((param_2 != 0) && (param_4 != (undefined2 *)0x0)) {
    *(ushort *)(param_1 + 0x10) = param_5;
    uVar2 = (int)param_4 - param_2 & 1;
    if (uVar2 != 0) {
      param_4 = (undefined2 *)((int)param_4 + (2 - uVar2));
    }
    puVar8 = param_4 + 1;
    if (puVar8 <= puVar3) {
      *(undefined2 *)(param_1 + 0x14) = *param_4;
      if (9 < param_5) {
        uVar2 = (int)puVar8 - param_2 & 3;
        if (uVar2 != 0) {
          puVar8 = (ushort *)((int)puVar8 + (4 - uVar2));
        }
        puVar7 = puVar8 + 2;
        if (puVar3 < puVar7) {
          return 0;
        }
        uVar2 = (int)puVar7 - param_2 & 3;
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)puVar8;
        if (uVar2 != 0) {
          puVar7 = (ushort *)((int)puVar7 + (4 - uVar2));
        }
        if (puVar3 < puVar7 + 2) {
          return 0;
        }
        *(ushort **)(param_1 + 0x1c) = puVar7;
        puVar7 = puVar7 + (uint)*(ushort *)(param_1 + 0x14) * 2;
        uVar2 = (int)puVar7 - param_2 & 3;
        if (uVar2 != 0) {
          puVar7 = (ushort *)((int)puVar7 + (4 - uVar2));
        }
        if (puVar3 < puVar7 + 2) {
          return 0;
        }
        *(ushort **)(param_1 + 0x20) = puVar7;
        puVar8 = puVar7 + (uint)*(ushort *)(param_1 + 0x14) * 2;
      }
      uVar2 = (int)puVar8 - param_2 & 3;
      if (uVar2 != 0) {
        puVar8 = (ushort *)((int)puVar8 + (4 - uVar2));
      }
      if (param_5 < 0xc) {
        uVar2 = (int)puVar8 - param_2 & 3;
        if (uVar2 != 0) {
          puVar8 = (ushort *)((int)puVar8 + (4 - uVar2));
        }
        puVar7 = puVar8 + 1;
        *(uint *)(param_1 + 0x24) = (uint)*puVar8;
      }
      else {
        puVar7 = puVar8 + 2;
        if (puVar3 < puVar7) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)puVar8;
      }
      uVar2 = (int)puVar7 - param_2 & 1;
      if (uVar2 != 0) {
        puVar7 = (ushort *)((int)puVar7 + (2 - uVar2));
      }
      puVar8 = puVar7 + 1;
      if (puVar8 <= puVar3) {
        uVar2 = (int)puVar8 - param_2 & 1;
        *(ushort *)(param_1 + 0x28) = *puVar7;
        if (uVar2 != 0) {
          puVar8 = (ushort *)((int)puVar8 + (2 - uVar2));
        }
        uVar1 = *(ushort *)(param_1 + 0x14);
        puVar7 = puVar8 + uVar1;
        if (puVar7 <= puVar3) {
          *(ushort **)(param_1 + 0x2c) = puVar8;
          uVar2 = (int)puVar7 - param_2 & 1;
          if (uVar2 != 0) {
            puVar7 = (ushort *)((int)puVar7 + (2 - uVar2));
          }
          puVar8 = puVar7 + uVar1;
          if (puVar8 <= puVar3) {
            *(ushort **)(param_1 + 0x30) = puVar7;
            uVar2 = (int)puVar8 - param_2 & 1;
            if (uVar2 != 0) {
              puVar8 = (ushort *)((int)puVar8 + (2 - uVar2));
            }
            puVar7 = puVar8 + uVar1;
            if (puVar7 <= puVar3) {
              *(ushort **)(param_1 + 0x34) = puVar8;
              if (10 < param_5) {
                uVar2 = (int)puVar7 - param_2 & 1;
                if (uVar2 != 0) {
                  puVar7 = (ushort *)((int)puVar7 + (2 - uVar2));
                }
                puVar8 = puVar7 + 1;
                if (puVar3 < puVar8) {
                  return 0;
                }
                uVar1 = *puVar7;
                *(ushort *)(param_1 + 0x38) = uVar1;
                if (uVar1 != 8) {
                  return 0;
                }
                uVar2 = (int)puVar8 - param_2 & 1;
                if (uVar2 != 0) {
                  puVar8 = (ushort *)((int)puVar8 + (2 - uVar2));
                }
                puVar5 = puVar8 + 1;
                if (puVar3 < puVar5) {
                  return 0;
                }
                uVar1 = *puVar8;
                *(ushort *)(param_1 + 0x3a) = uVar1;
                if (uVar1 != 4) {
                  return 0;
                }
                uVar2 = (int)puVar5 - param_2 & 1;
                if (uVar2 != 0) {
                  puVar5 = (ushort *)((int)puVar5 + (2 - uVar2));
                }
                puVar7 = puVar5 + 1;
                if (puVar3 < puVar7) {
                  return 0;
                }
                uVar1 = *puVar5;
                *(ushort *)(param_1 + 0x3c) = uVar1;
                if (uVar1 != 2) {
                  return 0;
                }
                uVar2 = (int)puVar7 - param_2 & 3;
                if (uVar2 != 0) {
                  puVar7 = (ushort *)((int)puVar7 + (4 - uVar2));
                }
                puVar8 = *(ushort **)(param_1 + 0x2c);
                if (puVar3 < puVar7 + (uint)*puVar8 * 2) {
                  return 0;
                }
                *(ushort **)(param_1 + 0x40) = puVar7;
                iVar6 = 0;
                uVar1 = *puVar8;
                if (uVar1 != 0) {
                  iVar4 = 0;
                  do {
                    if (*(int *)(iVar4 + (int)puVar7) < 1) {
                      return 0;
                    }
                    iVar6 = iVar6 + 1;
                    iVar4 = iVar4 + 4;
                  } while (iVar6 < (int)(uint)**(ushort **)(param_1 + 0x2c));
                }
                puVar7 = puVar7 + (uint)uVar1 * 2;
                uVar2 = (int)puVar7 - param_2 & 7;
                if (uVar2 != 0) {
                  puVar7 = (ushort *)((int)puVar7 + (8 - uVar2));
                }
                if (puVar3 < puVar7 + (uint)uVar1 * 4) {
                  return 0;
                }
                *(ushort **)(param_1 + 0x44) = puVar7;
                puVar7 = puVar7 + (uint)*puVar8 * 4;
              }
              uVar2 = (int)puVar7 - param_2 & 3;
              if (uVar2 != 0) {
                puVar7 = (ushort *)((int)puVar7 + (4 - uVar2));
              }
              if (puVar7 + (uint)**(ushort **)(param_1 + 0x2c) * 2 <= puVar3) {
                *(ushort **)(param_1 + 0x48) = puVar7;
                puVar7 = puVar7 + (uint)**(ushort **)(param_1 + 0x2c) * 2;
                uVar2 = (int)puVar7 - param_2 & 3;
                if (uVar2 != 0) {
                  puVar7 = (ushort *)((int)puVar7 + (4 - uVar2));
                }
                puVar8 = puVar7 + 2;
                if (puVar8 <= puVar3) {
                  uVar2 = (int)puVar8 - param_2 & 1;
                  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)puVar7;
                  if (uVar2 != 0) {
                    puVar8 = (ushort *)((int)puVar8 + (2 - uVar2));
                  }
                  if ((ushort *)((*(uint *)(param_1 + 0x4c) & 0xfffffffe) + (int)puVar8) <= puVar3)
                  {
                    *(ushort **)(param_1 + 0x50) = puVar8;
                    return *(uint *)(param_1 + 0x4c) + (int)puVar8;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

