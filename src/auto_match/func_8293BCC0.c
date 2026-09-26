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
extern int fn_828F5688();
extern int fn_829355C0();
extern int fn_829356D8();
extern int fn_82937AA8();
extern int fn_82939CE8();


ulonglong fn_8293BCC0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar4;
  char cVar5;
  ulonglong uVar3;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
switchD_8293bdbc_caseD_c:
  if ((*(int *)(param_1 + 0x7c) != 0) &&
     (iVar4 = fn_829356D8(*(undefined4 *)(param_1 + 4),param_1 + 0x10), iVar4 < 0)) {
    *(undefined4 *)(param_1 + 0x34) = 1;
    *(undefined4 *)(param_1 + 0x38) = 1;
    return 0xffffffffffffffff;
  }
  iVar4 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x7c) = 1;
  if (iVar4 != 0xc) {
    bVar1 = *(byte *)(param_1 + 8);
    if (bVar1 == 0) {
      if ((iVar4 == 9) && (cVar5 = fn_829355C0(*(undefined4 *)(param_1 + 0x18)), cVar5 != '\0')) {
        fn_828F5688(*(undefined4 *)(param_1 + 4),1);
        *(undefined1 *)(param_1 + 8) = 1;
      }
    }
    else if (bVar1 == 1) {
      if (((iVar4 != 1) || (*(char *)(param_1 + 0x19) != '\0')) ||
         (*(char *)(param_1 + 0x18) != '.')) goto LAB_8293bd24;
      *(undefined1 *)(param_1 + 8) = 2;
    }
    else if (bVar1 < 3) {
LAB_8293bd24:
      *(undefined1 *)(param_1 + 8) = 0;
      fn_828F5688(*(undefined4 *)(param_1 + 4),0);
    }
  }
  switch(*(undefined4 *)(param_1 + 0x10)) {
  default:
    return 0x118;
  case 1:
    if (*(char *)(param_1 + 0x19) != '\0') {
      return 0x118;
    }
    return (ulonglong)*(byte *)(param_1 + 0x18);
  case 2:
  case 3:
  case 4:
    return 0x116;
  case 5:
  case 6:
  case 7:
  case 8:
    return 0x117;
  case 9:
    pcVar8 = *(char **)(param_1 + 0x18);
    pcVar6 = "entrypoint";
    pcVar7 = pcVar8;
    break;
  case 0xc:
    goto switchD_8293bdbc_caseD_c;
  case 0xd:
    return 0xffffffffffffffff;
  }
  while( true ) {
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
    if (cVar5 != cVar2) break;
    cVar5 = *pcVar7;
    cVar2 = *pcVar6;
    if (cVar5 == '\0') break;
  }
  if (cVar5 == cVar2) {
    uVar3 = 0x101;
  }
  else {
    pcVar6 = "true";
    pcVar7 = pcVar8;
    do {
      cVar5 = *pcVar7;
      cVar2 = *pcVar6;
      if (cVar5 == '\0') break;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar5 == cVar2);
    if (cVar5 == cVar2) {
      uVar3 = 0x119;
    }
    else {
      pcVar6 = "false";
      pcVar7 = pcVar8;
      do {
        cVar5 = *pcVar7;
        cVar2 = *pcVar6;
        if (cVar5 == '\0') break;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar5 == cVar2);
      if (cVar5 == cVar2) {
        uVar3 = 0x11a;
      }
      else {
        pcVar6 = "serialize";
        pcVar7 = pcVar8;
        do {
          cVar5 = *pcVar7;
          cVar2 = *pcVar6;
          if (cVar5 == '\0') break;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar5 == cVar2);
        if (cVar5 == cVar2) {
          uVar3 = 0x11b;
        }
        else {
          pcVar7 = "defconst";
          do {
            cVar5 = *pcVar8;
            cVar2 = *pcVar7;
            if (cVar5 == '\0') break;
            pcVar8 = pcVar8 + 1;
            pcVar7 = pcVar7 + 1;
          } while (cVar5 == cVar2);
          if (cVar5 == cVar2) {
            uVar3 = fn_82939CE8();
          }
          else {
            uVar3 = fn_82937AA8(param_1,(undefined4 *)(param_1 + 0x10));
          }
        }
      }
    }
  }
  return uVar3;
}

