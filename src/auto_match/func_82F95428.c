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
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_8265D5A8();
extern int fn_82F69290();
extern int fn_82F6F870();
extern int fn_82F90550();
extern int fn_82F91FA0();
extern int fn_82F91FD0();
extern int fn_82F92000();
extern int fn_82F92208();
extern int fn_82F95398();
extern int fn_82F953B8();
extern int fn_82F958D8();
extern int fn_82F95AD0();
extern int fn_82F95C80();
extern int fn_82F95D80();
extern int fn_82F95E70();
extern unsigned int iStack0000001c;
extern unsigned int iStack0000002c;
extern unsigned int iStack_44;
extern unsigned int lbl_831BB8F0;
extern unsigned int uStack00000014;
extern unsigned int uStack00000034;


undefined4 fn_82F95428(undefined4 param_1,int param_2,char param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined4 uStack00000014;
  int iStack0000001c;
  char cStack00000027;
  int iStack0000002c;
  undefined4 uStack00000034;
  undefined1 auStack_70 [44];
  int iStack_44;
  undefined1 auStack_40 [40];
  
  uVar1 = lbl_831BB8F0;
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  cStack00000027 = param_3;
  iStack0000002c = param_4;
  uStack00000034 = param_5;
  iVar2 = fn_82F95D80(param_2);
  if (*(uint *)(iStack0000001c + 8) < iVar2 - 1U) {
    iVar2 = fn_82F95E70(iStack0000001c,*(undefined4 *)(iStack0000001c + 4),iStack0000002c,
                              *(undefined4 *)(iStack0000001c + 4),uStack00000034,0);
    *(int *)(iStack0000001c + 8) = *(int *)(iStack0000001c + 8) + 1;
    iStack_44 = iVar2;
    if (iStack0000002c == *(int *)(iStack0000001c + 4)) {
      piVar3 = (int *)fn_82F92000(iStack0000001c);
      *piVar3 = iVar2;
      piVar3 = (int *)fn_82F91FA0(iStack0000001c);
      *piVar3 = iVar2;
      piVar3 = (int *)fn_82F91FD0(iStack0000001c);
      *piVar3 = iVar2;
    }
    else if (cStack00000027 == '\0') {
      piVar3 = (int *)fn_82F953B8(iStack0000002c);
      *piVar3 = iVar2;
      piVar3 = (int *)fn_82F91FD0(iStack0000001c);
      if (iStack0000002c == *piVar3) {
        piVar3 = (int *)fn_82F91FD0(iStack0000001c);
        *piVar3 = iVar2;
      }
    }
    else {
      piVar3 = (int *)fn_8265D5A8(iStack0000002c);
      *piVar3 = iVar2;
      piVar3 = (int *)fn_82F91FA0(iStack0000001c);
      if (iStack0000002c == *piVar3) {
        piVar3 = (int *)fn_82F91FA0(iStack0000001c);
        *piVar3 = iVar2;
      }
    }
    while( true ) {
      puVar4 = (undefined4 *)fn_82F92208(iStack_44);
      pcVar5 = (char *)fn_82F95398(*puVar4);
      if (*pcVar5 != '\0') break;
      piVar3 = (int *)fn_82F92208(iStack_44);
      puVar4 = (undefined4 *)fn_82F92208(iStack_44);
      puVar4 = (undefined4 *)fn_82F92208(*puVar4);
      piVar6 = (int *)fn_8265D5A8(*puVar4);
      if (*piVar3 == *piVar6) {
        puVar4 = (undefined4 *)fn_82F92208(iStack_44);
        puVar4 = (undefined4 *)fn_82F92208(*puVar4);
        piVar3 = (int *)fn_82F953B8(*puVar4);
        iStack0000002c = *piVar3;
        pcVar5 = (char *)fn_82F95398(iStack0000002c);
        if (*pcVar5 == '\0') {
          puVar4 = (undefined4 *)fn_82F92208(iStack_44);
          puVar7 = (undefined1 *)fn_82F95398(*puVar4);
          *puVar7 = 1;
          puVar7 = (undefined1 *)fn_82F95398(iStack0000002c);
          *puVar7 = 1;
          puVar4 = (undefined4 *)fn_82F92208(iStack_44);
          puVar4 = (undefined4 *)fn_82F92208(*puVar4);
          puVar7 = (undefined1 *)fn_82F95398(*puVar4);
          *puVar7 = 0;
          puVar4 = (undefined4 *)fn_82F92208(iStack_44);
          piVar3 = (int *)fn_82F92208(*puVar4);
          iStack_44 = *piVar3;
        }
        else {
          puVar4 = (undefined4 *)fn_82F92208(iStack_44);
          piVar3 = (int *)fn_82F953B8(*puVar4);
          if (iStack_44 == *piVar3) {
            piVar3 = (int *)fn_82F92208(iStack_44);
            iStack_44 = *piVar3;
            fn_82F958D8(iStack0000001c,iStack_44);
          }
          puVar4 = (undefined4 *)fn_82F92208(iStack_44);
          puVar7 = (undefined1 *)fn_82F95398(*puVar4);
          *puVar7 = 1;
          puVar4 = (undefined4 *)fn_82F92208(iStack_44);
          puVar4 = (undefined4 *)fn_82F92208(*puVar4);
          puVar7 = (undefined1 *)fn_82F95398(*puVar4);
          *puVar7 = 0;
          puVar4 = (undefined4 *)fn_82F92208(iStack_44);
          puVar4 = (undefined4 *)fn_82F92208(*puVar4);
          fn_82F95AD0(iStack0000001c,*puVar4);
        }
      }
      else {
        puVar4 = (undefined4 *)fn_82F92208(iStack_44);
        puVar4 = (undefined4 *)fn_82F92208(*puVar4);
        piVar3 = (int *)fn_8265D5A8(*puVar4);
        iStack0000002c = *piVar3;
        pcVar5 = (char *)fn_82F95398(iStack0000002c);
        if (*pcVar5 == '\0') {
          puVar4 = (undefined4 *)fn_82F92208(iStack_44);
          puVar7 = (undefined1 *)fn_82F95398(*puVar4);
          *puVar7 = 1;
          puVar7 = (undefined1 *)fn_82F95398(iStack0000002c);
          *puVar7 = 1;
          puVar4 = (undefined4 *)fn_82F92208(iStack_44);
          puVar4 = (undefined4 *)fn_82F92208(*puVar4);
          puVar7 = (undefined1 *)fn_82F95398(*puVar4);
          *puVar7 = 0;
          puVar4 = (undefined4 *)fn_82F92208(iStack_44);
          piVar3 = (int *)fn_82F92208(*puVar4);
          iStack_44 = *piVar3;
        }
        else {
          puVar4 = (undefined4 *)fn_82F92208(iStack_44);
          piVar3 = (int *)fn_8265D5A8(*puVar4);
          if (iStack_44 == *piVar3) {
            piVar3 = (int *)fn_82F92208(iStack_44);
            iStack_44 = *piVar3;
            fn_82F95AD0(iStack0000001c,iStack_44);
          }
          puVar4 = (undefined4 *)fn_82F92208(iStack_44);
          puVar7 = (undefined1 *)fn_82F95398(*puVar4);
          *puVar7 = 1;
          puVar4 = (undefined4 *)fn_82F92208(iStack_44);
          puVar4 = (undefined4 *)fn_82F92208(*puVar4);
          puVar7 = (undefined1 *)fn_82F95398(*puVar4);
          *puVar7 = 0;
          puVar4 = (undefined4 *)fn_82F92208(iStack_44);
          puVar4 = (undefined4 *)fn_82F92208(*puVar4);
          fn_82F958D8(iStack0000001c,*puVar4);
        }
      }
    }
    puVar4 = (undefined4 *)fn_82F92000(iStack0000001c);
    puVar7 = (undefined1 *)fn_82F95398(*puVar4);
    *puVar7 = 1;
    fn_82F95C80(uStack00000014,iVar2,iStack0000001c);
    fn_82F6F870(uVar1);
    return uStack00000014;
  }
  fn_82230110(auStack_40,0xffffffff82197e58);
  fn_82F90550(auStack_70,auStack_40);
                    /* WARNING: Subroutine does not return */
  fn_82F69290(auStack_70,0xffffffff821dd9dc);
}

