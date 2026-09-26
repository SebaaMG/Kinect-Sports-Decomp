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
extern int fn_82FB7748();


undefined8 fn_82FB2A30(undefined8 param_1,int param_2,int *param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  char cVar6;
  int iVar5;
  uint uVar7;
  int iVar8;
  
  uVar7 = 0;
  if (param_4 != 0) {
    iVar8 = 0;
    do {
      piVar3 = (int *)*param_3;
      *param_3 = (int)(piVar3 + 6);
      piVar4 = *(int **)(*(int *)(param_2 + 0x10) + iVar8);
      if (*piVar3 == 0) {
        cVar6 = (**(code **)(*piVar4 + 4))(piVar4);
        if (cVar6 != '\0') {
          return 1;
        }
        if (*(short *)(piVar4 + 10) != *(short *)(piVar3 + 5)) {
          return 1;
        }
        if ((uint)*(ushort *)(piVar4 + 3) != (int)*(short *)(piVar3 + 4)) {
          return 1;
        }
        if (*(short *)((int)piVar4 + 0xe) != *(short *)((int)piVar3 + 0x12)) {
          return 1;
        }
        if (piVar4[7] != piVar3[3]) {
          return 1;
        }
        iVar5 = fn_82FB7748(piVar4);
        bVar2 = *(byte *)((int)piVar3 + 0x17);
        if (iVar5 != (uint)bVar2 + (-(uint)(bVar2 == 0) - (bVar2 - 1))) {
          return 1;
        }
        if (piVar4[2] != piVar3[1]) {
          return 1;
        }
        if (piVar4[5] - piVar4[4] >> 2 != piVar3[2]) {
          return 1;
        }
        if (piVar3[2] == 0) {
          return 0;
        }
        cVar6 = ((int (*)())fn_82FB2A30)(param_1,piVar4,param_3);
        bVar1 = cVar6 == '\0';
      }
      else {
        cVar6 = (**(code **)(*piVar4 + 4))(piVar4);
        if (cVar6 == '\0') {
          return 1;
        }
        if ((uint)*(ushort *)(piVar4 + 3) != (int)*(short *)(piVar3 + 4)) {
          return 1;
        }
        if (*(short *)((int)piVar4 + 0xe) != *(short *)((int)piVar3 + 0x12)) {
          return 1;
        }
        if (piVar4[4] != *piVar3) {
          return 1;
        }
        bVar1 = piVar4[2] == piVar3[1];
      }
      if (!bVar1) {
        return 1;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar7 < param_4);
  }
  return 0;
}

