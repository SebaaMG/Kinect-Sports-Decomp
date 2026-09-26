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
extern int fn_82F65AC0();


undefined8 fn_82935C18(undefined4 *param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar4;
  undefined8 uVar3;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  
  pcVar5 = param_2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  do {
    pcVar2 = (char *)param_1[1];
    pcVar6 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      uVar7 = 0xffffffff;
      uVar3 = 0xffffffff80004005;
LAB_82935ca8:
      *param_3 = uVar7;
      return uVar3;
    }
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if ((pcVar6 + (-1 - (int)pcVar2) == pcVar5 + (-1 - (int)param_2)) &&
       (iVar4 = fn_82F65AC0(param_2), iVar4 == 0)) {
      uVar7 = *param_1;
      uVar3 = 0;
      goto LAB_82935ca8;
    }
    param_1 = param_1 + 2;
  } while( true );
}

