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
extern int fn_82669AC8();
extern int fn_82F92208();
extern int fn_82F953A8();
extern int fn_82F953B8();


int * fn_82669B88(int *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piStack00000014;
  
  piStack00000014 = param_1;
  pcVar1 = (char *)fn_82F953A8(*param_1);
  if (*pcVar1 == '\0') {
    puVar2 = (undefined4 *)fn_82F953B8(*piStack00000014);
    pcVar1 = (char *)fn_82F953A8(*puVar2);
    if (*pcVar1 == '\0') {
      puVar2 = (undefined4 *)fn_82F953B8(*piStack00000014);
      iVar3 = fn_82669AC8(*puVar2);
      *piStack00000014 = iVar3;
    }
    else {
      while( true ) {
        piVar4 = (int *)fn_82F92208(*piStack00000014);
        iVar3 = *piVar4;
        pcVar1 = (char *)fn_82F953A8(iVar3);
        if ((*pcVar1 != '\0') || (piVar4 = (int *)fn_82F953B8(iVar3), *piStack00000014 != *piVar4))
        break;
        *piStack00000014 = iVar3;
      }
      *piStack00000014 = iVar3;
    }
  }
  return piStack00000014;
}

