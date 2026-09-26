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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F68CC0();


void fn_82637168(int *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = (ulonglong)(uint)param_1[1] + 1;
  if ((ulonglong)(uint)param_1[2] < (uVar4 & 0xffffffff)) {
    uVar5 = ((ulonglong)(uint)param_1[2] & 0x7fffffff) << 1;
    if (uVar5 < (uVar4 & 0xffffffff)) {
      uVar5 = uVar4;
    }
    lVar3 = fn_8265C940((uVar5 & 0x1fffffff) << 3,0x64800000);
    if (lVar3 == 0) {
      *param_3 = -0x7ff8fff2;
      return;
    }
    param_1[2] = (int)uVar5;
    if (*param_1 != 0) {
      fn_82F68CC0(lVar3,*param_1,param_1[1] << 3);
      fn_8265C990(*param_1,0x24800000);
    }
    *param_1 = (int)lVar3;
  }
  if (-1 < *param_3) {
    iVar1 = param_1[1];
    iVar2 = *param_1;
    *(undefined4 *)(iVar1 * 8 + iVar2) = *param_2;
    *(undefined4 *)(iVar1 * 8 + iVar2 + 4) = param_2[1];
    param_1[1] = param_1[1] + 1;
  }
  return;
}

