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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82D04B20();


void fn_82D05070(int *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar2 = (ulonglong)(uint)param_1[1] - 1;
  lVar4 = 0x7fffffff;
  if ((int)lVar2 < 0x7fffffff) {
    lVar4 = lVar2;
  }
  lVar4 = lVar4 + -1;
  if (-1 < lVar4) {
    do {
      if (*(char *)(*param_1 + (int)lVar4) == '/') goto LAB_82d050c4;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  lVar4 = -1;
LAB_82d050c4:
  lVar3 = 0x7fffffff;
  if ((int)lVar2 < 0x7fffffff) {
    lVar3 = lVar2;
  }
  lVar3 = lVar3 + -1;
  if (-1 < lVar3) {
    do {
      if (*(char *)(*param_1 + (int)lVar3) == '\\') goto LAB_82d050f8;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  lVar3 = -1;
LAB_82d050f8:
  if ((int)lVar3 <= (int)lVar4) {
    lVar3 = lVar4;
  }
  if ((int)lVar3 < 0) {
    fn_82D04B20(param_1);
  }
  else {
    iVar1 = fn_82CE5410();
    iVar5 = (int)(lVar3 + 1);
    if ((int)(param_1[2] & 0x3fffffffU) < iVar5) {
      lVar4 = ((ulonglong)(uint)param_1[2] & 0x3fffffff) << 1;
      if ((int)lVar4 <= iVar5) {
        lVar4 = lVar3 + 1;
      }
      fn_82CE6310(*(undefined4 *)(iVar1 + 0xc),param_1,lVar4,1);
    }
    param_1[1] = iVar5;
    *(undefined1 *)(*param_1 + (int)lVar3) = 0;
  }
  return;
}

