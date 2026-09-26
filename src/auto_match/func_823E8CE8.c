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
extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_e0;
extern int fn_822B4148();
extern int fn_823DC1D0();
extern int fn_8265BF48();
extern int fn_82F68B5C();


ulonglong fn_823E8CE8(int param_1,int param_2,longlong param_3,longlong param_4,ulonglong param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar7;
  ulonglong uVar6;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint auStack_120 [8];
  undefined4 auStack_100 [8];
  undefined1 auStack_e0 [224];
  
  uVar9 = (ulonglong)*(uint *)(param_2 + 0x2c);
  uVar4 = fn_82F68B5C(*(undefined4 *)(param_1 + 4),uVar9);
  uVar5 = fn_822B4148();
  if ((uVar5 & 0xffffffff) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = fn_8265BF48(uVar5,0);
  }
  uVar5 = 0;
  uVar10 = 0;
  if ((param_5 & 0xffffffff) != 0) {
    puVar11 = auStack_e0;
    iVar12 = 0;
    lVar13 = param_3;
    do {
      uVar6 = fn_822B4148(uVar4,uVar9);
      if (((uVar6 & 0xffffffff) != 0) && (iVar8 = fn_8265BF48(uVar6,0), iVar8 == iVar7)) {
        uVar1 = *(undefined4 *)param_4;
        puVar2 = (undefined4 *)((int)in_r0 + (int)lVar13 & 0xfffffff0);
        uVar14 = puVar2[1];
        uVar15 = puVar2[2];
        uVar16 = puVar2[3];
        puVar3 = (undefined4 *)((uint)(puVar11 + (int)in_r0) & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar14;
        puVar3[2] = uVar15;
        puVar3[3] = uVar16;
        uVar5 = uVar5 + 1;
        puVar11 = puVar11 + 0x10;
        *(undefined4 *)((int)auStack_100 + iVar12) = uVar1;
        *(uint *)((int)auStack_120 + iVar12) = uVar10;
        iVar12 = iVar12 + 4;
      }
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + 0x10;
      param_4 = param_4 + 4;
    } while ((ulonglong)uVar10 < (param_5 & 0xffffffff));
    if ((uVar5 & 0xffffffff) != 0) {
      iVar7 = fn_823DC1D0(auStack_e0,uVar5);
      return (ulonglong)auStack_120[iVar7];
    }
  }
  uVar5 = fn_823DC1D0(param_3,param_5);
  return uVar5;
}

