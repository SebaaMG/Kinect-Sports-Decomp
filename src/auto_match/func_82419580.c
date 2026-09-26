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
extern int fn_82416D20();
extern int fn_82419810();
extern int fn_82422090();
extern int fn_82573D30();


void fn_82419580(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = *param_2;
  cVar4 = 'p';
  if (cVar6 == 'p') {
    cVar6 = 'p';
    pcVar3 = param_2;
    do {
      pcVar3 = pcVar3 + 1;
      if (cVar6 == '\0') goto code_r0x824195e8;
      cVar4 = pcVar3[(int)"position_players" - (int)param_2];
      cVar6 = *pcVar3;
    } while (cVar6 == cVar4);
  }
  if (cVar6 == cVar4) {
code_r0x824195e8:
    fn_82419810(param_1);
  }
  cVar6 = *param_2;
  cVar5 = 'p';
  cVar4 = cVar6;
  if (cVar6 == 'p') {
    cVar4 = 'p';
    pcVar3 = param_2;
    do {
      pcVar3 = pcVar3 + 1;
      if (cVar4 == '\0') goto code_r0x82419640;
      cVar5 = pcVar3[(int)"pinsetter_activate" - (int)param_2];
      cVar4 = *pcVar3;
    } while (cVar4 == cVar5);
  }
  if (cVar4 == cVar5) {
code_r0x82419640:
    fn_82422090(param_1 + 0x188,0);
  }
  else {
    cVar4 = 'b';
    if (cVar6 == 'b') {
      iVar2 = (int)"ball_activate" - (int)param_2;
      cVar6 = 'b';
      do {
        param_2 = param_2 + 1;
        if (cVar6 == '\0') goto code_r0x8241969c;
        cVar4 = param_2[iVar2];
        cVar6 = *param_2;
      } while (cVar6 == cVar4);
    }
    if (cVar6 == cVar4) {
code_r0x8241969c:
      iVar2 = *(int *)(param_1 + 0x34);
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0x28);
        *(undefined4 *)(iVar2 + 0x2c) = 0;
        *(int *)(iVar1 + 0x7d4) = *(int *)(iVar1 + 0x7d4) + 1;
        *(int *)(iVar1 + 0x7d8) = *(int *)(iVar1 + 0x7d8) + -1;
        fn_82573D30(*(undefined4 *)(iVar2 + 0x28));
        fn_82416D20(param_1 + 0x110,*(undefined4 *)(param_1 + 0x34));
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
    }
  }
  return;
}

