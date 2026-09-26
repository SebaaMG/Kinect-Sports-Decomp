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
extern unsigned int *auStack_68;
extern int fn_8265C9E0();
extern int fn_8288B2D8();
extern int fn_8288C1B8();
extern int fn_8288CBD8();
extern int fn_8288CD40();
extern int fn_82897B50();
extern int fn_82897BA8();
extern int fn_828A12E8();
extern int fn_828B55B0();
extern int fn_828B55F8();
extern int fn_828C7F70();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_8288F730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  int *piVar5;
  char cVar8;
  undefined8 uVar3;
  int iVar6;
  int iVar7;
  ulonglong uVar4;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [104];
  
  uStack_6c = fn_828B55F8(param_2);
  lVar2 = fn_828A12E8(param_1);
  piVar5 = (int *)fn_8288CD40(auStack_68,lVar2 + 0x94,&uStack_6c);
  iVar1 = *(int *)(*piVar5 + 0x40);
  uVar9 = (ulonglong)*(uint *)(iVar1 + 8);
  fn_8288C1B8(param_5,uVar9);
  uVar10 = 0;
  if (uVar9 != 0) {
    do {
      uStack_70 = 0;
      fn_8288B2D8(iVar1,uVar10);
      cVar8 = fn_82897BA8();
      if (cVar8 == '\0') {
        uStack_6c = 0;
        uVar3 = fn_828B55F8(param_2);
        fn_82897B50(param_1,uVar3,uVar10,1,&uStack_6c);
        iVar6 = fn_828E9DA8(param_4);
        iVar7 = fn_828E9D90(param_4);
        if ((0 < iVar6 - iVar7) && (iVar6 = fn_828E9FF8(param_4,1), iVar6 != 0)) {
          uVar4 = fn_8265C9E0(0x24);
          if ((uVar4 & 0xffffffff) == 0) {
            uStack_70 = 0;
          }
          else {
            uStack_70 = fn_828C7F70(uVar4,param_1,param_3,param_4,uStack_6c);
          }
        }
      }
      fn_8288CBD8(param_5,&uStack_70);
      uVar10 = uVar10 + 1;
    } while ((uVar10 & 0xffffffff) < uVar9);
  }
  fn_828B55B0(param_2);
  return;
}

