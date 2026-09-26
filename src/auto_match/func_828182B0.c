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
extern int fn_828183C0();
extern int fn_82F6DDE0();


/* WARNING: Removing unreachable block (ram,0x82817fd8) */
/* WARNING: Removing unreachable block (ram,0x82817fe8) */
/* WARNING: Removing unreachable block (ram,0x8281805c) */

longlong fn_828182B0(int *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  int aiStack_40 [16];
  
  lVar7 = 0;
  if ((param_1 != (int *)0x0) && (param_2 != (char *)0x0)) {
    iVar3 = param_1[3];
    aiStack_40[0] = fn_828183C0(param_2);
    aiStack_40[1] = 0;
    piVar4 = (int *)fn_82F6DDE0(aiStack_40,iVar3,*param_1,0xc,0xffffffff82817ae0);
    if (piVar4 != (int *)0x0) {
      do {
        if ((int *)(*param_1 * 0xc + iVar3) <= piVar4) {
          return lVar7;
        }
        if (*piVar4 != aiStack_40[0]) {
          return lVar7;
        }
        pcVar6 = *(char **)piVar4[2];
        pcVar5 = param_2;
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          lVar7 = lVar7 + 1;
        }
        piVar4 = piVar4 + 3;
      } while (piVar4 != (int *)0x0);
    }
  }
  return lVar7;
}

