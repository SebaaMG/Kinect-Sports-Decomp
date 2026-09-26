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
extern int fn_829D37C8();
extern int fn_829D4DB8();
extern int fn_829D76B8();
extern int fn_82A1DDC0();
extern int fn_82A1F2F8();
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int lbl_832179FC;
extern unsigned int *lbl_83217A00;
extern unsigned int uStack_44;
extern unsigned int uStack_50;


ulonglong fn_829D92C8(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar4;
  uint uVar5;
  char cVar6;
  ulonglong uVar3;
  uint *puVar7;
  int *piVar10;
  int iVar11;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar12;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  
  iVar12 = lbl_832179FC + 0x24980;
  RtlEnterCriticalSection(iVar12);
  iVar2 = lbl_832179FC;
  uVar5 = 0;
  piVar10 = (int *)(lbl_832179FC + 0x96c);
  do {
    if (*piVar10 == param_1[7]) {
      bVar1 = true;
      goto LAB_829d9324;
    }
    uVar5 = uVar5 + 1;
    piVar10 = piVar10 + 0x18;
  } while (uVar5 < 2);
  bVar1 = false;
LAB_829d9324:
  if (bVar1) goto LAB_829d932c;
  if ((~param_1[1] & 1U) == 0) {
    uVar5 = 0;
    piVar10 = (int *)(lbl_832179FC + 0x8bc);
    do {
      if (*piVar10 == param_1[7]) {
        piVar10 = (int *)(uVar5 * 0x58 + lbl_832179FC + 0x8a0);
        goto LAB_829d937c;
      }
      uVar5 = uVar5 + 1;
      piVar10 = piVar10 + 0x16;
    } while (uVar5 < 2);
    piVar10 = (int *)0x0;
LAB_829d937c:
    if ((piVar10[5] == 0) || (piVar10[1] < 0)) {
LAB_829d93b8:
      iVar4 = fn_82A1F2F8();
      iVar11 = piVar10[8];
      uVar5 = fn_829D4DB8(param_1);
      if (uVar5 < (uint)(iVar4 - iVar11)) {
        if (lbl_83217A00 == (int *)0x0) {
          cVar6 = '\0';
        }
        else {
          cVar6 = (**(code **)(*lbl_83217A00 + 0x20))(lbl_83217A00,*param_1,param_1[7],param_1 + 6);
        }
        if (cVar6 == '\0') {
          if ((*piVar10 != 2) || (bVar1 = true, (piVar10[1] & 0x20U) == 0)) {
            bVar1 = false;
          }
          if (bVar1) {
            iVar11 = param_1[5];
          }
          else {
            iVar11 = -5;
          }
          param_1[6] = iVar11;
          param_1[1] = param_1[1] & 0xfffffffe;
          fn_829D76B8(0,param_1,0);
        }
      }
    }
    else {
      if ((*piVar10 != 2) || (bVar1 = true, (piVar10[1] & 0x20U) == 0)) {
        bVar1 = false;
      }
      if (bVar1) goto LAB_829d93b8;
    }
    if ((piVar10[5] != 0) && ((~param_1[1] & 1U) == 0)) {
      iStack_4c = param_1[7];
      if (*piVar10 == 4) {
        uStack_50 = 2;
        uVar8 = (ulonglong)(uint)(*(int *)(*(int *)(lbl_832179FC + 0x8f4d8) + 0xf4a10) * 100) / 200;
        uStack_44 = (undefined4)uVar8;
        if (99 < uVar8) {
          uStack_44 = 100;
        }
        iStack_48 = param_1[0x10];
      }
      else {
        iStack_48 = param_1[0x10];
        uStack_50 = 0;
      }
      fn_829D37C8(piVar10[5],piVar10[6],&uStack_50);
    }
    if (*piVar10 != 0) {
      piVar10[2] = param_1[1];
      piVar10[0xd] = param_1[0x15];
      piVar10[0xe] = param_1[0x17];
      piVar10[0xf] = param_1[0x1b];
      iVar11 = param_1[0x1a];
      piVar10[0x10] = iVar11;
      piVar10[0x14] = param_1[0x18];
      piVar10[0x11] = piVar10[0x11] + 1;
      if (iVar11 != 2) {
        piVar10[0x12] = piVar10[0x12] + 1;
      }
      fn_82A1DDC0(param_1[4] * 0x11fb0 + iVar2 + 0x12938,param_1 + 0x1f,0x84);
    }
  }
  else if (*param_1 != 0) {
    fn_829D76B8(0,param_1,0);
  }
  uVar3 = fn_82A1F2F8();
  uVar8 = 0xffffffffffffffff;
  if (*(char *)(iVar2 + 0x24977) == '\0') {
    uVar5 = 0;
    puVar7 = (uint *)(iVar2 + 0x8d4);
    do {
      if (puVar7[-0xd] != 0) {
        if ((ulonglong)*puVar7 < (uVar3 & 0xffffffff)) {
          uVar8 = 0;
          break;
        }
        uVar9 = *puVar7 - uVar3;
        if ((uVar9 & 0xffffffff) < (uVar8 & 0xffffffff)) {
          uVar8 = uVar9;
        }
      }
      uVar5 = uVar5 + 1;
      puVar7 = puVar7 + 0x16;
    } while (uVar5 < 2);
    RtlLeaveCriticalSection(iVar12);
    return uVar8;
  }
LAB_829d932c:
  RtlLeaveCriticalSection(iVar12);
  return 0;
}

