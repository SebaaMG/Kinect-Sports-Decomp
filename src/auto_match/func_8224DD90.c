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
extern unsigned int *auStack_48;
extern int fn_8225C590();
extern int fn_8225DA18();
extern int fn_823AB158();
extern int fn_823AB478();
extern int fn_828EA5F8();
extern int fn_828EA610();
extern int fn_828EB5F8();
extern int fn_82A1BFB0();
extern int fn_82A44628();


longlong fn_8224DD90(int param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  int aiStack_50 [2];
  undefined8 auStack_48 [9];
  
  lVar7 = 0;
  uVar6 = 0;
  do {
    uVar2 = fn_8225C590();
    iVar3 = fn_8225DA18(uVar2,uVar6);
    if (((((iVar3 != 0) && (iVar4 = fn_823AB158(param_1), iVar3 != iVar4)) &&
         (iVar3 != *(int *)(param_1 + 0x864))) &&
        ((cVar5 = fn_828EA5F8(iVar3), cVar5 != '\0' && (cVar5 = fn_828EA610(iVar3), cVar5 == '\0')
         ))) && (*(char *)(iVar3 + 0xd8) == '\0')) {
      if (lVar7 == 0) {
        uVar2 = fn_823AB478(iVar3);
        iVar4 = fn_828EB5F8(uVar2,param_2);
        bVar1 = false;
        if (iVar4 != 2) goto LAB_8224de2c;
      }
      else {
LAB_8224de2c:
        bVar1 = true;
      }
      iVar4 = fn_82A44628(iVar3);
      if ((bVar1) || (bVar1 = false, iVar4 == 0)) {
        bVar1 = true;
      }
      auStack_48[0] = *param_2;
      aiStack_50[0] = 0;
      uVar2 = fn_823AB478(iVar3);
      fn_82A1BFB0(uVar2,auStack_48,1,aiStack_50,0);
      if ((bVar1) || ((iVar4 == 1 && (aiStack_50[0] == 0)))) {
        lVar7 = 1;
      }
      else {
        lVar7 = 0;
      }
    }
    uVar6 = uVar6 + 1;
    if (7 < (uVar6 & 0xffffffff)) {
      return lVar7;
    }
  } while( true );
}

