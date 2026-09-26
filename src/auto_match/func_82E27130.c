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
extern int fn_82E27090();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_821533C8;
extern unsigned int lbl_821533D8;
extern unsigned int lbl_821533E8;
extern unsigned int lbl_821533F8;
extern unsigned int lbl_82153408;
extern unsigned int lbl_82153418;
extern unsigned int lbl_82153428;
extern unsigned int lbl_82153448;
extern unsigned int lbl_82153838;
extern unsigned int stack0x00000010;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;


undefined8 fn_82E27130(undefined8 param_1,undefined8 param_2,uint *param_3,longlong param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  undefined8 uStack00000010;
  undefined8 uStack00000018;
  
  uVar7 = (uint)param_4;
  pbVar11 = (byte *)&stack0x00000010;
  pbVar9 = &lbl_821533C8;
  do {
    bVar2 = *pbVar11;
    bVar3 = *pbVar9;
    if ((ulonglong)bVar2 - (ulonglong)bVar3 != 0) break;
    pbVar11 = pbVar11 + 1;
    pbVar9 = pbVar9 + 1;
  } while (pbVar11 != &stack0x00000020);
  if ((int)((ulonglong)bVar2 - (ulonglong)bVar3) == 0) {
    return 0;
  }
  pbVar11 = (byte *)&stack0x00000010;
  pbVar9 = (byte *)&lbl_8202E618;
  do {
    bVar2 = *pbVar11;
    bVar3 = *pbVar9;
    if ((ulonglong)bVar2 - (ulonglong)bVar3 != 0) break;
    pbVar11 = pbVar11 + 1;
    pbVar9 = pbVar9 + 1;
  } while (pbVar11 != &stack0x00000020);
  if ((int)((ulonglong)bVar2 - (ulonglong)bVar3) == 0) {
    return 0;
  }
  pbVar11 = (byte *)&stack0x00000010;
  pbVar9 = &lbl_821533D8;
  do {
    bVar2 = *pbVar11;
    bVar3 = *pbVar9;
    if ((ulonglong)bVar2 - (ulonglong)bVar3 != 0) break;
    pbVar11 = pbVar11 + 1;
    pbVar9 = pbVar9 + 1;
  } while (pbVar11 != &stack0x00000020);
  if ((int)((ulonglong)bVar2 - (ulonglong)bVar3) == 0) {
    if (param_3 == (uint *)0x0) {
      return 0xffffffffc00d36b4;
    }
    if (uVar7 < 0x58) {
      return 0xffffffffc00d36b4;
    }
    param_4 = param_4 + -0x30;
LAB_82e272bc:
    param_3 = param_3 + 0xc;
  }
  else {
    pbVar11 = (byte *)&stack0x00000010;
    pbVar9 = (byte *)&lbl_821533E8;
    do {
      bVar2 = *pbVar11;
      bVar3 = *pbVar9;
      if ((ulonglong)bVar2 - (ulonglong)bVar3 != 0) break;
      pbVar11 = pbVar11 + 1;
      pbVar9 = pbVar9 + 1;
    } while (pbVar11 != &stack0x00000020);
    if ((int)((ulonglong)bVar2 - (ulonglong)bVar3) == 0) {
      if (param_3 == (uint *)0x0) {
        return 0xffffffffc00d36b4;
      }
      if (uVar7 < 0x70) {
        return 0xffffffffc00d36b4;
      }
      param_4 = param_4 + -0x48;
    }
    else {
      pbVar11 = (byte *)&stack0x00000010;
      pbVar9 = (byte *)&lbl_82153408;
      do {
        bVar2 = *pbVar11;
        bVar3 = *pbVar9;
        if ((ulonglong)bVar2 - (ulonglong)bVar3 != 0) break;
        pbVar11 = pbVar11 + 1;
        pbVar9 = pbVar9 + 1;
      } while (pbVar11 != &stack0x00000020);
      if ((int)((ulonglong)bVar2 - (ulonglong)bVar3) == 0) {
        if (param_3 == (uint *)0x0) {
          return 0xffffffffc00d36b4;
        }
        if (uVar7 < 0x60) {
          return 0xffffffffc00d36b4;
        }
        if (0x4000 < param_3[0x17]) {
          return 0xffffffffc00d36b4;
        }
        if (uVar7 < param_3[0x17] + 0x60) {
          return 0xffffffffc00d36b4;
        }
        param_4 = 0x28;
        goto LAB_82e272bc;
      }
      pbVar11 = (byte *)&stack0x00000010;
      pbVar9 = &lbl_82153448;
      do {
        bVar2 = *pbVar11;
        bVar3 = *pbVar9;
        if ((ulonglong)bVar2 - (ulonglong)bVar3 != 0) break;
        pbVar11 = pbVar11 + 1;
        pbVar9 = pbVar9 + 1;
      } while (pbVar11 != &stack0x00000020);
      if ((int)((ulonglong)bVar2 - (ulonglong)bVar3) != 0) {
        pbVar11 = (byte *)&stack0x00000010;
        pbVar9 = (byte *)&lbl_821533F8;
        do {
          bVar2 = *pbVar11;
          bVar3 = *pbVar9;
          if ((ulonglong)bVar2 - (ulonglong)bVar3 != 0) break;
          pbVar11 = pbVar11 + 1;
          pbVar9 = pbVar9 + 1;
        } while (pbVar11 != &stack0x00000020);
        if ((int)((ulonglong)bVar2 - (ulonglong)bVar3) == 0) {
          if (param_3 == (uint *)0x0) {
            return 0xffffffffc00d36b4;
          }
          if (uVar7 < 0x12) {
            return 0xffffffffc00d36b4;
          }
          if (0x4000 < *(ushort *)(param_3 + 4)) {
            return 0xffffffffc00d36b4;
          }
          bVar1 = uVar7 < *(ushort *)(param_3 + 4) + 0x12;
        }
        else {
          pbVar11 = (byte *)&stack0x00000010;
          pbVar9 = (byte *)&lbl_82153838;
          do {
            bVar2 = *pbVar11;
            bVar3 = *pbVar9;
            if ((ulonglong)bVar2 - (ulonglong)bVar3 != 0) break;
            pbVar11 = pbVar11 + 1;
            pbVar9 = pbVar9 + 1;
          } while (pbVar11 != &stack0x00000020);
          if ((int)((ulonglong)bVar2 - (ulonglong)bVar3) == 0) {
            if (param_3 == (uint *)0x0) {
              return 0xffffffffc00d36b4;
            }
            if (uVar7 < 0xa4) {
              return 0xffffffffc00d36b4;
            }
            uVar4 = *param_3;
            if (uVar4 < 0xa4) {
              return 0xffffffffc00d36b4;
            }
            if (0x4000 < uVar4) {
              return 0xffffffffc00d36b4;
            }
            if (0x100 < param_3[0x29]) {
              return 0xffffffffc00d36b4;
            }
            uVar10 = (param_3[0x29] + 0x29) * 4;
            if (uVar7 < uVar10) {
              return 0xffffffffc00d36b4;
            }
            if (uVar4 < uVar10) {
              return 0xffffffffc00d36b4;
            }
            bVar1 = uVar7 < uVar4;
          }
          else {
            pbVar11 = (byte *)&stack0x00000010;
            pbVar9 = (byte *)&lbl_82153428;
            do {
              bVar2 = *pbVar11;
              bVar3 = *pbVar9;
              if ((ulonglong)bVar2 - (ulonglong)bVar3 != 0) break;
              pbVar11 = pbVar11 + 1;
              pbVar9 = pbVar9 + 1;
            } while (pbVar11 != &stack0x00000020);
            if ((int)((ulonglong)bVar2 - (ulonglong)bVar3) != 0) {
              pbVar11 = (byte *)&stack0x00000010;
              pbVar9 = &lbl_82153418;
              do {
                bVar2 = *pbVar11;
                bVar3 = *pbVar9;
                if ((ulonglong)bVar2 - (ulonglong)bVar3 != 0) break;
                pbVar11 = pbVar11 + 1;
                pbVar9 = pbVar9 + 1;
              } while (pbVar11 != &stack0x00000020);
              if ((int)((ulonglong)bVar2 - (ulonglong)bVar3) != 0) {
                return 0xffffffffc00d3e98;
              }
              iVar8 = 8;
              if (param_3 == (uint *)0x0) {
                return 0xffffffffc00d36b4;
              }
              if (uVar7 < 8) {
                return 0xffffffffc00d36b4;
              }
              uVar4 = param_3[1];
              if (0x400 < uVar4) {
                return 0xffffffffc00d36b4;
              }
              param_3 = param_3 + 2;
              uVar10 = 0;
              if (uVar4 == 0) {
                return 0;
              }
              do {
                if (uVar7 < iVar8 + 0x50U) {
                  return 0xffffffffc00d36b4;
                }
                uVar5 = param_3[0x12];
                if (0x4000 < uVar5) {
                  return 0xffffffffc00d36b4;
                }
                if (uVar7 < uVar5 + 0x50 + iVar8) {
                  return 0xffffffffc00d36b4;
                }
                uVar10 = uVar10 + 1;
                uVar5 = uVar5 + 0x57 & 0xfffffff8;
                iVar8 = uVar5 + iVar8;
                param_3 = (uint *)(uVar5 + (int)param_3);
              } while (uVar10 != uVar4);
              return 0;
            }
            if (param_3 == (uint *)0x0) {
              return 0xffffffffc00d36b4;
            }
            bVar1 = uVar7 < 0x20;
          }
        }
        if (bVar1) {
          return 0xffffffffc00d36b4;
        }
        return 0;
      }
      if (param_3 == (uint *)0x0) {
        return 0xffffffffc00d36b4;
      }
      if (uVar7 < 0x84) {
        return 0xffffffffc00d36b4;
      }
      if (0x4000 < param_3[0x1d]) {
        return 0xffffffffc00d36b4;
      }
      if (uVar7 < param_3[0x1d] + 0x84) {
        return 0xffffffffc00d36b4;
      }
      param_4 = 0x28;
    }
    param_3 = param_3 + 0x12;
  }
  uStack00000010 = param_1;
  uStack00000018 = param_2;
  uVar6 = fn_82E27090(param_3,param_4);
  return uVar6;
}

