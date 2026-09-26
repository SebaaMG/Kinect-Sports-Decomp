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
extern unsigned int *auStack_60;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_8268CC00();
extern int fn_8268D008();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int iStack_74;
extern unsigned int iStack_78;
extern unsigned int iStack_7c;
extern unsigned int iStack_80;


undefined8 fn_82717BD0(int *param_1,float *param_2,ulonglong param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar4;
  float *pfVar3;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined1 auStack_60 [96];
  
  if ((((uint)param_1[0x23] >> 0xb & 1) == 0) &&
     (((param_3 & 2) == 0 || (cVar4 = (**(code **)(*param_1 + 8))(), cVar4 != '\0')))) {
    if ((*(byte *)((int)param_1 + 0x66) & 1) == 0) {
      fn_8268CC00(auStack_60);
      pfVar3 = (float *)(**(code **)(*param_1 + 0x28))(auStack_90,param_1,auStack_60);
      if ((((pfVar3[2] < *param_2) || (*param_2 < *pfVar3)) || (pfVar3[3] < param_2[1])) ||
         (bVar2 = true, param_2[1] < pfVar3[1])) {
        bVar2 = false;
      }
      if (!bVar2) {
        return 0;
      }
      if ((param_3 & 1) == 0) {
        return 1;
      }
    }
    iVar5 = param_1[0x27];
    uVar6 = 0;
    if (*(int *)(iVar5 + 0x1c) != 0) {
      iVar7 = 0;
      iVar8 = 0;
      do {
        iVar5 = *(int *)(iVar5 + 0x18) + iVar8;
        if (((*(int *)(iVar5 + 0x3c) != 0x40000) && ((*(byte *)(iVar5 + 0x48) & 1) != 0)) &&
           ((piVar1 = *(int **)(param_1[0x29] + iVar7), piVar1 != (int *)0x0 &&
            (((param_3 & 2) == 0 || (cVar4 = (**(code **)(*piVar1 + 8))(piVar1), cVar4 != '\0'))))))
        {
          iStack_80 = piVar1[0x11];
          iStack_7c = piVar1[0x12];
          iStack_78 = piVar1[0x13];
          iStack_74 = piVar1[0x14];
          iStack_70 = piVar1[0x15];
          iStack_6c = piVar1[0x16];
          fn_8268D008(&iStack_80,auStack_a0,param_2);
          cVar4 = (**(code **)(*piVar1 + 0x30))(piVar1,auStack_a0,param_3);
          if (cVar4 != '\0') {
            return 1;
          }
        }
        iVar5 = param_1[0x27];
        uVar6 = uVar6 + 1;
        iVar8 = iVar8 + 0x4c;
        iVar7 = iVar7 + 4;
      } while (uVar6 < *(uint *)(iVar5 + 0x1c));
    }
  }
  return 0;
}

