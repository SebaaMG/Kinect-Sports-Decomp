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
extern int fn_829C90F0();
extern int fn_829C9100();


byte fn_82F5E1B8(undefined8 param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  
  if (*param_2 == 0) {
    iVar2 = fn_829C9100((double)(float)param_2[1],0,0);
    iVar3 = fn_829C9100((double)(float)param_2[2],0,6);
    iVar4 = fn_829C9100((double)(float)param_2[3],0,7);
    fVar1 = (float)param_2[4];
    uVar5 = 8;
    bVar6 = (iVar3 == 0 && iVar2 == 0) && iVar4 == 0;
  }
  else {
    if (*param_2 != 1) {
      return 1;
    }
    iVar2 = fn_829C90F0(0,2,param_2[5]);
    fVar1 = (float)param_2[6];
    uVar5 = 5;
    bVar6 = iVar2 == 0;
  }
  iVar2 = fn_829C9100((double)fVar1,0,uVar5);
  return iVar2 == 0 & bVar6;
}

