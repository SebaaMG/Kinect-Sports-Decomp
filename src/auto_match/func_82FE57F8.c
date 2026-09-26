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
extern int fn_82F691F0();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82FE57F8(int *param_1,ulonglong param_2,int param_3,longlong param_4,uint param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_r0;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 in_vs32 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  fn_82F691F0(param_4,0,(param_2 & 0x3fffffff) << 2);
  uVar5 = 1;
  iVar6 = 0;
  do {
    if (param_5 == 0) {
      return;
    }
    if (((uVar5 & param_5) != 0) || (param_5 == 8)) {
      if (param_5 == 8) {
        param_5 = 0;
      }
      else if ((uVar5 & 8) != 0) goto LAB_82fe5998;
      uVar1 = *(ushort *)(param_1 + 3);
      iVar2 = *param_1;
      altv300_21(in_vs32,in_vs41);
      uVar7 = param_2;
      lVar8 = param_4;
      do {
        uVar7 = uVar7 - 4;
        puVar3 = (undefined4 *)
                 ((((uint)uVar1 * iVar6 + param_3) * 4 - (int)param_4) + iVar2 + (int)lVar8 &
                 0xfffffff0);
        uVar9 = puVar3[1];
        uVar10 = puVar3[2];
        uVar11 = puVar3[3];{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs44,in_vs32,in_vs45); memcpy(in_vs32, &_vt0, 16); }
        puVar4 = (undefined4 *)(in_r0 + (int)lVar8 & 0xfffffff0);
        *puVar4 = *puVar3;
        puVar4[1] = uVar9;
        puVar4[2] = uVar10;
        puVar4[3] = uVar11;
        lVar8 = lVar8 + 0x10;
      } while (uVar7 != 0);
      param_5 = param_5 & ~uVar5;
      iVar6 = iVar6 + 1;
    }
LAB_82fe5998:
    uVar5 = uVar5 << 1;
  } while( true );
}

