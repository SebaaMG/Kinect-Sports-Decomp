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
extern int fn_82230300();


/* WARNING: Removing unreachable block (ram,0x824cab10) */
/* WARNING: Removing unreachable block (ram,0x824cab18) */

void fn_824CAAE8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if (iVar1 != param_1[1]) {
    iVar2 = param_1[1];
    for (iVar3 = iVar1; iVar3 != iVar2; iVar3 = iVar3 + 0x30) {
      fn_82230300(iVar3,1,0);
    }
    param_1[1] = iVar1;
  }
  return;
}

