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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_8278FED0();
extern unsigned int iStack00000024;
extern unsigned int stack0x00000024;


undefined8 * fn_82791138(undefined8 *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iStack00000024;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0xffffffff;
  }
  else {
    piVar2 = (int *)(param_2 + 0xc);
    iStack00000024 = param_3;
    iVar1 = fn_8278FED0(piVar2,0,*(int *)(param_2 + 0x10),&stack0x00000024,0xffffffff8278fb00);
    if (iVar1 == *(int *)(param_2 + 0x10)) {
      iVar1 = iVar1 + -1;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = param_3 - *(int *)(*(int *)(iVar1 * 4 + *piVar2) + 0x1c);
    }
    *param_1 = CONCAT44(piVar2,iVar1);
  }
  return param_1;
}

