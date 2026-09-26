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
extern unsigned int *auStack_5c;
extern int fn_828F5778();
extern int fn_828F8F18();
extern int fn_828FA8D8();
extern int fn_828FBB60();
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_60;


ulonglong fn_828F5DD0(int param_1)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 uStack_60;
  uint auStack_5c [3];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(int *)(param_1 + 0x4c) != 0) || (*(int *)(param_1 + 0x54) != 0)) {
    *(undefined4 *)(param_1 + 0x280) = 0xc;
    return 0xffffffffffffffff;
  }
  iVar4 = *(int *)(param_1 + 0x70);
  piVar9 = (int *)(param_1 + 0x280);
  if (iVar4 == 0) {
    iVar4 = fn_828FBB60(*(undefined4 *)(param_1 + 0x278),*(uint *)(param_1 + 0x2a0) | 4,piVar9
                             );
    if (iVar4 < 0) {
      return 0xffffffffffffffff;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(iVar4 + 0x10);
    *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(iVar4 + 0x18);
    *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(iVar4 + 0x20);
    *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(iVar4 + 0x28);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar4 + 0xc);
    *(undefined4 *)(iVar4 + 0xc) = 0;
  }
  iVar4 = *piVar9;
  if (iVar4 == 1) {
    cVar1 = *(char *)(param_1 + 0x289);
    if (cVar1 == '\0') {
      return (longlong)*(char *)(param_1 + 0x288);
    }
    if (*(char *)(param_1 + 0x28a) == '\0') {
      if (cVar1 == '=') {
        cVar1 = *(char *)(param_1 + 0x288);
        if (cVar1 == '!') {
          return 0x113;
        }
        if (cVar1 == '<') {
          return 0x110;
        }
        if (cVar1 == '=') {
          return 0x112;
        }
        if (cVar1 == '>') {
          return 0x111;
        }
      }
      else {
        cVar2 = *(char *)(param_1 + 0x288);
        if (cVar2 == cVar1) {
          if (cVar2 == '&') {
            return 0x114;
          }
          if (cVar2 == '|') {
            return 0x115;
          }
        }
      }
    }
    return 0x119;
  }
  if (iVar4 < 2) {
    return 0x119;
  }
  if (iVar4 < 5) {
    return 0x117;
  }
  if (iVar4 != 9) {
    if (iVar4 == 10) {
      return 0x118;
    }
    if ((iVar4 != 0xc) && (iVar4 != 0xd)) {
      return 0x119;
    }
    *(undefined4 *)(param_1 + 0x4c) = 1;
    return 0xffffffffffffffff;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    pcVar7 = *(char **)(param_1 + 0x288);
    cVar1 = *pcVar7;
    if (*(int *)(param_1 + 0x5c) == 0) {
      if (cVar1 != 'e') {
        if (cVar1 == 'i') {
          pcVar5 = "if";
          pcVar6 = pcVar7;
          do {
            cVar1 = *pcVar6;
            cVar2 = *pcVar5;
            if (cVar1 == '\0') break;
            pcVar6 = pcVar6 + 1;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            return 0x10c;
          }
          pcVar5 = "ifdef";
          pcVar6 = pcVar7;
          do {
            cVar1 = *pcVar6;
            cVar2 = *pcVar5;
            if (cVar1 == '\0') break;
            pcVar6 = pcVar6 + 1;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            return 0x10c;
          }
          pcVar6 = "ifndef";
          do {
            cVar1 = *pcVar7;
            cVar2 = *pcVar6;
            if (cVar1 == '\0') break;
            pcVar7 = pcVar7 + 1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            return 0x10c;
          }
        }
LAB_828f62ac:
        *(undefined4 *)(param_1 + 0x58) = 1;
        return 0x116;
      }
      pcVar5 = "else";
      pcVar6 = pcVar7;
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        return 0x10a;
      }
      pcVar5 = "endif";
      pcVar6 = pcVar7;
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        return 0x10b;
      }
      pcVar6 = "elif";
      do {
        cVar1 = *pcVar7;
        cVar2 = *pcVar6;
        if (cVar1 == '\0') break;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 != cVar2) goto LAB_828f62ac;
      piVar9 = *(int **)(*(int *)(param_1 + 0x274) + 0x38);
      if (piVar9 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x5c) = 1;
      }
      else {
        if ((piVar9[1] == 0) || (*piVar9 != 0)) {
          return 0x10d;
        }
        *(int *)(param_1 + 0x5c) = piVar9[1];
      }
    }
    else {
      if (cVar1 == 'd') {
        pcVar6 = "define";
        do {
          cVar1 = *pcVar7;
          cVar2 = *pcVar6;
          if (cVar1 == '\0') break;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          return 0x101;
        }
        goto LAB_828f62ac;
      }
      if (cVar1 != 'e') {
        if (cVar1 != 'i') {
          if (cVar1 == 'l') {
            pcVar6 = "line";
            do {
              cVar1 = *pcVar7;
              cVar2 = *pcVar6;
              if (cVar1 == '\0') break;
              pcVar7 = pcVar7 + 1;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 == cVar2) {
              return 0x103;
            }
          }
          else if (cVar1 == 'p') {
            pcVar6 = "pragma";
            do {
              cVar1 = *pcVar7;
              cVar2 = *pcVar6;
              if (cVar1 == '\0') break;
              pcVar7 = pcVar7 + 1;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 == cVar2) {
              return 0x10e;
            }
          }
          else if (cVar1 == 'u') {
            pcVar6 = "undef";
            do {
              cVar1 = *pcVar7;
              cVar2 = *pcVar6;
              if (cVar1 == '\0') break;
              pcVar7 = pcVar7 + 1;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 == cVar2) {
              return 0x102;
            }
          }
          goto LAB_828f62ac;
        }
        pcVar5 = "if";
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 != cVar2) {
          pcVar5 = "ifdef";
          pcVar6 = pcVar7;
          do {
            cVar1 = *pcVar6;
            cVar2 = *pcVar5;
            if (cVar1 == '\0') break;
            pcVar6 = pcVar6 + 1;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            return 0x107;
          }
          pcVar5 = "ifndef";
          pcVar6 = pcVar7;
          do {
            cVar1 = *pcVar6;
            cVar2 = *pcVar5;
            if (cVar1 == '\0') break;
            pcVar6 = pcVar6 + 1;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            return 0x108;
          }
          pcVar6 = "include";
          do {
            cVar1 = *pcVar7;
            cVar2 = *pcVar6;
            if (cVar1 == '\0') break;
            pcVar7 = pcVar7 + 1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            return 0x104;
          }
          goto LAB_828f62ac;
        }
        uVar3 = 0x106;
        goto LAB_828f60f0;
      }
      pcVar5 = "elif";
      pcVar6 = pcVar7;
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 != cVar2) {
        pcVar5 = "else";
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          return 0x10a;
        }
        pcVar5 = "endif";
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          return 0x10b;
        }
        pcVar6 = "error";
        do {
          cVar1 = *pcVar7;
          cVar2 = *pcVar6;
          if (cVar1 == '\0') break;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          return 0x105;
        }
        goto LAB_828f62ac;
      }
    }
    uVar3 = 0x109;
