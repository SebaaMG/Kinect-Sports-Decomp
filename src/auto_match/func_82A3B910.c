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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))
extern unsigned int *auStack_40;
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern V16 vectorCompareEqualToUnsignedByte();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82A3B910(int param_1,ulonglong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined1 auStack_40 [64];
  
  if ((int)param_3 < 7) {
    *(int *)(param_1 + 0x2ec0) = *(int *)(param_1 + 0x2ec0) + (int)param_3;
  }
  else {
    lVar6 = param_2 + param_3;
    lVar7 = lVar6 + -6;
    fn_82F68CC0(auStack_40,lVar7,6);
    fn_82F691F0(lVar7,0xe8,6);
    param_3 = (ulonglong)*(uint *)(param_1 + 0x2ec0) + param_3;
    while( true ) {
      lVar7 = 0;
      uVar4 = param_2 + 0xf & 0xfffffff0;
      for (; ((param_2 & 0xffffffff) < uVar4 && (*(char *)param_2 != -0x18)); param_2 = param_2 + 1)
      {
        lVar7 = lVar7 + 1;
      }
      if ((param_2 & 0xffffffff) == uVar4) {
        do {{ V16 _vt0 = vectorCompareEqualToUnsignedByte(in_vs45,in_vs32); memcpy(in_vs45, &_vt0, 16); }
        } while( true );
      }
      cVar1 = *(char *)param_2;
      while (cVar1 != -0x18) {
        param_2 = param_2 + 1;
        lVar7 = lVar7 + 1;
        cVar1 = *(char *)param_2;
      }
      iVar2 = (int)param_2;
      puVar5 = (undefined1 *)(iVar2 + 1);
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x2ec0) + lVar7;
      *(int *)(param_1 + 0x2ec0) = (int)uVar4;
      if ((param_3 - 10U & 0xffffffff) <= (uVar4 & 0xffffffff)) break;
      uVar3 = (ulonglong)
              CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 4),*(undefined1 *)(iVar2 + 3)),
                                *(undefined1 *)(iVar2 + 2)),*puVar5);
      if (uVar3 < *(uint *)(param_1 + 0x2ebc)) {
        lVar7 = uVar3 - uVar4;
        *puVar5 = (char)lVar7;
LAB_82a3ba5c:
        *(char *)(iVar2 + 2) = (char)((ulonglong)lVar7 >> 8);
        *(char *)(iVar2 + 3) = (char)((ulonglong)lVar7 >> 0x10);
        *(char *)(iVar2 + 4) = (char)((ulonglong)lVar7 >> 0x18);
      }
      else if ((-uVar3 & 0xffffffff) <= (uVar4 & 0xffffffff)) {
        lVar7 = *(uint *)(param_1 + 0x2ebc) + uVar3;
        *puVar5 = (char)lVar7;
        goto LAB_82a3ba5c;
      }
      param_2 = param_2 + 5;
      *(int *)(param_1 + 0x2ec0) = (int)uVar4 + 5;
    }
    *(int *)(param_1 + 0x2ec0) = (int)param_3;
    fn_82F68CC0(lVar6 + -6,auStack_40,6);
  }
  return;
}

