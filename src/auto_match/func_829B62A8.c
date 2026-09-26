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


void fn_829B62A8(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar1 = param_2[2];
  iVar3 = param_2[4];
  iVar7 = 0;
  lVar5 = (longlong)param_2[6] * (longlong)iVar1;
  if (0 < iVar3) {
    do {
      iVar4 = iVar3 - iVar7;
      if (param_2[5] < iVar3 - iVar7) {
        iVar4 = param_2[5];
      }
      iVar3 = param_2[7] - (param_2[6] + iVar7);
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
      iVar3 = param_2[1] - (param_2[6] + iVar7);
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
      if (iVar4 < 1) {
        return;
      }
      lVar6 = (longlong)iVar4 * (longlong)iVar1;
      if (param_3 == 0) {
        pcVar2 = (code *)param_2[0xc];
      }
      else {
        pcVar2 = (code *)param_2[0xd];
      }
      (*pcVar2)(param_1,param_2 + 0xc,*(undefined4 *)(iVar7 * 4 + *param_2),lVar5,lVar6);
      lVar5 = lVar6 + lVar5;
      iVar3 = param_2[4];
      iVar7 = iVar7 + param_2[5];
    } while (iVar7 < iVar3);
  }
  return;
}

