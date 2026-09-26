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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_826F0610();
extern unsigned int iStack_30;
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;


void fn_826F14C8(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcStack_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  uint uStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  int iStack_30;
  char **ppcStack_2c;
  uint *puStack_28;
  
  uVar3 = param_2[1];
  pcStack_50 = (char *)*param_2;
  uStack_4c = 0;
  if (uVar3 != 0) {
    do {
      if ((pcStack_50[uStack_4c] == '\0') || (pcStack_50[uStack_4c] == ':')) break;
      uStack_4c = uStack_4c + 1;
    } while (uStack_4c < uVar3);
  }
  if ((pcStack_50 != (char *)0x0) && (uStack_4c != 0)) {
    if ((*pcStack_50 == 's') && (pcStack_50[1] == 'w')) {
      uVar4 = uStack_4c + 1;
      if (uVar3 < uStack_4c + 1) {
        uVar4 = uVar3;
      }
      uVar3 = uVar3 - uVar4;
      pcStack_50 = pcStack_50 + uVar4;
      uVar4 = 0;
      if (uVar3 != 0) {
        do {
          if ((pcStack_50[uVar4] == '\0') || (pcStack_50[uVar4] == ':')) break;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar3);
      }
      *(ulonglong *)(param_1 + 0x10) = CONCAT44(pcStack_50,uVar4);
      if ((*(byte *)(param_1 + 0xc) & 0x80) == 0) {
        uVar4 = *(int *)(param_1 + 0x14) + 1;
        if (uVar3 < *(int *)(param_1 + 0x14) + 1U) {
          uVar4 = uVar3;
        }
        uVar5 = 0;
        if (uVar3 != uVar4) {
          do {
            cVar1 = (pcStack_50 + uVar4)[uVar5];
            if ((cVar1 == '\0') || (cVar1 == ':')) break;
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar3 - uVar4);
        }
        *(ulonglong *)(param_1 + 0x10) = CONCAT44(pcStack_50 + uVar4,uVar5);
      }
      *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 0x40;
    }
    else {
      iStack_30 = *(int *)(param_1 + 4);
      if (*(int *)(iStack_30 + 0x14) != 0) {
        ppcStack_2c = &pcStack_50;
        uStack_3c = 1;
        puStack_28 = &uStack_40;
        uStack_40 = (uint)(*(byte *)(param_1 + 0xc) >> 7);
        uStack_38 = 0;
        piVar2 = (int *)(**(code **)(**(int **)(iStack_30 + 0x14) + 4))
                                  (*(int **)(iStack_30 + 0x14),&iStack_30);
        if (piVar2 != (int *)0x0) {
          uVar3 = param_2[1];
          uVar4 = uStack_4c + 1;
          if (uVar3 < uStack_4c + 1) {
            uVar4 = uVar3;
          }
          iStack_44 = uVar3 - uVar4;
          iStack_48 = *param_2 + uVar4;
          if (iStack_44 != 0) {
            (**(code **)(*piVar2 + 8))(piVar2,&iStack_48);
          }
          fn_826F0610(*(undefined4 *)(param_1 + 4),param_1,piVar2,1);
        }
      }
    }
  }
  return;
}

