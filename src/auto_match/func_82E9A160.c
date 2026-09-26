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
extern int fn_82F65350();
extern int fn_82F68CC0();


undefined8 fn_82E9A160(int param_1,undefined1 *param_2,char *param_3,byte param_4,int *param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  
  *param_5 = 0;
  if ((((*(int *)(param_1 + 0x214) == 0) || (*(int *)(param_1 + 0x44) != 0)) ||
      ((uVar2 = (uint)param_4, uVar2 == 0x1c && (*(int *)(param_1 + 0x40) != 3)))) ||
     (uVar3 = fn_82F65350(), (uVar3 & 1) != 0)) {
LAB_82e9a298:
    uVar4 = 0;
  }
  else {
    if (uVar2 - 0x1b < 5) {
      if (uVar2 == 0x1b) {
        iVar6 = 4;
      }
      else if (uVar2 == 0x1c) {
        iVar6 = 3;
      }
      else if (uVar2 == 0x1d) {
        iVar6 = 2;
      }
      else if (uVar2 == 0x1e) {
        iVar6 = 1;
      }
      else {
        iVar6 = 0;
      }
      pcVar5 = (char *)(iVar6 * 100 + -0x7ce76f68);
      pcVar7 = pcVar5;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + (-1 - (int)pcVar5);
      *param_5 = (int)pcVar7;
      if ((char *)0x62 < pcVar7) {
        pcVar7 = (char *)0x63;
      }
      *param_5 = (int)pcVar7;
      if (pcVar7 + 5 <= param_3) {
        param_2[3] = param_4;
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 1;
        fn_82F68CC0(param_2 + 4,pcVar5,*param_5);
        param_2[*param_5 + 4] = 0x80;
        *param_5 = *param_5 + 5;
        goto LAB_82e9a298;
      }
    }
    uVar4 = 0xffffffffffffff9c;
  }
  return uVar4;
}

