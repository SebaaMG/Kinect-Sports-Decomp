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
extern unsigned int *auStack_40;
extern int fn_828252D0();
extern int fn_8282F2A0();


undefined8 fn_8282CD18(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 auStack_40 [16];
  
  if ((*(byte *)(param_1 + 0x134) & 4) == 0) {
    lVar4 = 0;
    puVar5 = (uint *)(param_1 + 0x58);
    lVar7 = 2;
    do {
      if (*(char *)(param_1 + 0x52) == '\0') {
        uVar6 = *puVar5;
      }
      else {
        uVar6 = puVar5[4];
      }
      lVar4 = (ulonglong)uVar6 + lVar4;
      puVar5 = puVar5 + 5;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    iVar1 = (*(code *)param_2[3])(*param_2,(ulonglong)*(uint *)(param_1 + 0x1c) + lVar4,0);
    if (iVar1 != 0) {
      return 3;
    }
    if (*(char *)(param_1 + 0x51) != '\0') {
      uVar6 = 0;
      do {
        iVar1 = uVar6 * 0x21 + *(int *)(param_1 + 0x114);
        if ((ulonglong)*(uint *)(iVar1 + 9) == 0) {
          *(undefined4 *)(iVar1 + 0xd) = 0;
        }
        else {
          lVar4 = fn_828252D0((ulonglong)*(uint *)(iVar1 + 9) + 0x80);
          if (*(char *)(param_1 + 0x52) == '\0') {
LAB_8282ce3c:
            iVar2 = (*(code *)param_2[2])(*param_2,*(undefined4 *)(iVar1 + 9),lVar4);
            if (iVar2 != 0) {
              return 3;
            }
          }
          else {
            uVar3 = (ulonglong)*(uint *)(iVar1 + 0x1d);
            if (*(uint *)(iVar1 + 9) <= uVar3) goto LAB_8282ce3c;
            iVar2 = (*(code *)param_2[2])
                              (*param_2,uVar3,(*(uint *)(iVar1 + 9) - uVar3) + lVar4 + 0x80);
            if (iVar2 != 0) {
              return 3;
            }
            auStack_40[0] = *(undefined4 *)(iVar1 + 9);
            fn_8282F2A0(((ulonglong)*(uint *)(iVar1 + 9) - (ulonglong)*(uint *)(iVar1 + 0x1d)) +
                            lVar4 + 0x80,(ulonglong)*(uint *)(iVar1 + 0x1d),lVar4,auStack_40);
          }
          *(int *)(iVar1 + 0xd) = (int)lVar4;
        }
        uVar6 = uVar6 + 1 & 0xff;
      } while (uVar6 < *(byte *)(param_1 + 0x51));
    }
    (*(code *)param_2[4])(*param_2);
    *(byte *)(param_1 + 0x134) = *(byte *)(param_1 + 0x134) | 4;
  }
  return 0;
}

