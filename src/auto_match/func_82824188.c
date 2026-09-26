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
extern int fn_82825290();
extern int fn_82F63CA0();
extern int fn_82F68CC0();


void fn_82824188(int param_1,undefined8 param_2,int param_3,undefined8 param_4,int *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = fn_82825290(param_5);
  *param_5 = iVar2;
  iVar2 = fn_82825290(param_5 + 1);
  param_5[1] = iVar2;
  iVar3 = fn_82825290(param_5 + 2);
  iVar2 = *param_5;
  param_5[2] = iVar3;
  iVar7 = 0;
  iVar8 = 0;
  iVar6 = 0;
  iVar3 = 0;
  pbVar5 = (byte *)(param_5 + 3);
  if (0 < iVar2) {
    do {
      bVar1 = *pbVar5;
      iVar4 = fn_82825290(pbVar5 + 1);
      if (bVar1 == 0) {
        fn_82F63CA0(iVar8 + param_3,iVar7 + param_1,iVar4);
        iVar8 = iVar4 + iVar8;
LAB_82824250:
        iVar7 = iVar4 + iVar7;
      }
      else {
        if (bVar1 == 1) {
          iVar7 = iVar4 + iVar7;
        }
        else if (2 < bVar1) {
          if (bVar1 == 3) goto LAB_82824250;
          goto LAB_82824254;
        }
        fn_82F68CC0(iVar8 + param_3,(byte *)((int)(param_5 + 3) + iVar6 + iVar2 * 5),iVar4);
        iVar8 = iVar4 + iVar8;
        iVar6 = iVar4 + iVar6;
      }
LAB_82824254:
      iVar3 = iVar3 + 1;
      pbVar5 = pbVar5 + 5;
    } while (iVar3 < *param_5);
  }
  return;
}

