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
extern int fn_82A1E810();
extern unsigned int lbl_83217148;
extern unsigned int lbl_832179FC;


undefined8 fn_829D4C60(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if (7 < param_1) {
    return 0xffffffff80070057;
  }
  if ((lbl_83217148 == 0) || (lbl_832179FC == 0)) {
    return 0xffffffff83010005;
  }
  iVar5 = lbl_832179FC + 0x24980;
  RtlEnterCriticalSection(iVar5);
  iVar1 = lbl_832179FC;
  piVar4 = (int *)(param_1 * 0x18 + lbl_832179FC);
  if ((piVar4[3] != 0xfe) || (piVar4[5] != 0)) {
    RtlLeaveCriticalSection(iVar5);
    return 0xffffffff8301000a;
  }
  iVar3 = *piVar4;
  if (iVar3 == 2) {
    uVar2 = 0;
    iVar3 = lbl_832179FC + 0xc0;
    do {
      if (*(uint *)(iVar3 + 0x140) == param_1) {
        *(undefined4 *)(iVar3 + 0x140) = 0xffffffff;
        break;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x150;
    } while (uVar2 < 6);
    iVar3 = *piVar4;
    if (iVar3 != 2) goto LAB_829d4d2c;
  }
  else {
LAB_829d4d2c:
    if (iVar3 != 1) goto LAB_829d4d80;
  }
  *piVar4 = 0;
  piVar4[2] = 0;
  *(undefined1 *)(iVar1 + 0x24975) = 1;
  if (param_2 == 0) {
    fn_82A1E810(*(undefined4 *)(lbl_832179FC + 0x8f4b8));
  }
  else {
    KeSetEvent(*(undefined4 *)(lbl_832179FC + 0x8f4c4),0,0);
  }
LAB_829d4d80:
  RtlLeaveCriticalSection(iVar5);
  return 0;
}

