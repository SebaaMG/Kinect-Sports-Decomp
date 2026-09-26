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


int fn_82D04258(undefined4 *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  
  pcVar1 = (char *)*param_1;
  iVar2 = 0;
  if (*pcVar1 != '\0') {
    do {
      iVar3 = 0;
      cVar4 = *param_2;
      while (cVar4 != '\0') {
        cVar5 = pcVar1[iVar3 + iVar2];
        if (('@' < cVar5) && (cVar5 < '[')) {
          cVar5 = cVar5 + ' ';
        }
        if (('@' < cVar4) && (cVar4 < '[')) {
          cVar4 = cVar4 + ' ';
        }
        if (cVar5 != cVar4) break;
        iVar3 = iVar3 + 1;
        cVar4 = param_2[iVar3];
      }
      if (param_2[iVar3] == '\0') {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (pcVar1[iVar2] != '\0');
  }
  return -1;
}

