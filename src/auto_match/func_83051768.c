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
extern int fn_82FA5358();
extern int fn_830514A8();
extern int fn_83055E98();
extern unsigned int lbl_821AAD20;


undefined8 fn_83051768(int param_1,float *param_2)

{
  char cVar1;
  ulonglong *puVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  longlong lVar11;
  float fVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  
  if (((*param_2 < lbl_821AAD20) || (cVar1 = *(char *)(param_2 + 4), cVar1 < '\0')) || ('d' < cVar1)
     ) {
    uVar5 = 0x1f;
  }
  else {
    *(char *)(param_1 + -8) = cVar1;
    if (((longlong)(ulonglong)(uint)param_2[2] <= (longlong)*(ulonglong *)(param_1 + -0x60)) ||
       (uVar8 = *(ulonglong *)(param_1 + -0x60) & 0xffffffff,
       (*(uint *)(param_1 + -4) & 0x4000000) == 0)) {
      uVar8 = (ulonglong)(uint)param_2[2];
    }
    if ((*(uint *)(param_1 + 0x18) == uVar8) && (*(float *)(param_1 + 0x14) == param_2[1])) {
      fVar12 = param_2[3];
      if (fVar12 == 0.0) {
        fVar12 = 1.4013e-45;
      }
      if ((*(float *)(param_1 + 0x10) != *param_2) || (*(float *)(param_1 + 0x1c) != fVar12)) {
        RtlEnterCriticalSection(param_1 + -0x40);
        *(float *)(param_1 + 0x1c) = fVar12;
        *(float *)(param_1 + 0x10) = *param_2;
        fn_830514A8(param_1 + -0x78);
        RtlLeaveCriticalSection(param_1 + -0x40);
        return 1;
      }
    }
    else {
      RtlEnterCriticalSection(param_1 + -0x40);
      *(float *)(param_1 + 0x10) = *param_2;
      fVar12 = param_2[3];
      if (fVar12 == 0.0) {
        fVar12 = 1.4013e-45;
      }
      *(float *)(param_1 + 0x1c) = fVar12;
      if ((((uVar8 != 0) ||
           (uVar10 = (ulonglong)*(uint *)(param_1 + 0x18), (ulonglong)*(uint *)(param_1 + 0x18) == 0
           )) && ((uVar6 = (ulonglong)*(uint *)(param_1 + 0x18), uVar6 != 0 ||
                  (uVar10 = uVar8, uVar8 == 0)))) && (uVar10 = uVar6, uVar8 <= uVar6)) {
        uVar10 = uVar8;
      }
      piVar9 = (int *)(param_1 + -0x78);
      puVar13 = (ulonglong *)0x0;
      puVar14 = *(ulonglong **)(param_1 + 0x24);
      uVar7 = 0;
      uVar10 = ((longlong)*(int *)(param_1 + -0xc) * (longlong)*(int *)(param_1 + -0x58) &
               0xffffffffU) + uVar10;
      if (*(byte *)(param_1 + 0x30) != 0) {
        do {
          puVar13 = puVar14;
          uVar7 = uVar7 + 1;
          puVar14 = *(ulonglong **)(puVar13 + 2);
        } while (uVar7 < *(byte *)(param_1 + 0x30));
      }
      bVar4 = false;
      do {
        puVar2 = puVar14;
        puVar14 = puVar2;
        if ((puVar2 == (ulonglong *)0x0) || (uVar10 <= *puVar2)) goto LAB_8305194c;
        puVar14 = *(ulonglong **)(puVar2 + 2);
        puVar13 = puVar2;
      } while ((ulonglong)*(uint *)((int)puVar2 + 0xc) + *puVar2 < uVar10);
      bVar4 = true;
LAB_8305194c:
      lVar11 = (ulonglong)*(uint *)(param_1 + -0x18) + 0x10;
      RtlEnterCriticalSection(lVar11);
      while (puVar14 != (ulonglong *)0x0) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - *(int *)((int)puVar14 + 0xc);
        puVar2 = *(ulonglong **)(puVar14 + 2);
        if (puVar14 == *(ulonglong **)(param_1 + 0x24)) {
          *(ulonglong **)(param_1 + 0x24) = puVar2;
        }
        else {
          *(ulonglong **)(puVar13 + 2) = puVar2;
        }
        if (puVar14 == *(ulonglong **)(param_1 + 0x28)) {
          *(ulonglong **)(param_1 + 0x28) = puVar13;
        }
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
        fn_82FA5358(*(undefined4 *)(*(int *)(param_1 + -0x18) + 0x8c),*(undefined4 *)(puVar14 + 1))
        ;
        iVar3 = *(int *)(param_1 + -0x18);
        if (*(int *)(iVar3 + 0x78) == 0) {
          *(ulonglong **)(iVar3 + 0x78) = puVar14;
          *(int *)(puVar14 + 2) = 0;
          puVar14 = puVar2;
        }
        else {
          *(int *)(puVar14 + 2) = *(int *)(iVar3 + 0x78);
          *(ulonglong **)(iVar3 + 0x78) = puVar14;
          puVar14 = puVar2;
        }
      }
      if (bVar4) {
        uVar10 = 0;
      }
      (**(code **)(*piVar9 + 0x30))(piVar9,uVar10);
      fn_83055E98(*(undefined4 *)(param_1 + -0x18));
      RtlLeaveCriticalSection(lVar11);
      fVar12 = param_2[1];
      uVar7 = *(uint *)(param_1 + -0xc);
      *(int *)(param_1 + 0x18) = (int)uVar8;
      trapWord(6,(ulonglong)uVar7,0);
      *(uint *)(param_1 + 0x14) = ((uint)fVar12 / uVar7) * uVar7;
      fn_830514A8(piVar9);
      RtlLeaveCriticalSection(param_1 + -0x40);
    }
    uVar5 = 1;
  }
  return uVar5;
}

