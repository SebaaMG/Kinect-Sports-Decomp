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
extern int fn_82936448();


undefined8 fn_82936530(ulonglong param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  int iVar4;
  undefined8 uVar3;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  
  if ((param_1 & 0xffffffff) == 0) {
LAB_829365f8:
    uVar3 = 0xffffffff80004005;
  }
  else {
    iVar4 = fn_82936448(param_1,param_2,0,1);
    if (iVar4 < 0) {
      if (*(int *)param_1 != 9) goto LAB_829365f8;
      pcVar8 = (char *)((int *)param_1)[2];
      pcVar5 = "true";
      pcVar6 = pcVar8;
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar7 = 1;
      }
      else {
        pcVar6 = "false";
        do {
          cVar1 = *pcVar8;
          cVar2 = *pcVar6;
          if (cVar1 == '\0') break;
          pcVar8 = pcVar8 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 != cVar2) goto LAB_829365f8;
        uVar7 = 0;
      }
      *(undefined4 *)param_2 = uVar7;
    }
    uVar3 = 0;
  }
  return uVar3;
}

