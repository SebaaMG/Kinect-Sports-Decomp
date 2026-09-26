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
extern int fn_825C2BB0();
extern unsigned int lbl_821922D0;
extern unsigned int lbl_82192480;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


undefined8 fn_8261C880(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  double dVar13;
  
  *(uint *)(param_1 + 0xb64) = (uint)*(byte *)(param_2 + 0x5c3);
  *(undefined4 *)(param_1 + 0xb68) = *(undefined4 *)(param_2 + 0x5c4);
  fVar4 = lbl_821CA460;
  dVar13 = (double)lbl_821CA460;
  *(uint *)(param_1 + 0xb70) = (uint)*(byte *)(param_2 + 0x5be);
  *(undefined4 *)(param_1 + 0xc4c) = 0;
  *(undefined4 *)(param_1 + 0xc58) = *(undefined4 *)(param_2 + 0x694);
  *(undefined4 *)(param_1 + 0xc00) = *(undefined4 *)(param_2 + 0x688);
  *(undefined4 *)(param_1 + 0xc04) = *(undefined4 *)(param_2 + 0x68c);
  *(undefined4 *)(param_1 + 0xc08) = *(undefined4 *)(param_2 + 0x690);
  *(undefined4 *)(param_1 + 0xc30) = *(undefined4 *)(param_2 + 0x67c);
  *(undefined4 *)(param_1 + 0xc34) = *(undefined4 *)(param_2 + 0x680);
  *(undefined4 *)(param_1 + 0xc38) = *(undefined4 *)(param_2 + 0x684);
  *(undefined4 *)(param_1 + 0xbbc) = *(undefined4 *)(param_2 + 0x5e8);
  *(float *)(param_1 + 0xbc8) = fVar4;
  *(uint *)(param_1 + 0xb74) = (uint)*(byte *)(param_2 + 0x5cc);
  bVar1 = *(byte *)(param_2 + 0x5cd);
  *(undefined4 *)(param_1 + 0xbd4) = *(undefined4 *)(param_1 + 0x7f0);
  *(uint *)(param_1 + 0xb78) = (uint)bVar1;
  *(undefined4 *)(param_1 + 0xb7c) = 0;
  *(undefined4 *)(param_1 + 0xbcc) = 0;
  *(uint *)(param_1 + 0xbd8) = (uint)*(byte *)(param_2 + 0x5cf);
  *(undefined4 *)(param_1 + 0xbdc) = *(undefined4 *)(param_2 + 0x66c);
  *(uint *)(param_1 + 0xbe4) = (uint)*(byte *)(param_2 + 0x670);
  *(undefined1 *)(param_1 + 0xbec) = *(undefined1 *)(param_2 + 0x671);
  *(undefined1 *)(param_1 + 0xbed) = *(undefined1 *)(param_2 + 0x672);
  *(uint *)(param_1 + 0xb80) = (uint)*(byte *)(param_2 + 0x5ce);
  *(undefined4 *)(param_1 + 0xbf0) = *(undefined4 *)(param_2 + 0x674);
  *(undefined4 *)(param_1 + 0xbf4) = *(undefined4 *)(param_2 + 0x678);
  iVar11 = *(int *)(param_2 + 0x5c8);
  if (iVar11 != 0) {
    if (*(int *)(param_1 + 0xb10) != 0) {
      *(int *)(*(int *)(param_1 + 0xb10) + 0x14) = iVar11;
    }
    *(int *)(param_1 + 0xb28) = iVar11;
  }
  piVar12 = (int *)(*(int *)(param_2 + 0x84) + 0xbbc);
  *(undefined4 *)(param_1 + 0xb88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb84) = 0xffffffff;
  if (*(int *)(param_1 + 0xb74) != 0) {
    pcVar7 = (char *)(param_2 + 0x5ec);
    pcVar9 = pcVar7;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    if ((int)pcVar9 - (int)pcVar7 == 1) {
      pcVar7 = "default_props";
    }
    uVar6 = fn_825C2BB0(piVar12,pcVar7);
    *(undefined4 *)(param_1 + 0xb88) = uVar6;
    piVar12 = (int *)*piVar12;
    iVar11 = 0;
    piVar10 = piVar12 + (piVar12[1] + 8) * *piVar12 * 2 + 5;
    piVar12 = piVar10 + piVar12[1] * 0x10;
    if (piVar10 < piVar12) {
      puVar8 = (undefined1 *)((int)piVar10 + (-0x62c - param_2));
      do {
        cVar2 = *(char *)piVar10;
        cVar3 = *(char *)(param_2 + 0x62c);
        pcVar9 = (char *)(param_2 + 0x62c);
        while (cVar3 == cVar2) {
          pcVar9 = pcVar9 + 1;
          if (cVar3 == '\0') goto LAB_8261ca70;
          cVar2 = pcVar9[(int)puVar8];
          cVar3 = *pcVar9;
        }
        if (cVar3 == cVar2) goto LAB_8261ca70;
        piVar10 = piVar10 + 0x10;
        puVar8 = puVar8 + 0x40;
        iVar11 = iVar11 + 1;
      } while (piVar10 < piVar12);
    }
    iVar11 = -1;
LAB_8261ca70:
    *(int *)(param_1 + 0xb84) = iVar11;
    *(undefined4 *)(param_1 + 0xbc0) = *(undefined4 *)(param_2 + 0x5e4);
    *(undefined1 *)(param_1 + 0xbe0) = 0;
    *(uint *)(param_1 + 0xb8c) = (uint)*(byte *)(param_2 + 0x5d0);
    *(uint *)(param_1 + 0xb98) = (uint)*(byte *)(param_2 + 0x5d0);
    *(undefined4 *)(param_1 + 0xb94) = 0;
    *(uint *)(param_1 + 0xb9c) = (uint)*(byte *)(param_2 + 0x5d1);
    *(undefined4 *)(param_1 + 0xba0) = *(undefined4 *)(param_2 + 0x5d4);
    *(uint *)(param_1 + 0xba4) = (uint)*(byte *)(param_2 + 0x5d2);
    *(undefined4 *)(param_1 + 0xba8) = *(undefined4 *)(param_2 + 0x5d8);
    *(uint *)(param_1 + 0xbac) = (uint)*(byte *)(param_2 + 0x5d3);
    *(undefined4 *)(param_1 + 0xbb0) = *(undefined4 *)(param_2 + 0x5dc);
    *(undefined4 *)(param_1 + 0xbb4) = *(undefined4 *)(param_2 + 0x5e0);
  }
  *(uint *)(param_1 + 0xc3c) = (uint)*(byte *)(param_2 + 0x69c);
  fVar5 = lbl_82192480;
  fVar4 = lbl_821922D0;
  *(undefined1 *)(param_1 + 0xc40) = *(undefined1 *)(param_2 + 0x69d);
  *(undefined1 *)(param_1 + 0xc41) = *(undefined1 *)(param_2 + 0x69e);
  *(undefined1 *)(param_1 + 0xc42) = *(undefined1 *)(param_2 + 0x69f);
  *(undefined1 *)(param_1 + 0xc43) = *(undefined1 *)(param_2 + 0x6a0);
  *(undefined1 *)(param_1 + 0xc44) = *(undefined1 *)(param_2 + 0x6a1);
  *(undefined4 *)(param_1 + 0xc48) = *(undefined4 *)(param_2 + 0x6a4);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  *(float *)(param_1 + 0xc5c) =
       (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar13) * fVar4 + fVar5;
  if (*(char *)(param_2 + 0x5bc) != '\0') {
    *(char *)(param_1 + 0x1cc) = *(char *)(param_1 + 0x1cc) + '\x01';
  }
  if (*(char *)(param_2 + 0x5bd) != '\0') {
    *(undefined1 *)(param_1 + 0x1cf) = 1;
  }
  return 1;
}

