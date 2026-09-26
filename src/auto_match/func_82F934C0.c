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
extern int fn_82F919B8();
extern int fn_82F92208();
extern int fn_82F93688();
extern int fn_82F953B8();


void fn_82F934C0(int *param_1)

{
  undefined8 in_r0;
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piStack00000014;
  
  if (*param_1 == 0) {
    trapWord(0x1f,in_r0,0x16);
  }
  piStack00000014 = param_1;
  pcVar1 = (char *)fn_82F919B8(param_1[1]);
  if (*pcVar1 == '\0') {
    puVar2 = (undefined4 *)fn_82F953B8(piStack00000014[1]);
    pcVar1 = (char *)fn_82F919B8(*puVar2);
    if (*pcVar1 == '\0') {
      puVar2 = (undefined4 *)fn_82F953B8(piStack00000014[1]);
      iVar3 = fn_82F93688(*puVar2);
      piStack00000014[1] = iVar3;
    }
    else {
      while( true ) {
        piVar4 = (int *)fn_82F92208(piStack00000014[1]);
        iVar3 = *piVar4;
        pcVar1 = (char *)fn_82F919B8(iVar3);
        piVar4 = piStack00000014;
        if ((*pcVar1 != '\0') || (piVar5 = (int *)fn_82F953B8(iVar3), piVar4[1] != *piVar5)) break;
        piStack00000014[1] = iVar3;
      }
      piStack00000014[1] = iVar3;
    }
  }
  else {
    trapWord(0x1f,in_r0,0x16);
  }
  return;
}

