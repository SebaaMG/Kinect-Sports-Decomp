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
extern int fn_82CFBE40();


undefined8 fn_82D04600(int *param_1,int param_2)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  char cVar4;
  char cVar5;
  
  iVar2 = fn_82CFBE40(param_2);
  if (param_1[1] + -1 < iVar2) {
LAB_82d04634:
    uVar1 = 0;
  }
  else {
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        cVar5 = *(char *)(*param_1 + (param_1[1] - iVar2) + -1 + iVar3);
        if ((cVar5 < 'A') || (cVar4 = cVar5 + ' ', 'Z' < cVar5)) {
          cVar4 = cVar5;
        }
        cVar5 = *(char *)(iVar3 + param_2);
        if (('@' < cVar5) && (cVar5 < '[')) {
          cVar5 = cVar5 + ' ';
        }
        if (cVar4 != cVar5) goto LAB_82d04634;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    uVar1 = 1;
  }
  return uVar1;
}

