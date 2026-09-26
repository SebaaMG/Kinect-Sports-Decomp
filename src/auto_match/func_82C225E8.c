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
extern unsigned int *auStack_44;
extern int fn_82C1E828();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


ulonglong fn_82C225E8(int param_1,uint param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  byte abStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 auStack_44 [17];
  
  piVar2 = *(int **)(param_1 + 0x1c);
  auStack_44[0] = 0;
  uStack_48 = 0;
  abStack_50[0] = 0;
  uVar6 = (**(code **)(*piVar2 + 0xc))(*piVar2);
  if ((int)uVar6 < 0) {
LAB_82c22988:
    if ((uVar6 & 0xffffffff) == 0x80500001) {
      uVar4 = *(uint *)(piVar2[1] + 8);
      piVar2[0x14] = 5;
      *(ulonglong *)(piVar2 + 8) = (ulonglong)uVar4 + *(longlong *)(piVar2 + 6);
    }
  }
  else {
    piVar3 = (int *)piVar2[0xc];
    uStack_4c = 1;
    piVar3[0x11] = 0;
    piVar3[0x12] = 0;
    if (param_2 == 0) goto LAB_82c22800;
    iVar10 = 1;
    uVar6 = fn_82C1E828(param_1,abStack_50,auStack_44,&uStack_48,&uStack_4c);
    if ((int)uVar6 < 0) goto LAB_82c22988;
    uVar6 = (ulonglong)abStack_50[0];
    *piVar3 = 0;
    piVar3[3] = 0;
    *(undefined1 *)(piVar3 + 4) = 0;
    piVar3[1] = (uint)(abStack_50[0] >> 7);
    if (abStack_50[0] >> 7 == 0) {
LAB_82c22740:
      uVar8 = uVar6 >> 5 & 3;
      *(char *)((int)piVar3 + 0x11) = (char)uVar8;
      piVar3[5] = piVar3[3];
      if (((uVar8 == 0) || (uVar8 == 2)) &&
         (uVar8 = uVar6 >> 3 & 3, *(char *)((int)piVar3 + 0x12) = (char)uVar8, uVar8 != 3)) {
        uStack_4c = 1;
        *(byte *)((int)piVar3 + 0x13) = (byte)(uVar6 >> 1) & 3;
        piVar3[2] = (uint)uVar6 & 1;
        piVar3[3] = piVar3[3] + 1;
        if (iVar10 + 1U <= param_2) {
          uVar6 = fn_82C1E828(param_1,abStack_50,auStack_44,&uStack_48,&uStack_4c);
          if ((int)uVar6 < 0) goto LAB_82c22988;
          *(undefined1 *)(piVar3 + 6) = 4;
          *(undefined1 *)((int)piVar3 + 0x19) = 3;
          if (abStack_50[0] != 0x5d) {
            if (((abStack_50[0] & 0xc0) == 0x40) && ((abStack_50[0] & 0x30) == 0x10)) {
              bVar5 = abStack_50[0] >> 2 & 3;
              *(byte *)((int)piVar3 + 0x19) = bVar5;
              if (bVar5 != 0) {
                if (bVar5 < 3) {
                  *(byte *)(piVar3 + 6) = bVar5;
                }
                if ((abStack_50[0] & 3) == 1) goto LAB_82c22828;
              }
            }
            goto LAB_82c22800;
          }
LAB_82c22828:
          iVar10 = piVar3[0x12];
          cVar1 = *(char *)((int)piVar3 + 0x11);
          iVar7 = piVar3[3] + 1;
          piVar3[3] = iVar7;
          piVar3[7] = iVar7;
          piVar3[0x12] = iVar10 + 3;
          if (cVar1 == '\x01') {
            iVar9 = piVar3[0x11] + 1;
LAB_82c22880:
            piVar3[0x11] = iVar9;
          }
          else {
            if (cVar1 == '\x02') {
              iVar9 = piVar3[0x11] + 2;
              goto LAB_82c22880;
            }
            if (cVar1 == '\x03') {
              iVar9 = piVar3[0x11] + 4;
              goto LAB_82c22880;
            }
          }
          cVar1 = *(char *)((int)piVar3 + 0x13);
          piVar3[9] = iVar7;
          if (cVar1 == '\x01') {
            iVar9 = piVar3[0x11] + 1;
LAB_82c228c4:
            piVar3[0x11] = iVar9;
          }
          else {
            if (cVar1 == '\x02') {
              iVar9 = piVar3[0x11] + 2;
              goto LAB_82c228c4;
            }
            if (cVar1 == '\x03') {
              iVar9 = piVar3[0x11] + 4;
              goto LAB_82c228c4;
            }
          }
          cVar1 = *(char *)((int)piVar3 + 0x12);
          piVar3[0xb] = iVar7;
          if (cVar1 == '\x01') {
            iVar7 = piVar3[0x11] + 1;
LAB_82c22908:
            piVar3[0x11] = iVar7;
          }
          else {
            if (cVar1 == '\x02') {
              iVar7 = piVar3[0x11] + 2;
              goto LAB_82c22908;
            }
            if (cVar1 == '\x03') {
              iVar7 = piVar3[0x11] + 4;
              goto LAB_82c22908;
            }
          }
          cVar1 = *(char *)((int)piVar3 + 0x19);
          if (cVar1 == '\x01') {
            iVar10 = iVar10 + 4;
LAB_82c2293c:
            piVar3[0x12] = iVar10;
          }
          else {
            if (cVar1 == '\x02') {
              iVar10 = iVar10 + 5;
              goto LAB_82c2293c;
            }
            if (cVar1 == '\x03') {
              iVar10 = iVar10 + 7;
              goto LAB_82c2293c;
            }
          }
          iVar10 = piVar3[0x11];
          piVar3[0x11] = iVar10 + 6;
          if ((piVar3[1] == 0) || (*piVar3 == 0)) {
            piVar3[0xe] = 0;
            *(undefined1 *)((int)piVar3 + 0x1a) = 0;
            *(undefined1 *)((int)piVar3 + 0x1b) = 0;
            piVar3[0xf] = 1;
            if (piVar3[2] != 0) {
              piVar3[0x11] = iVar10 + 7;
            }
            goto LAB_82c22988;
          }
        }
      }
    }
    else {
      if ((abStack_50[0] & 0x10) != 0) {
        *piVar3 = 1;
        return 0;
      }
      if (((abStack_50[0] & 0x60) == 0) &&
         (*(char *)(piVar3 + 4) = (char)(uVar6 & 0xf), (uVar6 & 0xf) == 2)) {
        uVar6 = (**(code **)(*piVar2 + 0x14))(*piVar2,2);
        if (-1 < (int)uVar6) {
          uStack_4c = 1;
          iVar10 = 4;
          *(longlong *)(piVar2 + 2) = *(longlong *)(piVar2 + 2) + 2;
          piVar3[3] = *(byte *)(piVar3 + 4) + 1;
          if (param_2 < 4) goto LAB_82c22800;
          uVar6 = fn_82C1E828(param_1,abStack_50,auStack_44,&uStack_48,&uStack_4c);
          if (-1 < (int)uVar6) {
            uVar6 = (ulonglong)abStack_50[0];
            goto LAB_82c22740;
          }
        }
        goto LAB_82c22988;
      }
    }
LAB_82c22800:
    uVar6 = 0xffffffff80500017;
  }
  return uVar6;
}

