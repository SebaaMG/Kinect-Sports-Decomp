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
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_40;
extern unsigned int fStack_3c;
extern unsigned int lbl_82193B38;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


double fn_824AAC40(int param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 in_r0;
  ulonglong uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uStack_50;
  uint uStack_4c;
  undefined8 uStack_48;
  undefined1 auStack_40 [4];
  float fStack_3c;
  
  (**(code **)*param_2)(param_2,&uStack_50,&uStack_4c);
  iVar1 = *(int *)(param_1 + 0x3c);
  dVar7 = (double)lbl_821CC160;
  uVar5 = (ulonglong)uStack_4c;
  dVar8 = (double)((float)uStack_50 - ((float)uVar5 - lbl_82193B38));
  fVar2 = (float)uStack_50;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((dVar8 < dVar7) << 2) | (uint)(NAN(dVar8) || NAN(dVar7)) << 2)) < 0.0)
  {
    fVar2 = (float)uVar5 - lbl_82193B38;
  }
  uStack_48 = (ulonglong)fVar2;
  uVar6 = uStack_48 & 0xffffffff;
  uStack_50 = (((U64)(uStack_48) >> 32) & 0xFFFFFFFF);
  if (uVar6 <= uVar5) {
    do {
      (**(code **)(*param_2 + 4))(param_2,uVar6,&uStack_48);
      uVar5 = (ulonglong)uStack_4c;
      uVar6 = uVar6 + 1;
      puVar3 = (undefined4 *)
               (*(int *)((((U64)(uStack_48) >> 0) & 0xFFFFFFFF) + 0x40) + ((-(uint)(iVar1 != 0) & 4) + 6) * 0x40 + 0x10 &
               0xfffffff0);
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      puVar4 = (undefined4 *)((uint)(auStack_40 + (int)in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar9;
      puVar4[2] = uVar10;
      puVar4[3] = uVar11;
      dVar7 = (double)(float)((double)fStack_3c + dVar7);
    } while ((uVar6 & 0xffffffff) <= uVar5);
    uVar6 = (ulonglong)uStack_50;
  }
  return (double)(float)(dVar7 / (double)((uVar5 - uVar6) + 1 & 0xffffffff));
}