LAB_828f60f0:
    *(undefined4 *)(param_1 + 100) = 1;
    return uVar3;
  }
  pcVar6 = "defined";
  pcVar7 = *(char **)(param_1 + 0x288);
  do {
    cVar1 = *pcVar7;
    cVar2 = *pcVar6;
    if (cVar1 == '\0') break;
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    *(undefined4 *)(param_1 + 100) = 0;
    return 0x10f;
  }
  if (*(int *)(param_1 + 100) == 0) {
    return 0x116;
  }
  iVar4 = fn_828F5778(param_1,*(char **)(param_1 + 0x288),auStack_5c,&uStack_60);
  if (iVar4 == 0) {
    return 0x116;
  }
  uStack_48 = *(undefined8 *)(param_1 + 0x288);
  uStack_40 = *(undefined8 *)(param_1 + 0x290);
  uStack_38 = *(undefined8 *)(param_1 + 0x298);
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar4 = fn_828F8F18(param_1,&uStack_50,auStack_5c[0],uStack_60);
    iVar8 = 0;
    if (iVar4 != 1) goto LAB_828f645c;
  }
  else {
LAB_828f645c:
    iVar8 = 1;
  }
  *(int *)(param_1 + 0x50) = iVar8;
  if (iVar8 == 0) {
    uVar3 = fn_828F5DD0(param_1);
    if ((int)uVar3 != -1) {
      iVar4 = 0;
      goto LAB_828f648c;
    }
  }
  else {
    uVar3 = (ulonglong)auStack_5c[0];
  }
  iVar4 = 1;
LAB_828f648c:
  *(int *)(param_1 + 0x50) = iVar4;
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x54) = 1;
    *(undefined8 *)piVar9 = uStack_50;
    *(undefined8 *)(param_1 + 0x288) = uStack_48;
    *(undefined8 *)(param_1 + 0x290) = uStack_40;
    *(undefined8 *)(param_1 + 0x298) = uStack_38;
    fn_828FA8D8(param_1 + 0x18,piVar9,0x5ee,0xffffffff82029330);
    return 0x116;
  }
  return uVar3;
}

