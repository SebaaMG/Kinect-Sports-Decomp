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


ulonglong fn_823E8AC0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 *param_4,
                       ulonglong param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  ulonglong uVar4;
  int iVar6;
  ulonglong uVar5;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint auStack_120 [8];
  undefined4 auStack_100 [8];
  undefined1 auStack_e0 [224];
  
  uVar4 = fn_822B4148();
  if ((uVar4 & 0xffffffff) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = fn_8265BF48(uVar4,0);
  }
  uVar4 = 0;
  uVar8 = 0;
  if ((param_5 & 0xffffffff) != 0) {
    puVar9 = auStack_e0;
    iVar10 = 0;
    lVar11 = param_3;
    do {
      uVar5 = fn_822B4148(param_1,param_2);
      if (((uVar5 & 0xffffffff) != 0) && (iVar7 = fn_8265BF48(uVar5,0), iVar7 == iVar6)) {
        uVar1 = *param_4;
        puVar2 = (undefined4 *)((int)in_r0 + (int)lVar11 & 0xfffffff0);
        uVar12 = puVar2[1];
        uVar13 = puVar2[2];
        uVar14 = puVar2[3];
        puVar3 = (undefined4 *)((uint)(puVar9 + (int)in_r0) & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar12;
        puVar3[2] = uVar13;
        puVar3[3] = uVar14;
        uVar4 = uVar4 + 1;
        puVar9 = puVar9 + 0x10;
        *(undefined4 *)((int)auStack_100 + iVar10) = uVar1;
        *(uint *)((int)auStack_120 + iVar10) = uVar8;
        iVar10 = iVar10 + 4;
      }
      uVar8 = uVar8 + 1;
      lVar11 = lVar11 + 0x10;
      param_4 = param_4 + 1;
    } while ((ulonglong)uVar8 < (param_5 & 0xffffffff));
    if ((uVar4 & 0xffffffff) != 0) {
      iVar6 = fn_823DC1D0(auStack_e0,uVar4);
      return (ulonglong)auStack_120[iVar6];
    }
  }
  uVar4 = fn_823DC1D0(param_3,param_5);
  return uVar4;
}

