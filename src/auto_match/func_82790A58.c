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
extern int fn_826BCF78();
extern int fn_82790270();
extern int fn_82F66A80();
extern int fn_82F66AA0();


undefined4 fn_82790A58(undefined4 *param_1)

{
  ushort uVar1;
  short *psVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  uint uVar9;
  
  psVar2 = (short *)*param_1;
  if ((short *)param_1[2] <= psVar2) {
    return 0;
  }
  param_1[1] = psVar2;
  if (*psVar2 != 0x26) goto LAB_82790d4c;
  param_1[3] = 0x26;
  param_1[1] = psVar2 + 1;
  if ((short *)param_1[2] < psVar2 + 6) {
LAB_82790b18:
    if (((uint)param_1[2] < param_1[1] + 8) ||
       (iVar5 = fn_82790270(param_1[1],0xffffffff82005c78,4), iVar5 != 0)) {
      if ((uint)param_1[2] < param_1[1] + 6) {
LAB_82790bb4:
        psVar2 = (short *)param_1[1];
        if (((short *)param_1[2] < psVar2 + 2) || (*psVar2 != 0x23)) goto LAB_82790d4c;
        param_1[1] = psVar2 + 1;
        uVar9 = 0;
        iVar5 = fn_826BCF78(psVar2[1] == 0x78);
        if (iVar5 == 0) {
          iVar5 = fn_82F66A80(*(undefined2 *)param_1[1]);
          if (iVar5 != 0) {
            uVar4 = 0;
            if ((uint)param_1[1] < (uint)param_1[2]) {
              do {
                uVar9 = uVar4;
                if (*(short *)param_1[1] == 0x3b) break;
                iVar5 = fn_82F66A80();
                if (iVar5 == 0) goto LAB_82790d0c;
                puVar3 = (ushort *)param_1[1];
                uVar1 = *puVar3;
                param_1[1] = puVar3 + 1;
                uVar9 = (uVar9 * 10 + (uint)uVar1) - 0x30;
                uVar4 = uVar9;
              } while (puVar3 + 1 < (ushort *)param_1[2]);
              goto LAB_82790d10;
            }
            goto LAB_82790d18;
          }
          uVar9 = 0xffffffff;
LAB_82790d38:
          if (uVar9 != 0xffffffff) {
            param_1[3] = uVar9;
            goto LAB_82790d4c;
          }
        }
        else {
          puVar8 = (undefined2 *)param_1[1] + 1;
          param_1[1] = puVar8;
          uVar4 = 0;
          if ((undefined2 *)param_1[2] <= puVar8) {
LAB_82790d18:
            if (*(short *)param_1[1] == 0x3b) {
              param_1[1] = (short *)param_1[1] + 1;
            }
            goto LAB_82790d38;
          }
          do {
            uVar9 = uVar4;
            if (*(short *)param_1[1] == 0x3b) break;
            iVar5 = fn_82F66AA0();
            if (iVar5 == 0) goto LAB_82790d0c;
            uVar9 = uVar9 << 4;
            uVar6 = fn_826BCF78(*(undefined2 *)param_1[1]);
            uVar4 = uVar6 & 0xffff;
            if ((uVar4 < 0x30) || (0x39 < uVar4)) {
              if ((0x60 < uVar4) && (uVar4 < 0x67)) {
                uVar6 = (uVar4 - 1 & 0xf) + 10;
                goto LAB_82790c7c;
              }
            }
            else {
              uVar6 = uVar6 & 0xf;
LAB_82790c7c:
              uVar9 = uVar6 | uVar9;
            }
            param_1[1] = param_1[1] + 2;
            uVar4 = uVar9;
          } while ((uint)param_1[1] < (uint)param_1[2]);
LAB_82790d10:
          if (uVar9 != 0xffffffff) goto LAB_82790d18;
        }
        param_1[1] = psVar2;
        goto LAB_82790d4c;
      }
      iVar5 = fn_82790270(param_1[1],0xffffffff82005c80,3);
      if (iVar5 == 0) {
        uVar7 = 0x3c;
      }
      else {
        iVar5 = fn_82790270(param_1[1],0xffffffff82005c84,3);
        if (iVar5 != 0) goto LAB_82790bb4;
        uVar7 = 0x3e;
      }
      iVar5 = param_1[1] + 6;
    }
    else {
      uVar7 = 0x26;
      iVar5 = param_1[1] + 8;
    }
  }
  else {
    iVar5 = fn_82790270(psVar2 + 1,0xffffffff82005c68,5);
    if (iVar5 == 0) {
      uVar7 = 0x22;
    }
    else {
      iVar5 = fn_82790270(param_1[1],0xffffffff82005c70,5);
      if (iVar5 == 0) {
        uVar7 = 0x27;
      }
      else {
        iVar5 = fn_82790270(param_1[1],0xffffffff82015620,5);
        if (iVar5 != 0) goto LAB_82790b18;
        uVar7 = 0xa0;
      }
    }
    iVar5 = param_1[1] + 10;
  }
  param_1[3] = uVar7;
  param_1[1] = iVar5;
LAB_82790d4c:
  return param_1[3];
LAB_82790d0c:
  uVar9 = 0xffffffff;
  goto LAB_82790d10;
}

