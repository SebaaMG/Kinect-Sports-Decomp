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
extern int fn_828F8968();
extern int fn_828FFAC8();


ulonglong fn_82900D80(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar4;
  ulonglong uVar3;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  
  puVar8 = (undefined4 *)(param_1 + 0x10);
code_r0x82900d9c:
  iVar4 = fn_828F8968(*(undefined4 *)(param_1 + 4),puVar8);
  if (iVar4 < 0) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
    *(undefined4 *)(param_1 + 0x50) = 1;
    return 0xffffffffffffffff;
  }
  switch(*puVar8) {
  default:
    return 0x110;
  case 1:
    if (*(char *)(param_1 + 0x19) != '\0') {
      return 0x110;
    }
    return (ulonglong)*(byte *)(param_1 + 0x18);
  case 2:
  case 3:
  case 4:
    return 0x10e;
  case 5:
  case 6:
  case 7:
  case 8:
    return 0x10f;
  case 9:
    pcVar7 = *(char **)(param_1 + 0x18);
    pcVar5 = "entrypoint";
    pcVar6 = pcVar7;
    break;
  case 0xc:
    goto code_r0x82900d9c;
  case 0xd:
    return 0xffffffffffffffff;
  }
  while( true ) {
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
    if (cVar1 != cVar2) break;
    cVar1 = *pcVar6;
    cVar2 = *pcVar5;
    if (cVar1 == '\0') break;
  }
  if (cVar1 == cVar2) {
    uVar3 = 0x101;
  }
  else {
    pcVar5 = "true";
    pcVar6 = pcVar7;
    do {
      cVar1 = *pcVar6;
      cVar2 = *pcVar5;
      if (cVar1 == '\0') break;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      uVar3 = 0x111;
    }
    else {
      pcVar6 = "false";
      do {
        cVar1 = *pcVar7;
        cVar2 = *pcVar6;
        if (cVar1 == '\0') break;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar3 = 0x112;
      }
      else if (*(int *)(param_1 + 0x38) == -1) {
        uVar3 = 0x10d;
      }
      else {
        uVar3 = fn_828FFAC8(param_1,puVar8);
      }
    }
  }
  return uVar3;
}

