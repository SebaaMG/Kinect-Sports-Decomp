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
extern unsigned int *auStack_4c;
extern int fn_82F2A8A8();
extern int fn_82F2A9C8();
extern int fn_82F2AC28();
extern unsigned int uStack_50;


longlong fn_82F111E8(longlong param_1,short *param_2,int param_3,undefined8 param_4,
                      longlong param_5)

{
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  undefined4 uStack_50;
  undefined4 auStack_4c [19];
  
  auStack_4c[0] = 0;
  uStack_50 = 0;
  lVar3 = fn_82F2AC28(param_1,*param_2 - param_5,0xffffffff831a9cd0,0x77,param_4);
  param_3 = param_3 * 2;
  if (2 < param_3) {
    iVar5 = 2;
    if (2 < param_3 + -2) {
      uVar2 = param_3 - 5U >> 1;
      iVar7 = uVar2 + 1;
      iVar5 = (uVar2 + 2) * 2;
      psVar6 = param_2;
      do {
        psVar1 = psVar6 + 3;
        psVar6 = psVar6 + 2;
        lVar4 = fn_82F2A8A8(param_1,*psVar1,*psVar6,param_1 + 0x4c54,auStack_4c,&uStack_50);
        iVar7 = iVar7 + -1;
        lVar3 = lVar4 + lVar3;
      } while (iVar7 != 0);
    }
    lVar4 = fn_82F2A9C8(param_1,(param_2 + iVar5)[1],param_2[iVar5],param_1 + 0x4cd4,
                              auStack_4c,&uStack_50);
    lVar3 = lVar4 + lVar3;
  }
  return lVar3;
}

