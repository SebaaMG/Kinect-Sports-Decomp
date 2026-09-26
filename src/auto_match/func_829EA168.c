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
extern int fn_82A28568();
extern int fn_82A28E60();
extern int fn_82F63CA0();
extern unsigned int lbl_832179FC;


undefined8 fn_829EA168(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar5 = ((param_1[3] - param_1[1] >> 1) + param_2) * 2;
  uVar3 = fn_82A28568(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0,iVar5);
  if (uVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar6 = uVar3;
    if ((uVar3 & 3) != 0) {
      uVar6 = (uVar3 - (uVar3 & 3)) + 4;
    }
    fn_82F63CA0(uVar6,param_1[1],(param_1[2] - param_1[1] >> 1) << 1);
    if (*param_1 != 0) {
      fn_82A28E60(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0);
    }
    iVar2 = (int)uVar6;
    iVar1 = param_1[1];
    uVar4 = 1;
    *param_1 = (int)uVar3;
    param_1[3] = iVar5 + iVar2;
    param_1[1] = iVar2;
    param_1[2] = (param_1[2] - iVar1 >> 1) * 2 + iVar2;
  }
  return uVar4;
}

