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
extern int fn_82D41968();


void fn_82572970(int param_1,int param_2,undefined8 param_3,char *param_4,undefined4 *param_5)

{
  int iVar1;
  char cVar2;
  
  if (((int)param_3 != -1) && (param_2 != 0)) {
    if ((*(int *)(*(int *)(param_2 + 0x10) + 0xc) == 10) &&
       (iVar1 = *(int *)(*(int *)(param_2 + 0x10) + 0x34), *(int *)(iVar1 + 0xc) == 0xe)) {
      iVar1 = fn_82D41968(iVar1,param_3);
    }
    else {
      iVar1 = 0;
    }
    if (iVar1 != 0) {
      *param_4 = *(char *)(iVar1 + 4);
      *param_5 = *(undefined4 *)(iVar1 + 8);
      goto LAB_825729f0;
    }
  }
  *param_4 = '\0';
  *param_5 = 0;
LAB_825729f0:
  if (*param_4 == '\0') {
    if ((*(uint *)(param_1 + 0x108) & 0x10) == 0) {
      cVar2 = *(char *)(param_1 + 0x100);
    }
    else {
      cVar2 = '\0';
    }
    *param_4 = cVar2;
  }
  return;
}

