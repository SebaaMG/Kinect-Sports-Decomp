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
extern int fn_82F6DCE0();
extern int fn_82F6EDE8();
extern int iRam83160580;
extern int (*lbl_83223C58)();
extern int (*lbl_83223C5C)();
extern int (*lbl_83223C60)();
extern unsigned int lbl_83223C64;
extern int (*lbl_83223C68)();
extern int (*lbl_83223C70)();
extern int (*lbl_83223C74)();
extern unsigned int stack0x00000020;
extern unsigned int uRam83223c56;
extern unsigned int uRam83223c57;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Removing unreachable block (ram,0x82ab16e8) */
/* WARNING: Removing unreachable block (ram,0x82ab1630) */

undefined4 fn_82AB6770(int *param_1)

{
  int *piVar1;
  char *pcVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 in_r8;
  int iVar5;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  char *apcStack_50 [20];
  
  if (param_1 == (int *)0x0) {
    uStack00000020 = 0xffffffff820d69a4;
    uStack00000028 = 0xffffffff820d68b0;
    uStack00000030 = 0xdf7;
    uStack00000040 = 0xffffffff820d0000;
    uStack00000048 = 0xffffffff820d0000;
    uStack00000038 = in_r8;
    if (lbl_83223C68 != (code *)0x0) {
      if (iRam83160580 == 0) {
        return 0;
      }
      apcStack_50[0] = (char *)&stack0x00000020;
      fn_82F6EDE8(0xffffffff83223858,0x3fe,0xffffffff820d2ea4,&stack0x00000020);
      uRam83223c56 = 0;
      fn_82F6DCE0(0xffffffff83223858,0x3ff,0xffffffff821cc884,0xffffffff83223858);
      uRam83223c57 = 0;
      (*lbl_83223C74)(lbl_83223C64,0,0,0xffffffff83223858);
      if (iRam83160580 == 1) {
        uVar4 = (*lbl_83223C68)(lbl_83223C64,0xffffffff820d5f14,0x83223858,&stack0x00000020);
        return uVar4;
      }
      if ((((iRam83160580 == 2) && (lbl_83223C58 != (code *)0x0)) && (lbl_83223C60 != (code *)0x0))
         && (lbl_83223C5C != (code *)0x0)) {
        lVar3 = (*lbl_83223C58)(lbl_83223C64,0xffffffff820d5f08,2);
        pcVar2 = (char *)0x83223858;
        if (lVar3 == 0) {
          return 0;
        }
        do {
          apcStack_50[0] = pcVar2;
          pcVar2 = apcStack_50[0] + 1;
        } while (*apcStack_50[0] != '\0');
        apcStack_50[0] = apcStack_50[0] + 0x7cddc7a8;
        (*lbl_83223C60)(lbl_83223C64,lVar3,0xffffffff83223858,apcStack_50[0],apcStack_50);
        uVar4 = (*lbl_83223C5C)(lbl_83223C64,lVar3);
        return uVar4;
      }
    }
    uVar4 = (*lbl_83223C70)(lbl_83223C64);
    return uVar4;
  }
  iVar5 = *param_1;
  piVar1 = (int *)(iVar5 + 0x10);
  do {
    if ((*(int **)(iVar5 + 0xc) <= param_1) &&
       (param_1 <= (int *)(*(int *)(iVar5 + 0x14) * *piVar1 + (int)*(int **)(iVar5 + 0xc)))) break;
    iVar5 = *(int *)(iVar5 + 0x1c);
  } while (iVar5 != 0);
  if (iVar5 != 0) {
    piVar1 = *(int **)(iVar5 + 0xc);
    *param_1 = *piVar1;
    *piVar1 = (int)param_1;
    *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 1;
    return 0;
  }
  return 1;
}

