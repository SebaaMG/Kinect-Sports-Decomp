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
extern unsigned int *auStack_6c;
extern int fn_82C1E828();
extern int fn_82C1E938();
extern int fn_82C1EAB8();


/* WARNING: Type propagation algorithm not settling */

ulonglong fn_82C229C0(int param_1,uint param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte abStack_70 [4];
  uint auStack_6c [27];
  
  piVar2 = *(int **)(param_1 + 0x1c);
  auStack_6c[3] = 0;
  auStack_6c[2] = 0;
  uVar8 = 0;
  abStack_70[0] = 0;
  uVar5 = (**(code **)(*piVar2 + 0xc))(*piVar2);
  if ((int)uVar5 < 0) {
LAB_82c22e0c:
    if ((uVar5 & 0xffffffff) == 0x80500001) {
      uVar8 = *(uint *)(piVar2[1] + 8);
      piVar2[0x14] = 5;
      *(ulonglong *)(piVar2 + 8) = (ulonglong)uVar8 + *(longlong *)(piVar2 + 6);
    }
  }
  else {
    piVar3 = (int *)piVar2[0xc];
    cVar1 = *(char *)((int)piVar3 + 0x11);
    if (cVar1 == '\x01') {
      auStack_6c[1] = 1;
      if (param_2 != 0) {
        uVar8 = 1;
        uVar5 = fn_82C1E828(param_1,abStack_70,auStack_6c + 3,auStack_6c + 2,auStack_6c + 1);
        if (-1 < (int)uVar5) {
          uVar6 = (uint)abStack_70[0];
          iVar7 = piVar3[3] + 1;
LAB_82c22b0c:
          piVar3[8] = uVar6;
LAB_82c22b10:
          piVar3[3] = iVar7;
          goto LAB_82c22b14;
        }
        goto LAB_82c22e0c;
      }
    }
    else if (cVar1 == '\x02') {
      auStack_6c[0] = auStack_6c[0] & 0xffff;
      auStack_6c[1] = 2;
      if (1 < param_2) {
        uVar8 = 2;
        uVar5 = fn_82C1E938(param_1,auStack_6c,auStack_6c + 3,auStack_6c + 2,auStack_6c + 1);
        if (-1 < (int)uVar5) {
          uVar6 = auStack_6c[0] >> 0x10;
          iVar7 = piVar3[3] + 2;
          goto LAB_82c22b0c;
        }
        goto LAB_82c22e0c;
      }
    }
    else if (cVar1 == '\x03') {
      auStack_6c[0] = 0;
      auStack_6c[1] = 4;
      if (3 < param_2) {
        uVar8 = 4;
        uVar5 = fn_82C1EAB8(param_1,auStack_6c,auStack_6c + 3,auStack_6c + 2,auStack_6c + 1);
        if ((int)uVar5 < 0) goto LAB_82c22e0c;
        iVar7 = piVar3[3] + 4;
        piVar3[8] = auStack_6c[0];
        goto LAB_82c22b10;
      }
    }
    else {
LAB_82c22b14:
      cVar1 = *(char *)((int)piVar3 + 0x13);
      piVar3[9] = piVar3[3];
      if (cVar1 == '\x01') {
        uVar8 = uVar8 + 1;
        auStack_6c[1] = 1;
        if (uVar8 <= param_2) {
          uVar5 = fn_82C1E828(param_1,abStack_70,auStack_6c + 3,auStack_6c + 2,auStack_6c + 1);
          if (-1 < (int)uVar5) {
            uVar6 = (uint)abStack_70[0];
            iVar7 = piVar3[3] + 1;
LAB_82c22c00:
            piVar3[10] = uVar6;
LAB_82c22c04:
            piVar3[3] = iVar7;
            goto LAB_82c22c08;
          }
          goto LAB_82c22e0c;
        }
      }
      else if (cVar1 == '\x02') {
        uVar8 = uVar8 + 2;
        auStack_6c[0] = auStack_6c[0] & 0xffff;
        auStack_6c[1] = 2;
        if (uVar8 <= param_2) {
          uVar5 = fn_82C1E938(param_1,auStack_6c,auStack_6c + 3,auStack_6c + 2,auStack_6c + 1);
          if (-1 < (int)uVar5) {
            uVar6 = auStack_6c[0] >> 0x10;
            iVar7 = piVar3[3] + 2;
            goto LAB_82c22c00;
          }
          goto LAB_82c22e0c;
        }
      }
      else if (cVar1 == '\x03') {
        uVar8 = uVar8 + 4;
        auStack_6c[0] = 0;
        auStack_6c[1] = 4;
        if (uVar8 <= param_2) {
          uVar5 = fn_82C1EAB8(param_1,auStack_6c,auStack_6c + 3,auStack_6c + 2,auStack_6c + 1);
          if ((int)uVar5 < 0) goto LAB_82c22e0c;
          iVar7 = piVar3[3] + 4;
          piVar3[10] = auStack_6c[0];
          goto LAB_82c22c04;
        }
      }
      else {
LAB_82c22c08:
        cVar1 = *(char *)((int)piVar3 + 0x12);
        piVar3[0xb] = piVar3[3];
        if (cVar1 == '\x01') {
          uVar8 = uVar8 + 1;
          auStack_6c[1] = 1;
          if (uVar8 <= param_2) {
            uVar5 = fn_82C1E828(param_1,abStack_70,auStack_6c + 3,auStack_6c + 2,auStack_6c + 1);
            if (-1 < (int)uVar5) {
              uVar6 = (uint)abStack_70[0];
              iVar7 = piVar3[3] + 1;
LAB_82c22cf4:
              piVar3[0xc] = uVar6;
LAB_82c22cf8:
              piVar3[3] = iVar7;
              goto LAB_82c22cfc;
            }
            goto LAB_82c22e0c;
          }
        }
        else if (cVar1 == '\x02') {
          uVar8 = uVar8 + 2;
          auStack_6c[0] = auStack_6c[0] & 0xffff;
          auStack_6c[1] = 2;
          if (uVar8 <= param_2) {
            uVar5 = fn_82C1E938(param_1,auStack_6c,auStack_6c + 3,auStack_6c + 2,auStack_6c + 1);
            if (-1 < (int)uVar5) {
              uVar6 = auStack_6c[0] >> 0x10;
              iVar7 = piVar3[3] + 2;
              goto LAB_82c22cf4;
            }
            goto LAB_82c22e0c;
          }
        }
        else if (cVar1 == '\x03') {
          uVar8 = uVar8 + 4;
          auStack_6c[0] = 0;
          auStack_6c[1] = 4;
          if (uVar8 <= param_2) {
            uVar5 = fn_82C1EAB8(param_1,auStack_6c,auStack_6c + 3,auStack_6c + 2,auStack_6c + 1);
            if ((int)uVar5 < 0) goto LAB_82c22e0c;
            iVar7 = piVar3[3] + 4;
            piVar3[0xc] = auStack_6c[0];
            goto LAB_82c22cf8;
          }
        }
        else {
LAB_82c22cfc:
          auStack_6c[1] = 6;
          if (uVar8 + 6 <= param_2) {
            uVar5 = fn_82C1EAB8(param_1,piVar3 + 0xd,auStack_6c + 3,auStack_6c + 2,auStack_6c + 1)
            ;
            if (-1 < (int)uVar5) {
              piVar3[3] = piVar3[3] + 4;
              uVar5 = fn_82C1E938(param_1,piVar3 + 0x10,auStack_6c + 3,auStack_6c + 2,
                                    auStack_6c + 1);
              if (-1 < (int)uVar5) {
                piVar3[3] = piVar3[3] + 2;
                if ((piVar3[1] == 0) || (*piVar3 == 0)) {
                  piVar3[0xe] = 0;
                  *(undefined1 *)((int)piVar3 + 0x1a) = 0;
                  *(undefined1 *)((int)piVar3 + 0x1b) = 0;
                  piVar3[0xf] = 1;
                  if (piVar3[2] == 0) goto LAB_82c22e0c;
                  auStack_6c[1] = 1;
                  if (uVar8 + 7 <= param_2) {
                    uVar5 = fn_82C1E828(param_1,abStack_70,auStack_6c + 3,auStack_6c + 2,
                                          auStack_6c + 1);
                    if ((int)uVar5 < 0) goto LAB_82c22e0c;
                    bVar4 = abStack_70[0] >> 6;
                    *(byte *)((int)piVar3 + 0x1a) = bVar4;
                    piVar3[0xe] = piVar3[3];
                    if ((bVar4 == 2) || (bVar4 == 1)) {
                      *(byte *)((int)piVar3 + 0x1b) = bVar4;
                      piVar3[0xf] = abStack_70[0] & 0x3f;
                      if ((abStack_70[0] & 0x3f) != 0) {
                        piVar3[3] = piVar3[3] + 1;
                        goto LAB_82c22e0c;
                      }
                    }
                  }
                }
                goto LAB_82c22a44;
              }
            }
            goto LAB_82c22e0c;
          }
        }
      }
    }
LAB_82c22a44:
    uVar5 = 0xffffffff80500017;
  }
  return uVar5;
}

