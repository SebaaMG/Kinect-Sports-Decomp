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
extern int fn_82FFB818();
extern int fn_82FFE5B8();
extern int fn_82FFE7A0();
extern int fn_82FFF2F0();
extern unsigned int iStack_74;
extern unsigned int iStack_78;


longlong fn_82FFBEF8(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  char acStack_80 [8];
  int iStack_78;
  int iStack_74;
  
  if ((*(int *)(param_3 + 0x20) != 0) || (*(int *)(param_3 + 0x24) == 0)) {
    return 1;
  }
  lVar3 = 0x34;
  if (*(int *)(param_3 + 0x28) != 0) {
    uVar4 = 0;
    if (*(int *)(param_3 + 0x24) != 0) {
      lVar5 = param_1 + 0x50;
      iVar6 = 0;
      do {
        piVar7 = (int *)(iVar6 + *(int *)(param_3 + 0x28));
        RtlEnterCriticalSection(lVar5);
        acStack_80[0] = '\0';
        piVar2 = (int *)fn_82FFE7A0(param_1 + 0x90,*piVar7,acStack_80);
        cVar1 = acStack_80[0];
        if ((acStack_80[0] == '\0') || (*piVar2 == 0)) {
          if (piVar2 != (int *)0x0) {
            piVar2[6] = *piVar7;
            iStack_74 = piVar7[2];
            iStack_78 = piVar7[1] + param_2;
            lVar3 = fn_82FFE5B8(piVar2 + 2,param_3,CONCAT44(iStack_78,iStack_74));
            lVar3 = ((-(ulonglong)(lVar3 != 0) & 0xfffffffd) << 0x20 |
                    -(ulonglong)(lVar3 != 0) & 0xffffffcd) + 0x34;
            if ((int)lVar3 == 1) {
              if (cVar1 != '\0') goto LAB_82ffbfec;
              goto LAB_82ffbff8;
            }
            fn_82FFF2F0(param_1 + 0x90,*piVar7);
          }
          RtlLeaveCriticalSection(lVar5);
          break;
        }
LAB_82ffbfec:
        piVar2[5] = piVar2[5] + 1;
LAB_82ffbff8:
        RtlLeaveCriticalSection(lVar5);
        uVar4 = uVar4 + 1;
        iVar6 = iVar6 + 0xc;
        *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) + 1;
      } while (uVar4 < *(uint *)(param_3 + 0x24));
    }
    if (*(uint *)(param_3 + 0x24) == uVar4) {
      return 1;
    }
    if ((int)lVar3 == 1) {
      return lVar3;
    }
  }
  fn_82FFB818(param_1,param_3);
  return lVar3;
}

