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
extern int fn_829D76B8();
extern int fn_829DFF40();
extern int fn_829E00C0();
extern unsigned int lbl_832179FC;
extern unsigned int *lbl_83217A00;


void fn_829D85D8(undefined4 *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = lbl_832179FC + 0x24980;
  RtlEnterCriticalSection(iVar9);
  iVar3 = lbl_832179FC;
  uVar7 = 0;
  piVar8 = (int *)(lbl_832179FC + 0x96c);
  do {
    if (*piVar8 == param_1[7]) {
      bVar2 = true;
      goto LAB_829d8634;
    }
    uVar7 = uVar7 + 1;
    piVar8 = piVar8 + 0x18;
  } while (uVar7 < 2);
  bVar2 = false;
LAB_829d8634:
  if (!bVar2) {
    iVar4 = param_1[3] * 0x150 + lbl_832179FC;
    iVar6 = param_1[5] * 0xd4d0 + lbl_832179FC;
    iVar10 = param_1[4] * 0x11fb0 + lbl_832179FC + 0xa10;
    iVar1 = param_1[5] * 0x18 + lbl_832179FC;
    if ((*(int *)(iVar4 + 0x208) != 2) || (bVar2 = true, param_1[7] != *(int *)(iVar4 + 0x204))) {
      bVar2 = false;
    }
    if (bVar2) {
      iVar4 = fn_829DFF40(iVar10);
      if (iVar4 != 0) {
        if (lbl_83217A00 == (int *)0x0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = (**(code **)(*lbl_83217A00 + 0x20))(lbl_83217A00,*param_1,param_1[7],param_1 + 6);
        }
        if (cVar5 == '\0') {
          param_1[6] = param_1[5];
          fn_829E00C0(iVar6 + 0x249b0,iVar10);
          *(undefined4 *)(iVar1 + 8) = 1;
          *(undefined1 *)(iVar3 + 0x24975) = 1;
          param_1[1] = param_1[1] & 0xfffffffe;
          if (lbl_83217A00 != (int *)0x0) {
            (**(code **)(*lbl_83217A00 + 8))(lbl_83217A00,param_1[5],param_1[3]);
          }
        }
      }
    }
    else {
      fn_829D76B8(0,param_1,0xffffffff83010008);
    }
  }
  RtlLeaveCriticalSection(iVar9);
  return;
}

