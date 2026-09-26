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
extern unsigned int *auStack_6c;
extern int fn_82F2A8A8();
extern int fn_82F2A9C8();
extern int fn_82F2AC28();
extern unsigned int uStack_70;


void fn_82F112E0(longlong param_1,short *param_2,int param_3,undefined8 param_4,longlong param_5,
                  longlong param_6,int *param_7,int *param_8)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  undefined4 uStack_70;
  undefined4 auStack_6c [27];
  
  iVar8 = 0;
  iVar6 = 0;
  auStack_6c[0] = 0;
  uStack_70 = 0;
  iVar3 = fn_82F2AC28(param_1,*param_2 - param_5,0xffffffff831a9cd0,0x77,param_4);
  iVar4 = fn_82F2AC28(param_1,*param_2 - param_6,0xffffffff831a9cd0,0x77,param_4);
  param_3 = param_3 * 2;
  if (2 < param_3) {
    iVar6 = 2;
    if (2 < param_3 + -2) {
      uVar2 = param_3 - 5U >> 1;
      iVar9 = uVar2 + 1;
      iVar6 = (uVar2 + 2) * 2;
      psVar7 = param_2;
      iVar8 = 0;
      do {
        psVar1 = psVar7 + 3;
        psVar7 = psVar7 + 2;
        iVar5 = fn_82F2A8A8(param_1,*psVar1,*psVar7,param_1 + 0x4c54,auStack_6c,&uStack_70);
        iVar9 = iVar9 + -1;
        iVar8 = iVar5 + iVar8;
      } while (iVar9 != 0);
    }
    iVar6 = fn_82F2A9C8(param_1,(param_2 + iVar6)[1],param_2[iVar6],param_1 + 0x4cd4,
                              auStack_6c,&uStack_70);
    iVar6 = iVar6 + iVar8;
  }
  *param_7 = iVar3 + iVar6;
  *param_8 = iVar4 + iVar6;
  return;
}

