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
extern int fn_822DD518();


undefined4 * fn_822DCD18(undefined4 *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  
  uVar7 = (int)param_3 - (int)param_2;
  pcVar8 = param_3 + -1;
  pcVar4 = param_2 + ((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0);
  pcVar3 = param_2;
  if (0x28 < (int)pcVar8 - (int)param_2) {
    uVar7 = ((int)pcVar8 - (int)param_2) + 1;
    uVar7 = ((int)uVar7 >> 3) + (uint)((int)uVar7 < 0 && (uVar7 & 7) != 0);
    fn_822DD518(param_2,param_2 + uVar7,param_2 + uVar7 * 2);
    fn_822DD518((int)pcVar4 - uVar7,pcVar4,pcVar4 + uVar7);
    fn_822DD518(pcVar8 + (uVar7 & 0x7fffffff) * -2,pcVar8 + -uVar7,pcVar8);
    pcVar3 = param_2 + uVar7;
    pcVar8 = pcVar8 + -uVar7;
  }
  fn_822DD518(pcVar3,pcVar4,pcVar8);
  pcVar3 = pcVar4 + 1;
  while (pcVar8 = pcVar4, param_2 < pcVar8) {
    if ((pcVar8[-1] < *pcVar8) || (pcVar4 = pcVar8 + -1, *pcVar8 < pcVar8[-1])) break;
  }
  pcVar5 = pcVar8;
  pcVar4 = pcVar3;
  if (pcVar3 < param_3) {
    do {
      pcVar4 = pcVar3;
      if ((*pcVar3 < *pcVar8) || (*pcVar8 < *pcVar3)) break;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar3;
    } while (pcVar3 < param_3);
  }
LAB_822dce5c:
  do {
    pcVar6 = pcVar5;
    if (pcVar3 < param_3) {
      cVar2 = *pcVar3;
      if (cVar2 <= *pcVar8) {
        if (cVar2 < *pcVar8) goto joined_r0x822dce68;
        cVar1 = *pcVar4;
        *pcVar4 = cVar2;
        *pcVar3 = cVar1;
        goto LAB_822dce54;
      }
    }
    else {
joined_r0x822dce68:
      while (pcVar5 = pcVar6, param_2 < pcVar5) {
        pcVar6 = pcVar5 + -1;
        if (*pcVar8 <= pcVar5[-1]) {
          if (*pcVar8 < pcVar5[-1]) break;
          pcVar8 = pcVar8 + -1;
          cVar2 = *pcVar8;
          *pcVar8 = *pcVar6;
          *pcVar6 = cVar2;
        }
      }
      if (pcVar5 == param_2) {
        if (pcVar3 == param_3) {
          *param_1 = pcVar8;
          param_1[1] = pcVar4;
          return param_1;
        }
        if (pcVar4 != pcVar3) {
          cVar2 = *pcVar8;
          *pcVar8 = *pcVar4;
          *pcVar4 = cVar2;
        }
        cVar2 = *pcVar8;
        *pcVar8 = *pcVar3;
        *pcVar3 = cVar2;
        pcVar8 = pcVar8 + 1;
LAB_822dce54:
        pcVar4 = pcVar4 + 1;
      }
      else {
        pcVar5 = pcVar5 + -1;
        if (pcVar3 == param_3) {
          pcVar8 = pcVar8 + -1;
          if (pcVar5 != pcVar8) {
            cVar2 = *pcVar5;
            *pcVar5 = *pcVar8;
            *pcVar8 = cVar2;
          }
          pcVar4 = pcVar4 + -1;
          cVar2 = *pcVar8;
          *pcVar8 = *pcVar4;
          *pcVar4 = cVar2;
          goto LAB_822dce5c;
        }
        cVar2 = *pcVar3;
        *pcVar3 = *pcVar5;
        *pcVar5 = cVar2;
      }
    }
    pcVar3 = pcVar3 + 1;
  } while( true );
}

