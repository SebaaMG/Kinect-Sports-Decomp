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
extern int fn_82FB7858();
extern int fn_82FB7980();
extern int fn_82FB8558();
extern int fn_8300CC80();


short fn_82FB8808(undefined8 param_1,int *param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar5;
  uint uVar6;
  char cVar7;
  ulonglong uVar4;
  int *piVar8;
  ushort *puVar9;
  int *piVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  bool bVar14;
  
  sVar12 = 0;
  *param_3 = 0;
  if ((*(int *)(*param_2 + 0x1c) == 1) || (*(int *)(*param_2 + 0x1c) == 3)) {
    iVar5 = fn_82FB7980();
  }
  else {
    iVar5 = param_2[2];
  }
  if (iVar5 == 0) {
    sVar12 = 0;
  }
  else {
    iVar2 = *param_2;
    iVar11 = -1;
    piVar10 = (int *)(iVar2 + 0x10);
    if (*(short *)(iVar5 + 0x16) == 0) {
      piVar8 = param_2 + 1;
      bVar14 = false;
      if (piVar8 == (int *)0x0) {
        bVar14 = true;
      }
      else if ((*(byte *)((int)param_2 + 6) & 0x80) != 0) {
        if ((*(byte *)((int)param_2 + 6) & 0x40) == 0) {
          bVar14 = (short)(*(short *)piVar8 + -1) != 0;
          *(short *)piVar8 = *(short *)piVar8 + -1;
        }
        else {
          bVar14 = true;
        }
      }
      if (!bVar14) {
        *param_3 = 1;
        return 0;
      }
      *(short *)(iVar5 + 0x16) = (short)(*(int *)(iVar2 + 0x14) - *piVar10 >> 2);
      fn_8300CC80(iVar5,*(int *)(iVar2 + 0x14) - *piVar10 >> 2);
      if (*(char *)(iVar2 + 0x25) != '\0') {
        puVar9 = *(ushort **)(iVar5 + 0x18);
        *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar5 + 0xc);
        if (puVar9 != *(ushort **)(iVar5 + 0x1c)) {
          do {
            uVar1 = *puVar9;
            puVar9 = puVar9 + 1;
            *(uint *)(iVar5 + 0x10) =
                 *(int *)(iVar5 + 0x10) -
                 (uint)*(ushort *)(*(int *)((uint)uVar1 * 4 + *piVar10) + 0xe);
          } while (puVar9 != *(ushort **)(iVar5 + 0x1c));
        }
      }
      *(short *)(iVar5 + 0x14) =
           *(short *)(iVar5 + 0x14) - (short)(*(int *)(iVar5 + 0x1c) - *(int *)(iVar5 + 0x18) >> 1);
    }
    if (*(char *)(iVar2 + 0x24) == '\0') {
      uVar4 = fn_82F65350();
      uVar1 = *(ushort *)(iVar5 + 0x14);
      trapWord(6,(ulonglong)uVar1,0);
      trapWord(5,(ulonglong)uVar1 &
                 ~(((uVar4 & 0x7fffffff) << 1 | (uVar4 & 0xffffffff) >> 0x1f) - 1),0xffff);
      do {
        cVar7 = fn_82FB7858(param_1,iVar2,iVar5,sVar12);
        if (cVar7 != '\0') {
          iVar11 = iVar11 + 1;
        }
        sVar12 = sVar12 + 1;
      } while (iVar11 < (int)((int)uVar4 - ((int)uVar4 / (int)(uint)uVar1) * (uint)uVar1 & 0xffff));
    }
    else {
      uVar6 = fn_82F65350();
      uVar3 = *(uint *)(iVar5 + 0x10);
      trapWord(6,(ulonglong)uVar3,0);
      iVar13 = 0;
      do {
        cVar7 = fn_82FB7858(param_1,iVar2,iVar5,sVar12);
        if (cVar7 != '\0') {
          iVar11 = (uint)*(ushort *)(*(int *)(iVar13 + *piVar10) + 0xe) + iVar11;
        }
        sVar12 = sVar12 + 1;
        iVar13 = iVar13 + 4;
      } while (iVar11 < (int)(uVar6 - (uVar6 / uVar3) * uVar3 & 0xffff));
    }
    sVar12 = sVar12 + -1;
    fn_82FB8558(param_1,iVar2,sVar12,piVar10,iVar5);
  }
  return sVar12;
}

