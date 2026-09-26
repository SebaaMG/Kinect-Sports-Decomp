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
extern unsigned int lbl_821922D0;
extern unsigned int lbl_82192480;
extern unsigned int lbl_821CA460;


void fn_823DDC10(char *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  longlong lVar11;
  
  bVar6 = false;
  bVar5 = false;
  uVar10 = 0;
  lVar11 = 10;
  pcVar3 = param_1;
  do {
    if (*(int *)(pcVar3 + 0x10) != 0) {
      bVar1 = pcVar3[0x14] != '\0';
      if (param_2 == 0) {
        if (!bVar1) goto LAB_823ddc60;
      }
      else if (bVar1) {
LAB_823ddc60:
        if ((*(uint *)(param_1 + 0x278) & 1 << (uVar10 & 0x3f)) == 0) {
          bVar5 = true;
        }
      }
    }
    uVar10 = uVar10 + 1;
    lVar11 = lVar11 + -1;
    pcVar3 = pcVar3 + 0x14;
  } while (lVar11 != 0);
  fVar7 = lbl_821CA460;
  fVar8 = lbl_82192480;
  fVar9 = lbl_821922D0;
  if (!bVar5) {
    param_1[0x278] = '\0';
    param_1[0x279] = '\0';
    param_1[0x27a] = '\0';
    param_1[0x27b] = '\0';
    fVar7 = lbl_821CA460;
    fVar8 = lbl_82192480;
    fVar9 = lbl_821922D0;
  }
  do {
    uVar10 = *(int *)(param_1 + 0x29c) * 0x19660d + 0x3c6ef35f;
    *(uint *)(param_1 + 0x29c) = uVar10;
    fVar4 = (float)(uVar10 & 0x7fffff | 0x3f800000) - fVar7;
    if (param_2 == 0) {
      uVar10 = (uint)(fVar4 * fVar9);
    }
    else {
      uVar10 = (int)(fVar4 * fVar8) << 1;
    }
    uVar2 = 1 << (uVar10 & 0x3f);
    if (((uVar2 & *(uint *)(param_1 + 0x278)) == 0) &&
       (*(int *)(param_1 + uVar10 * 0x14 + 0x10) != 0)) {
      if (param_2 == 0) {
        if (param_1[uVar10 * 0x14 + 0x14] == '\0') goto LAB_823ddd4c;
      }
      else if (param_1[uVar10 * 0x14 + 0x14] != '\0') {
LAB_823ddd4c:
        bVar6 = true;
      }
    }
    if (bVar6) {
      if (param_2 != 0) {
        uVar2 = 3 << (uVar10 & 0x3f);
      }
      *(uint *)(param_1 + 0x278) = uVar2 | *(uint *)(param_1 + 0x278);
      return;
    }
  } while( true );
}

