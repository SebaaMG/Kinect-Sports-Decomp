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
extern int fn_829D4038();
extern int fn_829D7480();
extern int fn_829D76B8();
extern int fn_82A1E810();
extern unsigned int lbl_832179FC;


void fn_829D9630(int param_1)

{
  int iVar2;
  longlong lVar1;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = 0;
  if (*(int *)(lbl_832179FC + 0x8f404) != 0) {
    iVar8 = 0;
    do {
      iVar2 = iVar8 + lbl_832179FC;
      iVar3 = *(int *)(iVar2 + 0x8f414);
      iVar7 = *(int *)(iVar2 + 0x8f410);
      iVar2 = (**(code **)(iVar2 + 0x8f408))(*(undefined4 *)(iVar2 + 0x8f40c),iVar2 + 0x8f410);
      if (iVar2 == 0) {
        if (iVar7 == 0) {
LAB_829d9700:
          iVar7 = lbl_832179FC + 0x24980;
          RtlEnterCriticalSection(iVar7);
          uVar5 = 0;
          piVar4 = (int *)(lbl_832179FC + 0x8bc);
          do {
            if (*piVar4 == iVar3) {
              iVar3 = uVar5 * 0x58 + lbl_832179FC + 0x8a0;
              goto LAB_829d9738;
            }
            uVar5 = uVar5 + 1;
            piVar4 = piVar4 + 0x16;
          } while (uVar5 < 2);
          iVar3 = 0;
LAB_829d9738:
          if (iVar3 != 0) {
            fn_829D4038(lbl_832179FC,iVar3,2);
          }
          RtlLeaveCriticalSection(iVar7);
        }
        else if (iVar7 == 2) {
          if (*(uint *)(*(int *)(lbl_832179FC + 0x8f4d8) + 0xf4a10) < 200) goto LAB_829d9700;
          lVar1 = fn_829D7480(param_1);
          if (-1 < lVar1) {
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
          }
          fn_829D76B8(0,param_1);
        }
      }
      uVar6 = uVar6 + 1;
      iVar8 = iVar8 + 0x1c;
    } while (uVar6 < *(uint *)(lbl_832179FC + 0x8f404));
  }
  iVar8 = lbl_832179FC + 0x24980;
  RtlEnterCriticalSection(iVar8);
  if (*(char *)(lbl_832179FC + 0x24977) != '\0') {
    uVar6 = 0;
    piVar4 = (int *)(lbl_832179FC + 0x9a8);
    do {
      if ((piVar4[-0x16] != 0) && (*piVar4 == 2)) goto LAB_829d97d4;
      uVar6 = uVar6 + 1;
      piVar4 = piVar4 + 0x18;
    } while (uVar6 < 2);
    *(char *)(lbl_832179FC + 0x24977) = '\0';
    fn_82A1E810(*(undefined4 *)(lbl_832179FC + 0x8f4c0));
  }
LAB_829d97d4:
  RtlLeaveCriticalSection(iVar8);
  *(undefined4 *)(lbl_832179FC + 0x8f404) = 0;
  return;
}

